from datetime import datetime as dt
import threading
import time
import sys
import netifaces as nt
from utils import Common
from PyQt4 import QtGui, QtCore
from newWindow      import Ui_NewMainWindow
from clientWidget   import Ui_ClientWidget
from myMainWindow   import Ui_MyMainWindow
from serverWidget   import Ui_ServerWidget
import os

#Server modules
from applicationLayerHTTPServer import ApplicationServer
from transportLayerServer       import TransportServer
from networkLayerServer         import NetworkServer
from physicalLayerServer        import PhysicalServer

#Client modules
from physicalLayerClient        import PhysicalClient
from networkLayerClient         import NetworkClient
from transportLayerClient       import TransportClient
from applicationLayerHTTPClient import ApplicationClient

class Main(QtGui.QMainWindow, Ui_NewMainWindow):
    def __init__(self, parent=None):
        super(Main, self).__init__(parent)
        self.setupUi(self)

        self.clientButton.clicked.connect(self.runClient)
        self.serverButton.clicked.connect(self.runServer)

        self.client = Client(self)
        self.stackedWidget.addWidget(self.client)

        self.server = Server(self)
        self.stackedWidget.addWidget(self.server)


    def runClient(self):
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.client))

    def runServer(self):
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.server))


class Client(QtGui.QWidget, Ui_ClientWidget):
    def __init__(self, parent=None):
        super(Client, self).__init__(parent)
        self.setupUi(self)

        self.startButton.clicked.connect(self.startClient)
        self.clearButton.clicked.connect(self.clearText)
        self.pingButton.clicked.connect(self.ping)

    def clearText(self):
        self.applicationLOut.setText('')
        self.transportLOut.setText('')
        self.networkLOut.setText('')
        self.physicalLOut.setText('')


    def startClient(self):
        self.applicationClient = ApplicationClient(self)
        self.applicationClient.msg.connect(self.doMsg)
        self.applicationClient.start()

        self.transportClient = TransportClient(self)
        self.transportClient.msg.connect(self.doMsg)
        self.transportClient.start()

        self.networkClient = NetworkClient(self)
        self.networkClient.msg.connect(self.doMsg)
        self.networkClient.start()

        self.physicalClient = PhysicalClient(self)
        self.physicalClient.msg.connect(self.doMsg)
        self.physicalClient.start()


    def doMsg (self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'ApplicationClient':
            self.applicationLOut.append(str(dt.now()))
            self.applicationLOut.append(msg)
        elif sender == 'TransportClient':
            self.transportLOut.append(str(dt.now()))
            self.transportLOut.append(msg)
        elif sender == 'NetworkClient':
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.append(msg)
        elif sender == 'PhysicalClient':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.append(msg)


    def ping (self):
        #TODO nmap -p <port> <ip>
        pong = os.system('ping -c 1 ' + str(self.serverIPInput.text()))
        if pong == 0:
            self.startButton.setEnabled(True)


class Server(QtGui.QWidget, Ui_ServerWidget):
    def __init__(self, parent=None):
        super(Server, self).__init__(parent)
        self.setupUi(self)

        self.serverIPLabel.setText(self.serverIPLabel.text() + ' ' + Common.myIP()['addr'])
        self.startButton.clicked.connect(self.startServer)

    def startServer(self):
        self.applicationServer = ApplicationServer(self)
        self.applicationServer.msg.connect(self.printMsg)
        self.applicationServer.start()

        self.transportServer = TransportClient(self)
        self.transportServer.msg.connect(self.printMsg)
        self.transportServer.start()

        self.networkServer = NetworkClient(self)
        self.networkServer.msg.connect(self.printMsg)
        self.networkServer.start()

        self.physicalServer = PhysicalClient(self)
        self.physicalServer.msg.connect(self.printMsg)
        self.physicalServer.start()

    def printMsg (self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'ApplicationServer':
            self.applicationLOut.append(str(dt.now()))
            self.applicationLOut.append(msg)
        elif sender == 'TransportServer':
            self.transportLOut.append(str(dt.now()))
            self.transportLOut.append(msg)
        elif sender == 'NetworkServer':
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.append(msg)
        elif sender == 'PhysicalServer':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.append(msg)

def main():
    app = QtGui.QApplication(sys.argv)
    form = Main()
    form.show()
    app.exec_()


if __name__ == '__main__':
    main()

