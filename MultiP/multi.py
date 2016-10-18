from multiprocessing import Process, Lock, Queue
from clientAplication import Aplication
#from TCP import clientTCP, serverTCP
from teste import Work

def f(l, i):
	l.acquire()
	print 'hello world', i
	l.release()


lock = Lock()
app = Aplication()
#q = Queue()
#wk = Process(target=Work, args=(q,)).start()	
#app = Process(target=Aplication, args=(q,)).start()

