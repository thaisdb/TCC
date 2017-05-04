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

#include "sipAPIQtCore.h"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qsocketnotifier.sip"
#include <qsocketnotifier.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"

#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 368 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 351 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 265 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 32 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 115 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 27 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSocketNotifier.cpp"


class sipQSocketNotifier : public  ::QSocketNotifier
{
public:
    sipQSocketNotifier(int, ::QSocketNotifier::Type, ::QObject*);
    virtual ~sipQSocketNotifier();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
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
    sipQSocketNotifier(const sipQSocketNotifier &);
    sipQSocketNotifier &operator = (const sipQSocketNotifier &);

    char sipPyMethods[7];
};

sipQSocketNotifier::sipQSocketNotifier(int a0, ::QSocketNotifier::Type a1, ::QObject*a2):  ::QSocketNotifier(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSocketNotifier::~sipQSocketNotifier()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSocketNotifier::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSocketNotifier);
}

int sipQSocketNotifier::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QSocketNotifier::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSocketNotifier,_c,_id,_a);

    return _id;
}

void *sipQSocketNotifier::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QSocketNotifier, _clname)) ? this :  ::QSocketNotifier::qt_metacast(_clname);
}

bool sipQSocketNotifier::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QSocketNotifier::event(a0);

    extern bool sipVH_QtCore_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtCore_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQSocketNotifier::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QSocketNotifier::eventFilter(a0,a1);

    extern bool sipVH_QtCore_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtCore_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQSocketNotifier::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QSocketNotifier::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtCore_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSocketNotifier::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QSocketNotifier::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtCore_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSocketNotifier::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QSocketNotifier::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtCore_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSocketNotifier::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QSocketNotifier::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSocketNotifier::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QSocketNotifier::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSocketNotifier_socket, "socket(self) -> int");

extern "C" {static PyObject *meth_QSocketNotifier_socket(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_socket(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->socket();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_socket, doc_QSocketNotifier_socket);

    return NULL;
}


PyDoc_STRVAR(doc_QSocketNotifier_type, "type(self) -> QSocketNotifier.Type");

extern "C" {static PyObject *meth_QSocketNotifier_type(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
             ::QSocketNotifier::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSocketNotifier_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_type, doc_QSocketNotifier_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSocketNotifier_isEnabled, "isEnabled(self) -> bool");

extern "C" {static PyObject *meth_QSocketNotifier_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_isEnabled, doc_QSocketNotifier_isEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QSocketNotifier_setEnabled, "setEnabled(self, bool)");

extern "C" {static PyObject *meth_QSocketNotifier_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSocketNotifier, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEnabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_setEnabled, doc_QSocketNotifier_setEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QSocketNotifier_event, "event(self, QEvent) -> bool");

extern "C" {static PyObject *meth_QSocketNotifier_event(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
         ::QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QSocketNotifier, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QSocketNotifier::event(a0) : sipCpp->event(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_event, doc_QSocketNotifier_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSocketNotifier(void *, const sipTypeDef *);}
static void *cast_QSocketNotifier(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSocketNotifier *sipCpp = reinterpret_cast< ::QSocketNotifier *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSocketNotifier(void *, int);}
static void release_QSocketNotifier(void *sipCppV, int)
{
     ::QSocketNotifier *sipCpp = reinterpret_cast< ::QSocketNotifier *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSocketNotifier(sipSimpleWrapper *);}
static void dealloc_QSocketNotifier(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSocketNotifier *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSocketNotifier(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSocketNotifier(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSocketNotifier(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSocketNotifier *sipCpp = 0;

    {
        int a0;
         ::QSocketNotifier::Type a1;
         ::QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iE|JH", &a0, sipType_QSocketNotifier_Type, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSocketNotifier(a0,a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSocketNotifier[] = {{141, 255, 1}};


static PyMethodDef methods_QSocketNotifier[] = {
    {SIP_MLNAME_CAST(sipName_event), meth_QSocketNotifier_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QSocketNotifier_event)},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QSocketNotifier_isEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QSocketNotifier_isEnabled)},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QSocketNotifier_setEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QSocketNotifier_setEnabled)},
    {SIP_MLNAME_CAST(sipName_socket), meth_QSocketNotifier_socket, METH_VARARGS, SIP_MLDOC_CAST(doc_QSocketNotifier_socket)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSocketNotifier_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSocketNotifier_type)}
};

static sipEnumMemberDef enummembers_QSocketNotifier[] = {
    {sipName_Exception, static_cast<int>( ::QSocketNotifier::Exception), 188},
    {sipName_Read, static_cast<int>( ::QSocketNotifier::Read), 188},
    {sipName_Write, static_cast<int>( ::QSocketNotifier::Write), 188},
};

PyDoc_STRVAR(doc_QSocketNotifier, "\1QSocketNotifier(int, QSocketNotifier.Type, parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QSocketNotifier[] = {
    {"activated(int)", "\1activated(self, int)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QSocketNotifier = {
    & ::QSocketNotifier::staticMetaObject,
    0,
    signals_QSocketNotifier
};


sipClassTypeDef sipTypeDef_QtCore_QSocketNotifier = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSocketNotifier,
        {0},
        &plugin_QSocketNotifier
    },
    {
        sipNameNr_QSocketNotifier,
        {0, 0, 1},
        5, methods_QSocketNotifier,
        3, enummembers_QSocketNotifier,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSocketNotifier,
    -1,
    -1,
    supers_QSocketNotifier,
    0,
    init_type_QSocketNotifier,
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
    dealloc_QSocketNotifier,
    0,
    0,
    0,
    release_QSocketNotifier,
    cast_QSocketNotifier,
    0,
    0,
    0,
    0,
    0,
    0
};