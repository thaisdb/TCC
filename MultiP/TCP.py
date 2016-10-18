from socket import *
import sys
import binascii
from scapy.all import *

#TODO receive server ip from the caller
#TODO receive file name from the client

class ServerTCP:
    serverSocket = socket(AF_INET, SOCK_STREAM)

    def __init__(self, port, host):
        self.host = host
        self.port = int(float(port))
        self.serverSocket.bind(('', self.port))
        self.serverSocket.listen(1)
        print ("here")
        while True:
            print("Listening for connections, on PORT: ", self.port)
            self.clientSocket, addr = self.serverSocket.accept()
            self.reciveFile()
            self.translateReceivedFile()
        self.clientSocket.close()

    def reciveFileName(self, clientSocket):
        while True:
            data = clientSocket.recv(1024)
            if not data: break
            print (data)
            self.file = data

    def reciveFile(self):
        with open ("receivedBinaryFile.txt", "a+") as self.rFile:
            data = self.clientSocket.recv(1024)
            while data:
                if not data:
                    print ("no data")
                    break
                print ("reciving "+ data)
                self.rFile.write(data)
                data = self.clientSocket.recv(1024)


    def translateReceivedFile (self):
        with open("newestFile.txt", "a") as newFile:
            with open("receivedBinaryFile.txt", "r+") as binFile:
                buff = binFile.read(8)
                while buff:
                    print (buff)
                    print (int(buff, 2))
                    newFile.write(chr(int(buff, 2)))
                    buff = binFile.read(8)

class ClientTCP:
    clientSocket = socket.socket(AF_INET, SOCK_STREAM)
    def __init__(self, host,port):
        self.port = int(float(port))
        self.host = host
        self.connect()

    def connect(self):
        self.clientSocket.connect((self.host, self.port))
        self.arp()
        self.toBinaryFile()
        self.sendBinaryFile()
        self.sendFile()

    def arp(self):
        ip = IP()
        ip.dst = self.host
        ping = ICMP()
        resp = sr1(ip/ping)
        ansr = sr1(ARP(pdst=self.host))
        print (ansr.hwsrc)


    def toBinaryFile(self):
        with open("new.txt", "r") as originalFile:
            with open("binNew.txt", "a") as binaryFile:
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
            self.clientSocket.close()


client = Client(host,sys.argv[1])



server = Server(sys.argv[1],host)
