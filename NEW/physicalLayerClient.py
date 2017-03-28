from __future__ import with_statement
import socket
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
    physicalSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    networkSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    fileType = 0 #0 to text files and 1 to image files
    space = '\t\t\t'
    def __init__(self, host, port):
        print self.space + '*' * 20 + ' PHYSICAL CLIENT ' + '*' * 20
        self.port = int(float(port))
        self.host = host
        self.connect()
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
        print 'Asking for frame size...'
        size = self.physicalSocket.recv(4)
        print 'Frame size = ' + str(size)
        Layer.sendTo(self.physicalSocket, fileName, size)
        return True
        return False


    def receiveFromNetwork(self):
        self.networkSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.networkSocket.bind(('127.0.0.1', 4444))
        self.networkSocket.listen(1)
        self.clientSocket, addr = self.networkSocket.accept()
        self.package, success = Layer.receiveFrom(self.clientSocket)
        print "success + " + str(self.package)
        #self.package = self.clientSocket.recv(1024)
        self.package = json.loads(self.package)
        #print self.space + 'Packet from network received'
        #print self.space + str(self.package)
        return True

    def receiveAnswer(self):
        print 'answer'
        self.answer = self.physicalSocket.recv(1024)
        print self.answer
        return True

    def sendAnswer(self):
        self.clientSocket.send(self.answer)
        print 'answer sent'


PhysicalClient ('127.0.0.1' , 7690)
