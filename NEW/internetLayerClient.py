from socket import *
from bitstring import BitArray
from bitstring import BitStream
import json
from threading import Thread
#class Internet:

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
        self.transportSocket = socket(AF_INET, SOCK_STREAM)
        self.transportSocket.bind (('127.0.0.1', 3333))
        print self.space + '*' * 20 + ' INTENERT CLIENT ' + '*' * 20
        self.transportSocket.listen(1)
        self.clientSocket, addr = self.transportSocket.accept()
        print 'accepted connection'
        if self.receiveFromTransport():
            #self.belongsToNetwork()
            self.toPhysical()
        self.transportSocket.close()


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
        self.physicalSocket.send(json.dumps(self.package))
        print 'sended package to physical'
        print  json.dumps(self.package)

    def receiveFromTransport(self):
        try:
            print 'internet receiving from transport'
            #print self.space + 'listening'
            #print self.space + 'connected'
            self.package = self.clientSocket.recv(1024)
            #print self.package
            print self.space + 'Received segment from transport layer'
            return True
        except:
            print 'Did not receive request from transport'
            return False

InternetClient()
