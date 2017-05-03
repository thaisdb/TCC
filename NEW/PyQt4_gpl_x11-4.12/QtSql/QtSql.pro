TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtSql
sip.files = ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsql.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqlresult.sip ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/qsqlquerymodel.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlRecord.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQSqlError.cpp sipQtSqlQSqlParamType.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSql.cpp
