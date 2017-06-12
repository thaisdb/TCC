#coding=utf-8
from __future__ import with_statement
from socket import *
import sys
import subprocess
import binascii
import netifaces as ni
import os
from utils import Common
import json
from threading import Thread
from layer import Layer
from utils import PDUPrinter
from PyQt4 import QtCore
from PyCRC.CRC32 import CRC32
import netifaces
#TODO receive server ip from the caller

class PhysicalLayer(QtCore.QThread):

    BYTE_SIZE = 8

    def createFrame_BinaryFile(self, data, fileName):
        self.msg.emit('Creating binary file')
        #TODO fix size
        self.tamanho = sys.getsizeof(data)
        package = {'preambulo'  : 7*'(10101010)' + '10101011',
                    'srcMAC'    : self.myMAC,
                    'dstMAC'    : self.dstMAC,
                    'tamanho'   : self.tamanho,
                    'data'      : data}
        pack = json.dumps(package)
        package['FCS'] = bin(CRC32().calculate(pack))[2:]
        pack = json.dumps(package)
        self.html.emit(PDUPrinter.Frame(package))
        with open(fileName, 'w') as binaryFile:
            for x in pack:
                binaryFile.write('{0:08b}'.format(ord(x)))


    def receiveFile(self, socket, fileName):
        with open (fileName, "w") as self.rFile:
            data, success = Layer.receive(socket)
            self.rFile.write(data)
        self.msg.emit('Received frame')
        return success

    def translateReceivedFile (self, fileName):
        #translate received binaryFile to string pack
        self.msg.emit('Translating received binary file.')
        newFile = open(fileName + '_translated.txt', 'wb')
        with open(fileName, "r") as binFile:
            buff = binFile.read(self.BYTE_SIZE)
            data = ''
            while buff:
                x = chr(int(buff,2))
                newFile.write(x)
                buff = binFile.read(self.BYTE_SIZE)
                data += x
        return data

    def interpretPackage(self, fileName):
        self.msg.emit('Interpreting:')
        received = json.loads(self.translateReceivedFile(fileName))
        self.html.emit(PDUPrinter.Frame(received, 'red'))
        return received['data']


    def getDstMAC (self, ip):
        self.msg.emit('Getting MAC of IP = ' + str(ip))
        self.dstIP = ip
        self.dstMAC = self.getServerMAC(self.dstIP)
        self.msg.emit("Destiny IP: " + str(self.dstIP))
        self.msg.emit("Destiny MAC: " + str(self.dstMAC) + '\n')


    def getMyIPMAC(self):
        self.msg.emit('Getting my IP and MAC...')
        interface  = Common.myIP()
        self.myIP = interface[1]
        self.myMAC = self.getMyMAC(interface[0])
        self.msg.emit("My IP: " + str(self.myIP['addr']))
        self.msg.emit("My MAC: " + str(self.myMAC))


    @staticmethod
    def getMyMAC(interface):
        addr = netifaces.ifaddresses(interface)
        print 'getting MAC'
        return addr[netifaces.AF_LINK][0]['addr']

    @staticmethod
    def getServerMAC(ip):
        return os.popen('arp -a ' + str(ip) + ' | awk \'{print $4}\'').read()[:-1]

class PhysicalClient(PhysicalLayer):
    fileType = 0 #0 to text files and 1 to image files
    mtuReceived = False

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent = None ):
        super(PhysicalClient, self).__init__()

    def run(self):
        self.getMyIPMAC()
        self.physicalClientSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.physicalClientSocket.bind(Layer.PhysicalClient)
        self.physicalClientSocket.listen(1)
        while True:
            self.msg.emit('Waiting datagram from Network layer')
            self.package, success = Layer.receive(self.physicalClientSocket)
            self.msg.emit('Received package from Network layer.')
            self.getDstMAC(json.loads(self.package)['dstIP'])
            self.package = json.loads(self.package)['datagram']
            if success:
                if not self.mtuReceived:
                    self.connect()
                self.createFrame_BinaryFile(self.package, 'binaryRequestClient.txt')
                sent = Layer.send(Layer.PhysicalServer, 'binaryRequestClient.txt', self.myMTU)
                self.msg.emit('Sent binary file to Physical server = ' + str(sent))
                if self.receiveFile(self.physicalClientSocket, 'binaryAnswer.txt'):
                    self.msg.emit('Received binary file from server')
                    self.answer = self.interpretPackage('binaryAnswer.txt')
                    sent = Layer.send(Layer.NetworkClient, self.answer)


    def connect(self):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalSocket.connect(Layer.PhysicalServer)
        self.msg.emit('Establishing MTU')
        self.msg.emit('Sending my MTU = ' + str(self.myMTU))
        self.physicalSocket.send(str(self.myMTU).zfill(4))
        self.mtu = int(self.physicalSocket.recv(4))
        self.msg.emit('The smaller MTU, and frame size, is = ' + str(self.mtu) + '.')
        self.mtuReceived = True
        self.msg.emit('Frame size = ' + str(self.mtu))
        self.physicalSocket.close()



    def setMTU(self, size):
        self.myMTU = size
        self.msg.emit('Client MTU = ' + str(size) + '.')

    def end(self):
        try:
            self.physicalClientSocket.close()
        except:
            self.msg.emit('Physical client socket already closed.')

