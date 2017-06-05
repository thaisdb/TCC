#coding:utf-8
import sys,os
from BaseHTTPServer import BaseHTTPRequestHandler, HTTPServer
from threading import Thread
from clientWidget import Ui_ClientWidget
from PyQt4  import QtCore
from layer import Layer



class httpHandler(BaseHTTPRequestHandler):

    def do_GET(self):
        try:
            if self.path.startswith('/favicon.ico'):
                return
            reqFileName = os.getcwd() + self.path;
            print 'reqFile' + reqFileName

            if os.path.exists (reqFileName):
                self.send_response (200)
                print 'file exists'
                #else:
                 #   f = open(os.getcwd() + self.path, 'rb')
                mimeType = ''
                if self.path.endswith('.html'):
                    mimeType = 'text/html'
                elif self.path.endswith('.jpeg') or  self.path.endswith('.jpg'):
                    mimeType = 'image/jpeg'
                elif self.path.endswith('.gif'):
                    mimeType = 'image/gif'
                elif self.path.endswith('.css'):
                    mimeType = 'text/css'
                elif self.path.endswith('.png'):
                    mimeType = 'image/png'

                f = open (reqFileName, 'r')
                self.send_header('Content-type', mimeType + '; charset=utf-8')
                self.end_headers()
                data = f.read()
                while data:
                    self.wfile.write(data)
                    data = f.read()
                f.close()
                return

        except IOError:
            print (os.getcwd() + self.path)
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

class ApplicationServer(QtCore.QThread):
    def pyserver(self):
        try:
            server = HTTPServer(Layer.ApplicationServer, httpHandler)
            self.msg.emit('started HTTP server')
            server.serve_forever()

        except KeyboardInterrupt:
            self.msg.emit('shuting down server HTTP')
            server.server_close()



    msg = QtCore.pyqtSignal(str)

    def __init__(self, parent=None):
        super(ApplicationServer, self).__init__()

    def run(self):
        self.msg.emit('******************** APPLICATION SERVER ********************')
        DocumentRoot = '/home/thais/Faculdade/TCC/NEW/'
        try:
            #print 'sys.argv ' + sys.argv[1]
            self.pyserver()

        except Exception as err:
            self.msg.emit('error' + str(err))
            #pyserver('%s:%s' % (HOST, PORT))


    def finish(self):
        print 'deleting'
        #i = application()

