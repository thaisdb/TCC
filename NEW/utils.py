#coding: utf-8
import netifaces
from PyQt4 import QtCore
import json

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
                    return i, j

    @staticmethod
    def calculateChecksum(package):
        package = json.dumps(sorted(package))
        try:
            s = 0
            for i in range(0, len(package), 2):
                w = ord(package[i]) + (ord(package[i+1]) << 8)
                s += w
                s = (s >> 16) + (s & 0xffff)
                return bin(~s & 0xffff)
        except Exception as exc:
            exc_type, exc_object, exc_tb = sys.exc_info()
            line = exc_tb.tb_lineno
            return 'Error calculating checksum = ' + str(exc) + '\nLine = ' + str(line)

    @staticmethod
    def verifyChecksum(package, checksum):
        return Common.calculateChecksum(package)[2:] == checksum


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
    def HTTP(request, color="black"):
        return ('<html><table><pre><font face=\"Ubuntu Condensed\" color=\"' + color + '\">\n'\
                + request + '\n\n</font></pre></table></html>')


    @staticmethod
    def TCP(segment, color="black"):
        return   ('<html><head><link rel="stylesheet" href="style.css"></head><body>'\
                '<table border="1" style="width:100%" cellpadding="5" color="'+color+'">'\
                '<caption> UDP SEGMENT </caption>'\
                '<tr><td>Source Port = ' + str(segment['srcPort']) + '</td>'\
                    '<td>Destination Port = ' + str(segment['dstPort']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Sequence Number = ' + str(segment['seq']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Acknowledgment Number = ' + str(segment['ackSeq']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Flags = ' + str(segment['flags']) + '</td>'\
                '</tr><tr>'\
                    '<td>Checksum = ' + str(segment['checksum']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Data = Application Data</td>'\
                '</tr></table></body></html>')


    @staticmethod
    def UDP(segment, color= 'blue'):
        return ('<html><head><link rel="stylesheet" href="style.css"></head><body>'\
                '<font color=\"' + color + '\">'\
                '<table border="1" style="width:100%" cellpadding="5">'\
                '<caption> UDP SEGMENT </caption>'\
                '<tr><td>Source Port = ' + str(segment['srcPort']) + '</td>'\
                    '<td>Destination Port = ' + str(segment['dstPort']) + '</td>'\
                '</tr><tr>'\
                    '<td>Comprimento do UDP = ' + str(segment['comprimento']) + '</td>'\
                    '<td>Checksum = ' + str(segment['checksum']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">Data = Application Data</td>'\
                '</tr></table></font></body></html>')


    @staticmethod
    def Datagram(datagram):
        return ('<html><head><link rel="stylesheet" href="style.css"></head><body>'\
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
        return ('<html><head><link rel="stylesheet" href="style.css"></head><body>'\
                '<table border="1" style="width:100%" cellpadding="5">'\
                '<caption> Frame </caption>'\
                '<tr><td>Preambulo = ' + str(frame['preambulo']) + '</td>'\
                    '<td>Destination MAC = ' + str(frame['dstMAC']) + '</td>'\
                    '<td>Source MAC = ' + str(frame['srcMAC']) + '</td>'\
                    #'<td>Type = ' + str(frame['type']) + '</td>'\
                    '<td>Data = data </td>'\
                    '<td>Checksum = ' + str(frame['checksum']) + '</td>'\
                '</tr></table></body></html>')




