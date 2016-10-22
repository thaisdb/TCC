import re
from pData import ProtocolStruct

class Parser:
	protocol = ProtocolStruct()
	def __init__(self, nameFile):
		file = open(nameFile, 'r+')
		words = file.read()
		data = re.split(r'[= \n \s]+',words)
		self.protocol.psHTTP (data[data.index('IP')+1],
				data[data.index('MAC')+1])

Parser('texto')	
