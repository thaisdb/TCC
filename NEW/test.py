import os
from subprocess import Popen
import socket


    #proc = Popen(['google-chrome'])
    #print proc.pid
    #port = Popen(['lsof -p '+ str(proc.pid)])
    #print str(port)

#te an INET, STREAMing socket
s = socket.socket(
            socket.AF_INET, socket.SOCK_STREAM)
#now connect to the web server on port 80
# - the normal http port
s.connect(("www.mcmillan-inc.com", 80))()
