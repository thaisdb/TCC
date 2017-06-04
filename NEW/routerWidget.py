# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'router.ui'
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

class Ui_RouterWidget(object):
    def setupUi(self, RouterWidget):
        RouterWidget.setObjectName(_fromUtf8("RouterWidget"))
        RouterWidget.setWindowModality(QtCore.Qt.NonModal)
        RouterWidget.resize(1292, 663)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(RouterWidget.sizePolicy().hasHeightForWidth())
        RouterWidget.setSizePolicy(sizePolicy)
        RouterWidget.setFocusPolicy(QtCore.Qt.NoFocus)
        RouterWidget.setAutoFillBackground(False)
        RouterWidget.setStyleSheet(_fromUtf8("background-color: rgb(255, 255, 255);"))
        RouterWidget.setInputMethodHints(QtCore.Qt.ImhNone)
        self.verticalLayoutWidget = QtGui.QWidget(RouterWidget)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(130, 220, 361, 371))
        self.verticalLayoutWidget.setObjectName(_fromUtf8("verticalLayoutWidget"))
        self.verticalLayout = QtGui.QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout.setMargin(0)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.horizontalLayout_2 = QtGui.QHBoxLayout()
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.ipLine = QtGui.QLineEdit(self.verticalLayoutWidget)
        self.ipLine.setObjectName(_fromUtf8("ipLine"))
        self.horizontalLayout_2.addWidget(self.ipLine)
        self.routeLine = QtGui.QLineEdit(self.verticalLayoutWidget)
        self.routeLine.setObjectName(_fromUtf8("routeLine"))
        self.horizontalLayout_2.addWidget(self.routeLine)
        self.addButton = QtGui.QPushButton(self.verticalLayoutWidget)
        self.addButton.setStyleSheet(_fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: bold 11pt \"Latin Modern Roman Caps\";"))
        self.addButton.setObjectName(_fromUtf8("addButton"))
        self.horizontalLayout_2.addWidget(self.addButton)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.routerTable = QtGui.QTableWidget(self.verticalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.routerTable.sizePolicy().hasHeightForWidth())
        self.routerTable.setSizePolicy(sizePolicy)
        self.routerTable.setStyleSheet(_fromUtf8("color: rgb(255, 255, 255);\n"
"gridline-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(240, 240, 240);\n"
"border-color: rgb(0, 0, 0);\n"
"font: bold 11pt \"Latin Modern Roman Caps\";"))
        self.routerTable.setLineWidth(1)
        self.routerTable.setAutoScroll(False)
        self.routerTable.setAlternatingRowColors(True)
        self.routerTable.setWordWrap(True)
        self.routerTable.setRowCount(4)
        self.routerTable.setColumnCount(2)
        self.routerTable.setObjectName(_fromUtf8("routerTable"))
        item = QtGui.QTableWidgetItem()
        font = QtGui.QFont()
        font.setBold(False)
        font.setWeight(50)
        item.setFont(font)
        self.routerTable.setHorizontalHeaderItem(0, item)
        item = QtGui.QTableWidgetItem()
        self.routerTable.setHorizontalHeaderItem(1, item)
        self.routerTable.horizontalHeader().setVisible(True)
        self.routerTable.horizontalHeader().setCascadingSectionResizes(False)
        self.routerTable.horizontalHeader().setDefaultSectionSize(100)
        self.routerTable.horizontalHeader().setHighlightSections(False)
        self.routerTable.horizontalHeader().setMinimumSectionSize(57)
        self.routerTable.horizontalHeader().setStretchLastSection(False)
        self.routerTable.verticalHeader().setSortIndicatorShown(False)
        self.routerTable.verticalHeader().setStretchLastSection(False)
        self.verticalLayout.addWidget(self.routerTable)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.removeButton = QtGui.QPushButton(self.verticalLayoutWidget)
        self.removeButton.setStyleSheet(_fromUtf8("font: bold 11pt \"Latin Modern Roman Caps\";\n"
"selection-background-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"))
        self.removeButton.setObjectName(_fromUtf8("removeButton"))
        self.horizontalLayout.addWidget(self.removeButton)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.label = QtGui.QLabel(RouterWidget)
        self.label.setGeometry(QtCore.QRect(190, 120, 241, 31))
        self.label.setStyleSheet(_fromUtf8("font: 26pt \"Latin Modern Mono Caps\";"))
        self.label.setObjectName(_fromUtf8("label"))
        self.toolButton = QtGui.QToolButton(RouterWidget)
        self.toolButton.setGeometry(QtCore.QRect(10, 30, 24, 601))
        self.toolButton.setPopupMode(QtGui.QToolButton.InstantPopup)
        self.toolButton.setAutoRaise(True)
        self.toolButton.setArrowType(QtCore.Qt.LeftArrow)
        self.toolButton.setObjectName(_fromUtf8("toolButton"))
        self.physicalOUT = QtGui.QTextEdit(RouterWidget)
        self.physicalOUT.setGeometry(QtCore.QRect(680, 390, 400, 211))
        self.physicalOUT.setObjectName(_fromUtf8("physicalOUT"))
        self.label_4 = QtGui.QLabel(RouterWidget)
        self.label_4.setGeometry(QtCore.QRect(700, 80, 131, 17))
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.label_5 = QtGui.QLabel(RouterWidget)
        self.label_5.setGeometry(QtCore.QRect(700, 360, 131, 17))
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.networkOUT = QtGui.QTextEdit(RouterWidget)
        self.networkOUT.setGeometry(QtCore.QRect(680, 110, 400, 211))
        self.networkOUT.setObjectName(_fromUtf8("networkOUT"))

        self.retranslateUi(RouterWidget)
        QtCore.QMetaObject.connectSlotsByName(RouterWidget)

    def retranslateUi(self, RouterWidget):
        RouterWidget.setWindowTitle(_translate("RouterWidget", "Router", None))
        self.ipLine.setText(_translate("RouterWidget", "IP", None))
        self.routeLine.setText(_translate("RouterWidget", "ROTA", None))
        self.addButton.setText(_translate("RouterWidget", "Add", None))
        item = self.routerTable.horizontalHeaderItem(0)
        item.setText(_translate("RouterWidget", "IP", None))
        item = self.routerTable.horizontalHeaderItem(1)
        item.setText(_translate("RouterWidget", "Gateway", None))
        self.removeButton.setText(_translate("RouterWidget", "Remove", None))
        self.label.setText(_translate("RouterWidget", "Router Table", None))
        self.toolButton.setText(_translate("RouterWidget", "...", None))
        self.label_4.setText(_translate("RouterWidget", "Network Layer", None))
        self.label_5.setText(_translate("RouterWidget", "Physical Layer", None))

