#coding:utf-8
import base64
import sys
import re
from socket import *
from struct import *
import json
from threading import Thread
from layer import Layer
import hashlib
from utils import PDUPrinter, Common
from PyQt4 import QtCore

class TransportLayer(QtCore.QThread):
    SYN     = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    ACK     = {'cwr':0, 'ece':0, 'fin':0, 'syn':0, 'rst':0, 'psh':0, 'ack':1, 'urg':0}
    SYN_ACK = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':1, 'urg':0}

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    errorMsg = QtCore.pyqtSignal(str)

    def createSegment(self, mode):
        try:
            comprimento = len(self.applicationPack)
            #self.dstPort = self.findPort()
            self.segment = { 'transportProtocol' : 'UDP',
                                #'srcPort' : self.srcPort,
                                'srcPort' : str(self.srcPort),
                                'dstPort' : str(self.dstPort),
                                'comprimento' : comprimento,
                                'data' : json.dumps(self.applicationPack.encode('base64') + '=====') }
            self.segment['checksum'] = Common.calculateChecksum(self.segment)[2:]
            self.html.emit(PDUPrinter.UDP(self.segment, 'blue'))
            if mode == 'UDP':
                self.segment = json.dumps(self.segment, encoding='utf8')
                print 'Created UDP segment'
                return True
            else:
                doff = 5 #4bit field: 5*4 = 20bytes
                self.window = 5840 #max window size allowed
                self.tcpChecksum = 0
                self.urgPtr = 0
                self.offsetRes = (doff << 4) + 0 #???
                self.dstPort = self.findPort()
                self.datagram['transportProtocol'] = 'TCP'
                #seq e ack seq so no treewayhanshake
                self.segment['seq']       = 'seq'
                self.segment['ackSeq']    = 'ackSeck',
                self.segment['offsetRes'] = self.offsetRes,
                self.segment['flags']     = 'flags',
                self.segment['window']    = self.window,
                self.segment['urgPtr']    = self.urgPtr,
                self.segment['opcoes']    = 'opções',
                self.segment = json.dumps(self.datagram)
                return True
        except Exception, exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.msg.emit('ERROR! Couldn\'t create ' + str(mode) + ' segment.')
            self.msg.emit( str(exc))
            self.msg.emit ('line = ' + str(line))
            return False


    def findPort(self):
        return self.applicationPack.split('Host:', 1)[1].split(':', 1)[1].split('\n')[0]



    def interpretUDPSegment(self, segment):
        try:
            self.msg.emit('Interpreting:')
            self.segment = json.loads(segment)
            self.html.emit(PDUPrinter.UDP(self.segment, 'red'))
            checksum = self.segment['checksum']
            del self.segment['checksum']
            self.dstPort = self.segment['srcPort']
            self.srcPort = self.segment['dstPort']
            self.segment['data'] = self.decode_base64(json.loads(self.segment['data']))
            if Common.verifyChecksum(segment, checksum):
                self.msg.emit('CHECKSUM successfully verified.')
            else:
                self.errorMsg.emit('CHECKSUM error! Unsuccessfully verified.')
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit("Couldn't interpret package: " + str(exc))
            self.errorMsg.emit('error line = ' + str(line))


    def decode_base64(self, data):
        lens = len(data)
        lenx = lens - (lens % 4 if lens % 4 else 4)
        return base64.decodestring(data[:lenx])


class TransportClient(TransportLayer):

    TCPConnected = False

    def __init__(self, parent = None):
        super(TransportClient, self).__init__()
        self.msg.emit( '*' * 20 + ' TRANSPORT CLIENT ' + '*' * 20)

    #server or router -> TODO
    def configure(self, transportType, port):
        self.transportType = transportType
        self.dstPort = port


    def run(self):
        #TODO change ip
        self.transportClientSocket = socket(AF_INET, SOCK_STREAM)
        self.transportClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.transportClientSocket.bind(Layer.TransportClient)
        #while True:
        self.transportClientSocket.listen(1)
        self.msg.emit ('Listening...')
        try:
            while True:
                if self.receiveFromApplicationLayer():
                    if self.transportType == 'TCP':
                        if not self.TCPConnected :
                            if self.threeWayHandshake():
                                self.msg.emit('TCP connection established successfully'\
                                        ' through TreeWayHandshake protocol')
                            else:
                                self.errorMsg.emit ('The ThreeWayHandshake protocol could not be completed.'\
                                        '\nVerify you connection and try again.')
                                break;
                        else:
                            self.sendTCPPackage()
                    else: #transport protocol = UDP
                        if self.createSegment('UDP'):
                            sent = Layer.send(Layer.NetworkClient, self.segment)
                            if self.receiveAnswer():
                                #TODO recognize datagram
                                self.sendAnswerToApplicationLayer()
        except KeyboardInterrupt:
            self.transportClientSocket.close()

    def receiveFromApplicationLayer(self):
        #TODO review this conection
        self.applicationSock , _ = self.transportClientSocket.accept()
        pack = json.loads(self.applicationSock.recv(1024))
        self.srcPort = pack['pid']
        self.applicationPack = pack['request']
        print 'port = ' + str(self.srcPort)
        print 'app request = ' +  str(self.applicationPack)
        self.msg.emit('Received request from application layer.\nCreating and sending PDU to Network layer:')
        return True

    def receiveAnswer(self):
        self.answer, success = Layer.receive(self.transportClientSocket)
        if success:
            self.msg.emit('Received answer from Network layer.')
            self.interpretUDPSegment(self.answer)
        print 'received answer' + str(success)
        return success



    def sendAnswerToApplicationLayer(self):
        self.msg.emit ('Sending payload to Application layer.')
        while self.segment['data']:
            sent = self.applicationSock.send(self.segment['data'])
            self.segment['data'] = self.segment['data'][sent:]
        self.applicationSock.close()
        self.msg.emit('Answer sent.')
        return True


    def sendTCPPackage(self):
        transportSender = socket(AF_INET, SOCK_STREAM)
        transportSender.connect(Layer.NetworkClient)
        self.seq = 1
        self.ackSeq = 0
        #size of tcp header in 32bit word
        doff = 5 #4bit field: 5*4 = 20bytes
        self.window = 5840 #max window size allowed
        self.tcpChecksum = 0
        self.urgPtr = 0
        self.offsetRes = (doff << 4) + 0 #???
        self.dstPort = self.findPort()

        self.tcpSegment = {'transportProtocol' : 'TCP',
                         'srcPort'  : self.srcPort,
                         'dstPort'  : self.dstPort,
                         'seq'      : self.seq,
                         'ackSeq'   : self.ackSeq,
                         'offsetRes': self.offsetRes,
                         'flags'    : 'flags',
                         'window'   : self.window,
                         'urgPtr'   : self.urgPtr,
                         'opcoes'   : 'opções',
                         'data'     : json.dumps(self.applicationPack)}
        self.jTCPSegment = json.dumps(self.tcpSegment)
        self.tcpChecksum = self.calculateChecksum(self.jTCPSegment)
        self.tcpSegment['checksum'] = self.tcpChecksum
        self.jTCPSegment = json.dumps(self.tcpSegment)

	#self.headerLength = sys.getsizeof(tcpHeader)
        self.html.emit(PDUPrinter.TCP(self.tcpSegment))
        try:
            while self.jTCPSegment:
                sent = transportSender.send(self.jTCPSegment)
                self.jTCPSegment = self.jTCPSegment[sent:]
            transportSender.close()
            self.msg.emit('Data sent')
            return True
        except Exception as exc:
            self.errorMsg.emit('Error sending TCP Segment\n' + str(exc))
            return False



    def threeWayHandshake(self):
        if self.sendTCP(self.SYN):
            if self.receive_SYN_ACK():
                if self.sendTCP(self.ACK):
                    self.TCPConnected = True
                    return True
        return False

    def sendTCP(self, flagMode):
        self.msg.emit('Tree Way Handshake step:')
        self.ackSeq = 0
        #size of tcp header in 32bit word
        doff = 5 #4bit field: 5*4 = 20bytes
        self.window = 5840 #max window size allowed
        self.tcpChecksum = 0
        self.urgPtr = 0
        self.offsetRes = (doff << 4) + 0 #???
        if flagMode == self.SYN:
            self.seq    = 0
            self.ackSeq = 0
        elif flagMode == self.ACK:
            self.seq    = 1
            self.ackSeq = 1
        else:
            self.seq    = int(self.tcpHeader['seq']) + int(self.tcpHeader['window'])
            self.ackSeq = int(self.tcpHeader['seq']) + int(self.tcpHeader['window'])

        #send SYN
        self.tcpHeader = {'transportProtocol' : 'TCP',
                         'srcPort'  : self.srcPort,
                         'dstPort'  : self.dstPort,
                         'seq'      : self.seq,
                         'ackSeq'   : self.ackSeq,
                         'offsetRes': self.offsetRes,
                         'flags'    : flagMode,
                         'window'   : self.window,
                         'urgPtr'   : self.urgPtr,
                         'opcoes'   : 'opções',
                         'data'     : 'no data'}
        if flagMode == self.ACK:
            self.tcpHeader['data'] = json.dumps(self.applicationPack)
        self.jTCPHeader = json.dumps(self.tcpHeader)
        self.tcpChecksum = self.calculateChecksum(self.jTCPHeader)
	#remount head with correct checksum
        #tcpHeaderTuple = (self.srcPort, self.dstPort, self.seq, self.ackSeq, self.offsetRes,
        #                  jFlags, self.window, self.tcpChecksum, self.urgPtr)
        self.tcpHeader['checksum'] = self.tcpChecksum
        self.jTCPHeader = json.dumps(self.tcpHeader)

	#self.headerLength = sys.getsizeof(tcpHeader)
        self.html.emit(PDUPrinter.TCP(self.tcpHeader))
        try:
            transportSender = socket(AF_INET, SOCK_STREAM)
            transportSender.connect(Layer.NetworkClient)
            transportSender.send(self.jTCPHeader)
            self.msg.emit('TCPHeader sent')
            return True
        except Exception as exc:
            self.errorMsg.emit('Error sending TCP Segment\n' + str(exc))
            return False


    def confirmFlags(self, flagsMode):
        try:
            datagram = self.loads(self.answer)
            if datagram['flags'] == flagsMode:
                return True
            else:
                return False
        except Exception as exc:
            self.errorMsg.emit('Error in flagMode ' + str(exc))
            return False

    def receive_SYN_ACK (self):
        try:
            self.answer, success = Layer.receive(self.transportClientSocket)
            if success:
                self.msg.emit('Checking SYN_ACK')
                self.html.emit(PDUPrinter.TCP(self.tcpHeader, 'blue'))
                self.answer = json.loads(self.answer)
                if self.answer['seq'] == 0 and self.answer['ackSeq'] == 1:
                    self.html.emit(PDUPrinter.TCP(self.tcpHeader, 'blue'))
                    return True
                else:
                    self.msg.emit('Acknowledge sequence number doesn\'t check')
                    return False
        except Exception as exc:
            self.errorMsg.emit('DID NOT Receive SYN_ACK\n' + str(exc))
            return False





