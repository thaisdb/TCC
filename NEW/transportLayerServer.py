from socket import *
import json
#normal server port 99999


class Transport:
    SYN = {'fin':0, 'syn':1, 'rst':0, 'psh':0, 'ack':0, 'urg':0}
    def __init__(self):
        self.tcpServerSocket = socket(AF_INET, SOCK_STREAM)
        try:
            self.tcpServerSocket.bind(('localhost', 9999))
        except:
            print "not binded"
        self.tcpServerSocket.listen(1)
        print 'Listening'
        self.conn, addr = self.tcpServerSocket.accept()
        print 'Client ' + str(addr) + ' connected'
        if self.threeWayHandshake():
            packet = conn.recv(1024)

    def threeWayHandshake(self):
        #Receive SYN
        expectSyn = self.conn.recv(1024)
        self.clientPort, self.serverPort, seq, ackSeq, offsetRes, flags, window, checksum = json.loads(expectSyn)
        flags = json.loads(flags)
        print flags
        if flags == SYN:
            print "Received SYN package"
        else:
            diff = [k for k in flags if flags[k] != SYN[k]]
            for k in diff:
                print k, ': received ', flags[k], '-> expected ', SYN[k]


tsp = Transport()
