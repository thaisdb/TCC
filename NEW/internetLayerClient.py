#coding=utf-8
from socket import *
from bitstring import BitArray
from bitstring import BitStream
import json
import re
from threading import Thread
from layer import Layer
import netifaces


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



class InternetClient(Thread):
    space = '\t\t'
    def __init__(self):
        #network = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #self.ip1 = IP(network)
        #network2 = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #if (network2 != network):
        #    self.ip2 = IP(network2)
        #    self.ipBelongsToNetwork()
        #self.routerTable('192.168.9.0')
        self.transportClientSocket = socket(AF_INET, SOCK_STREAM)
        self.transportClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.transportClientSocket.bind (('127.0.0.1', 3333))
        print self.space + '*' * 20 + ' INTENERT CLIENT ' + '*' * 20
        self.transportClientSocket.listen(1)

        print 'accepted connection'
        while True:
            if self.receiveFromTransport():
                self.createDatagram()
                #self.belongsToNetwork()
                self.toPhysical()
                if self.receiveFromPhysical():
                    self.sendToTransport()
        self.transportSocket.close()
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


    def checkRouterTable(self, ip):
        print 'routing'
        rTable = {'192.168.9.0': '127.0.0.1'}
        if ip in rTable:
            print rTable[ip]
            return rTable[ip]
        else:
            print 'router'
            return 0

    def toPhysical(self):
        self.physicalSocket = socket(AF_INET, SOCK_STREAM)
        self.physicalSocket.connect(('127.0.0.1', 4444))
        Layer.sendTo(self.physicalSocket, self.datagram)
        #self.physicalSocket.send(json.dumps(self.package))
        print 'sended package to physical'
        #print  json.dumps(self.package)
        return True

    def receiveFromTransport(self):
        self.transportSocket, addr = self.transportClientSocket.accept()
        self.package, success = Layer.receiveFrom(self.transportSocket)
            #print 'internet receiving from transport'
            #print self.space + 'listening'
            #print self.space + 'connected'
            #self.package = self.transportSocket.recv(1024)
            #print self.package
        print self.space + 'Received segment from transport layer'
        print self.package
        return success

    def createDatagram(self):
        host = re.compile('Host:(.*?):')
        m = host.search(self.package)
        if m:
            host = str(m.group(1))
            print "Host:" + host
            if host == 'localhost':
                dstIP = '127.0.0.1'
            else:
                dstIP = host
            print 'ip = ' + str(self.myIP())
            srcIP = self.myIP()['addr']
            print 'srcip = ' + str(srcIP)
        upperProtocol = int(json.loads(self.package)[0])
        if upperProtocol == 0:
            transportProtocol = 'UDP'
        else:
            transportProtocol = 'TCP'
        header = ('IPV4', 'ID', 'c. fragmentação', 'c. tempo', transportProtocol,'CRC', srcIP, dstIP, 'opcoes')
        header = json.dumps(header)
        self.datagram = ('IPV4', len(header), 'ID', 'c. fragmentação', 'c. tempo', transportProtocol,
            'CRC', srcIP, dstIP, 'opções', json.loads(self.package))
        self.datagram = json.dumps(self.datagram)


    def myIP(self):
        interfaces = netifaces.interfaces()
        for i in interfaces:
            if i == 'lo':
                continue
            iface = netifaces.ifaddresses(i).get(netifaces.AF_INET)
            if iface != None:
                for j in iface:
                    return j
         #           print j['addr']
        #return True

    def receiveFromPhysical(self):
        print self.space + "Waiting answer"
        self.answer, success = Layer.receiveFrom(self.physicalSocket)
        print self.space + 'answer received'
        return True

    def sendToTransport(self):
        Layer.sendTo(self.transportSocket, self.answer)
        print 'Answer sent'

#IP('198.176.0.32/18')
InternetClient()
