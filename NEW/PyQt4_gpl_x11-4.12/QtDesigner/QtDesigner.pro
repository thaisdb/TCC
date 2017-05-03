TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtDesigner
sip.files = ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/formbuilder.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/abstractobjectinspector.sip ../sip/QtDesigner/default_extensionfactory.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/QtDesignermod.sip ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/abstractwidgetbox.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h
SOURCES = sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQDesignerFormWindowInterface.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignercmodule.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp
