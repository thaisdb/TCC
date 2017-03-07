import sys,os
from BaseHTTPServer import BaseHTTPRequestHandler, HTTPServer
from threading import Thread

class httpHandler(BaseHTTPRequestHandler):
    #global htmlFile
    def do_GET(self):
        try:
            #if self.path.endswith('.html'):
            #f = open (DocumentRoot + self.path)
            self.send_response (200)
            self.send_header('Content-type', 'text/html')
            self.end_headers()
            #self.wfile.write(f.read())
            #f.close()
            self.wfile.write('<html> do Get working </html>')
            return

        except IOError:
            print (DocumentRoot+self.path)
            self.send_error(404, 'File not found %s' % self.path)

    def do_POST(self):
        global rootnode
        try:
            ctype, pdict = cgi.parse_header(self.headers.getheader('content-type'))
            if ctype == 'multipart/from-data':
                query = cgi.parse_multipart(self.rfile, pdict)
            self.send_response(301)
            self.end_headers()
            upfilecontent = query.get('upfile')
            print "filecontent", upfilecontent[0]
            self.wfile.write('<html>Post oks. <br /><br />')
            self.wfile.write(upfilecontent[0])
            self.wfile.write('</html>')
        except:
            pass

class ApplicationServer(Thread):
    def pyserver(self):
        try:
            virtualhost = ('', 7777)
            #if virtualhost[0] == '*':
            #    virtualhost[0] = ''
            #print virtualhost
            #serverAddr = (virtualhost[0], int(virtualhost[1]))
            server = HTTPServer(virtualhost, httpHandler)
            print 'started HTTP server'
            server.serve_forever()

        except KeyboardInterrupt:
            print 'shuting down server HTTP'
            server.server_close()


    #def receiveFromTransportLayer(self):
     #   transportSocket = socket(AF_INET, SOCK_STREAM)
     #   transportSocket.bind('127.0.0.1', 7777)
     #   transportSocket.listen()
     #   print 'waiting from transport'
     #   clientSocket, addr = transportSocket.accept()
     #   self.package = clientSocket.recv(1024)
     #   print 'RECEIVED = \n' + self.package

    def __init__(self):
        print '******************** APPLICATION SERVER ********************'
        DocumentRoot = '/home/thais/Faculdade/TCC/NEW/'
        PORT = '8000'
        HOST = 'localhost'
        try:
            #print 'sys.argv ' + sys.argv[1]
            self.pyserver()

        except Exception as err:
            print 'error' + str(err)
            #pyserver('%s:%s' % (HOST, PORT))


    def finish(self):
        print 'deleting'
        #i = application()

ApplicationServer()
