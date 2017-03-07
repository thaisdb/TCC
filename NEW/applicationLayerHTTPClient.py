import sys
#import psutil
import urllib
import os
from socket import *
import httplib
from threading import Thread
#create connection

class ApplicationClient(Thread):
    # na verdade um server que escuta o browser
    browserPack = ' '
    def __init__(self):
        print '*' * 20 + ' APPLICATION CLIENT ' + '*' * 20
        self.listenBrowser()
        self.sendToTransportLayer()

    def sendToTransportLayer(self):
        toTransportSocket = socket(AF_INET, SOCK_STREAM)
        transportAddress = ('localhost', 2222)
        toTransportSocket.connect(transportAddress)
        try:
            toTransportSocket.send(self.browserPack)
            print "Data sent to transport client!"
        except Exception, ex:
            print 'ERROR! Could not sand package'
            print ex

    def listenBrowser(self):
        browserSocket = socket(AF_INET, SOCK_STREAM)
        browserAdress = ('localhost', 1111)
        browserSocket.bind(browserAdress)
        browserSocket.listen(1)
        print "Wainting browser..."
        connection, browserAddress = browserSocket.accept()
        try:
            self.browserPack = connection.recv(1024)
            print self.browserPack
            browserSocket.close()
        except Exception, ex:
            print 'ERROR!' + str(ex)


ApplicationClient()
