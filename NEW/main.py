from datetime import datetime as dt
import threading
import time
import sys
import netifaces as nt
import socket
from utils import Common, RouterTable
from PyQt4 import QtGui, QtCore
from newWindow      import Ui_NewMainWindow
from clientWidget   import Ui_ClientWidget
from serverWidget   import Ui_ServerWidget
from routerWidget   import Ui_RouterWidget
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

#class raiseException(Exception):
#    def __init__(self, exc):
#        Exception.__init__(self, exc)


class Main(QtGui.QMainWindow, Ui_NewMainWindow):
    def __init__(self, parent=None):
        super(Main, self).__init__(parent)
        self.setupUi(self)


        try:
            self.client = Client(self)
            self.stackedWidget.addWidget(self.client)
            self.client.toolButton.clicked.connect(self.backToMain)
            self.client.errorMsg.connect(self.showException)

            self.server = Server(self)
            self.stackedWidget.addWidget(self.server)
            self.server.toolButton.clicked.connect(self.backToMain)
            self.server.errorMsg.connect(self.showException)

            self.router = Router(self)
            self.stackedWidget.addWidget(self.router)
            self.router.toolButton.clicked.connect(self.backToMain)
            self.router.errorMsg.connect(self.showException)

            self.clientButton.clicked.connect(self.runClient)
            self.serverButton.clicked.connect(self.runServer)
            self.routerButton.clicked.connect(self.runRouter)

        except Exception as exc:
            self.showException(exc)


    def showException(self, exc):
        msgbox = QtGui.QMessageBox.critical(self, 'critical error!', str(exc),  QtGui.QMessageBox.Retry)


    def raiseDeadlyException(self, exc):
        self.raiseException(exc)
        sys.exit()

    def runClient(self):
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.client))

    def runServer(self):
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.server))

    def runRouter(self):
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.router))

    def backToMain(self):
        self.stackedWidget.setCurrentIndex(0)


class Router(QtGui.QWidget, Ui_RouterWidget):

    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(Router, self).__init__(parent)
        self.setupUi(self)
        self.rt = RouterTable()
        self.displayTable()

        self.addButton.clicked.connect(self.newRow)
        self.removeButton.clicked.connect(self.removeRow)
        self.rt.update.connect(self.displayTable)

    def displayTable(self):
        try:
            self.routerTable.setRowCount(0)
            for key, route in self.rt.routerTable.iteritems():
                self.addRow(key, route)
        except Exception as error:
            print 'Error loading router table: ' + str(error)



    def addRow(self, key, route):
        rowPosition = self.routerTable.rowCount()
        self.routerTable.insertRow(rowPosition)
        self.routerTable.setItem(rowPosition, 0, QtGui.QTableWidgetItem(key))
        self.routerTable.setItem(rowPosition, 1, QtGui.QTableWidgetItem(route))

    def newRow(self):
        route = self.routeLine.text()
        self.rt.addDataToRouterTable(ip, route)

    def removeRow(self):
        row = self.routerTable.currentRow()
        self.routerTable.removeRow(row)
        self.rt.deleteDataFromRouterTable(row)



class Client(QtGui.QWidget, Ui_ClientWidget):

    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(Client, self).__init__(parent)
        self.setupUi(self)

        self.startButton.setEnabled(False)
        #if self.pingButton.clicked.connect(self.ping):
        self.startButton.setEnabled(True)
        self.startButton.clicked.connect(self.startClient)
        self.clearButton.clicked.connect(self.clearText)



    def clearText(self):
        self.applicationLOut.setText('')
        self.transportLOut.setText('')
        self.networkLOut.setText('')
        self.physicalLOut.setText('')


    def startClient(self):
        self.applicationClient = ApplicationClient(self)
        self.applicationClient.msg.connect(self.doMsg)
        self.applicationClient.html.connect(self.doHtml)
        self.applicationClient.start()


        self.transportClient = TransportClient(self)
        self.transportClient.msg.connect(self.doMsg)
        self.transportClient.html.connect(self.doHtml)
        transportType = 'TCP' if self.radTCP.isChecked() else 'UDP'
        self.transportClient.msg.emit('Transport protocol selected = ' + transportType)
        self.transportClient.configure(transportType)
        self.transportClient.start()

        self.networkClient = NetworkClient(self)
        self.networkClient.msg.connect(self.doMsg)
        self.networkClient.html.connect(self.doHtml)
        self.networkClient.start()

        self.physicalClient = PhysicalClient(self)
        self.physicalClient.msg.connect(self.doMsg)
        self.physicalClient.html.connect(self.doHtml)
        try:
            self.physicalClient.configServer(self.getServerAddr())
        except Exception as exc:
            self.errorMsg.emit(str(exc))
            self.errorMsg.emit('error no config server')
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
            print 'in msg' + str(msg)
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.append(msg)
        elif sender == 'PhysicalClient':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.append(msg)

    def doHtml(self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'ApplicationClient':
            self.applicationLOut.append(str(dt.now()))
            self.applicationLOut.insertHtml(msg)
        elif sender == 'TransportClient':
            self.transportLOut.append(str(dt.now()))
            self.transportLOut.insertHtml(msg)
        elif sender == 'NetworkClient':
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.insertHtml(msg)
        elif sender == 'PhysicalClient':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.insertHtml(msg)


    def getServerAddr (self):
        ip = self.serverIPInput.text()
        if ip == '':
            ip = Common.myIP()['addr']
        print 'ip = ' + str(ip)
        port = int(self.portInput.text())
        #pingSock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        #if pingSock.connect_ex((str(ip), int(port))) == 0:
        return (ip, port)
        #return True if pingSock.connect_ex((str(ip), int(port))) == 0 else False

    def getPort(self):

        port = self.portEdit.text()
        if port == '':
            self.errorMsg.emit('Please enter a port to connect')
        elif int(port) < 1024:
            self.errorMsg.emit('Ports below 1024 are well-known, elso called system ports,'\
                    ' associated with well established services and protocol.\nPlease enter a valid port number.')
        elif int(port) > 49152:
            self.errorMsg.emit('Ports bigger than 49152 are used by clients to make outbound connections to servers.'\
                    '\nPlease enter a valid port number.')
        else:
            return  int(port)

class Server(QtGui.QWidget, Ui_ServerWidget):

    errorMsg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(Server, self).__init__(parent)
        self.setupUi(self)

        self.myIP = Common.myIP()['addr']
        self.serverIPLabel.setText('Server IP: ' + self.myIP)

        self.startButton.clicked.connect(self.startServer)


    def startServer(self, pong):
        self.applicationServer = ApplicationServer(self)
        self.applicationServer.msg.connect(self.printMsg)
        #self.applicationServer.errorMsg.connect(self.errorMsg.emit())
        self.applicationServer.start()

        self.transportServer = TransportServer(self)
        self.transportServer.msg.connect(self.printMsg)
        self.transportServer.start()

        self.networkServer = NetworkServer(self)
        self.networkServer.msg.connect(self.printMsg)
        self.networkServer.start()

        self.physicalServer = PhysicalServer(self)
        self.physicalServer.msg.connect(self.printMsg)
        port = self.getPort()
        self.physicalServer.config(self.myIP, port)
        self.physicalServer.html.connect(self.printHtml)
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

    def printHtml(self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'ApplicationServer':
            self.applicationLOut.append(str(dt.now()))
            self.applicationLOut.insertHtml(msg)
        elif sender == 'TransportServer':
            self.transportLOut.append(str(dt.now()))
            self.transportLOut.insertHtml(msg)
        elif sender == 'NetworkServer':
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.insertHtml(msg)
        elif sender == 'PhysicalServer':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.insertHtml(msg)



    def getPort(self):

        port = self.portEdit.text()
        if port == '':
            self.errorMsg.emit('Please enter a port to connect')
        elif int(port) < 1024:
            self.errorMsg.emit('Ports below 1024 are well-known, elso called system ports,'\
                    ' associated with well established services and protocol.\nPlease enter a valid port number.')
        elif int(port) > 49152:
            self.errorMsg.emit('Ports bigger than 49152 are used by clients to make outbound connections to servers.'\
                    '\nPlease enter a valid port number.')
        else:
            return  int(port)



def main():
    app = QtGui.QApplication(sys.argv)
    css = open('style.css', 'r')
    style = css.read()
    app.setStyleSheet(style)
    form = Main()
    form.show()
    app.exec_()


if __name__ == '__main__':
    main()

