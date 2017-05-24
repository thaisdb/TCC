import netifaces
import os

class PhysicalLayer:
    @staticmethod
    def getMyMAC(interface):
        addr = netifaces.ifaddresses(interface)
        print 'getting MAC'
        return addr[netifaces.AF_LINK][0]['addr']

    @staticmethod
    def getServerMAC(ip):
        return os.popen('arp -a ' + str(ip) + ' | awk \'{print $4}\'').read()[:-1]

