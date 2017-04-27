#coding=utf-8
import sys
from socket import *
import json
from threading import Thread
from layer import Layer
import hashlib
from utils import Addresses as addr
from utils import PDUPrinter
#normal server port 99999


class TransportServer (Thread):
    SYN = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    ACK = {'cwr':0, 'ece':0, 'fin':0, 'syn':0, 'rst':0, 'psh':0, 'ack':1, 'urg':0}
    space = '\t'

    answer = ''

    def __init__(self):
        self.srcPort = 9999
        self.dstPort = 2222
        self.receiveFromInternet()

    def receiveFromInternet(self):
        try:
            self.transportServerSocket = socket(AF_INET, SOCK_STREAM)
            self.transportServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.transportServerSocket.bind(addr.TransportServer)
            print '********************** TRANSPORT SERVER **********************'
            self.transportServerSocket.listen(1)
            print 'Listening'
            while True:
                #self.threeWayHandshake()
                if self.receive_Data():
                    self.interpretSegment()
                    if self.sendToApplication():
                        if self.receiveAnswer():
                            self.sendAnswerToNetwork()
        except KeyboardInterrupt:
            print 'Shutting down transport server'
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print "Error! " + str(exc)
            print 'error line = ' + str(line)
        self.transportServerSocket.close()

    def threeWayHandshake(self):
        if self.receive_SYN():
            self.send_SYN_ACK()

    def receive_Data(self):
        networkReceiver, _ = self.transportServerSocket.accept()
        self.segment = ''
        data = networkReceiver.recv(1024)
        while data:
            self.segment += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'Received request from network'
        return True

    def sendAnswerToNetwork(self):
        transportSender = socket(AF_INET, SOCK_STREAM)
        transportSender.connect(addr.NetworkServer)
        print "ANSWER = \n" + str(self.answer)
        while self.answer:
            sent = transportSender.send(self.answer)
            self.answer = self.answer[sent:]
        transportSender.close()
        print 'Answer sent to internet layer'
        return True

    def receive_SYN(self):
        self.internetSocket, _ = self.tcpServerSocket.accept()
        print self.space + 'Connected!'
        print self.space + "Expecting SYN"
        expectSyn = self.internetSocket.recv(1024)
        self.clientPort, self.serverPort, self.seq, self.ackSeq, self.offsetRes,jFlags, window, checksum, urgPtr = json.loads(expectSyn)
        self.flags = json.loads(jFlags)
        print self.flags
        if self.flags == self.SYN:
            print self.space + "Received SYN package"
            return True
        else:
            self.verifyFlags('SYN')
            return False

    def send_SYN_ACK(self):
        print self.space + 'Sending SYN_ACK'
        self.setFlags('SYN_ACK')
        jFlags = json.dumps(self.flags)
        self.seq = 20
        self.offsetRes = 0
        self.window = 0
        self.tcpChecksum = 0
        self.urgPtr = 0
        TCPHeaderTuple = (self.srcPort, self.dstPort, self.seq, self.ackSeq,
                self.offsetRes, jFlags, self.window, self.tcpChecksum, self.urgPtr)
        jTCPHeader = json.dumps(TCPHeaderTuple)
        #self.headerLengh = sys.sizeof(jTCPHeader)
        self.internetSocket.send(jTCPHeader)

    def receive_ACK(self):
        expect_ACK = self.internetSocke.recv(1024)
        self.clientPort, self.serverPort, self.seq, self.ackSeq, self.offsetRes,
        jFlags, window, checksum, urgPtr = json.loads(expect_ACK)
        self.flags = json.loads(jFlags)
        #verifyFlags('ACK')
        print flags
        if self.ackSeq == self.seq + 1:
            print self.space + "Received ACK package"
            return True
        else:
            #diff = [k for k in flags if flags[k] != self.SYN[k]]
            #for k in diff:
            #    print k, ': received ', flags[k], '-> expected ', self.SYN[k]
            print self.space + "Acknowledgy missed"
            return False



    def setFlags(self, mode):
        self.flags = {'cwr':0, 'ece':0,
                    'fin':0, 'syn':0, 'rst':0,
                    'psh':0, 'ack':0, 'urg':0}
        if (mode == 'SYN_ACK'):
            self.ackSeq = self.seq + 1
            self.seq = 0
            self.flags['syn'] = 1
            self.flags['ack'] = 1

    def verifyFlags(self, mode):
        if (mode == 'SYN'):
            print self.space + 'DID NOT receive expected SYN'
            diff = [k for k in self.flags if self.flags[k] != self.SYN[k]]
            for k in diff:
                print self.space + 'Flag', k, ': received ', self.flags[k], '-> expected ', self.SYN[k]

        if (mode == 'ACK'):
            print self.space + 'DID NOT receive expected ACK'
            diff = [k for k in self.flags if self.flags[k] != self.ACK[k]]
            for k in diff:
                print self.space + 'Flag', k, ': received ', self.flags[k], '-> expected ', self.ACK[k]

    def interpretSegment(self):
        try:
            self.segment = json.loads(self.segment)

            #self.segment = {'transportProtocol' : self.package['transportProtocol']}
            #self.segment['srcPort']              = self.package['srcPort']
            #self.segment['dstPort']              = self.package['dstPort']
            #self.segment['comprimento']          = self.package['comprimento']
            self.segment['data']                 = json.loads(self.segment['data'])
            #self.segment['checksum']             = self.package['checksum']

            #print 'Received UDP Segment:'
            PDUPrinter.UDP(self.segment)
            checksum = self.segment['checksum']
            del self.segment['checksum']
            self.verifyChecksum(checksum)

            print 'request send to Application Server'

        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print self.space + "Couldn't interpret package: " + str(exc)
            print 'error line = ' + str(line)

    def verifyChecksum(self, receivedChecksum):
        try:
            values = sorted(self.segment.values())
            m = hashlib.md5()
            for value in values:
                m.update(str(value))
            if m.hexdigest() == receivedChecksum:
                print 'Checksum verificated successfully'
                return True
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print self.space + "Couldn't verify checksum: " + str(exc)
            print 'error line = ' + str(line)



    def sendToApplication(self):
        try:
            self.applicationSocket = socket(AF_INET, SOCK_STREAM)
            self.applicationSocket.connect(addr.ApplicationServer)
            while self.segment['data']:
                sent = self.applicationSocket.send(self.segment['data'])
                self.segment['data'] = self.segment['data'][sent:]
            print 'sent request to application'
            return True
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print "Error! " + str(exc)
            print 'error line = ' + str(line)

    def receiveAnswer(self):
        self.answer = ''
        data = self.applicationSocket.recv(1024)
        while data:
            self.answer += data
            data = self.applicationSocket.recv(1024)
        self.applicationSocket.close()
        print 'Received aswer from application'
        return True

TransportServer()
