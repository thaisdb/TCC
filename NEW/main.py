import threading
import time
import sys
from PyQt4 import QtGui, QtCore
from clientWindow import Ui_ClientWindow


from applicationLayerHTTPServer import ApplicationServer
#from transportLayerServer       import TransportServer
#from internetLayerServer        import InternetServer
#from physicalLayerServer        import PhysicalServer
#from physicalLayerClient        import PhysicalClient
#from internetLayerClient        import InternetClient
#from transportLayerClient       import TransportClient
#from applicationLayerHTTPClient import ApplicationClient

class Client(QtGui.QMainWindow, Ui_ClientWindow):
    def __init__(self, parent=None):
        super(Client, self).__init__(parent)
        self.setupUi(self)
        applicationServer = ApplicationServer()
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

