#coding=utf-8
import sys
from socket import *
import json
from threading import Thread
from layer import Layer
import hashlib
from PyQt4 import QtCore
from utils import Addresses as addr
from utils import PDUPrinter
#normal server port 99999


class TransportServer (QtCore.QThread):
    SYN     = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    ACK     = {'cwr':0, 'ece':0, 'fin':0, 'syn':0, 'rst':0, 'psh':0, 'ack':1, 'urg':0}
    SYN_ACK = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':1, 'urg':0}

    connected = False
    justConnected = False

    answer = ''
    msg = QtCore.pyqtSignal(str)
    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(TransportServer, self).__init__()

    def run(self):
        self.srcPort = 9999
        self.dstPort = 2222
        self.receiveFromInternet()

    def receiveFromInternet(self):
        try:
            self.transportServerSocket = socket(AF_INET, SOCK_STREAM)
            self.transportServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.transportServerSocket.bind(addr.TransportServer)
            self.msg.emit('********************** TRANSPORT SERVER **********************')
            self.transportServerSocket.listen(1)
            print 'Listening'
            while True:
                if self.receive_Data():
                    #interpret inclui verificação protocolo de trasporte
                    if self.transportProtocol == 'TCP':
                        self.interpretSegment()
                        if self.justConnected:
                            continue
                    else:
                        self.interpretUDPSegment()
                        self.sendToApplication():
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
        if self.receive(self.SYN):
            if self.send_SYN_ACK():
                self.receive_Data()
                self.segment = json.loads(self.segment)
                if self.receive(self.ACK):
                    self.msg.emit('Three way handshake protocol established connection!')
                    return True
        return False


    def receive_Data(self):
        networkReceiver, _ = self.transportServerSocket.accept()
        self.segment = ''
        data = networkReceiver.recv(1024)
        while data:
            self.segment += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'Received request from network'
        self.transportProtocol = json.loads(self.segment)['transportProtocol']
        self.msg.emit('Received a ' + self.transportProtocol + ' segment.')
        return True

    def sendAnswerToNetwork(self):
        transportSender = socket(AF_INET, SOCK_STREAM)
        transportSender.connect(addr.NetworkServer)
        while self.answer:
            sent = transportSender.send(self.answer)
            self.answer = self.answer[sent:]
        transportSender.close()
        print 'Answer sent to internet layer'
        return True

    def receive(self, flagMode):
        self.flags = self.segment['flags']
        print str(self.flags)
        if self.flags == flagMode:
            self.msg.emit('Received '+ str(flagMode) + '!')
            return True
        else:
            return False

    def send_SYN_ACK(self):
        self.msg.emit('Sending SYN_ACK')
        tcpSegment = {'transportProtocol': 'TCP',
                        'srcPort': self.srcPort,
                        'dstPort' : self.dstPort,
                        'seq' : 'seq',
                        'ackSeq' : 'ackSeq',
                        'offsetRes': 'offset',
                        'window': 'window',
                        'checksum': 'checksum',
                        'urgPtr': 'urgPtr',
                        'flags' : self.SYN_ACK,
                        'opcoes': 'opcoes',
                        'data' : 'NULL'}
        self.answer = json.dumps(tcpSegment)
        self.sendAnswerToNetwork()
        return True

    def receive_ACK(self):
        self.segment
        tcpSegment = {'transportProtocol': 'TCP',
                        'srcPort': self.srcPort,
                        'dstPort' : self.dstPort,
                        'seq' : 'seq',
                        'ackSeq' : 'ackSeq',
                        'offsetRes': 'offset',
                        'window': 'window',
                        'checksum': 'checksum',
                        'urgPtr': 'urgPtr',
                        'flags' : self.setFlags('SYN_ACK'),
                        'opcoes': 'opcoes',
                        'data' : 'NULL'}
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
            #self.ackSeq = self.seq + 1
            #self.seq = 0
            self.flags['syn'] = 1
            self.flags['ack'] = 1
        return self.flags

    def interpretTCPSegment(self):
        try:
            self.segment = json.loads(self.segment)
            if self.segment['transportProtocol'] == 'UDP':
            else: #TCP segment
                self.msg.emit('TCP connection requested.')
                if not self.connected:
                    self.connected = self.threeWayHandshake()
                    self.justConnected = True
                    if not self.connected:
                        self.errorMsg.emit('Couldn\'t established TCP connection')
                        raise
                    PDUPrinter.TCP(self.segment)
                    return True
                else:
                    self.justConnected = False
                    PDUPrinter.TCP(self.segment)
                    print 'connected'
                    #pacote tcp normal
                    return True

        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit("Couldn't interpret package: " + str(exc))
            self.errorMsg.emit('error line = ' + str(line)))

    def interpretUDPSegment(self):
        try:
            self.segment = json.loads(self.segment)
            PDUPrinter.UDP(self.segment)

            checksum = self.segment['checksum']
            del self.segment['checksum']
            self.verifyChecksum(checksum)

            self.segment['data'] = json.loads(self.segment['data'])
            print 'request send to Application Server'
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            self.errorMsg.emit("Couldn't interpret package: " + str(exc))
            self.errorMsg.emit('error line = ' + str(line)))


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
