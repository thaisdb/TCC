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

class Ui_ClientWidget(object):
    def setupUi(self, ClientWidget):
        ClientWidget.setObjectName(_fromUtf8("ClientWidget"))
        ClientWidget.resize(615, 544)
        self.toolBox = QtGui.QToolBox(ClientWidget)
        self.toolBox.setGeometry(QtCore.QRect(20, 20, 561, 481))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.toolBox.sizePolicy().hasHeightForWidth())
        self.toolBox.setSizePolicy(sizePolicy)
        self.toolBox.setObjectName(_fromUtf8("toolBox"))
        self.ConfigurationPage = QtGui.QWidget()
        self.ConfigurationPage.setGeometry(QtCore.QRect(0, 0, 561, 419))
        self.ConfigurationPage.setAccessibleName(_fromUtf8(""))
        self.ConfigurationPage.setAutoFillBackground(True)
        self.ConfigurationPage.setObjectName(_fromUtf8("ConfigurationPage"))
        self.verticalLayoutWidget = QtGui.QWidget(self.ConfigurationPage)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(-2, 1, 561, 241))
        self.verticalLayoutWidget.setObjectName(_fromUtf8("verticalLayoutWidget"))
        self.verticalLayout_3 = QtGui.QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout_3.setMargin(0)
        self.verticalLayout_3.setObjectName(_fromUtf8("verticalLayout_3"))
        self.line_3 = QtGui.QFrame(self.verticalLayoutWidget)
        self.line_3.setFrameShape(QtGui.QFrame.HLine)
        self.line_3.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_3.setObjectName(_fromUtf8("line_3"))
        self.verticalLayout_3.addWidget(self.line_3)
        self.label_3 = QtGui.QLabel(self.verticalLayoutWidget)
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.verticalLayout_3.addWidget(self.label_3)
        self.line = QtGui.QFrame(self.verticalLayoutWidget)
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.verticalLayout_3.addWidget(self.line)
        self.label_4 = QtGui.QLabel(self.verticalLayoutWidget)
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.verticalLayout_3.addWidget(self.label_4)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.radUDP = QtGui.QRadioButton(self.verticalLayoutWidget)
        self.radUDP.setChecked(True)
        self.radUDP.setObjectName(_fromUtf8("radUDP"))
        self.horizontalLayout.addWidget(self.radUDP, 0, QtCore.Qt.AlignHCenter)
        self.radTCP = QtGui.QRadioButton(self.verticalLayoutWidget)
        self.radTCP.setObjectName(_fromUtf8("radTCP"))
        self.horizontalLayout.addWidget(self.radTCP, 0, QtCore.Qt.AlignHCenter)
        self.verticalLayout_3.addLayout(self.horizontalLayout)
        self.line_2 = QtGui.QFrame(self.verticalLayoutWidget)
        self.line_2.setFrameShape(QtGui.QFrame.HLine)
        self.line_2.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_2.setObjectName(_fromUtf8("line_2"))
        self.verticalLayout_3.addWidget(self.line_2)
        self.label_5 = QtGui.QLabel(self.verticalLayoutWidget)
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.verticalLayout_3.addWidget(self.label_5)
        self.horizontalLayout_3 = QtGui.QHBoxLayout()
        self.horizontalLayout_3.setObjectName(_fromUtf8("horizontalLayout_3"))
        self.checkBox_2 = QtGui.QCheckBox(self.verticalLayoutWidget)
        self.checkBox_2.setObjectName(_fromUtf8("checkBox_2"))
        self.horizontalLayout_3.addWidget(self.checkBox_2)
        self.checkBox = QtGui.QCheckBox(self.verticalLayoutWidget)
        self.checkBox.setObjectName(_fromUtf8("checkBox"))
        self.horizontalLayout_3.addWidget(self.checkBox)
        self.verticalLayout_3.addLayout(self.horizontalLayout_3)
        self.toolBox.addItem(self.ConfigurationPage, _fromUtf8(""))
        self.displayPage = QtGui.QWidget()
        self.displayPage.setGeometry(QtCore.QRect(0, 0, 561, 419))
        self.displayPage.setObjectName(_fromUtf8("displayPage"))
        self.layoutWidget = QtGui.QWidget(self.displayPage)
        self.layoutWidget.setGeometry(QtCore.QRect(0, 0, 561, 411))
        self.layoutWidget.setObjectName(_fromUtf8("layoutWidget"))
        self.verticalLayout = QtGui.QVBoxLayout(self.layoutWidget)
        self.verticalLayout.setMargin(0)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.horizontalLayout_4 = QtGui.QHBoxLayout()
        self.horizontalLayout_4.setObjectName(_fromUtf8("horizontalLayout_4"))
        self.label = QtGui.QLabel(self.layoutWidget)
        self.label.setObjectName(_fromUtf8("label"))
        self.horizontalLayout_4.addWidget(self.label)
        self.serverIPInput = QtGui.QLineEdit(self.layoutWidget)
        self.serverIPInput.setInputMask(_fromUtf8(""))
        self.serverIPInput.setText(_fromUtf8(""))
        self.serverIPInput.setMaxLength(3333)
        self.serverIPInput.setObjectName(_fromUtf8("serverIPInput"))
        self.horizontalLayout_4.addWidget(self.serverIPInput)
        self.label_2 = QtGui.QLabel(self.layoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Maximum)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_2.sizePolicy().hasHeightForWidth())
        self.label_2.setSizePolicy(sizePolicy)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.horizontalLayout_4.addWidget(self.label_2)
        self.portaInput = QtGui.QLineEdit(self.layoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.portaInput.sizePolicy().hasHeightForWidth())
        self.portaInput.setSizePolicy(sizePolicy)
        self.portaInput.setObjectName(_fromUtf8("portaInput"))
        self.horizontalLayout_4.addWidget(self.portaInput)
        self.pingButton = QtGui.QPushButton(self.layoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.pingButton.sizePolicy().hasHeightForWidth())
        self.pingButton.setSizePolicy(sizePolicy)
        self.pingButton.setObjectName(_fromUtf8("pingButton"))
        self.horizontalLayout_4.addWidget(self.pingButton)
        self.verticalLayout.addLayout(self.horizontalLayout_4)
        self.horizontalLayout_2 = QtGui.QHBoxLayout()
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.clearButton = QtGui.QPushButton(self.layoutWidget)
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        self.horizontalLayout_2.addWidget(self.clearButton)
        self.startButton = QtGui.QPushButton(self.layoutWidget)
        self.startButton.setCheckable(False)
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.horizontalLayout_2.addWidget(self.startButton)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.label_6 = QtGui.QLabel(self.layoutWidget)
        self.label_6.setObjectName(_fromUtf8("label_6"))
        self.verticalLayout.addWidget(self.label_6)
        self.applicationLOut = QtGui.QTextEdit(self.layoutWidget)
        self.applicationLOut.setDocumentTitle(_fromUtf8(""))
        self.applicationLOut.setReadOnly(True)
        self.applicationLOut.setObjectName(_fromUtf8("applicationLOut"))
        self.verticalLayout.addWidget(self.applicationLOut)
        self.label_7 = QtGui.QLabel(self.layoutWidget)
        self.label_7.setObjectName(_fromUtf8("label_7"))
        self.verticalLayout.addWidget(self.label_7)
        self.transportLOut = QtGui.QTextEdit(self.layoutWidget)
        self.transportLOut.setReadOnly(True)
        self.transportLOut.setObjectName(_fromUtf8("transportLOut"))
        self.verticalLayout.addWidget(self.transportLOut)
        self.label_8 = QtGui.QLabel(self.layoutWidget)
        self.label_8.setObjectName(_fromUtf8("label_8"))
        self.verticalLayout.addWidget(self.label_8)
        self.networkLOut = QtGui.QTextEdit(self.layoutWidget)
        self.networkLOut.setReadOnly(True)
        self.networkLOut.setObjectName(_fromUtf8("networkLOut"))
        self.verticalLayout.addWidget(self.networkLOut)
        self.label_9 = QtGui.QLabel(self.layoutWidget)
        self.label_9.setObjectName(_fromUtf8("label_9"))
        self.verticalLayout.addWidget(self.label_9)
        self.physicalLOut = QtGui.QTextEdit(self.layoutWidget)
        self.physicalLOut.setReadOnly(True)
        self.physicalLOut.setObjectName(_fromUtf8("physicalLOut"))
        self.verticalLayout.addWidget(self.physicalLOut)
        self.toolBox.addItem(self.displayPage, _fromUtf8(""))

        self.retranslateUi(ClientWidget)
        self.toolBox.setCurrentIndex(1)
        QtCore.QMetaObject.connectSlotsByName(ClientWidget)

    def retranslateUi(self, ClientWidget):
        ClientWidget.setWindowTitle(_translate("ClientWidget", "Form", None))
        self.label_3.setText(_translate("ClientWidget", "Server configuration:", None))
        self.label_4.setText(_translate("ClientWidget", "Transport Protocol:", None))
        self.radUDP.setText(_translate("ClientWidget", "UDP", None))
        self.radTCP.setText(_translate("ClientWidget", "TCP", None))
        self.label_5.setText(_translate("ClientWidget", "Options:", None))
        self.checkBox_2.setText(_translate("ClientWidget", "Simulação de colisão", None))
        self.checkBox.setText(_translate("ClientWidget", "Step-by-step", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.ConfigurationPage), _translate("ClientWidget", "Configuration", None))
        self.label.setText(_translate("ClientWidget", "Server IP:", None))
        self.label_2.setText(_translate("ClientWidget", "Porta:", None))
        self.pingButton.setText(_translate("ClientWidget", "Ping", None))
        self.clearButton.setText(_translate("ClientWidget", "Clear", None))
        self.startButton.setText(_translate("ClientWidget", "Start", None))
        self.label_6.setText(_translate("ClientWidget", "Application Layer", None))
        self.applicationLOut.setHtml(_translate("ClientWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", None))
        self.label_7.setText(_translate("ClientWidget", "Transport Layer", None))
        self.transportLOut.setHtml(_translate("ClientWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", None))
        self.label_8.setText(_translate("ClientWidget", "Network Layer", None))
        self.label_9.setText(_translate("ClientWidget", "Physical Layer", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.displayPage), _translate("ClientWidget", "Display output", None))

