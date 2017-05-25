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
from utils import Addresses as addr
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
    space = '\t\t'
    routerTable = {'ip_destino':'ip_roteado'}

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent = None):
        super(NetworkClient, self).__init__()


        #network = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #self.ip1 = IP(network)
        #network2 = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #if (network2 != network):
        #    self.ip2 = IP(network2)
        #    self.ipBelongsToNetwork()
        #self.routerTable('192.168.9.0')
    def run(self):
        self.networkClientSocket = socket(AF_INET, SOCK_STREAM)
        self.networkClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkClientSocket.bind (addr.NetworkClient)
        self.msg.emit('*' * 20 + ' INTENERT CLIENT ' + '*' * 20)
        self.networkClientSocket.listen(1)
        self.msg.emit('accepted connection')
        #self.loadRouterTable()
        try:
            while True:
                #mode = raw_input('Enter a corresponding number:\n[1]To access the router table.\n'\
                #        '[2]To start the layer activity\n : ')
                mode = '2'
                if mode == '1':
                    self.accessRouterTable()
                    break
                elif mode == '2':
                    while True:
                        if self.receiveFromTransport():
                            self.createDatagram()
                            #self.belongsToNetwork()
                            self.toPhysical()
                            if self.receiveFromPhysical():
                                self.sendToTransport()
                print 'Invalid input. Please choose between valid options.'
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

    def toPhysical(self):
        networkSender = socket(AF_INET, SOCK_STREAM)
        networkSender.connect(addr.PhysicalClient)
        while self.datagram:
            sent = networkSender.send(self.datagram)
            self.datagram = self.datagram[sent:]
        networkSender.close()
        print 'Sent datagram to physical layer'
        return True

    def receiveFromTransport(self):
        print 'Listening...\nWaiting upper layer'
        networkReceiver, _ = self.networkClientSocket.accept()
        self.frame = ''
        data = networkReceiver.recv(1024)
        while data:
            self.frame += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'Received segment from transport layer'
        return True

    def createDatagram(self):
        host = re.compile('Host:(.*?):')
        jPack = json.loads(self.frame)
        m = host.search(jPack['data'])
        srcIP = Common.myIP()[1]['addr']
        dstIP = (addr.PhysicalServer)[0]
        try:
            srcIP = self.myIP()['addr']
            transportProtocol = jPack['transportProtocol']
            #IHL = Internet Header Length
            #TOS = Type Of Service
            #TL = Total Length
            #TTL = Time To Live
            #HD = Header Checksum
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

            #header = ('IPV4', 'ID', 'c. fragmentação', 'c. tempo', transportProtocol,'CRC', srcIP, dstIP, 'opcoes')
            #header = json.dumps(header)
            #self.datagram = ('IPV4', len(header), 'ID', 'c. fragmentação', 'c. tempo', transportProtocol,
            #    'CRC', srcIP, dstIP, 'opções', json.loads(self.package))
            self.html.emit(PDUPrinter.Datagram(self.datagram))
            #self.html.emit()
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

    def receiveFromPhysical(self):
        networkReceiver, _ = self.networkClientSocket.accept()
        print "Waiting answer"
        self.answer = ''
        data = networkReceiver.recv(1024)
        while data:
            self.answer += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'answer received'
        return True

    def sendToTransport(self):
        networkSender = socket(AF_INET, SOCK_STREAM)
        networkSender.connect(addr.TransportClient)
        while self.answer:
            sent = networkSender.send(self.answer)
            self.answer = self.answer[sent:]
        networkSender.close()
        return True
        print 'Answer sent'



#IP('198.176.0.32/18')
