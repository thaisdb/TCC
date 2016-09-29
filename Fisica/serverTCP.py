from socket import *
import sys
import binascii

host = '127.0.0.1'
#port = 5003
file = ''
class Server():
    serverSocket = socket(AF_INET, SOCK_STREAM)
    def __init__(self, port, host):
        self.host = host
        self.port = int(float(port))
        self.serverSocket.bind((self.host, self.port))
        self.serverSocket.listen(1)
        print ("here")
        while True:
            print("Listening for connections, on PORT: ", self.port)
            self.clientSocket, addr = self.serverSocket.accept()
            self.reciveFile()
            self.translateReceivedFile()
            break
            #self.reciveFile()
        self.clientSocket.close()

    '''
    def reciveFileName(self, clientSocket):
        while True:
            data = clientSocket.recv(1024)
            if not data: break
            print (data)
            self.file = data

    '''
    def reciveFile(self):
        #createFile = open("folder/new_file.txt", "wb")
        #data = clientSocket.recv(1024)
        #array = []
        with open ("receivedBinaryFile.txt", "a+") as self.rFile:
            data = self.clientSocket.recv(1024)
            while data:
                if not data:
                    print ("no data")
                    break
                print ("reciving "+ data)
                self.rFile.write(data)
                #array.append(data)
                data = self.clientSocket.recv(1024)
           # self.clientSocket.close()
        #createFile.close()
        #self.recordFile(array)

    def translateReceivedFile (self):
        with open("newestFile.txt", "a") as newFile:
            with open("receivedBinaryFile.txt", "r+") as binFile:
                buff = binFile.read(8)
                while buff:
                    print (buff)
                    print (int(buff, 2))
                    newFile.write(chr(int(buff, 2)))
                    buff = binFile.read(8)





                '''
                while buff:
                    #print (int((index).decode("utf-8"),2))
                    #newFile.write((bin(buff)).decode('ascii'))
                    #binascii.b2a_uu(buff))
                    #newFile.write(chr(int(bin(buff)[2:]), 2))
                    #x = buff[2:]
                    #print ("bin " + x)
                    try:
                        y = int(buff)
                    except ValueError:
                        buff = binFile.read(1)
                    #y.to_bytes(
                    #print ("int " + y)
                    w = chr(y)
                    print ("char " + w)

                    #print (chr(int(str(buff)[2:]), 2))
                    buff = binFile.read(1)

'''
server = Server(sys.argv[1],host)
