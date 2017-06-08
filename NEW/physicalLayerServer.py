#coding=utf-8
from __future__ import with_statement
from socket import *
from socket import error as socket_error
import sys
import binascii
import json
from PyQt4 import QtCore
from layer import Layer
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


    def run(self):
        try:
            self.physicalServerSocket = socket(AF_INET, SOCK_STREAM)
            self.physicalServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.physicalServerSocket.bind(Layer.PhysicalServer)
            self.host, self.port = Layer.PhysicalServer
            self.physicalServerSocket.listen(1)
            self.msg.emit("Setup:\nIP = " + str(self.host) + '\tPort = ' + str(self.port) + '\nListening...')
        except Exception as exc:
            self.errorMsg.emit('ERROR! It was not possible start the execution: \n' + str(exc))
        try:
            while True:
                if self.receiveFile():
                    self.translateReceivedFile()
                    self.interpretPackage()
                    self.sendToNetwork()
                    if self.receiveAnswer():
                        self.sendAnswer()
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit('ERROR! It was not possible run the server: \n' + str(exc)+
                    '\nLine = ' + str(line))
            return False




    def receiveFile(self):
        self.msg.emit('Waiting file...')
        physicalReceiver, clientaddr = self.physicalServerSocket.accept()
        Layer.PhysicalClient = (clientaddr[0], 4444)
        self.msg.emit(str(clientaddr))
        if not self.tmqSent:
            self.tmq = int(self.setTMQ(physicalReceiver))
            self.tmqSent = True
        self.msg.emit('Connected with physical client')
        with open ('receivedBinary_.txt', "w") as self.rFile:
            data = physicalReceiver.recv(self.tmq)
            while data:
                self.rFile.write(data)
                data = physicalReceiver.recv(self.tmq)
        physicalReceiver.close()
        self.msg.emit('received frame')
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
        self.html.emit(PDUPrinter.Frame(self.package, 'red'))
        self.package =  self.package['data']
        #print 'result = ' + str(self.package)


    def sendToNetwork (self):
        networkSender = socket(AF_INET, SOCK_STREAM)
        networkSender.connect(Layer.NetworkServer)
        self.msg.emit('package sent to network')
        print self.package
        networkSender.send(self.package)
        networkSender.close()
        return True

    def setBufferSize(self, size):
        self.BUFFER_SIZE = size

    def setTMQ(self, clientSocket):
        clientTMQ = int(clientSocket.recv(4))
        self.msg.emit('TMQ received = ' + str(clientTMQ))
        myTMQ = self.BUFFER_SIZE
        tmq = str(min(myTMQ, clientTMQ)).zfill(4)
        clientSocket.send(tmq)
        return tmq


    def receiveAnswer(self):
        self.msg.emit('Waiting answer')
        networkReceiver, _ = self.physicalServerSocket.accept()
        self.answer = ''
        data = networkReceiver.recv(1024)
        while data:
            self.answer += data
            data = networkReceiver.recv(1024)
        self.msg.emit('received aswer')
        networkReceiver.close()
        return True
        #return success

    def sendAnswer(self):
        self.physicalSender = socket(AF_INET, SOCK_STREAM)
        self.msg.emit('sending to ' + str(Layer.PhysicalClient))
        self.physicalSender.connect(Layer.PhysicalClient)
        while self.answer:
            sent = self.physicalSender.send(self.answer)
            self.answer = self.answer[sent:]
        self.physicalSender.close()
        self.msg.emit('Answer sent to physical client')
        return True

    def tcpConnected(self, connected):
        self.msg.emit('Heard shout')
        self.connected = connected

