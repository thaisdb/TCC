
class Quadro:

	def __init__(self,mac, llc, ip, tcp_udp, data, crc_mac)
		self.mac = mac
		self.llc = llc
		self.ip = ip	
		self.tcp_udp = tcp_udp
		self.data = data
		self.crc_mac = crc_mac

	def fileToBit(self, fileName)
		
		file = open(self.file, "rb")
		arrayByteToInt=[]
		for byte in file
			arrayByteToInt.append(int(byte.bin)[2:])