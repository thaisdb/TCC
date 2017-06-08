#coding=utf-8
from __future__ import with_statement
from socket import *
import sys
import subprocess
import binascii
import netifaces as ni
import os
from utils import Common
from physicalLayer import PhysicalLayer as pl
import json
from threading import Thread
from layer import Layer
from utils import PDUPrinter
from PyQt4 import QtCore
from PyCRC.CRC32 import CRC32
#TODO receive server ip from the caller


class PhysicalClient(QtCore.QThread):
    fileType = 0 #0 to text files and 1 to image files
    tmqReceived = False

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent = None ):
        super(PhysicalClient, self).__init__()

    def run(self):
        self.port = 9753
        self.getIPMAC()
        self.physicalClientSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.physicalClientSocket.bind(Layer.PhysicalClient)
        self.physicalClientSocket.listen(1)
        while True:
            if self.receiveFromNetwork():
                #self.getIPMAC()
                self.toBinaryFile()
                self.sendBinaryFile()
                if self.receiveAnswer():
                    self.sendAnswer()
        #except socket.error, exc:
         #   print 'Could not connect:'
          #  print exc


    def getIPMAC (self):
        print 'gettingIPMAC'
        interface  = Common.myIP()
        self.myIP = interface[1]
        self.myMAC = pl.getMyMAC(interface[0])
        self.serverIP = Layer.PhysicalServer[0]
        self.serverMAC = pl.getServerMAC(self.serverIP)
        self.msg.emit("my ip: " + str(self.myIP['addr']))
        self.msg.emit("my mac: " + str(self.myMAC))
        self.msg.emit("server ip: " + str(self.serverIP))
        self.msg.emit("server mac: " + str(self.serverMAC) + '\n')


    def toBinaryFile(self):
        print 'Creating frame.'
        #TODO fix size
        self.tamanho = sys.getsizeof(self.package)
        package = {'preambulo' : '7x(10101010) + 10101011',
                    'srcMAC' : self.myMAC,
                    'dstMAC' : self.serverMAC,
                    'tamanho' : self.tamanho,
                    'data' : self.package}
        data = json.dumps(package)
        package['FCS'] = bin(self.calcCRC(data))[2:]
        self.html.emit(PDUPrinter.Frame(package, 'blue'))
        data = json.dumps(package)
        with open('binary_file.txt', 'w') as binaryFile:
            for x in data:
                binaryFile.write('{0:08b}'.format(ord(x)))

    def calcCRC(self, data):
        return CRC32().calculate(data)


    def setTMQ(self, size):
        self.myTMQ = size
        self.msg.emit('Entered client MTU = ' + str(size) + '.')

    def sendBinaryFile(self):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalSocket.connect(Layer.PhysicalServer)
        fileName = 'binary_file.txt'
        if not self.tmqReceived:
            #TODO ask user
            self.physicalSocket.send(str(self.myTMQ).zfill(4))
            #server sends min tmq
            self.tmq = int(self.physicalSocket.recv(4))
            #self.msg.emit('Accorded MTU size = ' + str(self.tmq) + '.')
            self.tmqReceived = True
        self.msg.emit('Creating binary file and sending.')
        with open(fileName, 'r') as binFile:
            data = binFile.read(self.tmq)
            while data:
                self.physicalSocket.send(data)
                data = binFile.read(self.tmq)
            self.physicalSocket.close()
        self.msg.emit('Resquest sent to Server.')
        return True


    def receiveFromNetwork(self):
        networkReceiver, _ = self.physicalClientSocket.accept()
        self.package = ''
        data = networkReceiver.recv(1024)
        while data:
            self.package += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'Packet from network received'
        print 'received from network' + str(self.package)
        return True

    def receiveAnswer(self):
        self.msg.emit('Waiting answer...\n')
        physicalReceiver, _ = self.physicalClientSocket.accept()
        self.answer = ''
        data  = physicalReceiver.recv(1024)
        while data:
            self.answer += data
            data  = physicalReceiver.recv(1024)
        physicalReceiver.close()
        self.msg.emit( 'Answer from server received')
        self.msg.emit('Interpreting:')
        return True

    def sendAnswer(self):
        physicalSender = socket(AF_INET, SOCK_STREAM)
        physicalSender.connect(Layer.NetworkClient)
        while self.answer:
            sent = physicalSender.send(self.answer)
            self.answer = self.answer[sent:]
        physicalSender.close()
        print 'Answer sent to upper layer'

    def hearConnection(self, connection):
        self.connection = connection
        self.msg.emit ('TCP connection established.')

