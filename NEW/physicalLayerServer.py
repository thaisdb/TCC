#coding=utf-8
from __future__ import with_statement
from socket import *
from socket import error as socket_error
import sys
import binascii
import json
from PyQt4 import QtCore
from layer import Layer
from utils import Addresses as addr
from utils import PDUPrinter
#TODO receive server ip from the caller
#TODO receive file name from the client

class PhysicalServer(QtCore.QThread):
    BUFFER_SIZE = 1024
    BYTE_SIZE = 8

    tmqSent = False

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(PhysicalServer, self).__init__()

    def configure(self, host, port):
        self.host = host
        self.port = port
        try:
            self.physicalServerSocket = socket(AF_INET, SOCK_STREAM)
            self.physicalServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.physicalServerSocket.bind((host, port))
            self.physicalServerSocket.listen(1)
            self.msg.emit  ("******************** PHYSICAL SERVER ********************")
            self.msg.emit ("Listening")
            self.msg.emit("Server setup:\nIP = " + str(self.host) + '\tPort = ' + str(self.port) + '\nListening...')
        except Exception as exc:
            self.errorMsg.emit('ERROR! It was not possible start the server: \n' + str(exc))

    def run(self):
        #self.port = 9753
        #self.host = '127.0.0.1'
        #self.receiveFileName()
        #receive binary file and save as txt
        #print 'another file'
        try:
            while True:
                if self.receiveFile():
                    self.translateReceivedFile()
                    self.interpretPackage()
                    self.sendToNetwork()
                    if self.receiveAnswer():
                        self.sendAnswer()
        except Exception as exc:
            self.errorMsg.emit('ERROR! It was not possible run the server: \n' + str(exc))



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
        physicalReceiver, _ = self.physicalServerSocket.accept()
        if not self.tmqSent:
            self.tmq = int(self.setTMQ(physicalReceiver))
            self.tmqSent = True
        print 'Connected with physical client'
        with open ('receivedBinary_.txt', "w") as self.rFile:
            data = physicalReceiver.recv(self.tmq)
            while data:
                self.rFile.write(data)
                data = physicalReceiver.recv(self.tmq)
        physicalReceiver.close()
        print 'received frame'
        return True

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
        #preambulo =     self.package['preambulo']
        #print 'preambulo: '+ str(preambulo)
        #srcMAC =        self.package['srcMAC']
        #print 'srcMAC: ' + str(srcMAC)
        #myMAC =        self.package['dstMAC']
        #TODO verificar se meu mac == meu mac
        #print 'myMAC: ' + str(myMAC)
        #tamanho =       self.package['tamanho']
        self.html.emit(PDUPrinter.Frame(self.package))
        self.package =  self.package['data']
        #print 'result = ' + str(self.package)


    def sendToNetwork (self):
        networkSender = socket(AF_INET, SOCK_STREAM)
        networkSender.connect(addr.NetworkServer)
        print 'package sent!'
        print self.package
        networkSender.send(self.package)
        networkSender.close()
        return True


    def setTMQ(self, clientSocket):
        clientTMQ = int(clientSocket.recv(4))
        print 'TMQ received = ' + str(clientTMQ)
        myTMQ = self.BUFFER_SIZE
        tmq = str(min(myTMQ, clientTMQ)).zfill(4)
        clientSocket.send(tmq)
        return tmq


    def receiveAnswer(self):
        print 'Waiting answer'
        networkReceiver, _ = self.physicalServerSocket.accept()
        self.answer = ''
        data = networkReceiver.recv(1024)
        while data:
            self.answer += data
            data = networkReceiver.recv(1024)
        print 'received aswer'
        networkReceiver.close()
        return True
        #return success

    def sendAnswer(self):
        self.physicalSender = socket(AF_INET, SOCK_STREAM)
        self.physicalSender.connect(addr.PhysicalClient)
        while self.answer:
            sent = self.physicalSender.send(self.answer)
            self.answer = self.answer[sent:]
        self.physicalSender.close()
        print 'Answer sent to physical client'
        return True

