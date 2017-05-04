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
    applicationPack = 'Teste de pacote, protocolo TCP'
    updPackage = ''
    tcpPackage = ''
    space = '\t'

    msg = QtCore.pyqtSignal(str)

    def __init__(self, parent = None):
        super(TransportClient, self).__init__()


    def run(self):
        #TODO change ip
        self.dstPort = 3333
        self.srcPort = 2222
        self.msg.emit( '*' * 20 + ' TRANSPORT CLIENT ' + '*' * 20)
        self.transportClientSocket = socket(AF_INET, SOCK_STREAM)
        self.transportClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.transportClientSocket.bind(addr.TransportClient)
        #while True:
        self.transportClientSocket.listen(1)
        self.msg.emit ('listening')
        try:
            while True:
                #mode = raw_input('Choose a transport protocol\n'
                #        '[0] UDP \n[1] TCP\n: ')
                mode = '0'
                if mode == '0':
                    self.msg.emit( 'UDP Protocol selected')
                    break
                elif mode == '1':
                    print 'TCP Protocol selected'
                    self.sendTCPPackage()
                    break
            while True:
                if self.receiveFromApplicationLayer():
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
            self.udpPackage['checksum'] = self.calculateChecksum(self.udpPackage)
            PDUPrinter.UDP(self.udpPackage)
            self.package = json.dumps(self.udpPackage)
            while self.package:
                sent = transportSender.send(self.package)
                self.package = self.package[sent:]
            transportSender.close()
            print 'Data sent'
            #internetSocket.send(pack)
            return True
        except Exception, exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print 'ERROR! Coudn\'t send UDP package.'
            print exc
            print 'line = ' + str(line)
            return False
        #self.udpChecksum = 0
	#self.udpHeaderTuple = (self.srcPort, self.dstPort, self.udpChecksum)

    def findPort(self):
        return self.applicationPack.split('Host:', 1)[1].split(':', 1)[1].split('\n')[0]

    def sendTCPPackage(self):
        try:
            self.internetSocket = socket(AF_INET, SOCK_STREAM)
            #internetAddress = ('localhost', 3333)
            self.internetSocket.connect(('localhost', self.dstPort))
            if self.threeWayHandshake():
        	print 'Conection estabilished'
        except error, msg:
            print "Couldn't estabilishe connection"
            print msg


    def threeWayHandshake(self):
        if self.send_SYN():
            if self.receive_SYN_ACK():
                self.send_ACK()

    def send_SYN(self):
        print 'sending SYN'
        self.seq = 1
        self.ackSeq = 0
        #size of tcp header in 32bit word
        doff = 5 #4bit field: 5*4 = 20bytes
        self.window = 5840 #max window size allowed
        self.tcpChecksum = 0
        self.urgPtr = 0
        self.offsetRes = (doff << 4) + 0 #???

        #send SYN
        self.setFlags('SYN')
        jFlags = json.dumps(self.flags)
        self.tcpHeader = {'transportProtocol' : 'TCP',
                         'srcPort'  : self.srcPort,
                         'dstPort'  : self.dstPort,
                         'seq'      : self.seq,
                         'ackSeq'   : self.ackSeq,
                         'offsetRes': self.offsetRes,
                         'flags'    : jFlags,
                         'window'   : self.window,
                         'urgPtr'   : self.urgPtr,
                         'opcoes'   : 'opções',
                         'data'     : 'no data'}
        self.jTCPHeader = json.dumps(self.tcpHeader)
        self.tcpChecksum = self.calculateChecksum(self.jTCPHeader)
	#remount head with correct checksum
        #tcpHeaderTuple = (self.srcPort, self.dstPort, self.seq, self.ackSeq, self.offsetRes,
        #                  jFlags, self.window, self.tcpChecksum, self.urgPtr)
        self.tcpHeader['checksum'] = self.tcpChecksum
        self.jTCPHeader = json.dumps(self.tcpHeader)

	#self.headerLength = sys.getsizeof(tcpHeader)
        self.create_PDU('TCP')
        try:
            self.internetSocket.send(self.jTCPHeader)
            print 'TCPHeader sent'
            return True
        except:
            print 'Error sending SYN'
            return False

    def receive_SYN_ACK (self):
        self.expected_SYN_ACK = self.internetSocket.recv(1024)
        if self.expected_SYN_ACK:
            jFlags = self.flags
            print "Received SYN_ACK"
            package = json.loads(self.expected_SYN_ACK)
            self.tcpHeader = {'transportProtocol' : 'TCP',
                    'srcPort' : package['srcPort'],
                    'dstPort' : package['dstPort'],
                    'seq' : package['seq'],
                    'ackSeq' : package['ackSeq'],
                    'offsetRes' : package['offsetRes'],
                    'jFlags' : package['flags'],
                    'window' : package['window'],
                    'urgPtr' : package['urgPtr'],
                    'opcoes' : package['opcoes'],
                    'data' : package['data']}
            #(self.dstPort, self.srcPort, self.seq, self.ackSeq, self.offsetRes, jFlags,
            #    self.window, self.tcpChecksum, self.urgPtr) = json.loads(self.expected_SYN_ACK)
            self.flags = json.loads(jFlags)
            self.create_PDU('TCP')
            return True
        else:
            print "DID NOT Receive SYN_ACK"
            return False

    def send_ACK (self):
        print 'Sending ACK'
        self.setFlags('ACK')
        self.create_PDU('TCP')
        jFlags = json.dumps(self.flags)
        self.tcpHeader = {'transportProtocol' : 'TCP',
                         'srcPort'  : self.srcPort,
                         'dstPort'  : self.dstPort,
                         'seq'      : self.seq,
                         'ackSeq'   : self.ackSeq,
                         'offsetRes': self.offsetRes,
                         'flags'    : jFlags,
                         'window'   : self.window,
                         'urgPtr'   : self.urgPtr,
                         'opcoes'   : 'opções',
                         'data'     : 'no data'}
        self.jTCPHeader = json.dumps(self.tcpHeader)
        try:
            self.internetSocket.send(self.jTCPHeader)
            print 'ACK sent'
        except:
            print 'could not send ACK message'

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

            values = sorted(package.values()) #vector dict of values
            # loop taking 2 characters at a time
            m = hashlib.md5()
            for value in values:
                m.update(str(value))
            return m.hexdigest()
        except Exception as exc:
            exc_type, exc_object, exc_tb = sys.exc_info()
            line = exc_tb.tb_lineno
            print 'Error calculating checksum = ' + str(exc) + '\nLine = ' + str(line)

    def receiveFromApplicationLayer(self):
        self.applicationSock , _ = self.transportClientSocket.accept()
        #self.applicationPack = ''
        #while self.clientSocket.recv(1024):
        self.applicationPack  = self.applicationSock.recv(1024)
        print 'received from application layer, sending to internet'
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
        print 'wainting answer'
        self.answer = ''
        data = transportReceiver.recv(1024)
        while data:
            self.answer += data
            data = transportReceiver.recv(1024)
        transportReceiver.close()
        print 'Received answer'
        return True

    def sendAnswerToApplicationLayer(self):
        print 'Sending answer to app layer'
        while self.answer:
            sent = self.applicationSock.send(self.answer)
            self.answer = self.answer[sent:]
        self.applicationSock.close()
        print 'answer sent'
        return True

TransportClient()
