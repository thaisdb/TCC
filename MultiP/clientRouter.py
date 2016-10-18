from collections import namedtuple
RoutingTable = namedtuple("RoutingTable", "Destino Mask Gateway Interface Metrica Protocolo")
	
class Router:
	def __init__(self):
		rot = RoutingTable (1, 2, 3, 4, 5, 6)
		print (rot)
		self.mountTable()
	
	def find_path(url):
		if url in routingTable:
			return routingTable[url]
		else:
			return None
	def mountTable(self):
		decide = True
		i = 0
		listTuple = []
		with open("routerTable.txt", "a+") as rtFile:
			while (i < 3):
				inp = raw_input("Digite 6 coisas: ").split(" ")
				print inp
				listTuple.append (RoutingTable(inp[0], inp[1], inp[2], inp[3], inp[4], inp[5]))
				rtFile.write(listTuple[i])
				i += 1
	


routing = Router()	
