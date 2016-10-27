import sys
import psutil
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
        transportAdress = ('localhost', 22222)
        toTransportSocket.bind(transportAdress)
        try:
            print "Sending request..."
            toTransportSocket.send(self.browserPack)
            print "Done!"
        except Exception as ex:
            print 'ERROR! Could not sand package'
            print ex

    def listenBrowser(self):
        browserSocket = socket(AF_INET, SOCK_STREAM)
        browserAdress = ('localhost', 11111)
        browserSocket.bind(browserAdress)
        browserSocket.listen(1)
        #while True:
        print "Wainting browser"
        connection, browserAddress = browserSocket.accept()
        print "Connected"
        try:
            print "Receiving..."
            while True:
               data = connection.recv(1024)
               self.browserPack += data
            print self.browserPack
        except Exception as ex:
            print 'ERROR!' + str(ex)


ch = clientHttp()
