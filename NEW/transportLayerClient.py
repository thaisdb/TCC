#coding: utf-8
import sys
import re
from socket import *
from struct import *
import json
from threading import Thread
from layer import Layer

class TransportClient(Thread):
    applicationPack = 'Teste de pacote, protocolo TCP'
    updPackage = ''
    tcpPackage = ''
    space = '\t'
    tcpProtocol = False
    def __init__(self):
        #TODO change ip
        self.dstPort = 3333
        self.srcPort = 2222
        print self.space + '*' * 20 + ' TRANSPORT CLIENT ' + '*' * 20
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        localAddress = ('localhost', 2222)
        self.applicationSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.applicationSocket.bind(localAddress)
        #while True:
        self.applicationSocket.listen(1)
        print self.space + 'listening'
        try:
            while True:
                mode = raw_input('Choose a transport protocol\n'
                        '[0] UDP \n[1] TCP\n: ')
                if mode == '0':
                    print 'UDP Protocol selected'
                    break
                elif mode == '1':
                    print 'TCP Protocol selected'
                    self.tcpProtocol = True
                    break
            while True:
                if self.receiveFromApplicationLayer():
                    if not self.tcpProtocol:
                        self.findPort()
                        self.sendUDPPackage()
                    else:
                        self.sendTCPPackage()
                    if self.receiveAnswerFromInternetLayer():
                        self.sendAnswerToApplicationLayer()
        except KeyboardInterrupt:
            self.applicationSocket.close()


    def sendUDPPackage(self):
        try:
            self.internetSocket = socket(AF_INET, SOCK_STREAM)
            self.internetSocket.connect(('127.0.0.1', 3333))
            #comprimento da mensagem http
            comprimento = len(self.applicationPack)
            self.dstPort = self.findPort()
            self.udpPackage = { 'transportProtocol' : 'UDP',
                                'srcPort' : self.srcPort,
                                'dstPort' : self.dstPort,
                                'comprimento' : comprimento,
                                'checksum' : 'checksum',
                                'data' : self.applicationPack }
            #(0, self.srcPort, self.dstPort, comprimento, 'checksum', self.applicationPack)
            #print self.udpPackage
            self.create_PDU('UDP')
            self.internetSocket.send(json.dumps(self.udpPackage))
            print 'Data sent'
            #internetSocket.send(pack)
            return True
        except Exception, ex:
            print 'ERROR! Coudn\'t send UDP package.'
            print ex
            return False
        #self.udpChecksum = 0
	#self.udpHeaderTuple = (self.srcPort, self.dstPort, self.udpChecksum)

    def findPort(self):
        port = re.compile('Host:(.*?):(.*?)')
        m = port.search(self.applicationPack)
        print m.group(1)


    def sendTCPPackage(self):
        try:
            self.internetSocket = socket(AF_INET, SOCK_STREAM)
            #internetAddress = ('localhost', 3333)
            self.internetSocket.connect(('localhost', self.dstPort))
            if self.threeWayHandshake():
        	print 'Conection estabilished'
                tcpProtocol = False
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
        #self.tcpChecksum = self.calculateChecksum(self.jTCPHeader)
	#remount head with correct checksum
        #tcpHeaderTuple = (self.srcPort, self.dstPort, self.seq, self.ackSeq, self.offsetRes,
        #                  jFlags, self.window, self.tcpChecksum, self.urgPtr)
        #self.tcpHeader = {'checksum' :'Checksum' }
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

    def create_PDU(self, mode):
        if mode == 'TCP':
            print  ('|' + '*' * 80 + '|\n' \
                    '| Porta de Origem = {0[srcPort]:^10} | Porta de Destino = {0[dstPort]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    '| Numero de sequencia = {0[seq]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    '| Numero de confirmação = {0[ackSeq]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    #TODO comprimento cabeçalho fixo
                    #TODO add flags
                    '| Comprimento do Cabeçalho = {0[offsetRes]:^5} | Tamanho da Janela = {0[window]:^10} !\n' \
                    '|' + '*' * 80 + '|\n' \
                    '| Checksum = checksum | Ponteiro para urgente = {0[urgPtr]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    '| Opções = {0[opcoes]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    #TODO formatar requisição http
                    '| Dados = Requisição HTTP |\n' \
                    '|' + '*' * 80 + '|').format(self.tcpHeader)
        else: #UDP
            print  ('|' + '*' * 80 + '|\n' \
                    '| Porta de Origem = {0[srcPort]:^10} | Porta de Destino = {0[dstPort]:^10} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    '| Comprimento do UDP = {0[comprimento]:^5} | Checksum do UDP = {0[checksum]:^5} |\n' \
                    '|' + '*' * 80 + '|\n' \
                    #todo formatar requisição http
                    '| Dados = Requisição HTTP |\n' \
                    '|' + '*' * 80 + '|').format(self.udpPackage)



    def calculateChecksum(self, msg):
        s = 0
        # loop taking 2 characters at a time
        for i in range(0, len(msg), 2):
            w = (ord(msg[i]) << 8) + (ord(msg[i+1]) )
            s = s + w
        s = (s>>16) + (s & 0xffff);
        #s = s + (s >> 16);
        #complement and mask to 4 byte shor
        s = ~s & 0xffff
        return s

    def receiveFromApplicationLayer(self):
        self.clientSocket, addr = self.applicationSocket.accept()
        #self.applicationPack = ''
        #while self.clientSocket.recv(1024):
        self.applicationPack = self.clientSocket.recv(1024)
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
        print 'wainting answer'
        self.answer = ''
        data = self.internetSocket.recv(1024)
        while data:
            self.answer += data
            data = self.internetSocket.recv(1024)
        print 'Received answer'
        return True

    def sendAnswerToApplicationLayer(self):
        print 'Sending answer to app layer'
        while self.answer:
            sent = self.clientSocket.send(self.answer)
            self.answer = self.answer[sent:]
        self.clientSocket.close()
        return True

TransportClient()
