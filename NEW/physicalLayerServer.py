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
from physicalLayerClient import PhysicalLayer
#TODO receive server ip from the caller
#TODO receive file name from the client

class PhysicalServer(PhysicalLayer):
    BUFFER_SIZE = 4096

    mtuSent = False

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
                self.getMyIPMAC()
                if not self.mtuSent:
                    self.connect()
                if self.receiveFile(self.physicalServerSocket, 'binaryRequestServer.txt'):
                    self.package = self.interpretPackage('binaryRequestServer.txt', 'blue')
                    Layer.send(Layer.NetworkServer, self.package)
                    self.msg.emit('Waiting answer...')
                    self.answer, success = Layer.receive(self.physicalServerSocket)
                    self.msg.emit('Received package from Network layer.')
                    destiny = json.loads(self.answer)['destiny']
                    self.getDstMAC(destiny[0])
                    self.answer = json.loads(self.answer)['datagram']
                    if success:
                        self.createFrame_BinaryFile(self.answer, 'server_binary.txt', 'red')
                        #self.sendAnswer()
                        Layer.send(Layer.PhysicalClient, 'server_binary.txt', self.mtu)
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit('ERROR! It was not possible run the server: \n' + str(exc)+
                    '\nLine = ' + str(line))
            return False

    def connect(self):
        self.msg.emit('Waiting client MTU...')
        physicalReceiver, clientaddr = self.physicalServerSocket.accept()
        Layer.PhysicalClient = (clientaddr[0], 4444)
        clientMTU = int(physicalReceiver.recv(4))
        self.myMTU = self.BUFFER_SIZE
        self.msg.emit('MTU received = ' + str(clientMTU) + '\n' +
            'My MTU = ' + str(self.myMTU))
        self.myMTU = min(self.myMTU, clientMTU)
        physicalReceiver.send(str(self.myMTU).zfill(4))
        self.msg.emit('Accorded MTU = ' + str(self.myMTU))
        self.mtuSent = True
        self.msg.emit('Connected with physical client')
        self.getDstMAC(Layer.PhysicalClient[0])
        physicalReceiver.close()


    def end(self):
        try:
            self.physicalServerSocket.close()
        except:
            self.msg.emit('Physical server socket already closed.')



class PhysicalRouter(PhysicalLayer):
    BUFFER_SIZE = 4096
    myMTU = 1024
    mtuSent = False

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(PhysicalRouter, self).__init__()


    def run(self):
        try:
            self.msg.emit('starting router')
            self.physicalRouterSocket = socket(AF_INET, SOCK_STREAM)
            self.physicalRouterSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.physicalRouterSocket.bind(Layer.PhysicalRouter)
            self.host, self.port = Layer.PhysicalRouter
            self.physicalRouterSocket.listen(1)
            self.msg.emit("Setup:\nIP = " + str(self.host) + '\tPort = ' + str(self.port) + '\nListening...')
            self.getMyIPMAC()
        except Exception as exc:
            self.errorMsg.emit('ERROR! It was not possible start the execution: \n' + str(exc))
        try:
            while True:
                if not self.mtuSent:
                    self.connect()
                #receive request file from client
                if self.receiveFile(self.physicalRouterSocket, 'binaryRouterClientRequest.txt'):
                    self.package = self.interpretPackage('binaryRouterClientRequest.txt', 'blue')

                    #Sending to and receiving from network layer
                    Layer.send(Layer.NetworkRouter, self.package)
                    self.msg.emit('Waiting answer...')
                    self.answer, success = Layer.receive(self.physicalRouterSocket)
                    self.msg.emit('Received package from Network layer.')
                    serverIP = json.loads(self.answer)['destiny']
                    self.getDstMAC(serverIP[0])
                    self.answer = json.loads(self.answer)['datagram']

                    #Creating binary file of request from client and sending to server
                    self.createFrame_BinaryFile(self.answer, 'binaryRouterRequest.txt','green')
                    self.msg.emit ('Sending to server IP = ' + str(Layer.PhysicalServer))
                    self.connectAsClient(Layer.PhysicalServer)
                    self.msg.emit ('Request sent.');
                    success = Layer.send(Layer.PhysicalServer, 'binaryRouterRequest.txt', self.mtu)

                    #receiving answer from server
                    if success and self.receiveFile(self.physicalRouterSocket, 'binaryRouterServerAnswer.txt'):
                        self.package = self.interpretPackage('binaryRouterServerAnswer.txt', 'blue')

                        #sending to and receiving from network layer
                        Layer.send(Layer.NetworkRouter, self.package)
                        self.msg.emit('Waiting answer...')
                        self.answer, success = Layer.receive(self.physicalServerSocket)
                        self.msg.emit('Received package from Network layer.')
                        destiny = json.loads(self.answer)['destiny']
                        self.answer = json.loads(self.answer)['datagram']

                        #creating binary file of answer from server and sending to client
                        self.createFrame_BinaryFile(self.answer, 'binaryRouterAnswer.txt','green')
                        Layer.send(Layer.PhysicalClient, 'binaryRouterAnswer.txt', self.mtu)

        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit('ERROR! It was not possible run the server: \n' + str(exc)+
                    '\nLine = ' + str(line))
            return False

    def connect(self):
        self.msg.emit('Waiting client MTU...')
        physicalReceiver, clientaddr = self.physicalRouterSocket.accept()
        Layer.PhysicalClient = clientaddr
        clientMTU = int(physicalReceiver.recv(4))
        self.myMTU = self.BUFFER_SIZE
        self.msg.emit('MTU received = ' + str(clientMTU) + '\n' +
            'My MTU = ' + str(self.myMTU))
        self.myMTU = min(self.myMTU, clientMTU)
        physicalReceiver.send(str(self.myMTU).zfill(4))
        self.msg.emit('Accorded MTU = ' + str(self.myMTU))
        self.mtuSent = True
        self.msg.emit('Connected with physical client')
        self.getDstMAC(Layer.PhysicalClient[0])
        physicalReceiver.close()


    def end(self):
        try:
            self.physicalRouterSocket.close()
        except:
            self.msg.emit('Physical server socket already closed.')


