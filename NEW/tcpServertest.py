from socket import *

try:
    tcpServerSocket = socket(AF_INET, SOCK_STREAM)
    serverAddress = ('localhost', 55555)
    tcpServerSocket.bind(serverAddress)
    tcpSeverSocket.listen(1)
    connection, clientAddress = tcpServerSocket.accept()
    print clientAddress
    print connection.recv(1024)
except:
    print 'ERROR'
