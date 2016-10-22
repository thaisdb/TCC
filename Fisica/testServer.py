from socket import *

class testServer:
	def __init__(self):
		self.serversocket = socket(AF_INET, SOCK_STREAM)   
		self.serversocket.bind(('127.0.0.1', 50010))
		self.serversocket.listen(1)
		clientSocket, addr = self.serversocket.accept()
		data = open("newest.txt", "w")
		msg 
		clientSocket.recv(msg)
		data.write(msg)
		print (msg)
		clientSocket.close()

teste = testServer()