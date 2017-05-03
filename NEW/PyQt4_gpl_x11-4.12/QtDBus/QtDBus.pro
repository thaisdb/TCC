TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtDBus
sip.files = ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qpydbuspendingreply.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qpydbusreply.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/qdbuserror.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDBus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbusreply.h ../qpy/QtDBus/qpydbus_chimera_helpers.h
SOURCES = sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBus.cpp ../qpy/QtDBus/qpydbusreply.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbus_post_init.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp
