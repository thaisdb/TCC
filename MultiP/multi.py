from multiprocessing import Process, Lock, Queue
from clientAplication import Aplication
from clientTransport import TCPClient, UDPClient
from teste import Work


lock = Lock()
#app = Aplication()
jobs = Queue()


udp = Process(target=UDPClient, args=("HTTPRequest.txt", jobs))
udp.start()

jobs.put(Aplication())
jobs.wait()
jobs.close()
jobs.join_thread()
app.join()

'''
app = Process(target=Aplication, args=(jobs,))
app.start()

jobs.put(UDPClient("HTTPRequest.txt"))

#wait first process to finish
jobs.close()
jobs.join_thread()
app.join()
'''
