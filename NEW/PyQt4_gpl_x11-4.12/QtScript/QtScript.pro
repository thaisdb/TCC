TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += script
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtScript.pyd
    target.files = QtScript.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtScript.so
    target.files = QtScript.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtScript
sip.files = ../sip/QtScript/qscriptcontext.sip ../sip/QtScript/qscriptvalueiterator.sip ../sip/QtScript/qscriptengineagent.sip ../sip/QtScript/qscriptengine.sip ../sip/QtScript/qscriptcontextinfo.sip ../sip/QtScript/qscriptstring.sip ../sip/QtScript/qscriptclasspropertyiterator.sip ../sip/QtScript/qscriptvalue.sip ../sip/QtScript/qscriptclass.sip ../sip/QtScript/QtScriptmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtScript.exp
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

TARGET = QtScript
HEADERS = sipAPIQtScript.h
SOURCES = sipQtScriptQScriptValueIterator.cpp sipQtScriptQScriptClass.cpp sipQtScriptQScriptContext.cpp sipQtScriptQScriptString.cpp sipQtScriptQScriptClassPropertyIterator.cpp sipQtScriptQScriptEngineQObjectWrapOptions.cpp sipQtScriptQScriptSyntaxCheckResult.cpp sipQtScriptQScriptValueResolveFlags.cpp sipQtScriptQList0100QScriptContextInfo.cpp sipQtScriptQScriptValue.cpp sipQtScriptcmodule.cpp sipQtScriptQScriptEngineAgent.cpp sipQtScriptQList0100QScriptValue.cpp sipQtScriptQScriptClassQueryFlags.cpp sipQtScriptQScriptEngine.cpp sipQtScriptQScriptContextInfo.cpp sipQtScriptQScriptValuePropertyFlags.cpp
