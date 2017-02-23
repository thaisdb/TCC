from __future__ import with_statement
from socket import *
from socket import error as socket_error
import sys
import binascii

#TODO receive server ip from the caller
#TODO receive file name from the client

class Server():
    serverSocket = socket(AF_INET, SOCK_STREAM)
    BUFFER_SIZE = 1024
    BYTE_SIZE = 8
    receivedFileName = 'default.txt'
    fileType = 0 # 0 to text files and 1 to image files
    def __init__(self, host, port):
        self.host = host
        self.port = int(float(port))
        self.serverSocket.bind(('', self.port))
        self.serverSocket.listen(1)
        print ("********Physical Layer***************************************")
        while True:
            print("Listening for connections, on PORT: ", self.port)
            self.clientSocket, addr = self.serverSocket.accept()
            self.receiveFileName()
            self.receiveFile()
            self.translateReceivedFile()
        self.clientSocket.close()

    def receiveFileName(self):
        data = self.clientSocket.recv(1024)
        if not data:
            print 'No valid file  received'
            return
        self.receivedFileName = data
        extension = self.receivedFileName.split('.')
        if extension == 'txt':
            self.fileType = 0
        else:
            self.fileType = 1
        print ('filename: ' + self.receivedFileName)

    def receiveFile(self):
        with open ('receivedBinary_' + self.receivedFileName, "w") as self.rFile:
            data = self.clientSocket.recv(self.BUFFER_SIZE)
            while data:
                if not data:
                    print ("no data")
                    break
                self.rFile.write(data)
                data = self.clientSocket.recv(self.BUFFER_SIZE)


    def translateReceivedFile (self):
        if self.fileType == 0:
            newFile = open('received_' + self.receivedFileName, "w")
        else: #image
            newFile = open('received_' + self.receivedFileName, 'wb')
        with open('receivedBinary_' + self.receivedFileName, "r") as binFile:
            buff = binFile.read(self.BYTE_SIZE)
            while buff:
                newFile.write(chr(int(buff, 2)))
                buff = binFile.read(self.BYTE_SIZE)


    def sendTMQ():
        print 'asked'
        #clientSocket.send(self.BUFFER_SIZE)

try:
	server = Server(sys.argv[1],sys.argv[2])
except socket_error as exc:
	print ("Couldn't execute the server\n " + exc)
