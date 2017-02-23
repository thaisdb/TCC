import sys,os
from BaseHTTPServer import BaseHTTPRequestHandler, HTTPServer
import multiprocessing as mp
import transportLayerServer as als

class httpHandler(BaseHTTPRequestHandler):
    #global htmlFile
    def do_GET(self):
        try:
            if self.path.endswith('.html'):
                f = open (DocumentRoot + self.path)
                self.send_response (200)
                self.send_header('Content-type', 'text/html')
                self.end_headers()
                self.wfile.write(f.read())
                f.close()
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
            self.wfile.write('<html>Postoks. <br /><br />')
            self.wfile.write(upfilecontent[0])
            self.wfile.write('</html>')
        except:
            pass


def pyserver(nameVirtualHost):
    try:
        virtualhost = str.split(nameVirtualHost, ':')
        if virtualhost[0] == '*':
            virtualhost[0] = ''
        print virtualhost
        serverAddr = (virtualhost[0], int(virtualhost[1]))
        print 'handling'
        server = HTTPServer(serverAddr, httpHandler)
        print 'servin'
        server.serve_forever()

    except KeyboardInterrupt:
        print 'shuting down server HTTP'
        server.socket.close()

if __name__ == '__main__':
    DocumentRoot = '/home/thais/Faculdade/TCC/NEW/'
    PORT = '8000'
    HOST = 'localhost'
    try:
        print 'sys.argv ' + sys.argv[1]
        pyserver(sys.argv[1])
    except Exception as err:
        print 'error' + str(err)
        #pyserver('%s:%s' % (HOST, PORT))
