# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'main.ui'
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

class Ui_MyMainWindow(object):
    def setupUi(self, MyMainWindow):
        MyMainWindow.setObjectName(_fromUtf8("MyMainWindow"))
        MyMainWindow.resize(705, 609)
        font = QtGui.QFont()
        font.setFamily(_fromUtf8("Latin Modern Roman Caps"))
        MyMainWindow.setFont(font)
        MyMainWindow.setStyleSheet(_fromUtf8("background-color: rgb(0, 0, 0);"))
        self.centralwidget = QtGui.QWidget(MyMainWindow)
        font = QtGui.QFont()
        font.setFamily(_fromUtf8("Latin Modern Mono Caps"))
        self.centralwidget.setFont(font)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.horizontalLayoutWidget = QtGui.QWidget(self.centralwidget)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(20, 10, 661, 521))
        self.horizontalLayoutWidget.setObjectName(_fromUtf8("horizontalLayoutWidget"))
        self.horizontalLayout = QtGui.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout.setMargin(0)
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        spacerItem = QtGui.QSpacerItem(100, 20, QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem)
        self.verticalLayout_3 = QtGui.QVBoxLayout()
        self.verticalLayout_3.setSizeConstraint(QtGui.QLayout.SetDefaultConstraint)
        self.verticalLayout_3.setObjectName(_fromUtf8("verticalLayout_3"))
        spacerItem1 = QtGui.QSpacerItem(5, 50, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Maximum)
        self.verticalLayout_3.addItem(spacerItem1)
        self.serverButton = QtGui.QPushButton(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.serverButton.sizePolicy().hasHeightForWidth())
        self.serverButton.setSizePolicy(sizePolicy)
        self.serverButton.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.serverButton.setStyleSheet(_fromUtf8("background-color: rgb(255,255, 255 );\n"
"selection-background-color: rgb(200, 200, 200);\n"
"font:  30pt \"Latin Modern Mono Caps\";"))
        self.serverButton.setObjectName(_fromUtf8("serverButton"))
        self.verticalLayout_3.addWidget(self.serverButton)
        spacerItem2 = QtGui.QSpacerItem(20, 20, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Maximum)
        self.verticalLayout_3.addItem(spacerItem2)
        self.clientButton = QtGui.QPushButton(self.horizontalLayoutWidget)
        self.clientButton.setEnabled(True)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.clientButton.sizePolicy().hasHeightForWidth())
        self.clientButton.setSizePolicy(sizePolicy)
        self.clientButton.setMinimumSize(QtCore.QSize(85, 0))
        self.clientButton.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.clientButton.setToolTip(_fromUtf8(""))
        self.clientButton.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.clientButton.setStyleSheet(_fromUtf8("background-color: rgb(255,255, 255 );\n"
"font:  30pt \"Latin Modern Mono Caps\";"))
        self.clientButton.setObjectName(_fromUtf8("clientButton"))
        self.verticalLayout_3.addWidget(self.clientButton)
        spacerItem3 = QtGui.QSpacerItem(20, 20, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Maximum)
        self.verticalLayout_3.addItem(spacerItem3)
        self.routerButton = QtGui.QPushButton(self.horizontalLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.routerButton.sizePolicy().hasHeightForWidth())
        self.routerButton.setSizePolicy(sizePolicy)
        self.routerButton.setStyleSheet(_fromUtf8("background-color: rgb(255,255, 255 );\n"
"font:  30pt \"Latin Modern Mono Caps\";"))
        self.routerButton.setObjectName(_fromUtf8("routerButton"))
        self.verticalLayout_3.addWidget(self.routerButton)
        self.horizontalLayout.addLayout(self.verticalLayout_3)
        spacerItem4 = QtGui.QSpacerItem(100, 20, QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem4)
        MyMainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(MyMainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 705, 25))
        self.menubar.setObjectName(_fromUtf8("menubar"))
        MyMainWindow.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(MyMainWindow)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        MyMainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MyMainWindow)
        QtCore.QMetaObject.connectSlotsByName(MyMainWindow)
        MyMainWindow.setTabOrder(self.serverButton, self.clientButton)
        MyMainWindow.setTabOrder(self.clientButton, self.routerButton)

    def retranslateUi(self, MyMainWindow):
        MyMainWindow.setWindowTitle(_translate("MyMainWindow", "MainWindow", None))
        self.serverButton.setText(_translate("MyMainWindow", "Server", None))
        self.clientButton.setText(_translate("MyMainWindow", "Client", None))
        self.routerButton.setText(_translate("MyMainWindow", "Router", None))

