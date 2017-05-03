TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtXml
sip.files = ../sip/QtXml/QtXmlmod.sip ../sip/QtXml/qxml.sip ../sip/QtXml/qxmlstream.sip ../sip/QtXml/qdom.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlAttributes.cpp sipQtXmlQDomAttr.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQXmlReader.cpp sipQtXmlQDomDocument.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomNotation.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQDomText.cpp sipQtXmlQDomComment.cpp sipQtXmlQXmlDeclHandler.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlcmodule.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQDomElement.cpp
