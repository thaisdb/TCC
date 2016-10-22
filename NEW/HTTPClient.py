import httplib
import sys
import webbrowser as wb
import urllib
import os

HTTPServer = sys.argv[1]

#create connection
connection = httplib.HTTPConnection(HTTPServer)

while 1:
    cmd = raw_input('input command (ex GET index.html): ')
    #split raw in the two arguments
    cmd = cmd.split()
    if cmd[0] == 'exit':
        break

    connection.request(cmd[0],cmd[1])

    rsp = connection.getresponse()
    wb.get('google-chrome')
    #webbrowser.open('file://' + rsp.read())
    #print(rsp.status, rsp.reason)
    data_received = rsp.read()
    with open('received.html', 'w') as filehtml:
        filehtml.write(data_received)
        print os.getcwd()
        wb.open('file://'+ os.getcwd()+'/received.html')
#webbrowser.open( data_received)

connection.close()
