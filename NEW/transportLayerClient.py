#coding: utf-8
import sys
import re
from socket import *
from struct import *
import json
from threading import Thread
from layer import Layer
import hashlib
from utils import Addresses as addr
from utils import PDUPrinter
from PyQt4 import QtCore



class TransportClient(QtCore.QThread):
    SYN     = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    ACK     = {'cwr':0, 'ece':0, 'fin':0, 'syn':0, 'rst':0, 'psh':0, 'ack':1, 'urg':0}
    SYN_ACK = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':1, 'urg':0}

    TCPConnected = False
    answer = ''

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent = None):
        super(TransportClient, self).__init__()
        self.msg.emit( '*' * 20 + ' TRANSPORT CLIENT ' + '*' * 20)

    def configure(self, transportType):
        self.transportType = transportType


    def run(self):
        #TODO change ip
        self.dstPort = 3333
        self.srcPort = 2222
        self.transportClientSocket = socket(AF_INET, SOCK_STREAM)
        self.transportClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.transportClientSocket.bind(addr.TransportClient)
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
                        self.sendUDPPackage()

                    if self.receiveAnswerFromInternetLayer():
                        self.sendAnswerToApplicationLayer()
        except KeyboardInterrupt:
            self.transportClientSocket.close()


    def sendUDPPackage(self):
        try:
            transportSender = socket(AF_INET, SOCK_STREAM)
            transportSender.connect(addr.NetworkClient)
            #comprimento da mensagem http
            comprimento = len(self.applicationPack)
            self.dstPort = self.findPort()
            self.udpPackage = { 'transportProtocol' : 'UDP',
                                'srcPort' : self.srcPort,
                                'dstPort' : self.dstPort,
                                'comprimento' : comprimento,
                                'data' : json.dumps(self.applicationPack) }
            #(0, self.srcPort, self.dstPort, comprimento, 'checksum', self.applicationPack)
            #print self.udpPackage
            self.udpPackage['checksum'] = bin(self.calculateChecksum(json.dumps(self.udpPackage)))[2:]
            self.html.emit(PDUPrinter.UDP(self.udpPackage))
            self.package = json.dumps(self.udpPackage)
            while self.package:
                sent = transportSender.send(self.package)
                self.package = self.package[sent:]
            transportSender.close()
            self.msg.emit('Data sent')
            #internetSocket.send(pack)
            return True
        except Exception, exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
        #src = client
        #srcIP = self.datagram['srcIP']
        #dst = server
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.msg.emit('ERROR! Coudn\'t send UDP package.')
            self.msg.emit( str(exc))
            self.msg.emit ('line = ' + str(line))
            return False
        #self.udpChecksum = 0
	#self.udpHeaderTuple = (self.srcPort, self.dstPort, self.udpChecksum)

    def sendTCPPackage(self):
        transportSender = socket(AF_INET, SOCK_STREAM)
        transportSender.connect(addr.NetworkClient)
        self.seq = 1
        self.ackSeq = 0
        #size of tcp header in 32bit word
        doff = 5 #4bit field: 5*4 = 20bytes
        self.window = 5840 #max window size allowed
        self.tcpChecksum = 0
        self.urgPtr = 0
        self.offsetRes = (doff << 4) + 0 #???
        self.dstPort = self.findPort()

        #send SYN
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

    def findPort(self):
        return self.applicationPack.split('Host:', 1)[1].split(':', 1)[1].split('\n')[0]


    def threeWayHandshake(self):
        if self.send(self.SYN):
            if self.receive_SYN_ACK():
                if self.send(self.ACK):
                    return True
        return False

    def send(self, flagMode):
        self.msg.emit('Tree Way Handshake step:')
        self.seq = 1
        self.ackSeq = 0
        #size of tcp header in 32bit word
        doff = 5 #4bit field: 5*4 = 20bytes
        self.window = 5840 #max window size allowed
        self.tcpChecksum = 0
        self.urgPtr = 0
        self.offsetRes = (doff << 4) + 0 #???

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
            transportSender.connect(addr.NetworkClient)
            transportSender.send(self.jTCPHeader)
            self.msg.emit('TCPHeader sent')
            return True
        except Exception as exc:
            self.errorMsg.emit('Error sending TCP Segment\n' + str(exc))
            return False

    def receive_SYN_ACK (self):
        try:
            if self.receiveAnswerFromInternetLayer():
                self.msg.emit('Checking SYN_ACK')
                print 'syn-ack? ' + self.answer
                package = json.loads(self.answer)
                self.tcpHeader = {'transportProtocol' : 'TCP',
                        'srcPort'   : package['srcPort'],
                        'dstPort'   : package['dstPort'],
                        'seq'       : package['seq'],
                        'ackSeq'    : package['ackSeq'],
                        'offsetRes' : package['offsetRes'],
                        'flags'     : package['flags'],
                        'window'    : package['window'],
                        'urgPtr'    : package['urgPtr'],
                        'opcoes'    : package['opcoes'],
                        'data'      : package['data'],
                        'checksum'  : package['checksum']}
                self.html.emit(PDUPrinter.TCP(self.tcpHeader))
                return True
        except Exception as exc:
            self.errorMsg.emit('DID NOT Receive SYN_ACK\n' + str(exc))
            return False


    def setFlags (self, mode):
        #reboot tcp flags
        self.flags = {'cwr':0, 'ece':0,
                      'fin':0, 'syn':0, 'rst':0,
                      'psh':0, 'ack':0, 'urg':0}
        if mode == 'SYN':
            self.seq = 0
            self.flags['syn'] = 1
        elif mode == 'ACK':
            self.ackSeq = self.seq + 1
            self.flags['ack'] = 1
        else: #SYN-ACK
            self.flags['syn'] = 1
            self.flags['ack'] = 1



    def calculateChecksum(self, package):
        try:
            s = 0
            for i in range(0, len(package), 2):
                w = ord(package[i]) + (ord(package[i+1]) << 8)
                s += w
                s = (s >> 16) + (s & 0xffff)
                return ~s & 0xffff
        except Exception as exc:
            exc_type, exc_object, exc_tb = sys.exc_info()
            line = exc_tb.tb_lineno
            self.msg.emit('Error calculating checksum = ' + str(exc) + '\nLine = ' + str(line))

    def receiveFromApplicationLayer(self):
        self.applicationSock , _ = self.transportClientSocket.accept()
        #self.applicationPack = ''
        #while self.clientSocket.recv(1024):
        self.applicationPack  = self.applicationSock.recv(1024)
        self.msg.emit( 'received from application layer, sending to internet')
        return True
        #TODO check size of pack, while will be obsolete
            #while data:
            #    self.applicationPack += data
            #    data = connection.recv(1024)
            #debug
            #self.applicationPack
        #except Exception, ex:
         #   print self.space + 'ERROR! Didn\'t received package from Application Layer'
          #  print ex
          #  return False

    def receiveAnswerFromInternetLayer(self):
        transportReceiver , _ = self.transportClientSocket.accept()
        self.msg.emit( 'wainting answer')
        self.answer = ''
        data = transportReceiver.recv(1024)
        while data:
            self.answer += data
            data = transportReceiver.recv(1024)
        transportReceiver.close()
        self.msg.emit( 'Received answer')
        return True

    def sendAnswerToApplicationLayer(self):
        self.msg.emit ('Sending answer to app layer')
        while self.answer:
            sent = self.applicationSock.send(self.answer)
            self.answer = self.answer[sent:]
        self.applicationSock.close()
        self.msg.emit('answer sent')
        return True

    def hearConnection(self, connection):
        self.TCPConnected = connection
        self.msg.emit ('TCP connection established')

TransportClient()
