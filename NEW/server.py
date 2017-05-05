# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'server.ui'
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

class Ui_ServerWidget(object):
    def setupUi(self, ServerWidget):
        ServerWidget.setObjectName(_fromUtf8("ServerWidget"))
        ServerWidget.resize(712, 631)
        self.clearButton = QtGui.QPushButton(ServerWidget)
        self.clearButton.setGeometry(QtCore.QRect(510, 580, 176, 27))
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        self.line = QtGui.QFrame(ServerWidget)
        self.line.setGeometry(QtCore.QRect(20, 70, 671, 20))
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.line_2 = QtGui.QFrame(ServerWidget)
        self.line_2.setGeometry(QtCore.QRect(20, 20, 671, 20))
        self.line_2.setFrameShape(QtGui.QFrame.HLine)
        self.line_2.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_2.setObjectName(_fromUtf8("line_2"))
        self.transportLOut = QtGui.QTextEdit(ServerWidget)
        self.transportLOut.setGeometry(QtCore.QRect(360, 130, 331, 200))
        self.transportLOut.setReadOnly(True)
        self.transportLOut.setObjectName(_fromUtf8("transportLOut"))
        self.label_9 = QtGui.QLabel(ServerWidget)
        self.label_9.setGeometry(QtCore.QRect(370, 350, 97, 17))
        self.label_9.setObjectName(_fromUtf8("label_9"))
        self.physicalLOut = QtGui.QTextEdit(ServerWidget)
        self.physicalLOut.setGeometry(QtCore.QRect(360, 370, 330, 200))
        self.physicalLOut.setReadOnly(True)
        self.physicalLOut.setObjectName(_fromUtf8("physicalLOut"))
        self.layoutWidget = QtGui.QWidget(ServerWidget)
        self.layoutWidget.setGeometry(QtCore.QRect(20, 40, 671, 29))
        self.layoutWidget.setObjectName(_fromUtf8("layoutWidget"))
        self.horizontalLayout_4 = QtGui.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout_4.setMargin(0)
        self.horizontalLayout_4.setObjectName(_fromUtf8("horizontalLayout_4"))
        self.serverIPLabel = QtGui.QLabel(self.layoutWidget)
        self.serverIPLabel.setObjectName(_fromUtf8("serverIPLabel"))
        self.horizontalLayout_4.addWidget(self.serverIPLabel)
        self.portLabel = QtGui.QLabel(self.layoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Maximum)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.portLabel.sizePolicy().hasHeightForWidth())
        self.portLabel.setSizePolicy(sizePolicy)
        self.portLabel.setObjectName(_fromUtf8("portLabel"))
        self.horizontalLayout_4.addWidget(self.portLabel)
        self.startButton = QtGui.QPushButton(self.layoutWidget)
        self.startButton.setMaximumSize(QtCore.QSize(219, 27))
        self.startButton.setCheckable(False)
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.horizontalLayout_4.addWidget(self.startButton)
        self.label_7 = QtGui.QLabel(ServerWidget)
        self.label_7.setGeometry(QtCore.QRect(370, 110, 108, 17))
        self.label_7.setObjectName(_fromUtf8("label_7"))
        self.applicationLOut = QtGui.QTextEdit(ServerWidget)
        self.applicationLOut.setGeometry(QtCore.QRect(20, 130, 330, 200))
        self.applicationLOut.setDocumentTitle(_fromUtf8(""))
        self.applicationLOut.setReadOnly(True)
        self.applicationLOut.setObjectName(_fromUtf8("applicationLOut"))
        self.label_8 = QtGui.QLabel(ServerWidget)
        self.label_8.setGeometry(QtCore.QRect(31, 351, 102, 17))
        self.label_8.setObjectName(_fromUtf8("label_8"))
        self.networkLOut = QtGui.QTextEdit(ServerWidget)
        self.networkLOut.setGeometry(QtCore.QRect(20, 370, 330, 200))
        self.networkLOut.setReadOnly(True)
        self.networkLOut.setObjectName(_fromUtf8("networkLOut"))
        self.label_6 = QtGui.QLabel(ServerWidget)
        self.label_6.setGeometry(QtCore.QRect(30, 110, 120, 17))
        self.label_6.setObjectName(_fromUtf8("label_6"))

        self.retranslateUi(ServerWidget)
        QtCore.QMetaObject.connectSlotsByName(ServerWidget)

    def retranslateUi(self, ServerWidget):
        ServerWidget.setWindowTitle(_translate("ServerWidget", "Form", None))
        self.clearButton.setText(_translate("ServerWidget", "Clear", None))
        self.transportLOut.setHtml(_translate("ServerWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", None))
        self.label_9.setText(_translate("ServerWidget", "Physical Layer", None))
        self.serverIPLabel.setText(_translate("ServerWidget", "Server IP:", None))
        self.portLabel.setText(_translate("ServerWidget", "Port:", None))
        self.startButton.setText(_translate("ServerWidget", "Start", None))
        self.label_7.setText(_translate("ServerWidget", "Transport Layer", None))
        self.applicationLOut.setHtml(_translate("ServerWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", None))
        self.label_8.setText(_translate("ServerWidget", "Network Layer", None))
        self.label_6.setText(_translate("ServerWidget", "Application Layer", None))

