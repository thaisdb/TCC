#coding=utf-8
from __future__ import with_statement
from socket import *
from socket import error as socket_error
import sys
import binascii
import json
from threading import Thread
from layer import Layer
#TODO receive server ip from the caller
#TODO receive file name from the client

class PhysicalServer(Thread):
    serverSocket = socket(AF_INET, SOCK_STREAM)
    BUFFER_SIZE = 1024
    BYTE_SIZE = 8
    #receivedFileName = 'default.txt'
    fileType = 0 # 0 to text files and 1 to image files
    space = '\t\t\t'
    tmqSent = False
    def __init__(self, host, port):
        self.host = host
        self.port = int(float(port))
        self.serverSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.serverSocket.bind(('127.0.0.1', self.port))
        self.serverSocket.listen(1)
        print self.space + 'Listening for connections, on PORT: ' + str(self.port)
        print self.space + ("******************** PHYSICAL SERVER ********************")
        #self.receiveFileName()
        #receive binary file and save as txt
        #print 'another file'
        self.physicalSocket, addr = self.serverSocket.accept()
        self.physicalSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        while True:
            if self.receiveFile():
                self.translateReceivedFile()
                self.interpretPackage()
                self.sendToInternet()
                if self.receiveAnswer():
                    self.sendAnswer()
        self.physicalSocket.close()



    def receiveFileName(self):
        data = self.physicalSocket.recv(1024)
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
        print 'connected'
        if not self.tmqSent:
            self.sendTMQ()
            self.tmqSent = True
        print 'Connected with physical client'
        with open ('receivedBinary_.txt', "w") as self.rFile:
            data, success = Layer.receiveFrom(self.physicalSocket, self.BUFFER_SIZE)
            self.rFile.write(data)
        return True if data else False

    def translateReceivedFile (self):
        #translate received binaryFile to string pack
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

    def interpretPackage(self):
        self.package =  json.loads(self.package)
        preambulo =     self.package[0]
        print 'preambulo: '+ str(preambulo)
        srcMAC =        self.package[1]
        print 'srcMAC: ' + str(srcMAC)
        myMAC =        self.package[2]
        print 'myMAC: ' + str(myMAC)
        tamanho =       self.package[3]
        self.package =  json.dumps(self.package[4])
        print 'result = ' + str(self.package)


    def sendToInternet (self):
        self.internetSocket = socket(AF_INET, SOCK_STREAM)
        self.internetSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.internetSocket.connect(('127.0.0.1', 5555))
        print self.space + 'package sent!'
        return Layer.sendTo(self.internetSocket, str(self.package))



    def sendTMQ(self):
        print 'TMQ ascked. Answer = ' + str(self.BUFFER_SIZE)
        self.physicalSocket.send(str(self.BUFFER_SIZE))



    def receiveAnswer(self):
        self.answer, success = Layer.receiveFrom(self.internetSocket)
        print 'received aswer'
        print self.answer
        return True
        #return success

    def sendAnswer(self):
        Layer.sendTo(self.physicalSocket, self.answer)
        print 'Answer sent to physical client'
        return True

PhysicalServer('127.0.0.1', 7690)
