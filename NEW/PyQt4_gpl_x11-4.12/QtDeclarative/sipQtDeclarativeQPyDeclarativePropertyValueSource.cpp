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

#include "sipAPIQtDeclarative.h"

#line 25 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip"
#include <qpydeclarativepropertyvaluesource.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDeclarative/qdeclarativeproperty.sip"
#include <qdeclarativeproperty.h>
#line 72 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp"


class sipQPyDeclarativePropertyValueSource : public  ::QPyDeclarativePropertyValueSource
{
public:
    sipQPyDeclarativePropertyValueSource( ::QObject*);
    virtual ~sipQPyDeclarativePropertyValueSource();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setTarget(const  ::QDeclarativeProperty&);
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
    sipQPyDeclarativePropertyValueSource(const sipQPyDeclarativePropertyValueSource &);
    sipQPyDeclarativePropertyValueSource &operator = (const sipQPyDeclarativePropertyValueSource &);

    char sipPyMethods[8];
};

sipQPyDeclarativePropertyValueSource::sipQPyDeclarativePropertyValueSource( ::QObject*a0):  ::QPyDeclarativePropertyValueSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDeclarativePropertyValueSource::~sipQPyDeclarativePropertyValueSource()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDeclarativePropertyValueSource::metaObject() const
{
    return sip_QtDeclarative_qt_metaobject(sipPySelf,sipType_QPyDeclarativePropertyValueSource);
}

int sipQPyDeclarativePropertyValueSource::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QPyDeclarativePropertyValueSource::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDeclarative_qt_metacall(sipPySelf,sipType_QPyDeclarativePropertyValueSource,_c,_id,_a);

    return _id;
}

void *sipQPyDeclarativePropertyValueSource::qt_metacast(const char *_clname)
{
    return (sip_QtDeclarative_qt_metacast(sipPySelf, sipType_QPyDeclarativePropertyValueSource, _clname)) ? this :  ::QPyDeclarativePropertyValueSource::qt_metacast(_clname);
}

void sipQPyDeclarativePropertyValueSource::setTarget(const  ::QDeclarativeProperty& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QPyDeclarativePropertyValueSource,sipName_setTarget);

    if (!sipMeth)
        return;

    extern void sipVH_QtDeclarative_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QDeclarativeProperty&);

    sipVH_QtDeclarative_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDeclarativePropertyValueSource::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QPyDeclarativePropertyValueSource::event(a0);

    extern bool sipVH_QtDeclarative_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDeclarative_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDeclarativePropertyValueSource::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QPyDeclarativePropertyValueSource::eventFilter(a0,a1);

    extern bool sipVH_QtDeclarative_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDeclarative_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQPyDeclarativePropertyValueSource::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QPyDeclarativePropertyValueSource::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDeclarative_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QPyDeclarativePropertyValueSource::childEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDeclarative_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QPyDeclarativePropertyValueSource::customEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDeclarative_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QPyDeclarativePropertyValueSource::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDeclarativePropertyValueSource::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QPyDeclarativePropertyValueSource::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPyDeclarativePropertyValueSource(void *, const sipTypeDef *);}
static void *cast_QPyDeclarativePropertyValueSource(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPyDeclarativePropertyValueSource *sipCpp = reinterpret_cast< ::QPyDeclarativePropertyValueSource *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QDeclarativePropertyValueSource)
        return static_cast< ::QDeclarativePropertyValueSource *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDeclarativePropertyValueSource(void *, int);}
static void release_QPyDeclarativePropertyValueSource(void *sipCppV, int)
{
     ::QPyDeclarativePropertyValueSource *sipCpp = reinterpret_cast< ::QPyDeclarativePropertyValueSource *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDeclarativePropertyValueSource(sipSimpleWrapper *);}
static void dealloc_QPyDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPyDeclarativePropertyValueSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDeclarativePropertyValueSource(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPyDeclarativePropertyValueSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDeclarativePropertyValueSource *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDeclarativePropertyValueSource(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDeclarativePropertyValueSource[] = {{6, 0, 0}, {20, 255, 1}};

PyDoc_STRVAR(doc_QPyDeclarativePropertyValueSource, "\1QPyDeclarativePropertyValueSource(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QPyDeclarativePropertyValueSource = {
    & ::QPyDeclarativePropertyValueSource::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDeclarative_QPyDeclarativePropertyValueSource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDeclarativePropertyValueSource,
        {0},
        &plugin_QPyDeclarativePropertyValueSource
    },
    {
        sipNameNr_QPyDeclarativePropertyValueSource,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDeclarativePropertyValueSource,
    -1,
    -1,
    supers_QPyDeclarativePropertyValueSource,
    0,
    init_type_QPyDeclarativePropertyValueSource,
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
    dealloc_QPyDeclarativePropertyValueSource,
    0,
    0,
    0,
    release_QPyDeclarativePropertyValueSource,
    cast_QPyDeclarativePropertyValueSource,
    0,
    0,
    0,
    0,
    0,
    0
};
