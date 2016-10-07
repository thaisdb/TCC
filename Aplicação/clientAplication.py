from scapy.all import *
import sys

def http_header(packet):
    http_packet=str(packet)
    if http_packet.find('GET'):
        createTXT(packet)
        return 0

def createTXT(packet):
    with open ("AplicationRequest.txt", "a") as apFile:
        #apFile.write(star(40) + "HTTP PACKET" + star(40))
        apFile.write("\n".join(packet.sprintf("{Raw:%Raw.load%}\n").split(r"\r\n")))


sniff(filter="tcp and port 80", prn=http_header)

