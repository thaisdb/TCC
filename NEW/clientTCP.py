import socket
import sys
import binascii
import netifaces as ni
import os
from subprocess import Popen, PIPE

#TODO receive server ip from the caller


class Client:
    clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    def __init__(self, host, port):
        self.port = int(float(port))
        self.host = host
        self.connect()

    def connect(self):
        self.clientSocket.connect((self.host, self.port))
        self.getIPMAC()
        self.toBinaryFile()
        self.sendBinaryFile()

    def getIPMAC (self):
        self.ip = ni.ifaddresses('wlan0')[2][0]['addr']
        addrs = ni.ifaddresses('wlan0')
        self.mac = addrs[ni.AF_LINK][0]['addr']
        self.ipdst = self.host
        self.macdst = os.system('arp -n ' + str(self.ipdst))
        print "my ip: " + self.ip
        print "my mac: " + self.mac
        print "server ip: " + self.ipdst
        print "server mac: " + str(self.macdst)


    def toBinaryFile(self):
        with open("download.jpg", "rb") as originalFile:
            with open("binNew.txt", "a") as binaryFile:
                data = originalFile.read(1)
                while data:
                    binaryFile.write('{0:08b}'.format(ord(data)))
                    data = originalFile.read()

    def sendBinaryFile(self):
        with open("binNew.txt", "r") as originalBinaryFile:
            fileBuffer = originalBinaryFile.read()
            while fileBuffer:
                self.clientSocket.send(fileBuffer)
                fileBuffer = originalBinaryFile.read()
            self.clientSocket.close()


client = Client(sys.argv[1], sys.argv[2])
