from datetime import datetime as dt
import threading
import time
import sys
import netifaces as nt
import logging
from layer import Layer
from utils import Common, RouterTable
from PyQt4 import QtGui, QtCore
from bib import wordbook as wb
from newWindow      import Ui_NewMainWindow
from clientWidget   import Ui_ClientWidget
from serverWidget   import Ui_ServerWidget
from routerWidget   import Ui_RouterWidget
import os


from networkLayer import NetworkServer, NetworkClient, NetworkRouter
#Server modules
from applicationLayerHTTPServer import ApplicationServer
from transportLayerServer       import TransportServer
from physicalLayerServer        import PhysicalServer, PhysicalRouter

#Client modules
from physicalLayerClient        import PhysicalClient
from transportLayerClient       import TransportClient
from applicationLayerHTTPClient import ApplicationClient

class Main(QtGui.QMainWindow, Ui_NewMainWindow):
    def __init__(self, parent=None):
        super(Main, self).__init__(parent)
        self.setupUi(self)

        self.clientButton.clicked.connect(self.runClient)
        self.serverButton.clicked.connect(self.runServer)
        self.routerButton.clicked.connect(self.runRouter)




        #thisLevel = getattr(logging, loglevel.upper(), None)
        logging.basicConfig(filename='log', level=logging.DEBUG)

    def raiseError(self, msg):
        print 'main error = ' + msg
        logging.error(msg)
        msgBox = QtGui.QMessageBox.critical(self, 'Critical ERROR!', msg, QtGui.QMessageBox.Retry)

    def runClient(self):
        self.client = Client(self)
        self.stackedWidget.addWidget(self.client)
        self.client.toolButton.clicked.connect(self.backToMain)
        self.client.errorMsg.connect(self.raiseError)
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.client))

    def runServer(self):
        self.server = Server(self)
        self.stackedWidget.addWidget(self.server)
        self.server.toolButton.clicked.connect(self.backToMain)
        self.server.errorMsg.connect(self.raiseError)
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.server))

    def runRouter(self):
        self.router = Router(self)
        self.stackedWidget.addWidget(self.router)
        self.router.toolButton.clicked.connect(self.backToMain)
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.router))

    def backToMain(self):
        self.stackedWidget.setCurrentIndex(0)




class Router(QtGui.QWidget, Ui_RouterWidget):

    errorMsg = QtCore.pyqtSignal(str)


    def __init__(self, parent=None):
        super(Router, self).__init__(parent)
        self.setupUi(self)

        self.myIP = Common.myIP()[1]['addr']
        self.ipLabel.setText('Router IP: ' + self.myIP)
        self.portLabel.setText('Router port: ' + str(Layer.PhysicalRouter[1]))

        self.rt = RouterTable()
        self.displayTable()

        self.addButton.clicked.connect(self.newRow)
        self.removeButton.clicked.connect(self.removeRow)
        self.rt.update.connect(self.displayTable)

        self.startButton.clicked.connect(self.configureRouter)



    def configureRouter(self):
        try:
            print 'configuring'
            ip = Common.myIP()[1]['addr']
            port = Layer.PhysicalRouter[1]
            Layer.PhysicalRouter = (ip, int(port))
            self.startRouter()
            return True
        except Exception as exc:
            self.errorMsg.emit(str(exc))
            return False


    def startRouter(self):
        print 'starting physical layer'
        self.physicalRouter = PhysicalRouter(self)
        self.physicalRouter.msg.connect(self.printMsg)
        self.physicalRouter.html.connect(self.printHtml)
        self.physicalRouter.errorMsg.connect(self.raiseError)
        self.physicalRouter.start()

        print 'starting network layer'
        self.networkRouter = NetworkRouter(self)
        self.networkRouter.msg.connect(self.printMsg)
        self.networkRouter.html.connect(self.printHtml)
        self.networkRouter.start()


    def printMsg (self, msg):
        sender =  self.sender().__class__.__name__
        logging.info(sender + ' -> ' + msg)
        if sender == 'NetworkRouter':
            self.networkLOut.append(msg)
        elif sender == 'PhysicalRouter':
            self.physicalLOut.append(msg)

    def printHtml(self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'NetworkRouter':
            self.networkLOut.append(str(dt.now()))
            self.networkLOut.insertHtml(msg)
        elif sender == 'PhysicalRouter':
            self.physicalLOut.append(str(dt.now()))
            self.physicalLOut.insertHtml(msg)


    def displayTable(self):
        try:
            self.routerTable.setRowCount(0)
            for x, route in self.rt.tableVector.iteritems():
                self.addRow(route['key'], route['mask'], route['value'])
        except Exception as error:
            print 'Error displaying router table: ' + str(error)



    def addRow(self, key, mask, route):
        rowPosition = self.routerTable.rowCount()
        self.routerTable.insertRow(rowPosition)
        print 'inserting '+ str(rowPosition)
        self.routerTable.setItem(rowPosition, 0, QtGui.QTableWidgetItem(key))
        self.routerTable.setItem(rowPosition, 1, QtGui.QTableWidgetItem(mask))
        self.routerTable.setItem(rowPosition, 2, QtGui.QTableWidgetItem(route))

    def newRow(self):
        ip = self.ipInput.text()
        mask = self.maskInput.text()
        route = self.routeInput.text()
        self.rt.addDataToRouterTable(ip, mask, route)

    def removeRow(self):
        row = self.routerTable.currentRow()
        self.routerTable.removeRow(row)
        self.rt.deleteDataFromRouterTable(row)
        self.rt.loadRouterTable()

    def raiseError(self, error):
        sender =  self.sender().__class__.__name__
        self.errorMsg.emit(sender + ':\n' + error)



class Client(QtGui.QWidget, Ui_ClientWidget):

    errorMsg = QtCore.pyqtSignal(str)
    connected = QtCore.pyqtSignal(bool)

    def __init__(self, parent=None):
        super(Client, self).__init__(parent)
        self.setupUi(self)

        self.startButton.clicked.connect(self.configureClient)
        self.logLink.setText('<a hrf=file:///log>Access log</a>')
        self.configureClient()


        self.physicalLOut.mousePressEvent = self.physicalClicked
        self.networkLOut.mousePressEvent = self.networkClicked
        self.transportLOut.mousePressEvent = self.trasportClicked
        self.applicationLOut.mousePressEvent = self.applicationClicked

        self.probCollision.stateChanged.connect(self.setCollision)

    def configureClient(self):
        try:
            ip = self.serverIPInput.text()
            self.port = self.portaInput.text()
            myIP = Common.myIP()[1]['addr']
            if ip =='':
                ip = myIP
            Layer.PhysicalClient = (myIP, 4444)
            Layer.PhysicalServer = (ip, int(self.port))
            self.startClient()
            return True
        except Exception as exc:
            self.errorMsg.emit(str(exc))
            return False


    def clearText(self):
        self.applicationLOut.setText('')
        self.applicationClient.end()
        self.transportLOut.setText('')
        self.transportClient.end()
        self.networkLOut.setText('')
        self.networkClient.end()
        self.physicalLOut.setText('')
        self.physicalClient.end()

        return



    def startClient(self):
        self.applicationClient = ApplicationClient(self)
        self.applicationClient.msg.connect(self.doMsg)
        self.applicationClient.html.connect(self.doHtml)
        self.applicationClient.start()
        if self.stepBox.isChecked():
            self.applicationClient.stepMode(True)
            self.goButton.clicked.connect(self.applicationClient.setGo)
        else:
            self.applicationClient.stepMode(False)
        self.applicationClient.time.connect(self.setTime)


        self.transportClient = TransportClient(self)
        self.transportClient.msg.connect(self.doMsg)
        self.transportClient.html.connect(self.doHtml)
        self.transportClient.errorMsg.connect(self.raiseError)
        transportType = 'TCP' if self.radTCP.isChecked() else 'UDP'
        self.transportClient.msg.emit('Transport protocol selected = ' + transportType)
        self.transportClient.configure(transportType, self.port)
        self.transportClient.start()

        self.networkClient = NetworkClient(self)
        self.networkClient.msg.connect(self.doMsg)
        self.networkClient.html.connect(self.doHtml)
        self.networkClient.configure(self.inputMask.text())
        self.networkClient.start()

        self.physicalClient = PhysicalClient(self)
        self.physicalClient.msg.connect(self.doMsg)
        self.physicalClient.html.connect(self.doHtml)
        try:
            frameSize = int(self.inputMTU.text())
            probCollision = 0
            if self.probCollision.isChecked():
                probCollision = self.horizontalSlider.value()
            self.physicalClient.configure(frameSize, probCollision)
        except:
            self.errorMsg.emit('Error catching physical parameters.')
        self.physicalClient.start()

        self.clearButton.clicked.connect(self.clearText)
        #self.transportClient.hearConnection(connected)

    def setCollision(self):
        if self.probCollision.isChecked():
            self.horizontalSlider.setEnabled(True)
        else:
            self.horizontalSlider.setEnabled(False)


    def setGo(self, action):
        self.applicationClient.go

    def setTime(self, time):
        self.lcdNumber.display(time)

    def doMsg (self, msg):
        sender =  self.sender().__class__.__name__
        logging.info(sender + ' -> ' + msg)
        if sender == 'ApplicationClient':
            self.applicationLOut.append(msg)
        elif sender == 'TransportClient':
            self.transportLOut.append(msg)
        elif sender == 'NetworkClient':
            self.networkLOut.append(msg)
        elif sender == 'PhysicalClient':
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

    def raiseError(self, error):
        sender =  self.sender().__class__.__name__
        self.errorMsg.emit(sender + ':\n' + error)



    def physicalClicked(self, event):
        tc = self.physicalLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.physicalLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.physicalLOut.cursorRect(self.physicalLOut.textCursor()).bottomRight()
        pos = self.physicalLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')


    def networkClicked(self, event):
        tc = self.networkLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.networkLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.networkLOut.cursorRect(self.networkLOut.textCursor()).bottomRight()
        pos = self.networkLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')

    def trasportClicked(self, event):
        tc = self.transportLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.transportLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.transportLOut.cursorRect(self.transportLOut.textCursor()).bottomRight()
        pos = self.transportLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')

    def applicationClicked(self, event):
        tc = self.applicationLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.applicationLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.applicationLOut.cursorRect(self.applicationLOut.textCursor()).bottomRight()
        pos = self.applicationLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')

#----DNS TABLE---


        self.displayTable()

        self.addButton.clicked.connect(self.newRow)
        self.removeButton.clicked.connect(self.removeRow)
        self.rt.update.connect(self.displayTable)

        self.configureRouter()




    #def startRouter():
        #self.physicalRouter = PhysicalServer(self)
        #self.physicalRouter.msg.connect(self.doMsg)
        #self.physicalRoyter.html.connect(self.printHtml)
        #self.physicalRouter.errorMsg.connect(self.raiseError)
        #self.physicalRouter.start()

        #self.networkRouter = NetworkServer(self)
        #self.networkRouter.msg.connect(self.doMsg)
        #self.networkRouter.html.connect(self.printHtml)
        #self.networkRouter.start()


    def displayTable(self):
        try:
            self.tableWidget.setRowCount(0)
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
        ip = self.ipLine.text()
        route = self.routeLine.text()
        self.rt.addDataToRouterTable(ip, route)

    def removeRow(self):
        row = self.routerTable.currentRow()
        self.routerTable.removeRow(row)
        self.rt.deleteDataFromRouterTable(row)



class Server(QtGui.QWidget, Ui_ServerWidget):

    errorMsg = QtCore.pyqtSignal(str)
    connected = QtCore.pyqtSignal(bool)

    def __init__(self, parent=None):
        super(Server, self).__init__(parent)
        self.setupUi(self)

        self.myIP = Common.myIP()[1]['addr']
        self.serverIPLabel.setText('Server IP: ' + self.myIP)

        self.startButton.clicked.connect(self.configureServer)

        self.physicalLOut.mousePressEvent = self.physicalClicked
        self.networkLOut.mousePressEvent = self.networkClicked
        self.transportLOut.mousePressEvent = self.trasportClicked
        self.applicationLOut.mousePressEvent = self.applicationClicked


    def configureServer(self):
        try:
            ip = self.myIP
            self.port = self.portEdit.text()
            Layer.PhysicalServer = (ip, int(self.port))
            self.startServer()
            return True
        except Exception as exc:
            self.errorMsg.emit(str(exc))
            return False

    def clear(self):
        self.applicationLOut.setText('')
        self.applicationServer.end()
        self.transportLOut.setText('')
        self.transportServer.end()
        self.networkLOut.setText('')
        self.networkServer.end()
        self.physicalLOut.setText('')
        self.physicalServer.end()

    def startServer(self):

        self.physicalServer = PhysicalServer(self)
        self.physicalServer.msg.connect(self.doMsg)
        self.physicalServer.html.connect(self.printHtml)
        self.physicalServer.errorMsg.connect(self.raiseError)
        self.physicalServer.start()

        self.networkServer = NetworkServer(self)
        self.networkServer.msg.connect(self.doMsg)
        self.networkServer.html.connect(self.printHtml)
        self.networkServer.start()


        self.transportServer = TransportServer(self)
        self.transportServer.msg.connect(self.doMsg)
        self.transportServer.appMsg.connect(self.appMsg)
        self.transportServer.appHtml.connect(self.appHtml)
        self.transportServer.errorMsg.connect(self.raiseError)
        self.transportServer.html.connect(self.printHtml)
        self.transportServer.start()

        self.applicationServer = ApplicationServer(self)
        self.applicationServer.msg.connect(self.doMsg)
        self.applicationServer.html.connect(self.printHtml)
        #self.applicationServer.errorMsg.connect(self.errorMsg.emit())
        self.applicationServer.start()

        self.clearButton.clicked.connect(self.clear)

    def appMsg (self, msg):
        self.applicationLOut.append(msg)

    def appHtml(self, msg):
        self.applicationLOut.append(str(dt.now()))
        self.applicationLOut.insertHtml(msg)



    def doMsg (self, msg):
        sender =  self.sender().__class__.__name__
        if sender == 'ApplicationServer':
            self.applicationLOut.append(msg)
        elif sender == 'TransportServer':
            self.transportLOut.append(msg)
        elif sender == 'NetworkServer':
            self.networkLOut.append(msg)
        elif sender == 'PhysicalServer':
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


    def raiseError(self, error):
        sender =  self.sender().__class__.__name__
        self.errorMsg.emit(sender + ': ' + error)

    def physicalClicked(self, event):
        tc = self.physicalLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.physicalLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.physicalLOut.cursorRect(self.physicalLOut.textCursor()).bottomRight()
        pos = self.physicalLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')


    def networkClicked(self, event):
        tc = self.networkLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.networkLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.networkLOut.cursorRect(self.networkLOut.textCursor()).bottomRight()
        pos = self.networkLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')

    def trasportClicked(self, event):
        tc = self.transportLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.transportLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.transportLOut.cursorRect(self.transportLOut.textCursor()).bottomRight()
        pos = self.transportLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')

    def applicationClicked(self, event):
        tc = self.applicationLOut.cursorForPosition(event.pos())
        tc.select(QtGui.QTextCursor.WordUnderCursor)
        self.applicationLOut.setTextCursor(tc)
        word = tc.selectedText()
        print word
        pos = self.applicationLOut.cursorRect(self.applicationLOut.textCursor()).bottomRight()
        pos = self.applicationLOut.mapToGlobal(pos)
        try:
            QtGui.QToolTip.showText(pos, wb.getToolTip(word))
        except:
            logging.error(word + ' doesn\'t have a tooltip.')
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

