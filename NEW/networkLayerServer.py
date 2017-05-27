#coding=utf-8
from socket import *
from bitstring import BitArray
from bitstring import BitStream
import json
from utils import Common
from PyQt4 import QtCore
from layer import Layer
from utils import Addresses as addr
from utils import RouterTable, PDUPrinter
import netifaces
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



class NetworkServer(QtCore.QThread):
    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(NetworkServer, self).__init__()

    def run(self):
        self.msg.emit('******************** NETWORK SERVER ********************')
        self.networkServerSocket = socket(AF_INET, SOCK_STREAM)
        self.networkServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkServerSocket.bind (addr.NetworkServer)
        self.networkServerSocket.listen(1)
        while True:
            self.package, success = Layer.receive(self.networkServerSocket)
            if success:
                self.interpretPackage()
                sent = Layer.send(addr.TransportServer, self.datagram['data'])
                if sent:
                    self.answer, success = Layer.receive(self.networkServerSocket)
                    sent = Layer.send(addr.PhysicalServer, self.answer)


    def ipBelongsToNetwork(self):
        # ip1 AND subnetMask2
        ip1sm = [int(self.ip1.ipBin[i], 2) & int(self.ip1.netMaskBin[i], 2) for i in range(0, len(self.ip1.ipBin))]
        print ip1sm
        ip2sm = [int(self.ip2.ipBin[i], 2) & int(self.ip2.netMaskBin[i], 2) for i in range(0, len(self.ip2.ipBin))]
        print ip2sm
        if ip1sm == ip2sm:
            self.msg.emit ("IP verified. Right server!")
        else:
            self.msg.emit ("IP verified. Not this server.\nRediracting datagram...")
            step = self.checkRouterTable(ip1sm)




    def interpretPackage(self):
        self.datagram = json.loads(self.package)
        self.msg.emit('Datagram received:')
        self.html.emit(PDUPrinter.Datagram(self.datagram))
        dstIP = self.datagram['dstIP']
        thisIP = Common.myIP()[1]['addr']
        if str(dstIP) == str(thisIP) or str(dstIP) == 'localhost':
            self.msg.emit ("IP verified. Right server!")
        else:
            self.msg.emit ("IP verified. Not this server.\nRediracting datagram...")
            #TODO send to gateway


