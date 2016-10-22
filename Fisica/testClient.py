from socket import *

class testClient:
	def __init__(self):
		clientSocket = socket(AF_INET, SOCK_STREAM)
		clientSocket.connect(('127.0.0.1', 50010))
		msg = open("new.txt", "r")
		clientSocket.send(msg)
		clientSocket.close()

teste = testClient()