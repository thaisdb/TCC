#coding=utf-8
from socket import *
from bitstring import BitArray
from bitstring import BitStream
import json
from threading import Thread
from layer import Layer
from utils import Addresses as addr
from utils import RouterTable
import netifaces
#class Internet:

class NetworkLayer():

    @staticmethod
    def myIP():
        interfaces = netifaces.interfaces()
        for i in interfaces:
            if i == 'lo':
                continue
            iface = netifaces.ifaddresses(i).get(netifaces.AF_INET)
            if iface != None:
                for j in iface:
                    return j



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



class InternetServer(NetworkLayer):

    def __init__(self):
        #network = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #self.ip1 = IP(network)
        #network2 = raw_input("Enter an IP/mask(xxx.xxx.xxx.xxx/mmm): ")
        #if (network2 != network):
        #    self.ip2 = IP(network2)
        #    self.ipBelongsToNetwork()
        #self.routerTable('192.168.9.0')
        print '******************** INTERNET SERVER ********************'
        self.networkServerSocket = socket(AF_INET, SOCK_STREAM)
        self.networkServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkServerSocket.bind (addr.NetworkServer)
        self.networkServerSocket.listen(1)
        print 'listening'
        while True:
            if self.receiveFromPhysical():
                self.interpretPackage()
                self.sendToTransport()
                if self.receiveAnswer():
                    self.sendAnswerToPhysical()

    def ipBelongsToNetwork(self):
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
        if ip in rTable:
            print rTable[ip]
            return rTable[ip]
        else:
            print 'router'
            return 0

    def sendToTransport(self):
        transportSender = socket(AF_INET, SOCK_STREAM)
        transportSender.connect(addr.TransportServer)
        print 'Sending package request to transport layer'
        while self.package:
            sent = transportSender.send(self.package)
            self.package = self.package[sent:]
        transportSender.close()
        return True

    def receiveFromPhysical(self):
        physicalReceiver, _ = self.networkServerSocket.accept()
        self.package = ''
        data = physicalReceiver.recv(1024)
        while data:
            self.package += data
            data = physicalReceiver.recv(1024)
        print 'received request from physical server '
        physicalReceiver.close()
        return True

    def interpretPackage(self):
        self.package = json.loads(self.package)
        #src = client
        srcIP = self.package['srcIP']
        #dst = server
        dstIP = self.package['dstIP']
        print 'dstIP = ' + str(dstIP)
        thisIP = NetworkLayer.myIP()['addr']
        print 'thisIP = ' + str(thisIP)
        if str(dstIP) == str('nao'):
            print 'Right server'
            print 'dstIP = ' + str(dstIP)
            version = self.package['version']
            print 'version = ' + str(version)
            size = self.package['headerLength']
            print 'package size = ' + str(size)
            packId = self.package['ID']
            cFrag = self.package['fragOffset']
            cTemp = self.package['TTL']
            transportProtocol = self.package['transportProtocol']
            print 'transport protocol = ' + str(transportProtocol)
            crc = self.package['checksum']
            opcoes = self.package['options']
            self.package = self.package['data']
        else :
            print 'Not this server. Checking router table'
            rt = RouterTable('serverRouterTable.txt')
            rt.printRouterTable()
        #print 'result = ' + str(self.package)

                                                                                                                                                  #return Tru

    def receiveAnswer(self):
        networkReceiver, _ = self.networkServerSocket.accept()
        print 'Waiting answer...'
        self.answer = ''
        data = networkReceiver.recv(1024)
        while data:
            self.answer += data
            data = networkReceiver.recv(1024)
        networkReceiver.close()
        print 'Answer received'
        return True

    def sendAnswerToPhysical(self):
        networkSender = socket(AF_INET, SOCK_STREAM)
        networkSender.connect(addr.PhysicalServer)
        while self.answer:
            sent = networkSender.send(self.answer)
            self.answer = self.answer[sent:]
        networkSender.close()
        print 'Answer sent to physical layer'
        return True
InternetServer()
