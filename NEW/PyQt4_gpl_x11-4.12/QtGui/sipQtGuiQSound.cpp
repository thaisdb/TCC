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

#include "sipAPIQtGui.h"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qsound.sip"
#include <qsound.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSound.cpp"


class sipQSound : public  ::QSound
{
public:
    sipQSound(const  ::QString&, ::QObject*);
    virtual ~sipQSound();

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
    sipQSound(const sipQSound &);
    sipQSound &operator = (const sipQSound &);

    char sipPyMethods[7];
};

sipQSound::sipQSound(const  ::QString& a0, ::QObject*a1):  ::QSound(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSound::~sipQSound()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSound::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QSound);
}

int sipQSound::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QSound::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QSound,_c,_id,_a);

    return _id;
}

void *sipQSound::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QSound, _clname)) ? this :  ::QSound::qt_metacast(_clname);
}

bool sipQSound::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QSound::event(a0);

    extern bool sipVH_QtGui_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQSound::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QSound::eventFilter(a0,a1);

    extern bool sipVH_QtGui_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_6(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQSound::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QSound::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSound::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QSound::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSound::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QSound::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSound::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QSound::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSound::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QSound::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSound_isAvailable, "isAvailable() -> bool");

extern "C" {static PyObject *meth_QSound_isAvailable(PyObject *, PyObject *);}
static PyObject *meth_QSound_isAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QSound::isAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_isAvailable, doc_QSound_isAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_play, "play(str)\n"
    "play(self)");

extern "C" {static PyObject *meth_QSound_play(PyObject *, PyObject *);}
static PyObject *meth_QSound_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QSound::play(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->play();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_play, doc_QSound_play);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loops, "loops(self) -> int");

extern "C" {static PyObject *meth_QSound_loops(PyObject *, PyObject *);}
static PyObject *meth_QSound_loops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->loops();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loops, doc_QSound_loops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loopsRemaining, "loopsRemaining(self) -> int");

extern "C" {static PyObject *meth_QSound_loopsRemaining(PyObject *, PyObject *);}
static PyObject *meth_QSound_loopsRemaining(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->loopsRemaining();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loopsRemaining, doc_QSound_loopsRemaining);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_setLoops, "setLoops(self, int)");

extern "C" {static PyObject *meth_QSound_setLoops(PyObject *, PyObject *);}
static PyObject *meth_QSound_setLoops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSound, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLoops(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_setLoops, doc_QSound_setLoops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_fileName, "fileName(self) -> str");

extern "C" {static PyObject *meth_QSound_fileName(PyObject *, PyObject *);}
static PyObject *meth_QSound_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_fileName, doc_QSound_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_isFinished, "isFinished(self) -> bool");

extern "C" {static PyObject *meth_QSound_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QSound_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFinished();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_isFinished, doc_QSound_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_stop, "stop(self)");

extern "C" {static PyObject *meth_QSound_stop(PyObject *, PyObject *);}
static PyObject *meth_QSound_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_stop, doc_QSound_stop);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSound(void *, const sipTypeDef *);}
static void *cast_QSound(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSound *sipCpp = reinterpret_cast< ::QSound *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSound(void *, int);}
static void release_QSound(void *sipCppV, int)
{
     ::QSound *sipCpp = reinterpret_cast< ::QSound *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSound(sipSimpleWrapper *);}
static void dealloc_QSound(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSound *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSound(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSound(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSound(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSound *sipCpp = 0;

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
            sipCpp = new sipQSound(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSound[] = {{34, 0, 1}};


static PyMethodDef methods_QSound[] = {
    {SIP_MLNAME_CAST(sipName_fileName), meth_QSound_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_fileName)},
    {SIP_MLNAME_CAST(sipName_isAvailable), meth_QSound_isAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_isAvailable)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QSound_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_isFinished)},
    {SIP_MLNAME_CAST(sipName_loops), meth_QSound_loops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loops)},
    {SIP_MLNAME_CAST(sipName_loopsRemaining), meth_QSound_loopsRemaining, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loopsRemaining)},
    {SIP_MLNAME_CAST(sipName_play), meth_QSound_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_play)},
    {SIP_MLNAME_CAST(sipName_setLoops), meth_QSound_setLoops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_setLoops)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QSound_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_stop)}
};

PyDoc_STRVAR(doc_QSound, "\1QSound(str, parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QSound = {
    & ::QSound::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QSound = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSound,
        {0},
        &plugin_QSound
    },
    {
        sipNameNr_QSound,
        {0, 0, 1},
        8, methods_QSound,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSound,
    -1,
    -1,
    supers_QSound,
    0,
    init_type_QSound,
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
    dealloc_QSound,
    0,
    0,
    0,
    release_QSound,
    cast_QSound,
    0,
    0,
    0,
    0,
    0,
    0
};
