# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'client.ui'
#
# Created by: PyQt4 UI code generator 4.12
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_ClientWindow(object):
    def setupUi(self, ClientWindow):
        ClientWindow.setObjectName(_fromUtf8("ClientWindow"))
        ClientWindow.resize(806, 589)
        self.centralwidget = QtGui.QWidget(ClientWindow)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.gridLayoutWidget = QtGui.QWidget(self.centralwidget)
        self.gridLayoutWidget.setGeometry(QtCore.QRect(60, 30, 641, 438))
        self.gridLayoutWidget.setObjectName(_fromUtf8("gridLayoutWidget"))
        self.gridLayout = QtGui.QGridLayout(self.gridLayoutWidget)
        self.gridLayout.setMargin(0)
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.verticalLayout = QtGui.QVBoxLayout()
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.radUDP = QtGui.QRadioButton(self.gridLayoutWidget)
        self.radUDP.setChecked(True)
        self.radUDP.setObjectName(_fromUtf8("radUDP"))
        self.horizontalLayout.addWidget(self.radUDP, 0, QtCore.Qt.AlignHCenter)
        self.radTCP = QtGui.QRadioButton(self.gridLayoutWidget)
        self.radTCP.setObjectName(_fromUtf8("radTCP"))
        self.horizontalLayout.addWidget(self.radTCP, 0, QtCore.Qt.AlignHCenter)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.applicationLOut = QtGui.QTextEdit(self.gridLayoutWidget)
        self.applicationLOut.setObjectName(_fromUtf8("applicationLOut"))
        self.verticalLayout.addWidget(self.applicationLOut)
        self.transportLOut = QtGui.QTextEdit(self.gridLayoutWidget)
        self.transportLOut.setObjectName(_fromUtf8("transportLOut"))
        self.verticalLayout.addWidget(self.transportLOut)
        self.internetLOut = QtGui.QTextEdit(self.gridLayoutWidget)
        self.internetLOut.setObjectName(_fromUtf8("internetLOut"))
        self.verticalLayout.addWidget(self.internetLOut)
        self.physicalLOut = QtGui.QTextEdit(self.gridLayoutWidget)
        self.physicalLOut.setObjectName(_fromUtf8("physicalLOut"))
        self.verticalLayout.addWidget(self.physicalLOut)
        self.horizontalLayout_2 = QtGui.QHBoxLayout()
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.clearButton = QtGui.QPushButton(self.gridLayoutWidget)
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        self.horizontalLayout_2.addWidget(self.clearButton)
        self.startButton = QtGui.QPushButton(self.gridLayoutWidget)
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.horizontalLayout_2.addWidget(self.startButton)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.gridLayout.addLayout(self.verticalLayout, 0, 0, 1, 1)
        self.gridLayoutWidget.raise_()
        self.radTCP.raise_()
        ClientWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(ClientWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 806, 25))
        self.menubar.setObjectName(_fromUtf8("menubar"))
        ClientWindow.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(ClientWindow)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        ClientWindow.setStatusBar(self.statusbar)
        self.toolBar = QtGui.QToolBar(ClientWindow)
        self.toolBar.setObjectName(_fromUtf8("toolBar"))
        ClientWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.toolBar)

        self.retranslateUi(ClientWindow)
        QtCore.QMetaObject.connectSlotsByName(ClientWindow)

    def retranslateUi(self, ClientWindow):
        ClientWindow.setWindowTitle(_translate("ClientWindow", "MainWindow", None))
        self.radUDP.setText(_translate("ClientWindow", "UDP", None))
        self.radTCP.setText(_translate("ClientWindow", "TCP", None))
        self.applicationLOut.setHtml(_translate("ClientWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">dfadfad</p></body></html>", None))
        self.transportLOut.setHtml(_translate("ClientWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", None))
        self.clearButton.setText(_translate("ClientWindow", "Clear", None))
        self.startButton.setText(_translate("ClientWindow", "Start", None))
        self.toolBar.setWindowTitle(_translate("ClientWindow", "toolBar", None))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    ClientWindow = QtGui.QMainWindow()
    ui = Ui_ClientWindow()
    ui.setupUi(ClientWindow)
    ClientWindow.show()
    sys.exit(app.exec_())

