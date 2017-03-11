from __future__ import with_statement
from socket import *
from socket import error as socket_error
import sys
import binascii
import json
from threading import Thread
#TODO receive server ip from the caller
#TODO receive file name from the client

class PhysicalServer(Thread):
    serverSocket = socket(AF_INET, SOCK_STREAM)
    BUFFER_SIZE = 1024
    BYTE_SIZE = 8
    #receivedFileName = 'default.txt'
    fileType = 0 # 0 to text files and 1 to image files
    space = '\t\t\t'
    def __init__(self, host, port):
        self.host = host
        self.port = int(float(port))
        self.serverSocket.bind(('', self.port))
        self.serverSocket.listen(1)
        print self.space + 'Listening for connections, on PORT: ' + str(self.port)
        self.clientSocket, addr = self.serverSocket.accept()
        print self.space + ("******************** PHYSICAL SERVER ********************")
        while True:
           #self.receiveFileName()
            self.receiveFile()
            self.translateReceivedFile()
            self.interpretPackage()
            self.sendToInternet()
        self.clientSocket.close()

    def receiveFileName(self):
        data = self.clientSocket.recv(1024)
        if not data:
            print 'No valid file  received'
            return
        self.receivedFileName = data
        extension = self.receivedFileName.split('.')
        if extension == 'txt':
            self.fileType = 0
        else:
            self.fileType = 1
        print ('filename: ' + self.receivedFileName)

    def receiveFile(self):
        with open ('receivedBinary_.txt', "w") as self.rFile:
            data = self.clientSocket.recv(self.BUFFER_SIZE)
            while data:
                if not data:
                    print ("no data")
                    break
                self.rFile.write(data)
                data = self.clientSocket.recv(self.BUFFER_SIZE)


    def translateReceivedFile (self):
        #if self.fileType == 0:
        #    newFile = open('received_.txt', "w")
        #else: #image
        newFile = open('received_translated.txt', 'wb')
        with open('receivedBinary_.txt', "r") as binFile:
            buff = binFile.read(self.BYTE_SIZE)
            self.package = ''
            while buff:
                x = chr(int(buff,2))
                newFile.write(x)
                buff = binFile.read(self.BYTE_SIZE)
                self.package += x
        print 'package:'
        self.interpretPackage()

    def interpretPackage(self):
        self.package =  self.package
        preambulo =     self.package[0]
        print preambulo
        srcmak =        self.package[1]
        print srcmak
        myMack =        self.package[2]
        tamanho =       self.package[3]
        self.package =  self.package[4]
        #print self.package

    def sendToInternet (self):
        internetSocket = socket(AF_INET, SOCK_STREAM)
        internetSocket.connect(('127.0.0.1', 5555))
        print self.space + 'sending\n'
        internetSocket.send(self.package)
        print self.space + 'package sent!'


    def sendTMQ():
        print 'asked'
        #clientSocket.send(self.BUFFER_SIZE)

PhysicalServer('127.0.0.1', 7690)
