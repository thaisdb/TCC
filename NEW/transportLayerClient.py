import sys
from socket import *
from struct import *

class Transport:
    applicationPack = 'Teste de pacote, protocolo TCP'
    updPack = ''
    tcpPack = ''
    def __init__(self):
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
            udpSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)
            udpSocket.sendto(self.test, ('127.0.0.1', 3333))
        except Exception, ex:
            print 'ERROR! Coudn\'t sand UDP package.'
            print ex

    def sendTCPPackage(self):
        try:
            tcpSocket = socket(AF_INET, SOCK_RAW, IPPROTO_TCP)
        except error, msg:
            print "Couldn't create the socket"
            print msg
        src_ip = 'localhost'
        dst_ip = 'localhost'


        #TCP header fiels
        src_port = 2222
        #use testPackage
        dst_port = 9999 #33333
        seq = 454
        ack_seq = 0
        doff = 5 #4bit field, size of tcp header: 5*4 = 20bytes

        #tcp flags SYN
        fin, syn, rst, psh, ack, urg = 0, 1, 0, 0, 0, 0
        #htons = Convert 32-bit positive integers from host to network byte order.
        window = htons(5840) #max window size allowed
        check = 0
        urg_ptr = 0

        offset_res = (doff << 4) + 0
        flags = (fin + (syn << 1) + (rst << 2) + (psh << 3) + (ack << 4) + (urg << 5))

        # the ! in the pack format string means network order
        tcp_header = pack('!HHLLBBHHH', src_port, dst_port, seq, ack_seq, offset_res, flags, window, check, urg_ptr)

        #pseudo header fields
        src_addr = inet_aton('127.0.0.1')
        dst_addr = inet_aton('127.0.0.1')
        place_holder = 0
        protocol = IPPROTO_TCP
        tcp_length = len(tcp_header) + len(self.applicationPack)

        psh = pack('!4s4sBBH1', src_addr, dst_addr, place_holder, protocol, tcp_length)
        psh = psh + tcp_header + self.applicationPack

        tcp_checksum = self.calculateChecksum(psh)
        print 'TCP checksum = ' + str(tcp_checksum)

        # remake tcp header with correct checksum
        tcp_header = pack('!HHLLBBH', src_port, dst_port, seq, ack_seq, offset_res, flags, window) + pack('H', tcp_checksum) + pack('!H', urg_ptr)

        # full package - syn packets don't have any data
        self.tcpPack = tcp_header + self.applicationPack
        print '******TCP-PACK******'
        print self.tcpPack
        # the port specified has no effect(=0)????
        tcpSocket.sendto(self.tcpPack, ('127.0.0.1', 0))
        print 'Sent'
        tcpSocket.close()
        '''#send
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

