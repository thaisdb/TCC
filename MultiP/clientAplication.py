from __future__ import with_statement
import sys

from scapy.all import *
from scapy_http import http
class style:
   BOLD = '\033[1m'
   END = '\033[0m'

class Aplication():
	def http_header(self, package):
		#print ("***Getting request package***")
		if package.haslayer(http.HTTPRequest):	
			httpLayer = package.getlayer(http.HTTPRequest)
			if httpLayer.Method == 'GET':
				#package.show()
				self.createTXT(httpLayer)
				return

	def createTXT(self, httpLayer):
		print ("***Creating File***")
		with open ("HTTPRequest.txt", "a") as httpFile:
			#print(httpLayer)
			#httpFile.write("x-x-x-x-x-x-x-x-x-x Resquest Line: x-x-x-x-x-x-x-x-x-x\n")
			httpFile.write("\tMethod: %s" % '{[Method]}\t'.format(httpLayer.fields))
			#path = "{[Path]}".format(httpLayer.fields)
			#if len(path) > 10:		
			#	httpFile.write("\tUrl: %s" % "{[Path[:10]]}(...)\t".format(httpLayer.fields))
			#else:
			httpFile.write("\tUrl: %s" % "{[Path]}\t".format(httpLayer.fields))	
			httpFile.write("\tVersion: %s" % "{[Http-Version]}\n".format(httpLayer.fields))
			
			#httpFile.write("x-x-x-x-x-x-x-x-x-x General Header: x-x-x-x-x-x-x-x-x-x\n")
			httpFile.write("\tHost: %s" % "{[Host]}\n".format(httpLayer.fields))
			#httpFile.write("\tCache-Control: %s" % "{[Cache-Control]}\n".format(httpLayer.fields))
			httpFile.write("\tConnection: %s" % "{[Connection]}\n".format(httpLayer.fields))
			httpFile.write("\tUser-Agent: %s" % "{[User-Agent]}\n".format(httpLayer.fields))
			httpFile.write("\tAccept: %s" % "{[Accept]}\n".format(httpLayer.fields))
			httpFile.write("\tAccept-Language: %s" % "{[Accept-Language]}\n".format(httpLayer.fields))
			httpFile.write("\tAccept-Encoding: %s" % "{[Accept-Encoding]}\n".format(httpLayer.fields))
			httpFile.write("\tEnd\n\n\n\n")
			return	
			
	#def __init__(self, q):
	def __init__ (self):
		print ("sniffing...")
		package = sniff(iface = "wlan0", filter="tcp port 80", prn=self.http_header)



print("***Aplication***")
app = Aplication()
