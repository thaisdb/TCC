TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qsourcelocation.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlSerializer.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp
