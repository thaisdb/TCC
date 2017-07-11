#coding:utf-8
from PyQt4.QtGui import QWidget

class wordbook():

    bib = { 'SERVER'    : 'A computer program that provides services to other computer programs (and their users), called clients.',
            'CLIENT'    : 'A client is a program that retrieves information from or uses resources provided by the server',
            'DATAGRAM'  : 'Network Layer PDU',
            'FRAME'     : 'Physical Layer PDU',
            'SEGMENT'   : 'Transport Layer PDU',
            'CHECKSUM'  : 'Number derived from a block of digital data for the purpose of detecting errors which may have been introduced during its transmission or storage.',
            'TCP'       : 'Transmission Control Protocol',
            'IP'        : 'Internet Protocol',
            'HTTP'      : 'Hypertext Transfer Protocol',
            'MTU'       : 'Maximum Transmission Unit',
            'UDP'       : 'User Datagram Protocol',
            'IHL'       : 'Internet Header Length',
            'TOS'       : 'Type of Service',
            'ECN'       : 'Explicit Congestion Notification (optional)',
            'FRAGMENT OFFSET'   : 'Specifies the offset of a particular fragment relative to the beginning of the original unfragmented IP datagram',
            'TIME TO LIVE'      : 'Limits a datagram\'s lifetime. In practice, the field has become a hop count—when the datagram arrives at a router, the router decrements the TTL field by one. When the TTL field hits zero, the router discards the packet and typically sends an ICMP Time Exceeded message to the sender. ',
            'FCS'       : 'Frame check sequence',
            'URL'       : 'Uniform Resource Locator',
            'MASK'      : 'A Subnet mask is a 32-bit number that masks an IP address, and divides the IP address into network address and host address.',
            'GATEWAY'   : 'Gateway is the computer that routes traffic from a workstation to the outside network that is serving up the Web pages.',
            'MAC'       : ' MAC address is a unique identifier assigned to network hardware interfaces for communicating on the physical network such as Ethernet.'}
    @classmethod
    def getToolTip(self, key):
        return '<html>' + self.bib[str(key)] + '</html>'

