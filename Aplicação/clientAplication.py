from __future__ import with_statement
import sys

from scapy.all import *
from scapy_http import http

#import scapy-http
#from scapy.layers.all import
class Aplication():
	def http_header(package):
    		#http_package=str(package)
    		#if http_package.find('GET') :
    		if not package.haslayer(http.HTTPRequest):
        		#createTXT(package)
        		return
    		httpLayer = package.getlayer(http.HTTPRequest)
    		if httpLayer.Method == 'GET':
        		#print ('{0[Method]} {0[Host]}'.format(httpLayer.fields))
        		createTXT(httpLayer)

	def createTXT(httpLayer):
    		with open ("httpRequest.txt", "a") as httpFile:
        		#apFile.write(star(40) + "HTTP PACKET" + star(40))
        		#print('{0[Method]} {0[Host]}'.format(httpLayer.fields))
       			#print (package)
        		httpLayer.show()


package = sniff(iface = "wlan0", filter="tcp port 80", prn=http_header)

