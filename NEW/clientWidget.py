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
        ClientWidget.resize(1277, 754)
        self.toolBox = QtGui.QToolBox(ClientWidget)
        self.toolBox.setGeometry(QtCore.QRect(60, 30, 1191, 651))
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
        self.ConfigurationPage.setEnabled(True)
        self.ConfigurationPage.setGeometry(QtCore.QRect(0, 0, 1191, 599))
        self.ConfigurationPage.setAccessibleName(_fromUtf8(""))
        self.ConfigurationPage.setAutoFillBackground(True)
        self.ConfigurationPage.setObjectName(_fromUtf8("ConfigurationPage"))
        self.line_2 = QtGui.QFrame(self.ConfigurationPage)
        self.line_2.setGeometry(QtCore.QRect(0, 50, 1161, 16))
        self.line_2.setFrameShape(QtGui.QFrame.HLine)
        self.line_2.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_2.setObjectName(_fromUtf8("line_2"))
        self.label_5 = QtGui.QLabel(self.ConfigurationPage)
        self.label_5.setGeometry(QtCore.QRect(20, 80, 121, 31))
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.layoutWidget = QtGui.QWidget(self.ConfigurationPage)
        self.layoutWidget.setGeometry(QtCore.QRect(20, 20, 411, 24))
        self.layoutWidget.setObjectName(_fromUtf8("layoutWidget"))
        self.horizontalLayout = QtGui.QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setMargin(0)
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.label_4 = QtGui.QLabel(self.layoutWidget)
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.horizontalLayout.addWidget(self.label_4)
        self.radUDP = QtGui.QRadioButton(self.layoutWidget)
        self.radUDP.setChecked(True)
        self.radUDP.setObjectName(_fromUtf8("radUDP"))
        self.horizontalLayout.addWidget(self.radUDP, 0, QtCore.Qt.AlignHCenter)
        self.radTCP = QtGui.QRadioButton(self.layoutWidget)
        self.radTCP.setObjectName(_fromUtf8("radTCP"))
        self.horizontalLayout.addWidget(self.radTCP, 0, QtCore.Qt.AlignHCenter)
        self.line_3 = QtGui.QFrame(self.ConfigurationPage)
        self.line_3.setGeometry(QtCore.QRect(1, 1, 1161, 16))
        self.line_3.setFrameShape(QtGui.QFrame.HLine)
        self.line_3.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_3.setObjectName(_fromUtf8("line_3"))
        self.layoutWidget1 = QtGui.QWidget(self.ConfigurationPage)
        self.layoutWidget1.setGeometry(QtCore.QRect(70, 300, 297, 24))
        self.layoutWidget1.setObjectName(_fromUtf8("layoutWidget1"))
        self.horizontalLayout_3 = QtGui.QHBoxLayout(self.layoutWidget1)
        self.horizontalLayout_3.setMargin(0)
        self.horizontalLayout_3.setObjectName(_fromUtf8("horizontalLayout_3"))
        self.stepBox = QtGui.QCheckBox(self.layoutWidget1)
        self.stepBox.setObjectName(_fromUtf8("stepBox"))
        self.horizontalLayout_3.addWidget(self.stepBox)
        self.checkBox = QtGui.QCheckBox(self.layoutWidget1)
        self.checkBox.setObjectName(_fromUtf8("checkBox"))
        self.horizontalLayout_3.addWidget(self.checkBox)
        self.horizontalLayoutWidget = QtGui.QWidget(self.ConfigurationPage)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(70, 240, 231, 29))
        self.horizontalLayoutWidget.setObjectName(_fromUtf8("horizontalLayoutWidget"))
        self.horizontalLayout_2 = QtGui.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout_2.setMargin(0)
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.label_3 = QtGui.QLabel(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_3.sizePolicy().hasHeightForWidth())
        self.label_3.setSizePolicy(sizePolicy)
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.horizontalLayout_2.addWidget(self.label_3)
        self.gatewayEdit = QtGui.QLineEdit(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.gatewayEdit.sizePolicy().hasHeightForWidth())
        self.gatewayEdit.setSizePolicy(sizePolicy)
        self.gatewayEdit.setFocusPolicy(QtCore.Qt.NoFocus)
        self.gatewayEdit.setFrame(True)
        self.gatewayEdit.setObjectName(_fromUtf8("gatewayEdit"))
        self.horizontalLayout_2.addWidget(self.gatewayEdit)
        self.horizontalLayoutWidget_4 = QtGui.QWidget(self.ConfigurationPage)
        self.horizontalLayoutWidget_4.setGeometry(QtCore.QRect(70, 140, 230, 29))
        self.horizontalLayoutWidget_4.setObjectName(_fromUtf8("horizontalLayoutWidget_4"))
        self.horizontalLayout_7 = QtGui.QHBoxLayout(self.horizontalLayoutWidget_4)
        self.horizontalLayout_7.setMargin(0)
        self.horizontalLayout_7.setObjectName(_fromUtf8("horizontalLayout_7"))
        self.label_10 = QtGui.QLabel(self.horizontalLayoutWidget_4)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_10.sizePolicy().hasHeightForWidth())
        self.label_10.setSizePolicy(sizePolicy)
        self.label_10.setObjectName(_fromUtf8("label_10"))
        self.horizontalLayout_7.addWidget(self.label_10)
        self.frameInput = QtGui.QLineEdit(self.horizontalLayoutWidget_4)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.frameInput.sizePolicy().hasHeightForWidth())
        self.frameInput.setSizePolicy(sizePolicy)
        self.frameInput.setObjectName(_fromUtf8("frameInput"))
        self.horizontalLayout_7.addWidget(self.frameInput)
        self.horizontalLayoutWidget_3 = QtGui.QWidget(self.ConfigurationPage)
        self.horizontalLayoutWidget_3.setGeometry(QtCore.QRect(70, 350, 411, 36))
        self.horizontalLayoutWidget_3.setObjectName(_fromUtf8("horizontalLayoutWidget_3"))
        self.horizontalLayout_6 = QtGui.QHBoxLayout(self.horizontalLayoutWidget_3)
        self.horizontalLayout_6.setMargin(0)
        self.horizontalLayout_6.setObjectName(_fromUtf8("horizontalLayout_6"))
        self.checkBox_2 = QtGui.QCheckBox(self.horizontalLayoutWidget_3)
        self.checkBox_2.setObjectName(_fromUtf8("checkBox_2"))
        self.horizontalLayout_6.addWidget(self.checkBox_2)
        self.horizontalSlider = QtGui.QSlider(self.horizontalLayoutWidget_3)
        self.horizontalSlider.setEnabled(False)
        self.horizontalSlider.setAcceptDrops(True)
        self.horizontalSlider.setAutoFillBackground(False)
        self.horizontalSlider.setMaximum(20)
        self.horizontalSlider.setSingleStep(5)
        self.horizontalSlider.setPageStep(5)
        self.horizontalSlider.setProperty("value", 0)
        self.horizontalSlider.setTracking(False)
        self.horizontalSlider.setOrientation(QtCore.Qt.Horizontal)
        self.horizontalSlider.setInvertedAppearance(False)
        self.horizontalSlider.setInvertedControls(False)
        self.horizontalSlider.setTickPosition(QtGui.QSlider.TicksBelow)
        self.horizontalSlider.setTickInterval(5)
        self.horizontalSlider.setObjectName(_fromUtf8("horizontalSlider"))
        self.horizontalLayout_6.addWidget(self.horizontalSlider)
        self.horizontalLayoutWidget_6 = QtGui.QWidget(self.ConfigurationPage)
        self.horizontalLayoutWidget_6.setGeometry(QtCore.QRect(70, 190, 231, 29))
        self.horizontalLayoutWidget_6.setObjectName(_fromUtf8("horizontalLayoutWidget_6"))
        self.horizontalLayout_9 = QtGui.QHBoxLayout(self.horizontalLayoutWidget_6)
        self.horizontalLayout_9.setMargin(0)
        self.horizontalLayout_9.setObjectName(_fromUtf8("horizontalLayout_9"))
        self.label_13 = QtGui.QLabel(self.horizontalLayoutWidget_6)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_13.sizePolicy().hasHeightForWidth())
        self.label_13.setSizePolicy(sizePolicy)
        self.label_13.setObjectName(_fromUtf8("label_13"))
        self.horizontalLayout_9.addWidget(self.label_13)
        self.gatewayEdit_2 = QtGui.QLineEdit(self.horizontalLayoutWidget_6)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.gatewayEdit_2.sizePolicy().hasHeightForWidth())
        self.gatewayEdit_2.setSizePolicy(sizePolicy)
        self.gatewayEdit_2.setFocusPolicy(QtCore.Qt.NoFocus)
        self.gatewayEdit_2.setFrame(True)
        self.gatewayEdit_2.setObjectName(_fromUtf8("gatewayEdit_2"))
        self.horizontalLayout_9.addWidget(self.gatewayEdit_2)
        self.logLink = QtGui.QLabel(self.ConfigurationPage)
        self.logLink.setGeometry(QtCore.QRect(1040, 550, 91, 20))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.logLink.sizePolicy().hasHeightForWidth())
        self.logLink.setSizePolicy(sizePolicy)
        self.logLink.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.logLink.setMouseTracking(True)
        self.logLink.setFocusPolicy(QtCore.Qt.StrongFocus)
        self.logLink.setContextMenuPolicy(QtCore.Qt.ActionsContextMenu)
        self.logLink.setAcceptDrops(False)
        self.logLink.setAutoFillBackground(False)
        self.logLink.setFrameShape(QtGui.QFrame.NoFrame)
        self.logLink.setOpenExternalLinks(True)
        self.logLink.setObjectName(_fromUtf8("logLink"))
        self.line = QtGui.QFrame(self.ConfigurationPage)
        self.line.setGeometry(QtCore.QRect(50, 530, 1091, 21))
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.layoutWidget.raise_()
        self.horizontalLayoutWidget.raise_()
        self.horizontalLayoutWidget_4.raise_()
        self.layoutWidget.raise_()
        self.line_2.raise_()
        self.label_5.raise_()
        self.line_3.raise_()
        self.horizontalLayoutWidget_3.raise_()
        self.horizontalLayoutWidget_6.raise_()
        self.logLink.raise_()
        self.line.raise_()
        self.toolBox.addItem(self.ConfigurationPage, _fromUtf8(""))
        self.displayPage = QtGui.QWidget()
        self.displayPage.setGeometry(QtCore.QRect(0, 0, 1191, 599))
        self.displayPage.setObjectName(_fromUtf8("displayPage"))
        self.line_4 = QtGui.QFrame(self.displayPage)
        self.line_4.setGeometry(QtCore.QRect(0, 50, 1261, 16))
        self.line_4.setFrameShape(QtGui.QFrame.HLine)
        self.line_4.setFrameShadow(QtGui.QFrame.Sunken)
        self.line_4.setObjectName(_fromUtf8("line_4"))
        self.layoutWidget2 = QtGui.QWidget(self.displayPage)
        self.layoutWidget2.setGeometry(QtCore.QRect(30, 20, 1111, 29))
        self.layoutWidget2.setObjectName(_fromUtf8("layoutWidget2"))
        self.horizontalLayout_4 = QtGui.QHBoxLayout(self.layoutWidget2)
        self.horizontalLayout_4.setMargin(0)
        self.horizontalLayout_4.setObjectName(_fromUtf8("horizontalLayout_4"))
        self.label = QtGui.QLabel(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label.sizePolicy().hasHeightForWidth())
        self.label.setSizePolicy(sizePolicy)
        self.label.setObjectName(_fromUtf8("label"))
        self.horizontalLayout_4.addWidget(self.label)
        self.serverIPInput = QtGui.QLineEdit(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.serverIPInput.sizePolicy().hasHeightForWidth())
        self.serverIPInput.setSizePolicy(sizePolicy)
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
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.portaInput.sizePolicy().hasHeightForWidth())
        self.portaInput.setSizePolicy(sizePolicy)
        self.portaInput.setInputMethodHints(QtCore.Qt.ImhDigitsOnly)
        self.portaInput.setObjectName(_fromUtf8("portaInput"))
        self.horizontalLayout_4.addWidget(self.portaInput)
        self.startButton = QtGui.QPushButton(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Maximum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.startButton.sizePolicy().hasHeightForWidth())
        self.startButton.setSizePolicy(sizePolicy)
        self.startButton.setCheckable(False)
        self.startButton.setObjectName(_fromUtf8("startButton"))
        self.horizontalLayout_4.addWidget(self.startButton)
        spacerItem = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        self.horizontalLayout_4.addItem(spacerItem)
        self.lcdNumber = QtGui.QLCDNumber(self.layoutWidget2)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.lcdNumber.sizePolicy().hasHeightForWidth())
        self.lcdNumber.setSizePolicy(sizePolicy)
        self.lcdNumber.setObjectName(_fromUtf8("lcdNumber"))
        self.horizontalLayout_4.addWidget(self.lcdNumber)
        self.label_6 = QtGui.QLabel(self.displayPage)
        self.label_6.setGeometry(QtCore.QRect(30, 80, 201, 17))
        self.label_6.setObjectName(_fromUtf8("label_6"))
        self.applicationLOut = QtGui.QTextEdit(self.displayPage)
        self.applicationLOut.setGeometry(QtCore.QRect(20, 100, 551, 200))
        self.applicationLOut.viewport().setProperty("cursor", QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.applicationLOut.setMouseTracking(True)
        self.applicationLOut.setStyleSheet(_fromUtf8("font: 11pt \"Ubuntu Condensed\";"))
        self.applicationLOut.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.applicationLOut.setDocumentTitle(_fromUtf8(""))
        self.applicationLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.applicationLOut.setReadOnly(True)
        self.applicationLOut.setAcceptRichText(True)
        self.applicationLOut.setTextInteractionFlags(QtCore.Qt.TextBrowserInteraction)
        self.applicationLOut.setObjectName(_fromUtf8("applicationLOut"))
        self.label_7 = QtGui.QLabel(self.displayPage)
        self.label_7.setGeometry(QtCore.QRect(610, 80, 231, 17))
        self.label_7.setObjectName(_fromUtf8("label_7"))
        self.transportLOut = QtGui.QTextEdit(self.displayPage)
        self.transportLOut.setGeometry(QtCore.QRect(600, 100, 551, 200))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.transportLOut.sizePolicy().hasHeightForWidth())
        self.transportLOut.setSizePolicy(sizePolicy)
        self.transportLOut.viewport().setProperty("cursor", QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.transportLOut.setMouseTracking(True)
        self.transportLOut.setStyleSheet(_fromUtf8("font: 11pt \"Ubuntu Condensed\";"))
        self.transportLOut.setFrameShape(QtGui.QFrame.StyledPanel)
        self.transportLOut.setFrameShadow(QtGui.QFrame.Raised)
        self.transportLOut.setVerticalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.transportLOut.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.transportLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.transportLOut.setReadOnly(True)
        self.transportLOut.setTextInteractionFlags(QtCore.Qt.TextBrowserInteraction)
        self.transportLOut.setObjectName(_fromUtf8("transportLOut"))
        self.label_8 = QtGui.QLabel(self.displayPage)
        self.label_8.setGeometry(QtCore.QRect(30, 320, 211, 17))
        self.label_8.setObjectName(_fromUtf8("label_8"))
        self.label_9 = QtGui.QLabel(self.displayPage)
        self.label_9.setGeometry(QtCore.QRect(610, 330, 211, 17))
        self.label_9.setObjectName(_fromUtf8("label_9"))
        self.physicalLOut = QtGui.QTextEdit(self.displayPage)
        self.physicalLOut.setGeometry(QtCore.QRect(600, 350, 551, 200))
        self.physicalLOut.viewport().setProperty("cursor", QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.physicalLOut.setMouseTracking(True)
        self.physicalLOut.setStyleSheet(_fromUtf8("font: 11pt \"Ubuntu Condensed\";"))
        self.physicalLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.physicalLOut.setReadOnly(True)
        self.physicalLOut.setTextInteractionFlags(QtCore.Qt.TextBrowserInteraction)
        self.physicalLOut.setObjectName(_fromUtf8("physicalLOut"))
        self.networkLOut = QtGui.QTextEdit(self.displayPage)
        self.networkLOut.setGeometry(QtCore.QRect(20, 350, 551, 200))
        self.networkLOut.viewport().setProperty("cursor", QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.networkLOut.setMouseTracking(True)
        self.networkLOut.setStyleSheet(_fromUtf8("font: 11pt \"Ubuntu Condensed\";"))
        self.networkLOut.setLineWrapMode(QtGui.QTextEdit.NoWrap)
        self.networkLOut.setTextInteractionFlags(QtCore.Qt.TextBrowserInteraction)
        self.networkLOut.setObjectName(_fromUtf8("networkLOut"))
        self.horizontalLayoutWidget_2 = QtGui.QWidget(self.displayPage)
        self.horizontalLayoutWidget_2.setGeometry(QtCore.QRect(700, 550, 441, 51))
        self.horizontalLayoutWidget_2.setObjectName(_fromUtf8("horizontalLayoutWidget_2"))
        self.horizontalLayout_5 = QtGui.QHBoxLayout(self.horizontalLayoutWidget_2)
        self.horizontalLayout_5.setMargin(0)
        self.horizontalLayout_5.setObjectName(_fromUtf8("horizontalLayout_5"))
        self.goButton = QtGui.QPushButton(self.horizontalLayoutWidget_2)
        self.goButton.setObjectName(_fromUtf8("goButton"))
        self.horizontalLayout_5.addWidget(self.goButton)
        self.clearButton = QtGui.QPushButton(self.horizontalLayoutWidget_2)
        self.clearButton.setObjectName(_fromUtf8("clearButton"))
        self.horizontalLayout_5.addWidget(self.clearButton)
        self.toolBox.addItem(self.displayPage, _fromUtf8(""))
        self.toolButton = QtGui.QToolButton(ClientWidget)
        self.toolButton.setGeometry(QtCore.QRect(20, 40, 24, 601))
        self.toolButton.setPopupMode(QtGui.QToolButton.DelayedPopup)
        self.toolButton.setAutoRaise(True)
        self.toolButton.setArrowType(QtCore.Qt.LeftArrow)
        self.toolButton.setObjectName(_fromUtf8("toolButton"))

        self.retranslateUi(ClientWidget)
        self.toolBox.setCurrentIndex(1)
        self.toolBox.layout().setSpacing(1)
        QtCore.QMetaObject.connectSlotsByName(ClientWidget)

    def retranslateUi(self, ClientWidget):
        ClientWidget.setWindowTitle(_translate("ClientWidget", "Form", None))
        self.label_5.setText(_translate("ClientWidget", "<h2>Options:</h2", None))
        self.label_4.setText(_translate("ClientWidget", "Transport Protocol:", None))
        self.radUDP.setText(_translate("ClientWidget", "UDP", None))
        self.radTCP.setText(_translate("ClientWidget", "TCP", None))
        self.stepBox.setText(_translate("ClientWidget", "Step-by-step", None))
        self.checkBox.setText(_translate("ClientWidget", "Timer", None))
        self.label_3.setText(_translate("ClientWidget", "Gateway:", None))
        self.label_10.setText(_translate("ClientWidget", "Frame size:", None))
        self.checkBox_2.setText(_translate("ClientWidget", "Probability of collision(%):", None))
        self.label_13.setText(_translate("ClientWidget", "Masc:", None))
        self.logLink.setText(_translate("ClientWidget", "<html><head/><body><p> Access Log</p></body></html>", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.ConfigurationPage), _translate("ClientWidget", "Configuration", None))
        self.label.setText(_translate("ClientWidget", "Server IP:", None))
        self.label_2.setText(_translate("ClientWidget", "Porta:", None))
        self.startButton.setText(_translate("ClientWidget", "Start", None))
        self.label_6.setText(_translate("ClientWidget", "Application Layer", None))
        self.applicationLOut.setHtml(_translate("ClientWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu Condensed\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:\'Ubuntu\';\"><br /></p></body></html>", None))
        self.label_7.setText(_translate("ClientWidget", "Transport Layer", None))
        self.transportLOut.setHtml(_translate("ClientWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu Condensed\'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:\'Ubuntu\';\"><br /></p></body></html>", None))
        self.label_8.setText(_translate("ClientWidget", "Network Layer", None))
        self.label_9.setText(_translate("ClientWidget", "Physical Layer", None))
        self.goButton.setText(_translate("ClientWidget", "Go", None))
        self.clearButton.setText(_translate("ClientWidget", "Clear", None))
        self.toolBox.setItemText(self.toolBox.indexOf(self.displayPage), _translate("ClientWidget", "Display output", None))
        self.toolButton.setText(_translate("ClientWidget", "...", None))

