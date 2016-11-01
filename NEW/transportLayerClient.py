import sys
from socket import *
from struct import *
import json
class Transport:
    applicationPack = 'Teste de pacote, protocolo TCP'
    updPackage = ''
    tcpPackage = ''
    def __init__(self):
        self.dstPort = 9999
        self.srcPort = 2222
        self.transpServerAddress = ('localhost', self.dstPort)

        #self.receiveFromApplicationLayer()
        #self.createTest()
        #sendChoice = raw_input("Choose the protocol to use:\n
        #                        [1] UDP \t [2] TCP")
        #if int(sendChoice) == 1:
        #    self.sendUDPPackage()
        #else:
        self.sendTCPPackage()



    def sendUDPPackage(self):
        try:
            udpSocket = socket(AF_INET, SOCK_DGRAM)
            udpSocket.sendto(self.applicationPack, self.transpServerAddress)
        except Exception, ex:
            print 'ERROR! Coudn\'t sand UDP package.'
            print ex

    def setFlags(self, mode):
        #reboot tcp flags
        self.flags = {'cwr':0, 'ece':0,
                      'fin':0, 'syn':0, 'rst':0,
                      'psh':0, 'ack':0, 'urg':0}
        if mode == 'SYN':
            self.flags['syn'] = 1
        elif mode == 'ACK':
            self.flags['ack'] = 1
        else: #SYN-ACK
            self.flags['syn'] = 1
            self.flags['ack'] = 1

    def threeWayHandshake(self):
        self.seq = 454
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
        tcpHeaderTuple = (self.srcPort, self.dstPort, self.seq, self.ackSeq, self.offsetRes,
                          jFlags, self.window, self.tcpChecksum, self.urgPtr)
        self.jTCPHeader = json.dumps(tcpHeaderTuple)
        self.headerLength = sys.getsizeof(tcpHeaderTuple)
        self.createPDU('TCP')
        self.tcpSocket.send(tcpHeader)
        self.resp = self.tcpSocket.recv(1024)

    def createPDU(self, mode):
        if mode == 'TCP':
            print '|******************************************************************************************|'
            print '|          Porta de Origem = ',  self.srcPort, '          |          Porta de Destino = ', self.dstPort, '          |'
            print '|******************************************************************************************|'
            print '|                                Numero de sequencia = ', self.seq, '                               |'
            print '|******************************************************************************************|'
            print '|                                Numero de confirmacao = ', self.ackSeq, '                               |'
            print '|******************************************************************************************|'
            print '|    Comprimento    |       | C | E | U | A | P | R | S | F |           Tamanho            |'
            print '|    do cabecalho   |       | W | C | R | C | S | S | Y | I |             da               |'
            print '|         =         |       | R | E | G | K | H | T | N | N |           Janela             |'
            print '|       ', self.headerLength, '       |       |', self.flags['cwr'], '|', self.flags['ece'], '|',\
                                                   self.flags['urg'], '|', self.flags['ack'], '|',\
                                                   self.flags['psh'], '|', self.flags['rst'], '|',\
                                                   self.flags['syn'], '|', self.flags['fin'], '|                              |'
            print '|******************************************************************************************|'
            print '|                Checksum = ', self.tcpChecksum, '              |            Ponteiro para urg.               |'
            print '|******************************************************************************************|'
            print '|                                         Opcoes                                           |'
            print '|******************************************************************************************|'
            print '|                                                                                          |'
            print '|                                  Dados = Requisicao HTTP                                 |'
            print '|                                                                                          |'
            print '|******************************************************************************************|'
        else: #UDP
            print '|******************************************************************************************|'
            print '|          Porta de Origem = ',  self.srcPort, '          |          Porta de Destino = ', self.dstPort, '          |'
            print '|******************************************************************************************|'
            print '|        Comprimento do UDP = ',  self.srcPort, '         |           Checksum do UDP = ', self.dstPort, '          |'
            print '|******************************************************************************************|'
            print '|                                                                                          |'
            print '|                                  Dados = Requisicao HTTP                                 |'
            print '|                                                                                          |'
            print '|******************************************************************************************|'



    def sendTCPPackage(self):
        try:
            self.tcpSocket = socket(AF_INET, SOCK_STREAM)
            #internetAddress = ('localhost', 3333)
            self.tcpSocket.connect(self.transpServerAddress)

        except error, msg:
            print "Couldn't create the socket"
            print msg

        self.threeWayHandshake()
        '''flags = json.dumps(self.flags)
        testTuple = (self., flags)
        print testTuple
        tcppack = json.dumps(testTuple)
        self.tcpSocket.send(tcppack)'''
        print 'sent'



        '''if self.treeWayHandshake():

        #TCP header fiels
        self.srcPort = 2222
        #use testServer
        self.dstPort = 9999
        #internert layer port
        #dst_port = 3333
       appPackTuple = (self.applicationPack,)
        tcpPackage = tcpHeader + appPackTuple

        tcpChecksum = self.calculateChecksum(tcpPackage)
        print 'TCP checksum = ' + str(tcpChecksum)

        # remake tcp header with correct checksum
        tcpHeader = (srcPort, dstPort, seq, ackSeq, offsetRes, flags, window, tcpChecksum, urgPtr)
        strHeader = ''
        for field in tcpHeader:
            strHeader += (str(field) + '_')
        print strHeader

        # full package - syn packets don't have any data
        self.tcpPackage = strHeader + '\n' + self.applicationPack
        print '******TCP-PACK******'
        print self.tcpPackage
        #print self.applicationPack
        # the port specified has no effect(=0)????
        self.tcpSocket.send(self.tcpPackage)
        print 'Sent'
        self.tcpSocket.close()
        #send
        #get response
        #check response values
        if  #(TCP flags SYN-ACK
            #check flags and ack_seq + 1
            #urg, ack, psh, rst, syn, fin = 0, 1, 0, 0, 1, 0)

            #than send:
            #TCP flags ACK
            urg, ack, psh, rst, syn, fin = 0, 1, 0, 0, 0, 0



        except Exception as ex:
            print 'ERROR! Coudn\'t sand TCP package.'
            print ex'''



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
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        localAddress = ('localhost', 2222)
        self.applicationSocket.bind(localAddress)
        self.applicationSocket.listen(1)
        print "Wainting Package from Application Layer"
        connection, applicationAddress = self.applicationSocket.accept()
        print "Connected"
        try:
            self.applicationPack = connection.recv(1024)
            #print self.applicationPack
            #TODO check size of pack, while will be obsolete
            #while data:
            #    self.applicationPack += data
            #    data = connection.recv(1024)
            #debug
            #self.applicationPack
        except Exception, ex:
            print 'ERROR! Didn\'t received package from Application Layer'
            print ex

    ''' def threeWayHandshake(self):
        #Connect to internet layer
        self.intSocket = socket(socket.AF_INET, socket.SOCK_STREAM)
        toInt = ('localhost', 22222)
        intSocket.connect(
'''

trans = Transport()

