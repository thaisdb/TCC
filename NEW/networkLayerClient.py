#coding=utf-8
import sys
from socket import *
from bitstring import BitArray
from bitstring import BitStream
import json
import re
from utils import Common
from threading import Thread
from layer import Layer
import netifaces
from utils import PDUPrinter
from PyQt4 import QtCore

class IP:
    def __init__(self, network):
        ip, self.maskLen = network.split('/')
        self.ipInt = [int(x) for x in ip.split('.')]
        print 'ipInt =\t\t' + '.'.join(str(x) for x in self.ipInt)
        #self.ipBin = [bin(int(x)+256)[3:] for x in ip.split('.')]
        self.ipBin = [bin(x) for x in self.ipInt]
        #print "ipBin =\t\t" + '.'.join(str(i) for i in self.ipBin)
        #self.ipInt = [int(x, 2) for x in self.ipBin]

        self.ipLen = 32 #IPV4
        #ipLen = 128 #IPV6

        self.suffixMask = (1 << (self.ipLen - int(self.maskLen))) - 1
        #print "suffix = " + bin(suffixMask)
        self.netMask = ((1 << self.ipLen ) - 1) - self.suffixMask
        netMask =  BitArray(bin(self.netMask))
        #print "NETMASK = " + netMask.bin
        byte = 8
        self.netMaskBin = [netMask.bin[i:i+byte] for i in range(0, len(netMask.bin), byte)]
        print "netMaskBin =\t" + '.'.join(str(i) for i in self.netMaskBin)
        #print "ipNetwork" + str(ipNetwork)
        self.netMaskInt = [int(i,2) for i in self.netMaskBin]
        print 'netMaskInt =\t' + '.'.join(str(i) for i in self.netMaskInt)
        self.subnetBin = [bin(int(self.ipBin[i], 2) & int(self.netMaskBin[i], 2)) for i in range(0, len(self.ipBin))]
        self.subnetInt = [int(self.subnetBin[i], 2) for i in range (0, len(self.subnetBin))]
        #print 'subnetBin =\t' + '.'.join(str(i) for i in subnetBin)
        print 'subnetInt =\t' + '.'.join(str(i) for i in self.subnetInt)
        self.ipClass()






    def ipClass(self):
        if int(self.netMaskInt[0]) == 255:
            if int(self.netMaskInt[1]) == 255:
                if int(self.netMaskInt[2]) == 255:
                    print 'ip class = C'
                else :
                    print 'ip class = B'
            else:
                print 'ip class = A'
        else:
            print 'unknown class'

    #def validIp(self):



class NetworkClient(QtCore.QThread):

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent = None):
        super(NetworkClient, self).__init__()


    def run(self):
        self.networkClientSocket = socket(AF_INET, SOCK_STREAM)
        self.networkClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkClientSocket.bind (Layer.NetworkClient)
        self.msg.emit('*' * 20 + ' INTENERT CLIENT ' + '*' * 20)
        self.networkClientSocket.listen(1)
        self.msg.emit('Accepted connection')
        try:
            while True:
                self.frame, success = Layer.receive(self.networkClientSocket)
                if success:
                    self.createDatagram()
                    Layer.send(Layer.PhysicalClient, self.datagram)
                    self.answer, success = Layer.receive(self.networkClientSocket)
                    self.msg.emit('Received answer')
                    if success:
                        sent = Layer.send(Layer.TransportClient, self.answer)
                        self.msg.emit ('Sent msg to transport client ' + str(sent))
        except KeyboardInterrupt:
            print 'Shutting down Internet Layer Client'
            self.saveRouterTable()
            #self.transportSocket.close()
            self.physicalSocket.close()

    def belongsToNetwork(self):
        # ip1 AND subnetMask2

        ip1sm = [int(self.ip1.ipBin[i], 2) & int(self.ip1.netMaskBin[i], 2) for i in range(0, len(self.ip1.ipBin))]
        print ip1sm
        ip2sm = [int(self.ip2.ipBin[i], 2) & int(self.ip2.netMaskBin[i], 2) for i in range(0, len(self.ip2.ipBin))]
        print ip2sm
        if ip1sm == ip2sm:
            print "Same network"
        else:
            print "different network"
            step = self.checkRouterTable(ip1sm)
            if step == 0:
                print 'There is no match in router table'
            else:
                return step

    def checkRouterTable(self, ip):
        print 'routing'
        if ip in self.routerTable:
            print rTable[ip]
            return rTable[ip]
        else:
            print 'router'
            return 0



    def createDatagram(self):
        host = re.compile('Host:(.*?):')
        jPack = json.loads(self.frame)
        m = host.search(jPack['data'])
        srcIP = Common.myIP()[1]['addr']
        dstIP = (Layer.PhysicalServer)[0]
        try:
            srcIP = self.myIP()['addr']
            transportProtocol = jPack['transportProtocol']
            self.header = {'version':'IPV4',
                            'headerLength':5, #min
                            'TOS': 'Diferentiated Service',
                            'ID':'ID',
                            'DF':0,
                            'MF':1,
                            'fragOffset':'fragment offset',
                            'TTL':'time to live',
                            'transportProtocol': transportProtocol,
                            'checksum':'header checksum',
                            'srcIP': srcIP,
                            'dstIP': str(dstIP),
                            'options':'options',
                            'padding':'padding'}
            self.datagram = self.header
            self.datagram['TL'] = len(self.header)
            self.datagram['data'] = self.frame

            self.html.emit(PDUPrinter.Datagram(self.datagram))
            self.datagram = json.dumps(self.datagram)
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print self.space + "Couldn't create datagram " + str(exc)
            print 'error line = ' + str(line)


    def myIP(self):
        interfaces = netifaces.interfaces()
        for i in interfaces:
            if i == 'lo':
                continue
            iface = netifaces.ifaddresses(i).get(netifaces.AF_INET)
            if iface != None:
                for j in iface:
                    return j
        #return True




#class NetworkLayer():

