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



class NetworkLayer(QtCore.QThread):

    count = 0
    returnTo = ''

    def createNetworkPackage(self, sendTo, datagram):
        #TODO IF not access
        dstIP = sendTo[0]
        myNet = self.srcIP + '/' + self.mask
        if ipaddress.IPv4Address(unicode(dstIP)) in ipaddress.IPv4Network(unicode(myNet), strict=False):
            self.msg.emit('Same network')
            networkPackage = {'destiny' : sendTo, 'datagram' : datagram}
        else:
            self.msg.emit('Can\'t reach server. Package beeing redirected to gateway...')
            self.msg.emit('Router ip = ' + str(Layer.PhysicalRouter))
            networkPackage = {'destiny' : Layer.PhysicalRouter, 'datagram' : datagram}
        return json.dumps(networkPackage)

    def createDatagram(self, data, color):
        self.msg.emit('Creating IP datagram:')
        host = re.compile('Host:(.*?):')
        jPack = json.loads(data)
        m = host.search(jPack['data'])
	if self.returnTo == '':
        	self.dstIP = (Layer.PhysicalServer)[0]
	else:
		self.dstIP = self.returnTo
        self.srcIP = Common.myIP()[1]['addr']
        try:
            transportProtocol = jPack['transportProtocol']
            self.count += 1
            self.header = { 'version'		: 'IPV4',
                            'IHL'		: '0101', #min = 5
                            'ECN'		: '-x-',
                            'TOS'		: 'Differentiated Service', #-x-
                            'totalLength'	: '',
                            'ID'		: self.count,
                            'DF'		: 1,
                            'MF'		: 0,
                            'fragOffset'	: '-x-',
                            'TTL'		: 10,
                            'transportProtocol'	: transportProtocol,
                            'srcIP'		: self.srcIP,
                            'dstIP'		: str(self.dstIP),
                            'options'		: 'options',
                            'padding'		: 'padding' }
            self.datagram = self.header
            self.datagram['data'] = data
            self.datagram['totalLength'] = len(json.dumps(self.datagram))
            self.datagram['checksum'] = Common.calculateChecksum(json.dumps(self.datagram)),
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

        self.destiny = self.datagram['dstIP'], json.loads(self.datagram['data'])['dstPort']
        thisIP = Common.myIP()[1]['addr']
        self.count = self.datagram['ID']
	self.returnTo = self.datagram['srcIP']
        if str(self.destiny) == str(thisIP) or str(self.destiny) == 'localhost':
            return True
        else:
            #Layer.PhysicalServer = str(Layer.PhysicalServer[0]), int(json.loads(self.datagram['data'])['dstPort'])
            return False

    def consultTable(self, ip, mask):
        rt = RouterTable()
        destiny = rt.getRoute(ip,mask)
        self.msg.emit ('Redirecting to ip = ' + str(destiny))
        return str(destiny)



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


    def configure(self, mask, gateway):
        self.mask = mask
        #maintain router port as gateway port
        self.gateway = str(gateway), Layer.PhysicalRouter[1]
        if gateway != '':
            Layer.PhysicalRouter = self.gateway
            self.msg.emit ('Configurated Gateway = ' + str(self.gateway))
        else:
            self.msg.emit ('Gateway not configured.')
        self.msg.emit ('Configurated Mask = ' + str(self.mask))


    def end(self):
        try:
            self.networkClientSocket.close()
        except:
            self.msg.emit('Network client already closed')

class NetworkServer(NetworkLayer):
    mask = '255.255.255.224'

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
        self.msg.emit('Starting router network layer.')
        while True:
            self.package, success = Layer.receive(self.networkRouterSocket)
            if success:
                self.interpretPackage(self.package, 'blue')
                    #maintain port
                # return to physical layer
                self.srcIP = json.loads(self.package)['srcIP']
		dstIP = self.consultTable(self.srcIP, self.mask)
                self.msg.emit ('Source IP = ' + str(self.srcIP))
		transpPackage = json.loads(self.package)['data']
		port = json.loads(transpPackage)['dstPort']
		Layer.PhysicalServer = (dstIP, int(port))
		print 'PhysicalServer = ' + str(Layer.PhysicalServer)
                destiny = self.consultTable(self.srcIP, self.mask), Layer.PhysicalServer[1]
                networkPackage = self.createNetworkPackage(destiny, self.package)
                sent = Layer.send(Layer.PhysicalRouter, networkPackage)
                self.msg.emit ('Answer sent to physical layer')




    def end(self):
        try:
            self.networkServerSocket.close()
        except:
            self.msg.emit('Network server already closed')


