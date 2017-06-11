#coding:utf-8
from socket import *
import os
import sys

BUFFER_SIZE  = 4096
#enum
class Layer():

    #Server
    ApplicationServer   = ('localhost', 8888)
    TransportServer     = ('localhost', 7777)
    NetworkServer       = ('localhost', 6666)
    PhysicalServer      = ('localhost', 5555)

    #Client
    ApplicationClient   = ('localhost', 1111)
    TransportClient     = ('localhost', 2222)
    NetworkClient       = ('localhost', 3333)
    PhysicalClient      = ('localhost', 4444)

    #Router
    NetworkRouter       = ('localhost', 9898)
    PhysicalRouter      = ('localhost', 8989)

    @staticmethod
    def send(layerAddr, data,  tmq = None):
        sender = socket(AF_INET, SOCK_STREAM)
        sender.connect(layerAddr)
        try:
            if tmq == None:
                while data:
                    sent = sender.send(data)
                    data = data[sent:]
            elif os.path.exists(data):
                with open(data, 'r') as binFile:
                    buff = binFile.read(tmq)
                    while buff:
                        sender.send(buff)
                        buff = binFile.read(tmq)
            else:
                print 'Layer ERRO! File ' + str(data) + ' not found'

            sender.close()
            return True

        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            numb = sys.exc_traceback.tb_lineno
            print 'type = ' + str(exc_type)
            print 'obj = ' + str(exc_obj)
            print 'line = ' + str(numb)
            print 'Layer ERROR! Could not send data:'
            print e
            print 'tryied data : ' + str(data)
            return False


    @staticmethod
    def receive(layerSocket, mtu= None):
        # an integer = 4 bytes
        receiver, _ = layerSocket.accept()
        try:
            buff = int(mtu) if mtu != None else BUFFER_SIZE
            pack = ''
            data = receiver.recv(buff)
            while data:
                pack += data
                data = receiver.recv(buff)
            receiver.close()
            print 'Layer message: Received data successfully!'
            return pack, True
        except Exception as ex:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            numb = sys.exc_traceback.tb_lineno
            print 'type = ' + str(exc_type)
            print 'obj = ' + str(exc_obj)
            print 'line = ' + str(numb)
            print 'Layer ERROR! Could not receive data :'
            print str(ex)
            return '', False

