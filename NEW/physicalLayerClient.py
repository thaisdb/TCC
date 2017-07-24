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

#bib for conlision simulation
import random
import time
#TODO receive server ip from the caller

class PhysicalLayer(QtCore.QThread):

    BYTE_SIZE = 8

    def createFrame_BinaryFile(self, data, fileName, color):
        self.msg.emit('Creating binary file')
        #TODO fix size
        self.tamanho = sys.getsizeof(data)
        package = {'preambulo'  : '7*(10101010)' + '10101011',
                    'srcMAC'    : self.myMAC,
                    'dstMAC'    : self.dstMAC,
                    'tamanho'   : self.tamanho,
                    'data'      : data}
        pack = json.dumps(package)
        package['FCS'] = bin(CRC32().calculate(pack))[2:]
        pack = json.dumps(package)
        self.html.emit(PDUPrinter.Frame(package, color))
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

    def interpretPackage(self, fileName, color):
        self.msg.emit('Interpreting:')
        received = json.loads(self.translateReceivedFile(fileName))
        self.html.emit(PDUPrinter.Frame(received, color))
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

    def connectAsClient(self, destiny):
	print 'connecting as client on ' + str(destiny)
	try:
		self.physicalSocket = socket(AF_INET, SOCK_STREAM)
		self.physicalSocket.connect(destiny)
		self.msg.emit('Establishing MTU')
		self.msg.emit('Sending my MTU = ' + str(self.myMTU))
		self.physicalSocket.send(str(self.myMTU).zfill(4))
		self.mtu = int(self.physicalSocket.recv(4))
		self.msg.emit('The smaller MTU, and frame size, is = ' + str(self.mtu) + '.')
		self.mtuReceived = True
		self.physicalSocket.close()
	except Exception as e:
		print "EXCEPTION = " + str(e)

    @staticmethod
    def getMyMAC(interface):
        addr = netifaces.ifaddresses(interface)
        return addr[netifaces.AF_LINK][0]['addr']

    @staticmethod
    def getServerMAC(ip):
        return os.popen('arp -a ' + str(ip) + ' | awk \'{print $4}\'').read()[:-1]


    def connectAsServer(self):
        self.msg.emit('Waiting client MTU...')
        physicalReceiver, clientaddr = self.physicalRouterSocket.accept()
        Layer.PhysicalClient = clientaddr
        clientMTU = int(physicalReceiver.recv(4))
        self.myMTU = self.BUFFER_SIZE
        self.msg.emit('MTU received = ' + str(clientMTU) + '\n' +
            'My MTU = ' + str(self.myMTU))
        self.mtu = min(self.myMTU, clientMTU)
        physicalReceiver.send(str(self.mtu).zfill(4))
        self.msg.emit('Accorded MTU = ' + str(self.mtu))
        self.mtuSent = True
        self.msg.emit('Connected with physical client')
        self.getDstMAC(Layer.PhysicalClient[0])
        physicalReceiver.close()


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
            if success:
                self.msg.emit('Received package from Network layer.')
                destiny = json.loads(self.package)['destiny']
                self.destiny = (destiny[0], destiny[1])
                self.msg.emit ('Destiny = ' + str(self.destiny))
                self.getDstMAC(self.destiny)
                self.package = json.loads(self.package)['datagram']
                if success:
                    if not self.mtuReceived:
                        self.connectAsClient(self.destiny)
                    self.createFrame_BinaryFile(self.package, 'binaryRequestClient.txt', 'blue')
                    if self.probCollision != 0:
                        while random.randint(0, 10) <= self.probCollision:
                            rand = random.randint(0, 10)
                            self.msg.emit('Collision detected, ' + str(rand) + ' seconds to retry...')
                            time.sleep(rand)
                    sent = Layer.send(self.destiny, 'binaryRequestClient.txt', self.myMTU)

                    self.msg.emit('Sent binary file to Physical server.')
                    if self.receiveFile(self.physicalClientSocket, 'binaryAnswer.txt'):
                        self.msg.emit('Received binary file from server')
                        self.answer = self.interpretPackage('binaryAnswer.txt', 'red')
                        sent = Layer.send(Layer.NetworkClient, self.answer)


    def connect(self, destiny):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalSocket.connect(destiny)
        self.msg.emit('Establishing MTU')
        self.msg.emit('Sending my MTU = ' + str(self.myMTU))
        self.physicalSocket.send(str(self.myMTU).zfill(4))
        self.mtu = int(self.physicalSocket.recv(4))
        self.msg.emit('The smaller MTU, and frame size, is = ' + str(self.mtu) + '.')
        self.mtuReceived = True
        self.msg.emit('Frame size = ' + str(self.mtu))
        self.physicalSocket.close()



    def configure(self, mtu, probCollision):
        self.myMTU = mtu
        self.probCollision = int(probCollision)
        self.msg.emit('Client MTU = ' + str(mtu) + '.\n' +
                'Probability of collision = ' + str(probCollision) + '.\n')

    def end(self):
        try:
            self.physicalClientSocket.close()
        except:
            self.msg.emit('Physical client socket already closed.')

