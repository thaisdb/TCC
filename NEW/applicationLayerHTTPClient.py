#coding:utf-8
import sys
import urllib
import os
from socket import *
import httplib
from threading import Thread
from layer import Layer
import webbrowser
from PyQt4 import QtCore
from PyQt4.QtCore import QThread
#create connection

class ApplicationClient(QtCore.QThread):
    # na verdade um server que escuta o browser
    browserMsg = ''
    package = ''
    answer = ''

    go = False
    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    def __init__(self, parent=None):
        super(ApplicationClient, self).__init__()



    def run(self, wait = False):
        self.msg.emit('*' * 20 + ' APPLICATION CLIENT ' + '*' * 20)
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        self.applicationSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.applicationSocket.bind(Layer.ApplicationClient)
        self.applicationSocket.listen(1)
        self.browser = webbrowser.get('google-chrome')
        self.msg.emit('Wainting browser...')
        # 2 for oppening another tab on browser
        self.browser.open_new_tab('')
        while True:
            if self.listenBrowser() :
                if self.go == True:
                    self.setGo
                else:
                    self.sendToTransportLayer()
                    if self.receiveFromTransport():
                        self.sendToBrowser()
                    self.package = ''
                    self.answer = ''
        self.applicationSocket.close()


    def sendToTransportLayer(self):
        self.transportSock = socket(AF_INET, SOCK_STREAM)
        self.transportSock.connect(Layer.TransportClient)
        try:
            self.transportSock.send(self.browserMsg)
            self.msg.emit('Request sent to Transport Layer')
        except Exception, ex:
            self.msg.emit ('ERROR! Could not sand package')
            print ex
        return True

    def receiveFromTransport(self):
        self.msg.emit('Waiting answer...')
        self.answer = ''
        data = self.transportSock.recv(1024)
        while data:
            self.answer += data
            data = self.transportSock.recv(1024)
        return True

    def sendToBrowser(self):
        while self.answer:
            sent = self.connection.send(self.answer)
            self.answer = self.answer[sent:]
        self.msg.emit('Answer sent to browser')
        self.connection.close()
        return True

    def listenBrowser(self):
        self.connection, _ = self.applicationSocket.accept()
        self.browserMsg = ''
        try:
            self.browserMsg = self.connection.recv(1024)
            self.msg.emit(self.browserMsg)
            return True
        except Exception, ex:
            self.msg.emit('ERROR!' + str(ex))
            return False

    def setGo(self):
        self.sendToTransportLayer()
        if self.receiveFromTransport():
            self.sendToBrowser()
        self.package = ''
        self.answer = ''

    def stepMode(self, mode):
        self.go = mode

ApplicationClient()
