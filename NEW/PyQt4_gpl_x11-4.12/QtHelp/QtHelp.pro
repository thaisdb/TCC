TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += help
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtHelp
sip.files = ../sip/QtHelp/qhelpindexwidget.sip ../sip/QtHelp/QtHelpmod.sip ../sip/QtHelp/qhelpsearchquerywidget.sip ../sip/QtHelp/qhelpcontentwidget.sip ../sip/QtHelp/qhelpenginecore.sip ../sip/QtHelp/qhelpengine.sip ../sip/QtHelp/qhelpsearchengine.sip ../sip/QtHelp/qhelpsearchresultwidget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtHelp.exp
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

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQHelpSearchQuery.cpp sipQtHelpcmodule.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQHelpIndexWidget.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpQHelpIndexModel.cpp sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQList0100QStringList.cpp sipQtHelpQHelpEngineCore.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQHelpContentWidget.cpp
