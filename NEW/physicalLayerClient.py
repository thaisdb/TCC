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
    fileType = 0 #0 to text files and 1 to image files
    space = '\t\t\t'
    tmqReceived = False
    def __init__(self, host, port):
        print self.space + '*' * 20 + ' PHYSICAL CLIENT ' + '*' * 20
        self.port = int(float(port))
        self.host = host
        #self.connect()
        self.networkSocket = socket(AF_INET, SOCK_STREAM)
        self.networkSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkSocket.bind(('127.0.0.1', 4444))
        self.networkSocket.listen(1)
        self.getIPMAC()
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
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
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
        #TODO fix size
        self.tamanho = sys.getsizeof(self.package)
        package = {'preambulo' : 'preambulo',
                    'mac' : self.mac,
                    'dstMac' : self.macdst,
                    'tamanho' : self.tamanho,
                    'data' : self.package }
        data = json.dumps(package)
        with open('binary_file.txt', 'w') as binaryFile:
            for x in data:
                binaryFile.write('{0:08b}'.format(ord(x)))



    def sendBinaryFile(self):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalSocket.connect((self.host, self.port))
        print 'Sending binary file'
        fileName = 'binary_file.txt'
        tmq = 1024
        if not self.tmqReceived:
            #TODO ask user
            myTMQ = 30
            self.physicalSocket.send(str(myTMQ).zfill(4))
            #server sends min tmq
            tmq = int(self.physicalSocket.recv(4))
            self.tmqReceived = True
            print 'Frame size = ' + str(tmq)
        size = str(os.stat(fileName).st_size)
        #send size
        self.physicalSocket.send(size.zfill(4))
        with open(fileName, 'r') as binFile:
            data = binFile.read(int(tmq))
            while data:
                self.physicalSocket.send(data)
                data = binFile.read(int(tmq))
        return True


    def receiveFromNetwork(self):
        self.clientSocket, addr = self.networkSocket.accept()
        self.package = self.clientSocket.recv(1024)
        self.package = json.loads(self.package)
        print 'Packet from network received'
        #print self.space + str(self.package)
        return True if self.package else False

    def receiveAnswer(self):
        print 'answer'
        self.answer = ''
        data  = self.physicalSocket.recv(1024)
        while data:
            self.answer += data
            data  = self.physicalSocket.recv(1024)
        return True

    def sendAnswer(self):
        while self.answer:
            sent = self.clientSocket.send(self.answer)
            self.answer = self.answer[sent:]
        self.clientSocket.close()
        print 'answer sent'


PhysicalClient ('127.0.0.1' , 7690)
