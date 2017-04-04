#coding=utf-8
from __future__ import with_statement
from socket import *
import sys
import binascii
import netifaces as ni
import os
from subprocess import Popen, PIPE
import json
from threading import Thread
from layer import Layer
#TODO receive server ip from the caller


class PhysicalClient(Thread):
    physicalSocket = socket(AF_INET, SOCK_STREAM)
    fileType = 0 #0 to text files and 1 to image files
    space = '\t\t\t'
    tmqReceived = False
    tmq = 0
    def __init__(self, host, port):
        print self.space + '*' * 20 + ' PHYSICAL CLIENT ' + '*' * 20
        self.port = int(float(port))
        self.host = host
        self.connect()
        self.networkSocket = socket(AF_INET, SOCK_STREAM)
        self.networkSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkSocket.bind(('127.0.0.1', 4444))
        self.networkSocket.listen(1)
        while True:
            if self.receiveFromNetwork():
                self.toBinaryFile()
                self.sendBinaryFile()
                if self.receiveAnswer():
                    self.sendAnswer()
        #except socket.error, exc:
         #   print 'Could not connect:'
          #  print exc

    def connect(self):
        print self.space + 'Connected to Physical Server'
        self.physicalSocket.connect((self.host, self.port))
        self.getIPMAC()
        #if self.sendFileName():

    def getIPMAC (self):
        print 'gettingIPMAC'
        self.ip = ni.ifaddresses('wlan0')[2][0]['addr']
        addrs = ni.ifaddresses('wlan0')
        self.mac = addrs[ni.AF_LINK][0]['addr']
        self.ipdst = self.host
        self.macdst = os.system('arp -n ' + str(self.ipdst))
        #self.tmq = self.physicalSocket.getTMQ()
        print self.space + "my ip: " + self.ip
        print self.space + "my mac: " + self.mac
        print self.space + "server ip: " + self.ipdst
        print self.space + "server mac: " + str(self.macdst)

    def sendFileName(self):
        #self.fileName = raw_input('Write the file name you want to send: ')
        try:
            self.physicalSocket.send(self.package)
            print 'Sending: ' + self.package
            extension = self.fileName.split('.')[1]
            print extension
            if extension == 'txt':
                self.fileType = 0
            else:
                self.fileType = 1
            return True
        except:
            print 'No file found'
            return False

    def toBinaryFile(self):
        print 'Creating binary file'
        #if self.fileType == 0:
        #    originalFile = open(self.package, "r")
        #else:
        #    originalFile = open(self.package, 'rb')
        self.tamanho = sys.getsizeof(self.package)
        packageTuple = ('preambulo', self.mac, self.macdst, self.tamanho, self.package)
        data = json.dumps(packageTuple)
        with open('binary_file.txt', 'w') as binaryFile:
            for x in data:
                binaryFile.write('{0:08b}'.format(ord(x)))



    def sendBinaryFile(self):
        print 'Sending binary file'
        fileName = 'binary_file.txt'
        if not self.tmqReceived:
            self.tmq = self.physicalSocket.recv(4)
            self.tmqReceived = True
            print 'Frame size = ' + str(self.tmq)
        Layer.sendTo(self.physicalSocket, fileName, self.tmq)
        return True
        return False


    def receiveFromNetwork(self):
        self.clientSocket, addr = self.networkSocket.accept()
        self.package, success = Layer.receiveFrom(self.clientSocket)
        print "success + " + str(self.package)
        #self.package = self.clientSocket.recv(1024)
        self.package = json.loads(self.package)
        #print self.space + 'Packet from network received'
        #print self.space + str(self.package)
        #return True if self.package else False
        return success

    def receiveAnswer(self):
        print 'answer'
        self.answer, success = Layer.receiveFrom(self.physicalSocket)
        print self.answer
        return success

    def sendAnswer(self):
        Layer.sendTo(self.clientSocket, self.answer)
        print 'answer sent'


PhysicalClient ('127.0.0.1' , 7690)
