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
        ClientWidget.resize(1277, 715)
        self.toolBox = QtGui.QToolBox(ClientWidget)
        self.toolBox.setGeometry(QtCore.QRect(70, 50, 1181, 651))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.toolBox.sizePolicy().hasHeightForWidth())
        self.toolBox.setSizePolicy(sizePolicy)
        self.toolBox.setFocusPolicy(QtCore.Qt.StrongFocus)
        self.toolBox.setContextMenuPolicy(QtCore.Qt.DefaultContextMenu)
        self.toolBox.setAutoFillBackground(False)
        self.toolBox.setMidLineWidth(0)
        self.toolBox.setObjectName(_fromUtf8("toolBox"))
        self.ConfigurationPage = QtGui.QWidget()
        self.ConfigurationPage.setGeometry(QtCore.QRect(0, 0, 1271, 589))
        self.ConfigurationPage.setAccessibleName(_fromUtf8(""))
        self.ConfigurationPage.setAutoFillBackground(True)
        self.ConfigurationPage.setObjectName(_fromUtf8("ConfigurationPage"))
        self.line_2 = QtGui.QFrame(self.ConfigurationPage)
        self.line_2.setGeometry(QtCore.QRect(0, 50, 681, 16))
        self.line_2.setFrameShape(QtGui.QFrame.HLine)
        self.line_2.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_2.setObjectName(_fromUtf8("line_2"))
        self.label_5 = QtGui.QLabel(self.ConfigurationPage)
        self.label_5.setGeometry(QtCore.QRect(0, 70, 59, 17))
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.layoutWidget = QtGui.QWidget(self.ConfigurationPage)
        self.layoutWidget.setGeometry(QtCore.QRect(0, 20, 411, 24))
        self.layoutWidget.setObjectName(_fromUtf8("layoutWidget"))
        self.horizontalLayout = QtGui.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setMargin(0)
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.label_4 = QtGui.QLabel(self.layoutWidget)
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.horizontalLayout.addWidget(self.label_4)
        self.radTCP = QtGui.QRadioButton(self.layoutWidget)
        self.radTCP.setObjectName(_fromUtf8("radTCP"))
        self.horizontalLayout.addWidget(self.radTCP, 0, QtCore.Qt.AlignHCenter)
        self.radUDP = QtGui.QRadioButton(self.layoutWidget)
        self.radUDP.setChecked(True)
        self.radUDP.setObjectName(_fromUtf8("radUDP"))
        self.horizontalLayout.addWidget(self.radUDP)
        self.line_3 = QtGui.QFrame(self.ConfigurationPage)
        self.line_3.setGeometry(QtCore.QRect(1, 1, 681, 16))
        self.line_3.setFrameShape(QtGui.QFrame.HLine)
        self.line_3.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_3.setObjectName(_fromUtf8("line_3"))
        self.layoutWidget1 = QtGui.QWidget(self.ConfigurationPage)
        self.layoutWidget1.setGeometry(QtCore.QRect(101, 153, 441, 24))
        self.layoutWidget1.setObjectName(_fromUtf8("layoutWidget1"))
        self.horizontalLayout_3 = QtGui.QHBoxLayout(self.layoutWidget1)
        self.horizontalLayout_3.setMargin(0)
        self.horizontalLayout_3.setObjectName(_fromUtf8("horizontalLayout_3"))
        self.checkBox_2 = QtGui.QCheckBox(self.layoutWidget1)
        self.checkBox_2.setObjectName(_fromUtf8("checkBox_2"))
        self.horizontalLayout_3.addWidget(self.checkBox_2)
        self.checkBox = QtGui.QCheckBox(self.layoutWidget1)
        self.checkBox.setObjectName(_fromUtf8("checkBox"))
        self.horizontalLayout_3.addWidget(self.checkBox)
        self.horizontalLayoutWidget = QtGui.QWidget(self.ConfigurationPage)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(100, 90, 261, 29))
        self.horizontalLayoutWidget.setObjectName(_fromUtf8("horizontalLayoutWidget"))
        self.horizontalLayout_2 = QtGui.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout_2.setMargin(0)
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.label_3 = QtGui.QLabel(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_3.sizePolicy().hasHeightForWidth())
        self.label_3.setSizePolicy(sizePolicy)
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.horizontalLayout_2.addWidget(self.label_3)
        self.gatewayEdit = QtGui.QLineEdit(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.gatewayEdit.sizePolicy().hasHeightForWidth())
        self.gatewayEdit.setSizePolicy(sizePolicy)
        self.gatewayEdit.setFocusPolicy(QtCore.Qt.NoFocus)
        self.gatewayEdit.setFrame(True)
        self.gatewayEdit.setObjectName(_fromUtf8("gatewayEdit"))
        self.horizontalLayout_2.addWidget(self.gatewayEdit)
        self.layoutWidget.raise_()
        self.horizontalLayoutWidget.raise_()
        self.line_2.raise_()
        self.label_5.raise_()
        self.layoutWidget.raise_()
        self.line_3.raise_()
        self.toolBox.addItem(self.ConfigurationPage, _fromUtf8(""))
        self.displayPage = QtGui.QWidget()
        self.displayPage.setGeometry(QtCore.QRect(0, 0, 1181, 589))
        self.displayPage.setObjectName(_fromUtf8("displayPage"))
        self.line_4 = QtGui.QFrame(self.displayPage)
        self.line_4.setGeometry(QtCore.QRect(0, 50, 1261, 16))
        self.line_4.setFrameShape(QtGui.QFrame.HLine)
        self.line_4.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_4.setObjectName(_fromUtf8("line_4"))
        self.layoutWidget2 = QtGui.QWidget(self.displayPage)
        self.layoutWidget2.setGeometry(QtCore.QRect(0, 20, 1151, 29))
        self.layoutWidget2.setObjectName(_fromUtf8("layoutWidget2"))
        self.horizontalLayout_4 = QtGui.QHBoxLayout(self.layoutWidget2)
        self.horizontalLayout_4.setMargin(0)
        self.horizontalLayout_4.setObjectName(_fromUtf8("horizontalLayout_4"))
        self.line = QtGui.QFrame(self.layoutWidget2)
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.horizontalLayout_4.addWidget(self.line)
        self.label = QtGui.QLabel(self.layoutWidget2)
        self.label.setObjectName(_fromUtf8("label"))
        self.horizontalLayout_4.addWidget(self.label)
        self.serverIPInput = QtGui.QLineEdit(self.layoutWidget2)
        self.serverIPInput.setInputMask(_fromUtf8(""))
        self.serverIPInput.setText(_fromUtf8(""))
        self.serverIPInput.setMaxLength(3333)
        self.serverIPInput.setObjectName(_fromUtf8("serverIPInput"))
        self.horizontalLayout_4.addWidget(self.serverIPInput)
        self.label_2 = QtGui.QLabel(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Maximum)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_2.sizePolicy().hasHeightForWidth())
        self.label_2.setSizePolicy(sizePolicy)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.horizontalLayout_4.addWidget(self.label_2)
        self.portaInput = QtGui.QLineEdit(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.portaInput.sizePolicy().hasHeightForWidth())
        self.portaInput.setSizePolicy(sizePolicy)
        self.portaInput.setObjectName(_fromUtf8("portaInput"))
        self.horizontalLayout_4.addWidget(self.portaInput)
        self.pingButton = QtGui.QPushButton(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.pingButton.sizePolicy().hasHeightForWidth())
        self.pingButton.setSizePolicy(sizePolicy)
        self.pingButton.setObjectName(_fromUtf8("pingButton"))
        self.horizontalLayout_4.addWidget(self.pingButton)
        self.startButton = QtGui.QPushButton(self.layoutWidget2)
        self.startButton.setCheckable(False)
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.horizontalLayout_4.addWidget(self.startButton)
        self.label_6 = QtGui.QLabel(self.displayPage)
        self.label_6.setGeometry(QtCore.QRect(10, 80, 120, 17))
        self.label_6.setObjectName(_fromUtf8("label_6"))
        self.applicationLOut = QtGui.QTextEdit(self.displayPage)
        self.applicationLOut.setGeometry(QtCore.QRect(0, 100, 571, 200))
        self.applicationLOut.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.applicationLOut.setDocumentTitle(_fromUtf8(""))
        self.applicationLOut.setReadOnly(True)
        self.applicationLOut.setAcceptRichText(True)
        self.applicationLOut.setObjectName(_fromUtf8("applicationLOut"))
        self.applicationLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.label_7 = QtGui.QLabel(self.displayPage)
        self.label_7.setGeometry(QtCore.QRect(600, 80, 108, 17))
        self.label_7.setObjectName(_fromUtf8("label_7"))
        self.transportLOut = QtGui.QTextEdit(self.displayPage)
        self.transportLOut.setGeometry(QtCore.QRect(590, 100, 571, 200))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.transportLOut.sizePolicy().hasHeightForWidth())
        self.transportLOut.setSizePolicy(sizePolicy)
        self.transportLOut.setStyleSheet(_fromUtf8("font: 11pt \"Ubuntu Condensed\";"))
        self.transportLOut.setFrameShape(QtGui.QFrame.StyledPanel)
        self.transportLOut.setFrameShadow(QtGui.QFrame.Raised)
        self.transportLOut.setVerticalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.transportLOut.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.transportLOut.setReadOnly(True)
        self.transportLOut.setObjectName(_fromUtf8("transportLOut"))
        self.transportLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.label_8 = QtGui.QLabel(self.displayPage)
        self.label_8.setGeometry(QtCore.QRect(10, 320, 102, 17))
        self.label_8.setObjectName(_fromUtf8("label_8"))
        self.label_9 = QtGui.QLabel(self.displayPage)
        self.label_9.setGeometry(QtCore.QRect(600, 330, 97, 17))
        self.label_9.setObjectName(_fromUtf8("label_9"))
        self.physicalLOut = QtGui.QTextEdit(self.displayPage)
        self.physicalLOut.setGeometry(QtCore.QRect(590, 350, 571, 200))
        self.physicalLOut.setReadOnly(True)
        self.physicalLOut.setObjectName(_fromUtf8("physicalLOut"))
        self.physicalLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.clearButton = QtGui.QPushButton(self.displayPage)
        self.clearButton.setGeometry(QtCore.QRect(1000, 560, 141, 27))
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        self.networkLOut = QtGui.QTextEdit(self.displayPage)
        self.networkLOut.setGeometry(QtCore.QRect(0, 350, 571, 200))
        self.networkLOut.setObjectName(_fromUtf8("networkLOut"))
        self.networkLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.toolBox.addItem(self.displayPage, _fromUtf8(""))
        self.toolButton = QtGui.QToolButton(ClientWidget)
        self.toolButton.setGeometry(QtCore.QRect(20, 40, 24, 601))
        self.toolButton.setPopupMode(QtGui.QToolButton.DelayedPopup)
        self.toolButton.setAutoRaise(True)
        self.toolButton.setArrowType(QtCore.Qt.LeftArrow)
        self.toolButton.setObjectName(_fromUtf8("toolButton"))

        self.retranslateUi(ClientWidget)
        self.toolBox.setCurrentIndex(1)
        QtCore.QMetaObject.connectSlotsByName(ClientWidget)

    def retranslateUi(self, ClientWidget):
        ClientWidget.setWindowTitle(_translate("ClientWidget", "Form", None))
        self.label_5.setText(_translate("ClientWidget", "Options:", None))
        self.label_4.setText(_translate("ClientWidget", "Transport Protocol:", None))
        self.radTCP.setText(_translate("ClientWidget", "TCP", None))
        self.radUDP.setText(_translate("ClientWidget", "UDP", None))
        self.checkBox_2.setText(_translate("ClientWidget", "Simulação de colisão", None))
        self.checkBox.setText(_translate("ClientWidget", "Step-by-step", None))
        self.label_3.setText(_translate("ClientWidget", "Gateway:", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.ConfigurationPage), _translate("ClientWidget", "Configuration", None))
        self.label.setText(_translate("ClientWidget", "Server IP:", None))
        self.label_2.setText(_translate("ClientWidget", "Porta:", None))
        self.pingButton.setText(_translate("ClientWidget", "Ping", None))
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
"</style></head><body style=\" font-family:\'Ubuntu Condensed\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:\'Ubuntu\';\"><br /></p></body></html>", None))
        self.label_8.setText(_translate("ClientWidget", "Network Layer", None))
        self.label_9.setText(_translate("ClientWidget", "Physical Layer", None))
        self.clearButton.setText(_translate("ClientWidget", "Clear", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.displayPage), _translate("ClientWidget", "Display output", None))
        self.toolButton.setText(_translate("ClientWidget", "...", None))

