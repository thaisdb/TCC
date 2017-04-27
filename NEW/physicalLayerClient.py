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
from utils import Addresses as addr
#TODO receive server ip from the caller


class PhysicalClient(Thread):
    fileType = 0 #0 to text files and 1 to image files
    tmqReceived = False

    def __init__(self, host, port):
        print '*' * 20 + ' PHYSICAL CLIENT ' + '*' * 20
        self.port = int(float(port))
        self.host = host
        #self.connect()
        self.getIPMAC()
        self.physicalClientSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.physicalClientSocket.bind(addr.PhysicalClient)
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

    def connect(self):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        print 'Connected to Physical Server'
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
        self.physicalSocket.connect(addr.PhysicalServer)
        print 'Sending binary file'
        fileName = 'binary_file.txt'
        if not self.tmqReceived:
            print 'Asking tmq'
            #TODO ask user
            myTMQ = 30
            self.physicalSocket.send(str(myTMQ).zfill(4))
            #server sends min tmq
            self.tmq = int(self.physicalSocket.recv(4))
            self.tmqReceived = True
            print 'Frame size = ' + str(self.tmq)
        with open(fileName, 'r') as binFile:
            data = binFile.read(self.tmq)
            while data:
                self.physicalSocket.send(data)
                data = binFile.read(self.tmq)
            self.physicalSocket.close()
        print 'Resquest sent to Server'
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
        physicalReceiver, _ = self.physicalClientSocket.accept()
        print 'answer'
        self.answer = ''
        data  = physicalReceiver.recv(1024)
        while data:
            self.answer += data
            data  = physicalReceiver.recv(1024)
        physicalReceiver.close()
        return True

    def sendAnswer(self):
        physicalSender = socket(AF_INET, SOCK_STREAM)
        physicalSender.connect(addr.NetworkClient)
        while self.answer:
            sent = physicalSender.send(self.answer)
            self.answer = self.answer[sent:]
        physicalSender.close()
        print 'answer sent'


PhysicalClient ('127.0.0.1' , 7690)
