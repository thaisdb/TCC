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
from utils import PDUPrinter, RouterTable
from PyQt4 import QtCore
import ipaddress

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

class NetworkLayer(QtCore.QThread):

    count = 0

    def createNetworkPackage(self, sendTo, datagram):
        #TODO IF not access
        dstIP = sendTo[0]
        myNet = self.srcIP + '/' + self.mask
        if ipaddress.IPv4Address(unicode(dstIP)) in ipaddress.IPv4Network(unicode(myNet), strict=False):
            self.msg.emit('Same network')
            networkPackage = {'destiny' : Layer.PhysicalServer, 'datagram' : datagram}
        else:
            self.msg.emit('Can\'t reach server. Package beeing redirected to gateway...')
            Layer.PhysicalRouter = (Common.myIP()[1]['addr'], Layer.PhysicalRouter[1])
            print str(Layer.PhysicalRouter)
            networkPackage = {'destiny': Layer.PhysicalRouter, 'datagram': datagram}
        return json.dumps(networkPackage)

    def createDatagram(self, data, color):
        self.msg.emit('Creating IP datagram:')
        host = re.compile('Host:(.*?):')
        jPack = json.loads(data)
        m = host.search(jPack['data'])
        self.srcIP = Common.myIP()[1]['addr']
        self.dstIP = (Layer.PhysicalServer)[0]
        try:
            transportProtocol = jPack['transportProtocol']
            self.count += 1
            self.header = {'version':'IPV4',
                            'IHL':'0101', #min = 5
                            'ECN':'-x-',
                            'TOS': 'Differentiated Service', #-x-
                            'totalLength': '',
                            'ID': self.count,
                            'DF':1,
                            'MF':0,
                            'fragOffset':'-x-',
                            'TTL':10,
                            'transportProtocol': transportProtocol,
                            'checksum':'header checksum',
                            'srcIP': self.srcIP,
                            'dstIP': str(self.dstIP),
                            'options':'options',
                            'padding':'padding'}
            self.datagram = self.header
            self.datagram['data'] = data
            self.datagram['totalLength'] = len(json.dumps(self.datagram))

            self.html.emit(PDUPrinter.Datagram(self.datagram, color))
            return json.dumps(self.datagram)
        except Exception as exc:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            error = exc_tb.tb_frame
            line = exc_tb.tb_lineno
            fileName = error.f_code.co_filename
            print "Couldn't create datagram " + str(exc)
            print 'error line = ' + str(line)


    def interpretPackage(self, pack, color):
        self.datagram = json.loads(pack)
        self.msg.emit('Datagram received:')
        self.html.emit(PDUPrinter.Datagram(self.datagram, color))
        dstIP = self.datagram['dstIP']
        thisIP = Common.myIP()[1]['addr']
        if str(dstIP) == str(thisIP) or str(dstIP) == 'localhost':
            self.msg.emit ("IP verified. Right server!")
            return True
        else:
            self.msg.emit ("IP verified. Not this server.\nRediracting datagram...")
            return False

    def consultTable(self, ip):
        rt = RouterTable()
        return rt.getRoute(ip)

class NetworkClient(NetworkLayer):

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent = None):
        super(NetworkClient, self).__init__()


    def run(self):
        self.networkClientSocket = socket(AF_INET, SOCK_STREAM)
        self.networkClientSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkClientSocket.bind (Layer.NetworkClient)
        self.networkClientSocket.listen(1)
        try:
            while True:
                self.frame, success = Layer.receive(self.networkClientSocket)
                if success:
                    self.msg.emit ('Received UDP package from Transport Layer')
                    networkPackage = self.createNetworkPackage(Layer.PhysicalServer, self.createDatagram(self.frame, 'blue'))
                    Layer.send(Layer.PhysicalClient, networkPackage)
                    self.msg.emit('Datagram sent to Physical layer.')
                    self.answer, success = Layer.receive(self.networkClientSocket)
                    if success:
                        self.msg.emit('Received answer')
                        self.interpretPackage(self.answer, 'red')
                        sent = Layer.send(Layer.TransportClient, json.loads(self.answer)['data'])
                        self.msg.emit ('Sent msg to transport client ' + str(sent))
        except KeyboardInterrupt:
            print 'Shutting down Internet Layer Client'
            self.saveRouterTable()
            #self.transportSocket.close()
            self.networkClientSocket.close()


    #def configure(self, mask, gateway):
    def configure(self, mask):
        self.mask = mask
        self.gateway = Layer.PhysicalRouter
        self.msg.emit ('Configurated Mask = ' + str(self.mask))
        self.msg.emit ('Configurated Gatewat = ' + str(self.gateway))


    def end(self):
        try:
            self.networkClientSocket.close()
        except:
            self.msg.emit('Network client already closed')

class NetworkServer(NetworkLayer):
    mask = '255.255.255.0'

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(NetworkServer, self).__init__()

    def run(self):
        self.networkServerSocket = socket(AF_INET, SOCK_STREAM)
        self.networkServerSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkServerSocket.bind (Layer.NetworkServer)
        self.networkServerSocket.listen(1)
        while True:
            self.package, success = Layer.receive(self.networkServerSocket)
            if success:
                self.interpretPackage(self.package, 'blue')
                sent = Layer.send(Layer.TransportServer, self.datagram['data'])
                if sent:
                    self.answer, success = Layer.receive(self.networkServerSocket)
                    self.msg.emit ('Received answer')
                    networkPackage = self.createNetworkPackage(Layer.PhysicalClient,self.createDatagram(self.answer, 'red'))
                    sent = Layer.send(Layer.PhysicalServer, networkPackage)
                    self.msg.emit ('Answer sent to physical layer')




    def end(self):
        try:
            self.networkServerSocket.close()
        except:
            self.msg.emit('Network server already closed')

class NetworkRouter(NetworkLayer):
    mask = '255.255.255.0'

    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(NetworkRouter, self).__init__()

    def run(self):
        self.networkRouterSocket = socket(AF_INET, SOCK_STREAM)
        self.networkRouterSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.networkRouterSocket.bind (Layer.NetworkRouter)
        self.networkRouterSocket.listen(1)
        self.msg.emit('starting network router')
        while True:
            self.package, success = Layer.receive(self.networkRouterSocket)
            if success:
                if not self.interpretPackage(self.package, 'blue'):
                    #maintain port
                    destiny = self.consultTable(dstIP), Layer.PhysicalServer[1]

                # return to physical layer
                networkPackage = self.createNetworkPackage(destiny, self.createDatagram(self.answer, 'red'))
                sent = Layer.send(Layer.PhysicalRouter, networkPackage)
                self.msg.emit ('Answer sent to physical layer')




    def end(self):
        try:
            self.networkServerSocket.close()
        except:
            self.msg.emit('Network server already closed')


