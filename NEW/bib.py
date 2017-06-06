#coding:utf-8
from PyQt4.QtGui import QWidget

class wordbook():

    bib = { 'SERVER'    : 'A computer program that provides services to other computer programs (and their users), called clients.',
            'CLIENT'   : 'A client is a program that retrieves information from or uses resources provided by the server',
            'DATAGRAM'  : 'Network Layer PDU',
            'FRAME'     : 'Physical Layer PDU',
            'SEGMENT'   : 'Transport Layer PDU',
            'CHECKSUM'  : 'Number derived from a block of digital data for the purpose of detecting errors which may have been introduced during its transmission or storage.',
            'TCP'       : 'Transmission Control Protocol',
            'IP'        : 'Internet Protocol',
            'HTTP'      : 'Hypertext Transfer Protocol',
            'MTU'       : 'Maximum Transmission Unit'}

    @classmethod
    def getToolTip(self, key):
        return '<html>' + self.bib[str(key)] + '</html>'

