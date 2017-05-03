TEMPLATE = lib
CONFIG += warn_on plugin
QT += declarative network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDeclarative.pyd
    target.files = QtDeclarative.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtDeclarative.so
    target.files = QtDeclarative.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtDeclarative
sip.files = ../sip/QtDeclarative/qdeclarativeextensionplugin.sip ../sip/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip ../sip/QtDeclarative/qdeclarativecomponent.sip ../sip/QtDeclarative/QtDeclarativemod.sip ../sip/QtDeclarative/qdeclarativecontext.sip ../sip/QtDeclarative/qdeclarativeproperty.sip ../sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip ../sip/QtDeclarative/qdeclarativeengine.sip ../sip/QtDeclarative/qdeclarativeparserstatus.sip ../sip/QtDeclarative/qdeclarativeitem.sip ../sip/QtDeclarative/qpydeclarativelistproperty.sip ../sip/QtDeclarative/qdeclarativeview.sip ../sip/QtDeclarative/qdeclarativeimageprovider.sip ../sip/QtDeclarative/qdeclarativelist.sip ../sip/QtDeclarative/qdeclarativescriptstring.sip ../sip/QtDeclarative/qdeclarativepropertyvaluesource.sip ../sip/QtDeclarative/qdeclarativeerror.sip ../sip/QtDeclarative/qdeclarativepropertymap.sip ../sip/QtDeclarative/qdeclarativeexpression.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDeclarative.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDeclarative

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDeclarative
HEADERS = sipAPIQtDeclarative.h ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.h ../qpy/QtDeclarative/qpydeclarativepropertyvaluesource.h ../qpy/QtDeclarative/qpydeclarative_listwrapper.h ../qpy/QtDeclarative/qpydeclarativelistproperty.h ../qpy/QtDeclarative/qpydeclarative_api.h
SOURCES = sipQtDeclarativeQDeclarativePropertyMap.cpp sipQtDeclarativeQDeclarativeItem.cpp sipQtDeclarativeQDeclarativeProperty.cpp sipQtDeclarativeQDeclarativeListReference.cpp sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp sipQtDeclarativeQDeclarativeEngine.cpp sipQtDeclarativeQDeclarativeScriptString.cpp sipQtDeclarativeQDeclarativeError.cpp sipQtDeclarativeQDeclarativeContext.cpp sipQtDeclarativeQDeclarativeExtensionPlugin.cpp sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp sipQtDeclarativeQDeclarativeParserStatus.cpp sipQtDeclarativeQDeclarativeImageProvider.cpp sipQtDeclarativeQDeclarativeView.cpp sipQtDeclarativeQDeclarativePropertyValueSource.cpp sipQtDeclarativeQDeclarativeExpression.cpp sipQtDeclarativecmodule.cpp sipQtDeclarativeQDeclarativeListProperty0100QObject.cpp sipQtDeclarativeQList0100QDeclarativeError.cpp sipQtDeclarativeQDeclarativeComponent.cpp ../qpy/QtDeclarative/qpydeclarative_post_init.cpp ../qpy/QtDeclarative/qpydeclarative_listwrapper.cpp ../qpy/QtDeclarative/qpydeclarativelistproperty.cpp ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.cpp
