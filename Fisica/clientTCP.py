from socket import *
import sys
import binascii

host = '127.0.0.1'
port = 5003

class Client:
    clientSocket = socket(AF_INET, SOCK_STREAM)
    def __init__(self, host,port):
        self.port = int(float(port))
        self.host = host
        self.connect()

    def connect(self):
        self.clientSocket.connect((self.host, self.port))
        #self.clientSocket.send("sucesso".encode())
        self.toBinaryFile()
        self.sendBinaryFile()
        #self.sendFile()

    def sendFileName(self):
        self.file = open ( "testeFile.txt", "w")

    def toBinaryFile(self):
        with open("new.txt", "r") as originalFile:
            with open("binNew.txt", "a") as binaryFile:
            #with open("binNew.txt", "a+") as self.binaryFile:
            #arrayBits = []
            #read file
                data = originalFile.read(1)
                while data:
                    binaryFile.write('{0:08b}'.format(ord(data)))
                    data = originalFile.read(1)

    def sendBinaryFile(self):
        with open("binNew.txt", "r") as originalBinaryFile:
            fileBuffer = originalBinaryFile.read()
            while fileBuffer:
                self.clientSocket.send(fileBuffer)
                fileBuffer = originalBinaryFile.read()
            #for oneByte in arrayBits:
             #   print ("sending " + oneByte)
              #  self.clientSocket.send(bytes(oneByte, 'utf_8'))

            self.clientSocket.close()

client = Client(host,sys.argv[1])
