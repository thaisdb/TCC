/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.2
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtDesigner.h"

#line 24 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/qpydesignercustomwidgetplugin.sip"
#include <qpydesignercustomwidgetplugin.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/abstractformeditor.sip"
#include <abstractformeditor.h>
#line 72 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 28 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 75 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 78 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"


class sipQPyDesignerCustomWidgetPlugin : public  ::QPyDesignerCustomWidgetPlugin
{
public:
    sipQPyDesignerCustomWidgetPlugin( ::QObject*);
    virtual ~sipQPyDesignerCustomWidgetPlugin();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString name() const;
     ::QString group() const;
     ::QString toolTip() const;
     ::QString whatsThis() const;
     ::QString includeFile() const;
     ::QIcon icon() const;
    bool isContainer() const;
     ::QWidget* createWidget( ::QWidget*);
    bool isInitialized() const;
    void initialize( ::QDesignerFormEditorInterface*);
     ::QString domXml() const;
     ::QString codeTemplate() const;
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const char*);
    void disconnectNotify(const char*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPyDesignerCustomWidgetPlugin(const sipQPyDesignerCustomWidgetPlugin &);
    sipQPyDesignerCustomWidgetPlugin &operator = (const sipQPyDesignerCustomWidgetPlugin &);

    char sipPyMethods[19];
};

sipQPyDesignerCustomWidgetPlugin::sipQPyDesignerCustomWidgetPlugin( ::QObject*a0):  ::QPyDesignerCustomWidgetPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerCustomWidgetPlugin::~sipQPyDesignerCustomWidgetPlugin()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerCustomWidgetPlugin::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerCustomWidgetPlugin);
}

int sipQPyDesignerCustomWidgetPlugin::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QPyDesignerCustomWidgetPlugin::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerCustomWidgetPlugin,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerCustomWidgetPlugin::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerCustomWidgetPlugin, _clname)) ? this :  ::QPyDesignerCustomWidgetPlugin::qt_metacast(_clname);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_name);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::group() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_group);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::toolTip() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_toolTip);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::whatsThis() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_whatsThis);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::includeFile() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_includeFile);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QIcon sipQPyDesignerCustomWidgetPlugin::icon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_icon);

    if (!sipMeth)
        return  ::QIcon();

    extern  ::QIcon sipVH_QtDesigner_76(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_76(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQPyDesignerCustomWidgetPlugin::isContainer() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_isContainer);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtDesigner_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_57(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QWidget* sipQPyDesignerCustomWidgetPlugin::createWidget( ::QWidget*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_createWidget);

    if (!sipMeth)
        return 0;

    extern  ::QWidget* sipVH_QtDesigner_77(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QWidget*);

    return sipVH_QtDesigner_77(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetPlugin::isInitialized() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_isInitialized);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetPlugin::isInitialized();

    extern bool sipVH_QtDesigner_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_57(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerCustomWidgetPlugin::initialize( ::QDesignerFormEditorInterface*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_initialize);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::initialize(a0);
        return;
    }

    extern void sipVH_QtDesigner_78(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QDesignerFormEditorInterface*);

    sipVH_QtDesigner_78(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::domXml() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_domXml);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetPlugin::domXml();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQPyDesignerCustomWidgetPlugin::codeTemplate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_codeTemplate);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetPlugin::codeTemplate();

    extern  ::QString sipVH_QtDesigner_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_40(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQPyDesignerCustomWidgetPlugin::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetPlugin::event(a0);

    extern bool sipVH_QtDesigner_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDesigner_30(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetPlugin::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetPlugin::eventFilter(a0,a1);

    extern bool sipVH_QtDesigner_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDesigner_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQPyDesignerCustomWidgetPlugin::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDesigner_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::childEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDesigner_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::customEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDesigner_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetPlugin::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerCustomWidgetPlugin(void *, const sipTypeDef *);}
static void *cast_QPyDesignerCustomWidgetPlugin(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPyDesignerCustomWidgetPlugin *sipCpp = reinterpret_cast< ::QPyDesignerCustomWidgetPlugin *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QDesignerCustomWidgetInterface)
        return static_cast< ::QDesignerCustomWidgetInterface *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerCustomWidgetPlugin(void *, int);}
static void release_QPyDesignerCustomWidgetPlugin(void *sipCppV, int)
{
     ::QPyDesignerCustomWidgetPlugin *sipCpp = reinterpret_cast< ::QPyDesignerCustomWidgetPlugin *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *);}
static void dealloc_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPyDesignerCustomWidgetPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDesignerCustomWidgetPlugin(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerCustomWidgetPlugin *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerCustomWidgetPlugin(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerCustomWidgetPlugin[] = {{5, 0, 0}, {6, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerCustomWidgetPlugin, "\1QPyDesignerCustomWidgetPlugin(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QPyDesignerCustomWidgetPlugin = {
    & ::QPyDesignerCustomWidgetPlugin::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QPyDesignerCustomWidgetPlugin = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerCustomWidgetPlugin,
        {0},
        &plugin_QPyDesignerCustomWidgetPlugin
    },
    {
        sipNameNr_QPyDesignerCustomWidgetPlugin,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerCustomWidgetPlugin,
    -1,
    -1,
    supers_QPyDesignerCustomWidgetPlugin,
    0,
    init_type_QPyDesignerCustomWidgetPlugin,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QPyDesignerCustomWidgetPlugin,
    0,
    0,
    0,
    release_QPyDesignerCustomWidgetPlugin,
    cast_QPyDesignerCustomWidgetPlugin,
    0,
    0,
    0,
    0,
    0,
    0
};