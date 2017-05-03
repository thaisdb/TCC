TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtNetwork QtDeclarative QtScript QtScriptTools QtXml QtOpenGL QtSql QtSvg QtTest QtXmlPatterns QtDesigner QtDBus Qt pylupdate pyrcc designer

init_py.files = /home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/__init__.py
init_py.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += init_py

uic_package.files = /home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/pyuic/uic
uic_package.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += uic_package

pyuic4.files = pyuic4
pyuic4.path = /home/thais/Faculdade/TCC/NEW/pyenv/bin
INSTALLS += pyuic4
