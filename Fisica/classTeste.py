
class Teste:

	def __init__(self):
		with open("new.txt", "br+") as file:
			arrayByteToInt=[]
			byte = file.read(1)
			while byte:
				arrayByteToInt.append(bin(ord(byte))[2:])
				byte = file.read(1)

			print (arrayByteToInt)
teste = Teste()