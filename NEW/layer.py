#coding=utf-8
from socket import *
import os
import sys

BUFFER_SIZE  = 1024
#enum
class Layer():
    # from layer _ to layer:

    @staticmethod
    def send(layerAddr, data,  tmq = None):
        sender = socket(AF_INET, SOCK_STREAM)
        sender.connect(layerAddr)
        try:
            if tmq == None:
                sender.send(data)
                return True
            elif os.path.exists(data):
                while data:
                    sent = sender.send(data)
                    data = data[sent:]
                sender.close()
                return True
            else:
                print 'Layer ERRO! File ' + str(data) + ' not found'

        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            numb = sys.exc_traceback.tb_lineno
            print 'type = ' + str(exc_type)
            print 'obj = ' + str(exc_obj)
            print 'line = ' + str(numb)
            print 'Could not send data. ERROR:'
            print e
            return False


    @staticmethod
    def receive(layerSocket, tmq = None):
        # an integer = 4 bytes
        receiver, _ = layerSocket.accept()
        try:
            buff = int(tmq) if tmq != None else BUFFER_SIZE
            pack = ''
            data = receiver.recv(buff)
            while data:
                pack += data
                data = receiver.recv(buff)
            receiver.close()
            print 'Received data successfully!'
            return pack, True

        except Exception as ex:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            numb = sys.exc_traceback.tb_lineno
            print 'type = ' + str(exc_type)
            print 'obj = ' + str(exc_obj)
            print 'line = ' + str(numb)
            print 'Could not receive data. ERROR:'
            print str(ex)
            return '', False

