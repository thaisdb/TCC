from socket import *

#normal server port 99999

try:
    tcpServerSocket = socket(AF_INET, SOCK_STREAM)
    try:
        tcpServerSocket.bind(('localhost', 9999))
    except:
        print "not binded"
    tcpServerSocket.listen(1)
    print 'listening'
    conn, addr = tcpServerSocket.accept()
    packet = conn.recv(1024)
    #while data:
    #    packet += data
    #    data = conn.recv(8)
    print packet
except error, er:
    print 'ERROR!' + str(er)
