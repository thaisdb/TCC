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
        self.browserSocket = socket(AF_INET, SOCK_STREAM)
        self.browserAdress = ('localhost', 1111)
        self.browserSocket.bind(self.browserAdress)
        self.browserSocket.listen(1)
        if (self.listenBrowser()) :
            self.sendToTransportLayer()
            #self.receiveFromTransport()
        self.browserSocket.close()
        self.transportSocket.close()

    def sendToTransportLayer(self):
        print 'sending'
        self.transportSocket = socket(AF_INET, SOCK_STREAM)
        transportAddress = ('localhost', 2222)
        self.transportSocket.connect(transportAddress)
        try:
            self.transportSocket.send(self.browserPack)
            print "Data sent to transport client!"
            self.transportSocket.close()
        except Exception, ex:
            print 'ERROR! Could not sand package'
            print ex

    def receiveFromTransport(self):
        try:
            print 'waiting answer'
            answer = self.transportSocket.recv(1024)
            print answer
        except:
            print 'received nothing'

    def listenBrowser(self):
        print "Wainting browser..."
        connection, browserAddress = self.browserSocket.accept()
        try:
            self.browserPack = connection.recv(1024)
            print self.browserPack
            return True
        except Exception, ex:
            print 'ERROR!' + str(ex)
            return False

ApplicationClient()
