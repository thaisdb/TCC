from socket import *
import sys
import binascii
from scapy.all import *

host = '192.168.15.10'
#TODO receive server ip from the caller


class Client:
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
