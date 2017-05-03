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

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qsharedmemory.sip"
#include <qsharedmemory.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"

#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 27 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 368 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 351 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 265 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 32 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 115 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"


class sipQSharedMemory : public  ::QSharedMemory
{
public:
    sipQSharedMemory( ::QObject*);
    sipQSharedMemory(const  ::QString&, ::QObject*);
    virtual ~sipQSharedMemory();

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
    sipQSharedMemory(const sipQSharedMemory &);
    sipQSharedMemory &operator = (const sipQSharedMemory &);

    char sipPyMethods[7];
};

sipQSharedMemory::sipQSharedMemory( ::QObject*a0):  ::QSharedMemory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::sipQSharedMemory(const  ::QString& a0, ::QObject*a1):  ::QSharedMemory(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::~sipQSharedMemory()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSharedMemory::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSharedMemory);
}

int sipQSharedMemory::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QSharedMemory::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSharedMemory,_c,_id,_a);

    return _id;
}

void *sipQSharedMemory::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QSharedMemory, _clname)) ? this :  ::QSharedMemory::qt_metacast(_clname);
}

bool sipQSharedMemory::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QSharedMemory::event(a0);

    extern bool sipVH_QtCore_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtCore_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQSharedMemory::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QSharedMemory::eventFilter(a0,a1);

    extern bool sipVH_QtCore_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtCore_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQSharedMemory::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QSharedMemory::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtCore_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSharedMemory::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QSharedMemory::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtCore_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSharedMemory::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QSharedMemory::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtCore_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSharedMemory::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QSharedMemory::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSharedMemory::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QSharedMemory::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSharedMemory_setKey, "setKey(self, str)");

extern "C" {static PyObject *meth_QSharedMemory_setKey(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_setKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSharedMemory, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setKey(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_setKey, doc_QSharedMemory_setKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_key, "key(self) -> str");

extern "C" {static PyObject *meth_QSharedMemory_key(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->key());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_key, doc_QSharedMemory_key);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_create, "create(self, int, mode: QSharedMemory.AccessMode = QSharedMemory.ReadWrite) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QSharedMemory::AccessMode a1 = QSharedMemory::ReadWrite;
         ::QSharedMemory *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|E", &sipSelf, sipType_QSharedMemory, &sipCpp, &a0, sipType_QSharedMemory_AccessMode, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_create, doc_QSharedMemory_create);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_size, "size(self) -> int");

extern "C" {static PyObject *meth_QSharedMemory_size(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_size, doc_QSharedMemory_size);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_attach, "attach(self, mode: QSharedMemory.AccessMode = QSharedMemory.ReadWrite) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_attach(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_attach(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSharedMemory::AccessMode a0 = QSharedMemory::ReadWrite;
         ::QSharedMemory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QSharedMemory, &sipCpp, sipType_QSharedMemory_AccessMode, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->attach(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_attach, doc_QSharedMemory_attach);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_isAttached, "isAttached(self) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_isAttached(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_isAttached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAttached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_isAttached, doc_QSharedMemory_isAttached);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_detach, "detach(self) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_detach(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->detach();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_detach, doc_QSharedMemory_detach);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_data, "data(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QSharedMemory_data(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromVoidPtrAndSize(sipCpp->data(), sipCpp->size());
#line 503 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_data, doc_QSharedMemory_data);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_constData, "constData(self) -> sip.voidptr");

extern "C" {static PyObject *meth_QSharedMemory_constData(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_constData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 68 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromConstVoidPtrAndSize(sipCpp->constData(), sipCpp->size());
#line 533 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_constData, doc_QSharedMemory_constData);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_lock, "lock(self) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_lock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_lock, doc_QSharedMemory_lock);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_unlock, "unlock(self) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_unlock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unlock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_unlock, doc_QSharedMemory_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_error, "error(self) -> QSharedMemory.SharedMemoryError");

extern "C" {static PyObject *meth_QSharedMemory_error(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
             ::QSharedMemory::SharedMemoryError sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSharedMemory_SharedMemoryError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_error, doc_QSharedMemory_error);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QSharedMemory_errorString(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_errorString, doc_QSharedMemory_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_setNativeKey, "setNativeKey(self, str)");

extern "C" {static PyObject *meth_QSharedMemory_setNativeKey(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_setNativeKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSharedMemory, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNativeKey(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_setNativeKey, doc_QSharedMemory_setNativeKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_nativeKey, "nativeKey(self) -> str");

extern "C" {static PyObject *meth_QSharedMemory_nativeKey(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_nativeKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->nativeKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_nativeKey, doc_QSharedMemory_nativeKey);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSharedMemory(void *, const sipTypeDef *);}
static void *cast_QSharedMemory(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSharedMemory *sipCpp = reinterpret_cast< ::QSharedMemory *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSharedMemory(void *, int);}
static void release_QSharedMemory(void *sipCppV, int)
{
     ::QSharedMemory *sipCpp = reinterpret_cast< ::QSharedMemory *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSharedMemory(sipSimpleWrapper *);}
static void dealloc_QSharedMemory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSharedMemory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSharedMemory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSharedMemory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSharedMemory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSharedMemory *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSharedMemory[] = {{141, 255, 1}};


static PyMethodDef methods_QSharedMemory[] = {
    {SIP_MLNAME_CAST(sipName_attach), (PyCFunction)meth_QSharedMemory_attach, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSharedMemory_attach)},
    {SIP_MLNAME_CAST(sipName_constData), meth_QSharedMemory_constData, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_constData)},
    {SIP_MLNAME_CAST(sipName_create), (PyCFunction)meth_QSharedMemory_create, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSharedMemory_create)},
    {SIP_MLNAME_CAST(sipName_data), meth_QSharedMemory_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_data)},
    {SIP_MLNAME_CAST(sipName_detach), meth_QSharedMemory_detach, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_detach)},
    {SIP_MLNAME_CAST(sipName_error), meth_QSharedMemory_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QSharedMemory_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_errorString)},
    {SIP_MLNAME_CAST(sipName_isAttached), meth_QSharedMemory_isAttached, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_isAttached)},
    {SIP_MLNAME_CAST(sipName_key), meth_QSharedMemory_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_key)},
    {SIP_MLNAME_CAST(sipName_lock), meth_QSharedMemory_lock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_lock)},
    {SIP_MLNAME_CAST(sipName_nativeKey), meth_QSharedMemory_nativeKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_nativeKey)},
    {SIP_MLNAME_CAST(sipName_setKey), meth_QSharedMemory_setKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_setKey)},
    {SIP_MLNAME_CAST(sipName_setNativeKey), meth_QSharedMemory_setNativeKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_setNativeKey)},
    {SIP_MLNAME_CAST(sipName_size), meth_QSharedMemory_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_size)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QSharedMemory_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_unlock)}
};

static sipEnumMemberDef enummembers_QSharedMemory[] = {
    {sipName_AlreadyExists, static_cast<int>( ::QSharedMemory::AlreadyExists), 182},
    {sipName_InvalidSize, static_cast<int>( ::QSharedMemory::InvalidSize), 182},
    {sipName_KeyError, static_cast<int>( ::QSharedMemory::KeyError), 182},
    {sipName_LockError, static_cast<int>( ::QSharedMemory::LockError), 182},
    {sipName_NoError, static_cast<int>( ::QSharedMemory::NoError), 182},
    {sipName_NotFound, static_cast<int>( ::QSharedMemory::NotFound), 182},
    {sipName_OutOfResources, static_cast<int>( ::QSharedMemory::OutOfResources), 182},
    {sipName_PermissionDenied, static_cast<int>( ::QSharedMemory::PermissionDenied), 182},
    {sipName_ReadOnly, static_cast<int>( ::QSharedMemory::ReadOnly), 181},
    {sipName_ReadWrite, static_cast<int>( ::QSharedMemory::ReadWrite), 181},
    {sipName_UnknownError, static_cast<int>( ::QSharedMemory::UnknownError), 182},
};

PyDoc_STRVAR(doc_QSharedMemory, "\1QSharedMemory(parent: QObject = None)\n"
    "QSharedMemory(str, parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QSharedMemory = {
    & ::QSharedMemory::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSharedMemory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSharedMemory,
        {0},
        &plugin_QSharedMemory
    },
    {
        sipNameNr_QSharedMemory,
        {0, 0, 1},
        15, methods_QSharedMemory,
        11, enummembers_QSharedMemory,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSharedMemory,
    -1,
    -1,
    supers_QSharedMemory,
    0,
    init_type_QSharedMemory,
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
    dealloc_QSharedMemory,
    0,
    0,
    0,
    release_QSharedMemory,
    cast_QSharedMemory,
    0,
    0,
    0,
    0,
    0,
    0
};
