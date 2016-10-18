import re
from pData import ProtocolStruct
from scapy.all import *

class Transport:
	aplicationProtocol = ProtocolStruct()	
	def parser(self, fileName):
		file = open(fileName, 'r+')
		words = file.read()
		data = re.split(r'[= \n \s \t ]+', words)
		print(data)
		self.aplicationProtocol.psHTTP (data[data.index('Method:')+1],
			data[data.index('Url:') + 1],
			data[data.index('Version:') + 1],
			data[data.index('Host:') + 1],
			data[data.index('Connection:') + 1],
			data[data.index('User-Agent:') + 1],
			data[data.index('Accept:') + 1],
			data[data.index('Accept-Language:') + 1],
			data[data.index('Accept-Encoding:') + 1])
			#data[data.index('Buddy:') + 1])
		

		self.aplicationProtocol.printProtocol('HTTP')
	def __init__(self, fileName):
		try:
			open(fileName, 'r+')
		except Exception:
			print('ERROR! Can\'t read ' + fileName )
		else:
			self.parser(fileName)

	def getIP(self):
		#ip.src = "127.0.0.1"
		dst = self.aplicationProtocol.HOST
		ip = IP(dst = dst)
		del ip[IP].chksum
		return ip
		
class TCPClient(Transport):
	def __init__(self):
		tcp = self.getIP()/TCP()
		tcp.show()
		self.TreeWayHandshake(tcp)

	def TreeWayHandshake(self, tcp):
		print(sr1(self.getIP()/tcp))

class UDPClient(Transport):
	def __init__(self,httpFileName):
		Transport(httpFileName)

		dport = 80 #serverHTTP
		#len = 
		udp = self.getIP()/UDP(dport = dport, len = 1200, chksum = 0)
		del udp[UDP].chksum
		udp.show()

trans = UDPClient("HTTPRequest.txt")
trans2 = TCPClient()
