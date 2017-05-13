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
    def TCP():
        return   ('|' + '*' * 80 + '|\n' \
                '| Porta de Origem = {0[srcPort]:^10} | Porta de Destino = {0[dstPort]:^10} |\n' \
                '|' + '*' * 80 + '|\n' \
                '| Numero de sequencia = {0[seq]:^10} |\n' \
                '|' + '*' * 80 + '|\n' \
                '| Numero de confirmação = {0[ackSeq]:^10} |\n' \
                '|' + '*' * 80 + '|\n' \
                #TODO comprimento cabeçalho fixo
                #TODO add flags
                '| Comprimento do Cabeçalho = {0[offsetRes]:^5} | Tamanho da Janela = {0[window]:^10} !\n' \
                '|' + '*' * 80 + '|\n' \
                '| Checksum = checksum | Ponteiro para urgente = {0[urgPtr]:^10} |\n' \
                '|' + '*' * 80 + '|\n' \
                '| Opções = {0[opcoes]:^10} |\n' \
                '|' + '*' * 80 + '|\n' \
                #TODO formatar requisição http
                '| Dados = Requisição HTTP |\n' \
                '|' + '*' * 80 + '|').format(self.tcpHeader)


    @staticmethod
    def UDP(segment):
        return  ('|' + '*' * 80 + '|\n' \
                '| Porta de Origem = {0[srcPort]:^20} | Porta de Destino = {0[dstPort]:^20} |\n' \
                '|' + '*' * 80 + '|\n' \
                '| Comprimento do UDP = {0[comprimento]:^20} | Checksum do UDP = {0[checksum]:^20} |\n' \
                '|' + '*' * 80 + '|\n' \
                #todo formatar requisição http
                '| Dados = Requisição HTTP |\n' \
                '|' + '*' * 80 + '|').format(segment)


    @staticmethod
    def Datagram(datagram):
        #create html file
        with open('/home/thais/Faculdade/TCC/NEW/datagramHtml.html', 'w') as html:
            html.write('<table><tr>'\
                    '<td>Version =' + str(datagram['version']) + '</th>'\
                    '<td>IHL =' + str(datagram['headerLength']) + '</th>'\
                    '<td>TOS =' + str(datagram['TOS']) + '</th>'\
                    '<td colspan="2">Total Length =' + str(datagram['TL']) + '</th>'\
                '</tr><tr>'\
                    '<th colspan="3">ID =' + str(datagram['ID']) + '</th>'\
                    '<td>DF =' + str(datagram['DF']) + '</td>'\
                    '<td>MF =' + str(datagram['MF']) + '</td>'\
                    '<td>Offset =' + str(datagram['fragOffset']) + '</td>'\
                '</tr><tr>'\
                    '<td colspan="2">TTL =' + str(datagram['TTL']) + '</td>'\
                    '<td>Protocol =' + str(datagram['transportProtocol']) + '</td>'\
                    '<th colspan="2">Header Checksum =' + str(datagram['checksum']) + '</th>'\
                '</tr><tr>'\
                    '<th colspan="5">Source Address =' + str(datagram['srcIP']) + '</th>'\
                '</tr><tr>'\
                    '<th colspan="5">Destination Address =' + str(datagram['dstIP']) + '</th>'\
                '</tr><tr>'\
                    '<th colspan="5">IP Option =' + str(datagram['options']) + '</th>'\
                '</tr></table>')

    @staticmethod
    def Frame(frame):
        return ('|' + '*' * 80 + '|\n' \
                '|        Preambulo        |  Destination MAC  |     Source MAC     |  Type  | Data | Checksum |\n' \
                '|{0[preambulo]:^24}  |{0[dstMAC]:^20}|{0[srcMAC]:^20}|  IPv4  | .... | ........ | \n' \
                ' + '*' * 80 + |\n' ).format(frame)


