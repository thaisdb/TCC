from socket import *
import sys
import binascii

#TODO receive server ip from the caller
#TODO receive file name from the client

class Server():
    serverSocket = socket(AF_INET, SOCK_STREAM)

    def __init__(self, host, port):
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




try:
	server = Server(sys.argv[1],sys.argv[2])
except:
	print ("Couldn't execute the server\nVerify you ip and port\n")
