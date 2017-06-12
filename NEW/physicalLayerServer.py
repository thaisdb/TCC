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
                    self.package = self.interpretPackage('binaryRequestServer.txt')
                    Layer.send(Layer.NetworkServer, self.package)
                    self.msg.emit('Waiting answer...')
                    self.answer, success = Layer.receive(self.physicalServerSocket)
                    self.msg.emit('Received package from Network layer.')
                    self.getDstMAC(json.loads(self.answer)['dstIP'])
                    self.answer = json.loads(self.answer)['datagram']
                    if success:
                        self.createFrame_BinaryFile(self.answer, 'server_binary.txt')
                        #self.sendAnswer()
                        Layer.send(Layer.PhysicalClient, 'server_binary.txt', self.myMTU)
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


