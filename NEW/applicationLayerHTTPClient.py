import sys
#import psutil
import urllib
import os
from socket import *
import httplib
#create connection

class clientHttp:
    # na verdade um server que escuta o browser
    browserPack = ' '
    def __init__(self):
        self.listenBrowser()
        print self.browserPack
        self.sendToTransportLayer()

    def sendToTransportLayer(self):
        toTransportSocket = socket(AF_INET, SOCK_STREAM)
        transportAdress = ('localhost', 2222)
        toTransportSocket.connect(transportAdress)
        try:
            print "Sending package..."
            toTransportSocket.send(self.browserPack)
            print "Done!"
        except Exception, ex:
            print 'ERROR! Could not sand package'
            print ex

    def listenBrowser(self):
        browserSocket = socket(AF_INET, SOCK_STREAM)
        browserAdress = ('localhost', 1111)
        browserSocket.bind(browserAdress)
        browserSocket.listen(1)
        #while True:
        print "Wainting browser"
        connection, browserAddress = browserSocket.accept()
        print "Connected"
        try:
            print "Receiving..."
            self.browserPack = connection.recv(1024)
            print self.browserPack
        except Exception, ex:
            print 'ERROR!' + str(ex)


ch = clientHttp()
