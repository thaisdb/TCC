class ProtocolStruct:
	global METHOD
	global URL
	global VERSION
	global HOST
	global CONNECTION
	global USER_AGENT
	global ACCEPT
	global ACCEPT_LANGUAGE
	global ACCEPT_ENCODING
	#global BUDDY

		
	
	def psHTTP (self, method, url, version, host, connection, user_agent,
			 accept, accept_language, accept_encoding):
		self.METHOD = method
		self.URL = url
		self.VERSION = version
		self.HOST = host
		self.CONNECTION = connection
		self.USER_AGENT = user_agent
		self.ACCEPT = accept
		self.ACCEPT_LANGUAGE = accept_language
		self.ACCEPT_ENCODING = accept_encoding
		#self.BUDDY = buddy

	def psIP (self):
		print ("nothing")



	def printProtocol(self, prt):
		if prt == 'HTTP':
			print ("printProtocolFunction")
			print ('Method: '+ self.METHOD)
			print ('Url: '+ self.URL)
			print ('Version: '+ self.VERSION)
			print ('Host: '+ self.HOST)
			print ('Connection: '+ self.CONNECTION)
			print ('User_Agent: '+ self.USER_AGENT)
			print ('Accept: '+ self.ACCEPT)
			print ('Accept-Language: '+ self.ACCEPT_LANGUAGE)
			print ('Accept-Enconding: ' + self.ACCEPT_ENCODING)

		else:
			print ("Didn\'t recognized the protocol")
