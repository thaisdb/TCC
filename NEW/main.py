from datetime import datetime as dt
import threading
import time
import sys
from PyQt4 import QtGui, QtCore
from clientWindow import Ui_ClientWindow
import os


#from applicationLayerHTTPServer import ApplicationServer
#from transportLayerServer       import TransportServer
#from internetLayerServer        import InternetServer
#from physicalLayerServer        import PhysicalServer
from physicalLayerClient        import PhysicalClient
from networkLayerClient         import NetworkClient
from transportLayerClient       import TransportClient
from applicationLayerHTTPClient import ApplicationClient

class Client(QtGui.QMainWindow, Ui_ClientWindow):
    def __init__(self, parent=None):
        super(Client, self).__init__(parent)
        self.setupUi(self)

        self.startButton.clicked.connect(self.startClient)
        self.clearButton.clicked.connect(self.clearText)
        self.pingButton.clicked.connect(self.ping)
        #self.serverIPInput.event.connect(self.doPing)

    def clearText(self):
        self.applicationLOut.setText('')
        self.transportLOut.setText('')
        self.networkLOut.setText('')
        self.physicalLOut.setText('')


    def startClient(self):
        self.appClient = ApplicationClient(self)
        self.appClient.msg.connect(self.doMsg)
        self.appClient.start()

        self.transpClient = TransportClient(self)
        self.transpClient.msg.connect(self.doMsg)
        self.transpClient.start()

        self.netClient = NetworkClient(self)
        self.netClient.msg.connect(self.doMsg)
        self.netClient.start()

        self.phyClient = PhysicalClient(self)
        self.phyClient.msg.connect(self.doMsg)
        self.phyClient.start()


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

    #def doPing(self):
    #    self.pingButton.set


    def ping (self):
       msg = os.popen('ping -c 1 ' + str(self.serverIPInput.text())).read()
       self.pingLabel.setText(msg)
def main():
    app = QtGui.QApplication(sys.argv)
    form = Client()
    form.show()
    app.exec_()


if __name__ == '__main__':
    main()
#ClientWindow = QtGui.QMainWindow()
    #ui = Ui_ClientWindow()
    #ui.setupUi(ClientWindow)
    #ClientWindow.show()
    #app.exec_()

        #create threads
        #applicationServer   =  ApplicationServer()
#applicationServer.console = ui.applicationLOut()
        #transportServer     = TransportServer()
        #self.connect(applicationServer.print.connect (SIGNAL("doTransportServer"), transportServer())
        #internetServer      = threading.Thread(target = InternetServer)
        #physicalServer      = threading.Thread(target = PhysicalServer, args = (sys.argv[1], sys.argv[2],))
        #physicalClient      = threading.Thread(target = PhysicalClient, args = (sys.argv[1], sys.argv[2],))
        #internetClient      = threading.Thread(target = InternetClient)
        #transportClient     = threading.Thread(target = TransportClient)
        #applicationClient   = threading.Thread(target = ApplicationClient)


        #starting threads
        #try:
        #    applicationServer.start()
        #    time.sleep(1)
        #    transportServer.start()
        #    time.sleep(1)
        #    internetServer.start()
        #    time.sleep(1)
        #    physicalServer.start()
        #    time.sleep(1)
        #    physicalClient.start()
        #    time.sleep(1)
        #    internetClient.start()
        #    time.sleep(1)
        #    transportClient.start()
        #    time.sleep(1)
        #    applicationClient.start()

        #except KeyboardInterrupt:
        #    if applicationServer.isAlive():
        #        applicationServer.join()
        #    if transportServer.isAlive():
        #        transportServer.join()
        #    if internetServer.isAlive():
        #        internetServer.join()
        #    if physicalServer.isAlive():
        #        physicalServer.join()
        #    if physicalClient.isAlive():
        #        physicalClient.join()
        #    if internetClient.isAlive():
        #        internetClient.join()
        #    if transportClient.isAlive():
        #        transportClient.join()
        #    if applicationClient.isAlive():
        #        applicationClient.join()





#Main(sys.arg[1], sys.arg[2])

