#coding: utf-8
import netifaces


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
        print 'in common'
        interfaces = netifaces.interfaces()
        for i in interfaces:
            if i == 'lo':
                continue
            iface = netifaces.ifaddresses(i).get(netifaces.AF_INET)
            if iface != None:
                for j in iface:
                    return j




class RouterTable(object):

    routerTable = {'fromIP': 'toIP'}
    def __init__(self, fileName):
        self.loadRouterTable(fileName)

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


    def loadRouterTable(self, fileName):
        try:
            with open (fileName, 'r') as rt:
                for line in rt:
                    (key, value) = line.split()
                    self.routerTable[key] = value
        except Exception as e:
            print 'Did not find router table file.\nFile Name' + str(fileName)


    def saveRouterTable(self):
        with open (fileName, 'w') as rt:
            for x in self.routerTable:
                rt.write(x + ' ' + self.routerTable[x] + '\n')

    def addDataToRouterTable(self):
         key     = raw_input('Enter the ip you want to router: ')
         value   = raw_input('Enter the ip do you to router it to: ')
         #add ip validation
         self.routerTable[str(key)] = str(value)

    def printRouterTable(self):
        try:
            print '+---+--------------------+--------------------+'
            for x in self.routerTable:
                print '| {0} |{1:^20}|{2:^20}|'.format(str(self.routerTable.keys().index(x)), x, self.routerTable[x])
                print '+---+--------------------+--------------------+'
        except Exception as e:
            print 'No router table: ' + str(e)

    def deleteDataFromRouterTable(self):
        index = raw_input('Enter the number of the line you want to delete: ')
        for i, (key, value) in enumerate(self.routerTable.items()):
            print i
            if i == int(index):
                del self.routerTable[key]
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
        return ('|' + '*' * 80 + '|\n' \
               '| Versão ={0[version]:^6} | IHL ={0[headerLength]:^3} | Tipo de Serviço ={0[TOS]:^20} '\
               '| Tamanho total ={0[TL]:^20} |\n'\
               '|' + '*' * 80 + '|\n' \
               '| ID = {0[ID]:^5} | DF ={0[DF]:^3} | MF ={0[MF]:^3} | Fragmento Offset ={0[fragOffset]:^20} |\n' \
               '|' + '*' * 80 + '|\n' \
               '| Tempo de Vida ={0[TTL]:^20} | Protocolo ={0[transportProtocol]:^5} | Checksum do cabecalho = {0[checksum]:^5} |\n'\
               '|' + '*' * 80 + '|\n' \
               '| Endereço de Origem = {0[srcIP]:^20} |\n' \
               '|' + '*' * 80 + '|\n' \
               '| Endereço de Destino = {0[dstIP]:^20} |\n' \
               '|' + '*' * 80 + '|\n' \
               '| Opcoes = {0[options]:^20} |\n' \
               '|' + '*' * 80 + '|\n' \
               '| Data = segmento de transport |\n' \
               '|' + '*' * 80 + '|\n' ).format(datagram)



