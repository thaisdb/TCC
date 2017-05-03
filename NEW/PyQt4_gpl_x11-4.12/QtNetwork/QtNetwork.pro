TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtNetwork
sip.files = ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qurlinfo.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qftp.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qhttp.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/QtNetworkmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQUrlInfo.cpp sipQtNetworkQFtp.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQUdpSocketBindMode.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQSsl.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQHttpRequestHeader.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQMultiMap0100QSslAlternateNameEntryType0100QString.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkcmodule.cpp sipQtNetworkQHttp.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQHttpHeader.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQSslError.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQHttpResponseHeader.cpp
