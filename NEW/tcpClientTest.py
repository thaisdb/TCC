from socket import *
from struct import *

try:
    tcpSocketClient = socket(AF_INET, SOCK_RAW, IPPROTO_TCP)
    src_ip = 'localhost'
    dst_ip = 'localhost'

    #TCP header
    src_port = 44444
    dst_port = 55555

    tcp_seq = 0
    ack_seq = 0
    doff = 5 #4 bit field, size of tcp header, 5*4 = 20 bytes
    #tcp flags
    urg, ack, psh, rst, syn, fin = 0, 0, 0, 0, 1, 0
    tcp_flags = fin + (syn <<1) + (rst <<2) + (psh <<3) + (ack <<4) + (urg <<5)
    windows = socket.htons(5840)
    check = 0
    urg_ptr = 0
    offset_res = (doff << 4) + 0

    #send
    #get response
    #check response values
    if  #(TCP flags SYN-ACK
        #check flags and ack_seq + 1
        #urg, ack, psh, rst, syn, fin = 0, 1, 0, 0, 1, 0)

        #than send:
        #TCP flags ACK
        urg, ack, psh, rst, syn, fin = 0, 1, 0, 0, 0, 0



