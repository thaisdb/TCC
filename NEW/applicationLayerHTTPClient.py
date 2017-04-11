#coding=utf-8
import sys
import urllib
import os
from socket import *
import httplib
from threading import Thread
from layer import Layer
import webbrowser

#create connection

class ApplicationClient(Thread):
    # na verdade um server que escuta o browser
    browserPack = ' '
    def __init__(self):
        print '*' * 20 + ' APPLICATION CLIENT ' + '*' * 20
        self.browserSocket = socket(AF_INET, SOCK_STREAM)
        self.browserAdress = ('localhost', 1111)
        self.browserSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.browserSocket.bind(self.browserAdress)
        self.browserSocket.listen(1)
        browser = webbrowser.get('google-chrome')
        # 2 for oppening another tab on browser
        browser.open_new_tab('')
        while True:
            if (self.listenBrowser()) :
                self.sendToTransportLayer()
                if self.receiveFromTransport():
                #self.sendDirectly()
                #if self.receiveDirectly():
                    self.sendToBrowser()
        self.browserSocket.close()
        self.transportSocket.close()

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
        self.transportSocket = socket(AF_INET, SOCK_STREAM)
        transportAddress = ('localhost', 2222)
        self.transportSocket.connect(transportAddress)
        try:
            Layer.sendTo(self.transportSocket, self.browserPack)
            print "Data sent to transport client!"
            #self.transportSocket.close()
        except Exception, ex:
            print 'ERROR! Could not sand package'
            print ex

    def receiveFromTransport(self):
        print 'wainting answer'
        self.answer = ''
        data = self.transportSocket.recv(1024)
        while data:
            self.answer += data
            data = self.transportSocket.recv(1024)
        print self.answer
        return True

    def sendToBrowser(self):
        print 'sending answer to browser'
        data = self.answer
        while self.answer:
            sent = self.connection.send(self.answer)
            self.answer = self.answer[sent:]
        return True

    def listenBrowser(self):
        print "Wainting browser..."
        self.connection, browserAddr = self.browserSocket.accept()
        try:
            self.browserPack = self.connection.recv(1024)
            print self.browserPack
            return True
        except Exception, ex:
            print 'ERROR!' + str(ex)
            return False

ApplicationClient()
