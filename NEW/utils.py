#coding: utf-8
import netifaces
from PyQt4 import QtCore

class Addresses(object):

    ApplicationServer   = ('localhost', 8888)
    TransportServer     = ('localhost', 7777)
    NetworkServer       = ('localhost', 6666)
    PhysicalServer      = ('localhost', 5555)

    PhysicalClient      = ('localhost', 4444)
    NetworkClient       = ('localhost', 3333)
    TransportClient     = ('localhost', 2222)
    ApplicationClient   = ('localhost', 1111)

    Browser             = ('localhost', 9999)


class Common():
    @staticmethod
    def myIP():
        interfaces = netifaces.interfaces()
        for i in interfaces:
            if i == 'lo':
                continue
            iface = netifaces.ifaddresses(i).get(netifaces.AF_INET)
            if iface != None:
                for j in iface:
                    return j




class RouterTable(QtCore.QObject):

    update = QtCore.pyqtSignal()
    routerTable = {}
    def __init__(self):
        print 'router obj'
        super(RouterTable, self).__init__()
        self.loadRouterTable()

    def accessRouterTable(self):
        while True:
            mode = raw_input('Choose one option:\n\t[1]Print router table'\
            '\n\t[2]Remove data from router table\n\t[3]Add data to router table\n\t: ')
            if mode == '1':
                self.printRouterTable()
            elif mode == '2':
                self.printRouterTable()
                self.deleteDataFromRouterTable()
            elif mode == '3':
                self.addDataToRouterTable()


    def loadRouterTable(self):
        try:
            with open ('routerTable.txt', 'r') as rt:
                for line in rt:
                    (key, value) = line.split()
                    self.routerTable[key] = value
        except Exception as e:
            print 'Did not find router table file.'


    def saveRouterTable(self):
        with open ('routerTable.txt', 'w') as rt:
            for x in self.routerTable:
                rt.write(x + ' ' + self.routerTable[x] + '\n')


    def addDataToRouterTable(self, key, value):
        #add ip validation
        self.routerTable[str(key)] = str(value)
        self.saveRouterTable()
        self.update.emit()


    def deleteDataFromRouterTable(self, index):
        for i, (key, value) in enumerate(self.routerTable.items()):
            print i
            if i == int(index):
                del self.routerTable[key]
                self.saveRouterTable()
                break


class PDUPrinter():


    @staticmethod
    def TCP(segment):
        return ('<html><head><head><link rel="stylesheet" type="text/css" href="style.css"></head><body>'\
                '<table border="1" style="width:100%; font-size:5px" cellpadding="5">'\
                '<caption> TCP SEGMENT </caption>'\
                '<tr><td colspan="4">Source Port = ' + str(segment['srcPort']) + '</td>'\
                    '<td colspan="4">Destination Port = ' + str(segment['dstPort']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="8">Sequence Number = ' + str(segment['seqNum']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="8">Acknowledgment Number = ' + str(segment['ackNum']) + '</td>'\
                '</tr><tr>'\
                    '<td> Offset = ' + str(segment['offset']) + '</td>'\
                    '<td> Reserved </td>'\
                    '<td colspan="2">Flags = ' + str(segment['flags']) + '</td>'\
                    '<td colspan="4">Window = ' + str(segment['window']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="4">Checksum = ' + str(segment['checksum']) + '</td>'\
                    '<td colspan="4">Urgent Pointer = ' + str(segment['urgPtr']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="8">TCP Options = Optional</td>'\
                '</tr></table></body></html>')


    @staticmethod
    def UDP(segment):
        return ('<html><head><link rel="stylesheet" type="text/css" href="style.css"></head><body>'\
                '<table border="1" style="width:100%" cellpadding="5">'\
                '<caption> UDP SEGMENT </caption>'\
                '<tr><td>Source Port = ' + str(segment['srcPort']) + '</td>'\
                    '<td>Destination Port = ' + str(segment['dstPort']) + '</td>'\
                '</tr><tr>'\
                    '<td>Comprimento do UDP = ' + str(segment['comprimento']) + '</td>'\
                    '<td>Checksum = ' + str(segment['checksum']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Data = Application Data</td>'\
                '</tr></table></body></html>')


    @staticmethod
    def Datagram(datagram):
        return ('<html><head><link rel="stylesheet" type="text/css" href="style.css"></head><body>'\
                '<table border="1" style="width:100%" cellpadding="5">'\
                '<caption> Datagram </caption>'\
                '<tr>'
                '<td>Version = ' + str(datagram['version']) + '</td>'\
                    '<td>IHL = ' + str(datagram['headerLength']) + '</td>'\
                    '<td>TOS = ' + str(datagram['TOS']) + '</td>'\
                    '<td colspan="2">Total Length =' + str(datagram['TL']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="3">ID = ' + str(datagram['ID']) + '</td>'\
                    '<td>DF = ' + str(datagram['DF']) + '</td>'\
                    '<td>MF = ' + str(datagram['MF']) + '</td>'\
                    '<td>Offset = ' + str(datagram['fragOffset']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">TTL = ' + str(datagram['TTL']) + '</td>'\
                    '<td>Protocol = ' + str(datagram['transportProtocol']) + '</td>'\
                    '<td colspan="2">Header Checksum = ' + str(datagram['checksum']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="5">Source Address = ' + str(datagram['srcIP']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="5">Destination Address = ' + str(datagram['dstIP']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="5">IP Option =' + str(datagram['options']) + '</td>'\
                '</tr></table></body></html>')


    @staticmethod
    def Frame(frame):
        return ('<html><head><link rel="stylesheet" type="text/css" href="style.css"></head><body>'\
                '<table border="1">'\
                '<caption> Frame </caption>'\
                '<tr><td>Preambulo<br>' + str(frame['preambulo']) + '</td>'\
                    '<td>Destination MAC<br>' + str(frame['dstMAC']) + '</td>'\
                    '<td>Source MAC<br>' + str(frame['srcMAC']) + '</td>'\
                    #'<td>Type = ' + str(frame['type']) + '</td>'\
                    '<td>Data<br>data </td>'\
                    '<td>Checksum<br>' + str(frame['checksum']) + '</td>'\
                '</tr></table></body></html>')




