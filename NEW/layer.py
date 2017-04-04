#coding=utf-8
from socket import *
import os
import sys

#enum
class Transmission(object):

    APPLICATION_TRANSPORT = 0
    TRANSPORT_INTERNET = 1
    INTERNET_PHYSICAL = 2
    PHYSICAL_PHYSICAL = 3
    PHYSICAL_INTERNET = 4
    INTERNT_TRANSPORT = 5
    TRANSPORT_APPLICATION = 6


BUFFER_SIZE = 1024
class Layer():
    # from layer _ to layer:


    @staticmethod
    def receiveFrom(socket, tmq = None):
        # an integer = 4 bytes
        try:
            dataSize = int(socket.recv(4))
            global BUFFER_SIZE
            buff = int(tmq) if tmq != None else BUFFER_SIZE
            data = ''
            while dataSize >= buff:
                data += socket.recv(buff)
                dataSize -= buff
            if dataSize > 0:
                data += socket.recv(dataSize)

            print 'Received data successfully!'
            return data, True

        except Exception as ex:
            print 'Could not receive data. ERROR:'
            print ex
            return '', False

    @staticmethod
    def sendTo(socket, data,  tmq = None):
        try:
            if tmq == None:
                size = str(len(data))
                socket.send(size.zfill(4))
                socket.send(data)
                return True
            elif os.path.exists(data):
                print "sending file " + str(data)
                # data = name of binary file (always txt)
                size = os.stat(data).st_size
                socket.send(str(size))
                tmq = int(tmq)
                #tmq = self.physicalSocket.recv(4)
                #print 'Frame size = ' + str(size)
                with open(data, 'rb') as dataFile:
                    fileBuffer = dataFile.read(tmq)
                    while fileBuffer:
                        socket.send(fileBuffer)
                        fileBuffer = dataFile.read(tmq)
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


