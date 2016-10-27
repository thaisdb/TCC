import sys
from socket import *


class Transport:
    applicationPack = ''
    updPack = ''
    def __init__(self):
        self.receiveFromApplicationLayer()
        self.mountUDPPakage()
        '''self.appSocket = socket(AF_INET, SOCK_STREAM)
        fromApp = ('localhost', 11111)
        self.appSocket.bind(fromApp)
        self.appSocket.listen(1)
        print "listening"
        while True:
            print "Waiting Application Layer"
            connection, appAdress = self.appSocket.accept()
            print "Connected"
            try:
                data = connection.recv(1024)
                print "receiving package from application layer"
                while data:
                    self.appPackage += data
                    #pode?
                    data = connection.recv(1024)
                print self.appPackage
            except Exception as ex:
                print "ERROR! " + ex
       #self.threeWayHandshake()'''

    def mountUDPPackage(self):
        #source port
        self.udpPack += self.applicationSocket.getpeername()
        print self.udpPack
        #destination port

        #length

        #checksum

    def receiveFromApplicationLayer(self):
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        applicationAddress = ('localhost', 22222)
        self.applicationSocket.bind(applicationAddress)
        self.applicationSocket.listen(1)
        while True:
            print "Wainting Package from Application Layer"
            connection, applicationAddress = self.applicationSocket.accept()
            print "Connected"
            try:
                data = connection.recv(1024)
                #TODO check size of pack, while will be obsolete
                while data:
                    self.applicationPack += data
                    data = connection.recv(1024)
                #debug
                print self.applicationPack
            except Exception as ex:
                print 'ERROR! Didn\'t received package from Application Layer'
                print ex


''' def threeWayHandshake(self):
        #Connect to internet layer
        self.intSocket = socket(socket.AF_INET, socket.SOCK_STREAM)
        toInt = ('localhost', 22222)
        intSocket.connect(
'''

trans = Transport()

