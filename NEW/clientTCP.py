from __future__ import with_statement
import socket
import sys
import binascii
import netifaces as ni
import os
from subprocess import Popen, PIPE

#TODO receive server ip from the caller


class Client:
    clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    fileName = 'default.txt'
    fileType = 0 #0 to text files and 1 to image files
    def __init__(self, host, port):
        self.port = int(float(port))
        self.host = host
        try:
            self.connect()
        except socket.error, exc:
            print 'Cound not connect:'
            print exc

    def connect(self):
        self.clientSocket.connect((self.host, self.port))
        self.getIPMAC()
        if self.sendFileName():
            self.toBinaryFile()
            self.sendBinaryFile()

    def getIPMAC (self):
        self.ip = ni.ifaddresses('wlan0')[2][0]['addr']
        addrs = ni.ifaddresses('wlan0')
        self.mac = addrs[ni.AF_LINK][0]['addr']
        self.ipdst = self.host
        self.macdst = os.system('arp -n ' + str(self.ipdst))
        #self.tmq = self.clientSocket.getTMQ()
        print "my ip: " + self.ip
        print "my mac: " + self.mac
        print "server ip: " + self.ipdst
        print "server mac: " + str(self.macdst)


    def sendFileName(self):
        self.fileName = raw_input('Write the file name you want to send: ')
        try:
            self.clientSocket.send(self.fileName)
            print 'Sending: ' + self.fileName
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
            originalFile = open(self.fileName, "r")
        else:
            originalFile = open(self.fileName, 'rb')
        with open('binary_' + self.fileName, 'w') as binaryFile:
            data = originalFile.read(1)
            while data:
                binaryFile.write('{0:08b}'.format(ord(data)))
                data = originalFile.read(1)

    def sendBinaryFile(self):
        with open('binary_' + self.fileName, "r") as originalBinaryFile:
            fileBuffer = originalBinaryFile.read()
            while fileBuffer:
                self.clientSocket.send(fileBuffer)
                fileBuffer = originalBinaryFile.read()
            self.clientSocket.close()


client = Client(sys.argv[1], sys.argv[2])
