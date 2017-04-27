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

