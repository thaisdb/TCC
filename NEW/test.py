import os
from subprocess import Popen



def testPID():
    proc = Popen(['google-chrome'])
    print proc.pid
    port = Popen(['lsof -p '+ str(proc.pid)])
    print str(port)

testPID()
