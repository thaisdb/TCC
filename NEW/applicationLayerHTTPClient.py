#coding=utf-8
import sys
import urllib
import os
from socket import *
import httplib
from threading import Thread
from layer import Layer
import webbrowser
from utils import Addresses as addr
#create connection

class ApplicationClient(Thread):
    # na verdade um server que escuta o browser
    browserMsg = ''
    package = ''
    answer = ''
    def __init__(self):
        print '*' * 20 + ' APPLICATION CLIENT ' + '*' * 20
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        self.applicationSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.applicationSocket.bind(addr.ApplicationClient)
        self.applicationSocket.listen(1)
        self.browser = webbrowser.get('google-chrome')
        # 2 for oppening another tab on browser
        self.browser.open_new_tab('')
        while True:
            if self.listenBrowser() :
                self.sendToTransportLayer()
                if self.receiveFromTransport():
                #self.sendDirectly()
                #if self.receiveDirectly():
                    self.sendToBrowser()
                self.package = ''
                self.answer = ''
        self.applicationSocket.close()

    #DEBUG
    def sendDirectly(self):
        self.directlySocket = socket(AF_INET, SOCK_STREAM)
        appAddr = ('localhost', 7777)
        self.directlySocket.connect(appAddr)
        self.directlySocket.send(self.browserPack)

    def receiveDirectly(self):
        print 'wainting answer'
        self.answer = ''
        data = self.directlySocket.recv(1024)
        while data:
            self.answer += data
            data = self.directlySocket.recv(1024)
        return True

    def sendToTransportLayer(self):
        print 'sending'
        self.transportSock = socket(AF_INET, SOCK_STREAM)
        self.transportSock.connect(addr.TransportClient)
        try:
            self.transportSock.send(self.browserMsg)
            print "Data sent to transport client!"
        except Exception, ex:
            print 'ERROR! Could not sand package'
            print ex
        return True

    def receiveFromTransport(self):
        print 'wainting answer'
        self.answer = ''
        data = self.transportSock.recv(1024)
        while data:
            self.answer += data
            data = self.transportSock.recv(1024)
        return True

    def sendToBrowser(self):
        print 'sending answer to browser'
        while self.answer:
            sent = self.connection.send(self.answer)
            self.answer = self.answer[sent:]
        self.connection.close()
        return True

    def listenBrowser(self):
        print "Wainting browser..."
        self.connection, _ = self.applicationSocket.accept()
        self.browserMsg = ''
        try:
            self.browserMsg = self.connection.recv(1024)
            print self.browserMsg
            return True
        except Exception, ex:
            print 'ERROR!' + str(ex)
            return False

ApplicationClient()
