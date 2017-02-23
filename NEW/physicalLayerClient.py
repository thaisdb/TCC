from __future__ import with_statement
import socket
import sys
import binascii
import netifaces as ni
import os
from subprocess import Popen, PIPE

#TODO receive server ip from the caller


class Client:
    physicalSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    networkSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    fileType = 0 #0 to text files and 1 to image files
    def __init__(self, host, port):
        self.port = int(float(port))
        self.host = host
        try:
            self.connect()
        except socket.error, exc:
            print 'Could not connect:'
            print exc

    def connect(self):
        print 'connecting'
        self.physicalSocket.connect((self.host, self.port))
        self.getIPMAC()
        #if self.sendFileName():
        self.receiveFromNetwork()
        self.toBinaryFile()
        self.sendBinaryFile()

    def getIPMAC (self):
        print 'gettingIPMAC'
        self.ip = ni.ifaddresses('wlan0')[2][0]['addr']
        addrs = ni.ifaddresses('wlan0')
        self.mac = addrs[ni.AF_LINK][0]['addr']
        self.ipdst = self.host
        self.macdst = os.system('arp -n ' + str(self.ipdst))
        #self.tmq = self.physicalSocket.getTMQ()
        print "my ip: " + self.ip
        print "my mac: " + self.mac
        print "server ip: " + self.ipdst
        print "server mac: " + str(self.macdst)

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
        if self.fileType == 0:
            originalFile = open(self.package, "r")
        else:
            originalFile = open(self.package, 'rb')
        with open('binary_file.txt', 'w') as binaryFile:
            data = originalFile.read(1)
            while data:
                binaryFile.write('{0:08b}'.format(ord(data)))
                data = originalFile.read(1)

    def sendBinaryFile(self):
        with open('binary_file.txt', "r") as originalBinaryFile:
            fileBuffer = originalBinaryFile.read()
            while fileBuffer:
                self.physicalSocket.send(fileBuffer)
                fileBuffer = originalBinaryFile.read()
            self.physicalSocket.close()

    def receiveFromNetwork(self):
        self.networkSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.networkSocket.bind(('127.0.0.1', 5342))
        self.networkSocket.listen(1)
        self.networkSocket.accept()
        self.package = self.networkSocket.recv(1024)
        print 'pakcage from network received'
        print self.package


client = Client(sys.argv[1], sys.argv[2])
