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
from utils import PDUPrinter
import time
import json
from subprocess import Popen
from selenium import webdriver
#create connection

class ApplicationClient(QtCore.QThread):
    # na verdade um server que escuta o browser
    browserMsg = ''
    package = ''
    answer = ''

    go = False
    msg = QtCore.pyqtSignal(str)
    html = QtCore.pyqtSignal(str)
    time = QtCore.pyqtSignal(float)
    waitClick = QtCore.pyqtSignal()

    def __init__(self, parent=None):
        super(ApplicationClient, self).__init__()



    def run(self, wait = False):
        self.applicationSocket = socket(AF_INET, SOCK_STREAM)
        self.applicationSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
        self.applicationSocket.bind(Layer.ApplicationClient)
        self.applicationSocket.listen(1)
        self.msg.emit('Opening browser...')
        self.browser = webdriver.Chrome('/usr/local/bin/chromedriver')
        self.pid = self.browser.service.process.pid
        self.msg.emit('Browser process ID = ' + str(self.pid) +
                '.\nWaiting request from browser...')
        while True:
                if not self.go:
                    self.setGo()
                else:
                    QCoreApplication.processEvents()


        self.applicationSocket.close()

    def end(self):
        self.applicationSocket.close()

    def sendToTransportLayer(self):
        self.transportSock = socket(AF_INET, SOCK_STREAM)
        self.transportSock.connect(Layer.TransportClient)
        pack = {'pid':self.pid, 'request':self.browserMsg}
        pack = json.dumps(pack)
        try:
            self.transportSock.send(pack)
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
        msg = ''
        for head in self.answer.splitlines()[:6]:
            msg += head + '\n'
        self.html.emit(PDUPrinter.HTTP(msg + '(...)', 'red'))
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
            self.msg.emit('Browser request received:')
            self.html.emit(PDUPrinter.HTTP(self.browserMsg, 'blue'))
            return True
        except Exception, ex:
            self.msg.emit('ERROR!' + str(ex))
            return False


    @QtCore.pyqtSlot()
    def setGo(self):
        start = time.time()
        if self.listenBrowser() :
            self.msg.emit('Waiting for confirmation command to proceed with the request...')
            self.sendToTransportLayer()
            if self.receiveFromTransport():
                self.sendToBrowser()
            self.time.emit(time.time() - start)
            self.package = ''
            self.answer = ''
            return True

    def stepMode(self, mode):
        self.go = mode


