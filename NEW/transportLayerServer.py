from socket import *
import json
from threading import Thread
from layer import Layer
#normal server port 99999


class TransportServer (Thread):
    SYN = {'cwr':0, 'ece':0, 'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    ACK = {'cwr':0, 'ece':0, 'fin':0, 'syn':0, 'rst':0, 'psh':0, 'ack':1, 'urg':0}
    space = '\t'
    def __init__(self):
        self.srcPort = 9999
        self.dstPort = 2222
        self.receiveFromInternet()

    def receiveFromInternet(self):
        self.tcpServerSocket = socket(AF_INET, SOCK_STREAM)
        try:
            self.tcpServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
            self.tcpServerSocket.bind(('localhost', 6666))
            print self.space + '********************** TRANSPORT SERVER **********************'
            self.tcpServerSocket.listen(1)
            print self.space + 'Listening'
            while True:
                # if self.threeWayHandshake()
                if self.receive_Data():
                    self.interpretSegment()
                    if self.sendToApplication():
                        if self.applicationAnswer():
                            self.sendAnswerToInternet()
        except KeyboardInterrupt:
            print 'Shutting down transport server'
        except Exception as err:
            print self.space + "not binded: " + str(err)
        self.tcpServerSocket.close()

    def threeWayHandshake(self):
        if self.receive_SYN():
            self.send_SYN_ACK()

    def receive_Data(self):
        self.internetSocket, self.addr = self.tcpServerSocket.accept()
        print self.space + 'Connected!'
        self.package, success = Layer.receiveFrom(self.internetSocket)
        print str(self.package)
        return success

    def sendAnswerToInternet(self):
        print self.answer
        Layer.sendTo(self.internetSocket, self.answer)
        print 'Answer sent to internet layer'
        return True

    def receive_SYN(self):
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
        self.package = json.loads(self.package)
        print self.space + 'type trasnport = ' + str(self.package[0])
        print self.space + 'porta de origem = ' + str(self.package[1])
        print self.space + 'porta de destino = ' + str(self.package[2])
        print self.space + 'comprimento = ' + str(self.package[3])
        print self.space + 'checksum = ' + str(self.package[4])
        self.package = self.package[5]

    def sendToApplication(self):
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        self.applicationSocket.connect(('127.0.0.1', 7777))
        Layer.sendTo(self.applicationSocket, self.package)
        print 'sent request to application'
        print self.package
        return True

    def applicationAnswer(self):
        self.answer = ''
        data = self.applicationSocket.recv(1024)
        while data:
            self.answer += data
            data = self.applicationSocket.recv(1024)
        print 'Received aswer from application'
        return True

TransportServer()
