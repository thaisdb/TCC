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

#line 25 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip"
#include <qpydesignercustomwidgetcollectionplugin.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 72 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 75 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp"


class sipQPyDesignerCustomWidgetCollectionPlugin : public  ::QPyDesignerCustomWidgetCollectionPlugin
{
public:
    sipQPyDesignerCustomWidgetCollectionPlugin( ::QObject*);
    virtual ~sipQPyDesignerCustomWidgetCollectionPlugin();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList< ::QDesignerCustomWidgetInterface*> customWidgets() const;
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
    sipQPyDesignerCustomWidgetCollectionPlugin(const sipQPyDesignerCustomWidgetCollectionPlugin &);
    sipQPyDesignerCustomWidgetCollectionPlugin &operator = (const sipQPyDesignerCustomWidgetCollectionPlugin &);

    char sipPyMethods[8];
};

sipQPyDesignerCustomWidgetCollectionPlugin::sipQPyDesignerCustomWidgetCollectionPlugin( ::QObject*a0):  ::QPyDesignerCustomWidgetCollectionPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerCustomWidgetCollectionPlugin::~sipQPyDesignerCustomWidgetCollectionPlugin()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerCustomWidgetCollectionPlugin::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerCustomWidgetCollectionPlugin);
}

int sipQPyDesignerCustomWidgetCollectionPlugin::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QPyDesignerCustomWidgetCollectionPlugin::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerCustomWidgetCollectionPlugin,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerCustomWidgetCollectionPlugin::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerCustomWidgetCollectionPlugin, _clname)) ? this :  ::QPyDesignerCustomWidgetCollectionPlugin::qt_metacast(_clname);
}

QList< ::QDesignerCustomWidgetInterface*> sipQPyDesignerCustomWidgetCollectionPlugin::customWidgets() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QPyDesignerCustomWidgetCollectionPlugin,sipName_customWidgets);

    if (!sipMeth)
        return QList< ::QDesignerCustomWidgetInterface*>();

    extern QList< ::QDesignerCustomWidgetInterface*> sipVH_QtDesigner_79(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_79(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQPyDesignerCustomWidgetCollectionPlugin::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetCollectionPlugin::event(a0);

    extern bool sipVH_QtDesigner_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDesigner_30(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetCollectionPlugin::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QPyDesignerCustomWidgetCollectionPlugin::eventFilter(a0,a1);

    extern bool sipVH_QtDesigner_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDesigner_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQPyDesignerCustomWidgetCollectionPlugin::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetCollectionPlugin::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDesigner_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetCollectionPlugin::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetCollectionPlugin::childEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDesigner_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetCollectionPlugin::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetCollectionPlugin::customEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDesigner_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetCollectionPlugin::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetCollectionPlugin::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetCollectionPlugin::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerCustomWidgetCollectionPlugin::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerCustomWidgetCollectionPlugin(void *, const sipTypeDef *);}
static void *cast_QPyDesignerCustomWidgetCollectionPlugin(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPyDesignerCustomWidgetCollectionPlugin *sipCpp = reinterpret_cast< ::QPyDesignerCustomWidgetCollectionPlugin *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QDesignerCustomWidgetCollectionInterface)
        return static_cast< ::QDesignerCustomWidgetCollectionInterface *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerCustomWidgetCollectionPlugin(void *, int);}
static void release_QPyDesignerCustomWidgetCollectionPlugin(void *sipCppV, int)
{
     ::QPyDesignerCustomWidgetCollectionPlugin *sipCpp = reinterpret_cast< ::QPyDesignerCustomWidgetCollectionPlugin *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerCustomWidgetCollectionPlugin(sipSimpleWrapper *);}
static void dealloc_QPyDesignerCustomWidgetCollectionPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPyDesignerCustomWidgetCollectionPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDesignerCustomWidgetCollectionPlugin(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPyDesignerCustomWidgetCollectionPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerCustomWidgetCollectionPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerCustomWidgetCollectionPlugin *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerCustomWidgetCollectionPlugin(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerCustomWidgetCollectionPlugin[] = {{5, 0, 0}, {5, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerCustomWidgetCollectionPlugin, "\1QPyDesignerCustomWidgetCollectionPlugin(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QPyDesignerCustomWidgetCollectionPlugin = {
    & ::QPyDesignerCustomWidgetCollectionPlugin::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QPyDesignerCustomWidgetCollectionPlugin = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerCustomWidgetCollectionPlugin,
        {0},
        &plugin_QPyDesignerCustomWidgetCollectionPlugin
    },
    {
        sipNameNr_QPyDesignerCustomWidgetCollectionPlugin,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerCustomWidgetCollectionPlugin,
    -1,
    -1,
    supers_QPyDesignerCustomWidgetCollectionPlugin,
    0,
    init_type_QPyDesignerCustomWidgetCollectionPlugin,
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
    dealloc_QPyDesignerCustomWidgetCollectionPlugin,
    0,
    0,
    0,
    release_QPyDesignerCustomWidgetCollectionPlugin,
    cast_QPyDesignerCustomWidgetCollectionPlugin,
    0,
    0,
    0,
    0,
    0,
    0
};
