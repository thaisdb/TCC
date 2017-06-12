#coding:utf-8
import sys
from socket import *
import json
from threading import Thread
from layer import Layer
import hashlib
from PyQt4 import QtCore
from utils import PDUPrinter
#normal server port 99999
from transportLayerClient import TransportLayer

class TransportServer (TransportLayer):
    TCPConnected = False
    appMsg = QtCore.pyqtSignal(str)
    appHtml = QtCore.pyqtSignal(str)

    connected = False
    justConnected = False

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
            self.transportServerSocket.bind(Layer.TransportServer)
            self.transportServerSocket.listen(1)
            print 'Listening...'
            while True:
                self.segment, success = Layer.receive(self.transportServerSocket)
                self.transportProtocol = json.loads(self.segment)['transportProtocol']
                self.msg.emit('Received a ' + self.transportProtocol + ' segment.')
                if success:
                    if self.transportProtocol == 'TCP':
                        if not self.interpretTCPSegment(self.segment):
                            self.errorMsg.emit('Error trying to interpret TCP segment')
                    else: #UDP protocol
                        self.interpretUDPSegment(self.segment)
                    self.sendToApplication()
                    if self.receiveAnswer():
                        self.createSegment(self.transportProtocol, self.applicationPack)
                        sent = Layer.send(Layer.NetworkServer, self.segment)
                        print 'Answer sent to internet layer'
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
                self.segment, success = Layer.receive(self.transportServerSocket)
                self.segment = json.loads(self.segment)
                if self.receive(self.ACK):
                    self.msg.emit('Three way handshake protocol established connection!')
                    #self.receive_Data()
                    return True
        return False


    def receivePack(self):
        self.msg.emit('Waiting data....')
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
                        'seq' : 0,
                        'ackSeq' : 1,
                        'offsetRes': 'offset',
                        'window': 'window',
                        'checksum': 'checksum',
                        'urgPtr': 'urgPtr',
                        'flags' : self.SYN_ACK,
                        'opcoes': 'opcoes',
                        'data' : 'NULL'}
        self.answer = json.dumps(tcpSegment)
        sent = Layer.send(Layer.NetworkServer, self.answer)
        if sent:
            self.msg.emit('Sent SYN_ACK to network layer.')
            return True
        return False

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
        self.msg.emit('Sending request to application server')
        print 'data = ' + self.segment['data']
        try:
            self.applicationSocket = socket(AF_INET, SOCK_STREAM)
            self.applicationSocket.connect(Layer.ApplicationServer)
            #self.segment['data'] = self.decode_base64(json.loads(self.segment['data']))
            self.appHtml.emit(PDUPrinter.HTTP(self.segment['data'], 'red'))
            while self.segment['data']:
                sent = self.applicationSocket.send(self.segment['data'])
                self.segment['data'] = self.segment['data'][sent:]
            self.msg.emit('Sent request to application.')
            #while self.segment['data']:
            #    sent = self.applicationSocket.send(self.segment['data'])
            #    self.segment['data'] = self.segment['data'][sent:]
            #self.msg.emit('sent request to application')
            return True
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print "Error! " + str(exc)
            print 'error line = ' + str(line)

    def receiveAnswer(self):
        self.msg.emit('Waiting answer from upper layer')
        self.applicationPack = ''
        data = self.applicationSocket.recv(1024)
        while data:
            self.applicationPack += data
            data = self.applicationSocket.recv(1024)
        self.applicationSocket.close()
        msg = ''
        for head in self.applicationPack.splitlines()[:6]:
            msg += head + '\n'
        self.appHtml.emit(PDUPrinter.HTTP(msg + '(...)', 'blue'))
        self.msg.emit('Received answer from application')
        return True

    def end(self):
        try:
            self.transportServerSocket.close()
        except:
            self.msg.emit('Transport server socket already closed.')
