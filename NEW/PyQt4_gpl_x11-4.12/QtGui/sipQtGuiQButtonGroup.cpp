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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qbuttongroup.sip"
#include <qbuttongroup.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qabstractbutton.sip"
#include <qabstractbutton.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQButtonGroup.cpp"


class sipQButtonGroup : public  ::QButtonGroup
{
public:
    sipQButtonGroup( ::QObject*);
    virtual ~sipQButtonGroup();

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
    sipQButtonGroup(const sipQButtonGroup &);
    sipQButtonGroup &operator = (const sipQButtonGroup &);

    char sipPyMethods[7];
};

sipQButtonGroup::sipQButtonGroup( ::QObject*a0):  ::QButtonGroup(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQButtonGroup::~sipQButtonGroup()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQButtonGroup::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QButtonGroup);
}

int sipQButtonGroup::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QButtonGroup::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QButtonGroup,_c,_id,_a);

    return _id;
}

void *sipQButtonGroup::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QButtonGroup, _clname)) ? this :  ::QButtonGroup::qt_metacast(_clname);
}

bool sipQButtonGroup::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QButtonGroup::event(a0);

    extern bool sipVH_QtGui_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQButtonGroup::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QButtonGroup::eventFilter(a0,a1);

    extern bool sipVH_QtGui_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_6(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQButtonGroup::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QButtonGroup::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQButtonGroup::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QButtonGroup::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQButtonGroup::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QButtonGroup::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQButtonGroup::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QButtonGroup::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQButtonGroup::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QButtonGroup::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QButtonGroup_setExclusive, "setExclusive(self, bool)");

extern "C" {static PyObject *meth_QButtonGroup_setExclusive(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_setExclusive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QButtonGroup, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExclusive(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_setExclusive, doc_QButtonGroup_setExclusive);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_exclusive, "exclusive(self) -> bool");

extern "C" {static PyObject *meth_QButtonGroup_exclusive(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_exclusive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QButtonGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exclusive();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_exclusive, doc_QButtonGroup_exclusive);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_addButton, "addButton(self, QAbstractButton)\n"
    "addButton(self, QAbstractButton, int)");

extern "C" {static PyObject *meth_QButtonGroup_addButton(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_addButton(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractButton* a0;
         ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QButtonGroup, &sipCpp, sipType_QAbstractButton, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addButton(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QAbstractButton* a0;
        int a1;
         ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8i", &sipSelf, sipType_QButtonGroup, &sipCpp, sipType_QAbstractButton, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addButton(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_addButton, doc_QButtonGroup_addButton);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_removeButton, "removeButton(self, QAbstractButton)");

extern "C" {static PyObject *meth_QButtonGroup_removeButton(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_removeButton(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractButton* a0;
         ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QButtonGroup, &sipCpp, sipType_QAbstractButton, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeButton(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_removeButton, doc_QButtonGroup_removeButton);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_buttons, "buttons(self) -> object");

extern "C" {static PyObject *meth_QButtonGroup_buttons(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QButtonGroup, &sipCpp))
        {
            QList< ::QAbstractButton*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QAbstractButton*>(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QAbstractButton,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_buttons, doc_QButtonGroup_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_button, "button(self, int) -> QAbstractButton");

extern "C" {static PyObject *meth_QButtonGroup_button(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QButtonGroup, &sipCpp, &a0))
        {
             ::QAbstractButton*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->button(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractButton,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_button, doc_QButtonGroup_button);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_checkedButton, "checkedButton(self) -> QAbstractButton");

extern "C" {static PyObject *meth_QButtonGroup_checkedButton(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_checkedButton(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QButtonGroup, &sipCpp))
        {
             ::QAbstractButton*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->checkedButton();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractButton,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_checkedButton, doc_QButtonGroup_checkedButton);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_setId, "setId(self, QAbstractButton, int)");

extern "C" {static PyObject *meth_QButtonGroup_setId(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_setId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractButton* a0;
        int a1;
         ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8i", &sipSelf, sipType_QButtonGroup, &sipCpp, sipType_QAbstractButton, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setId(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_setId, doc_QButtonGroup_setId);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_id, "id(self, QAbstractButton) -> int");

extern "C" {static PyObject *meth_QButtonGroup_id(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractButton* a0;
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QButtonGroup, &sipCpp, sipType_QAbstractButton, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->id(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_id, doc_QButtonGroup_id);

    return NULL;
}


PyDoc_STRVAR(doc_QButtonGroup_checkedId, "checkedId(self) -> int");

extern "C" {static PyObject *meth_QButtonGroup_checkedId(PyObject *, PyObject *);}
static PyObject *meth_QButtonGroup_checkedId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QButtonGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QButtonGroup, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->checkedId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QButtonGroup, sipName_checkedId, doc_QButtonGroup_checkedId);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QButtonGroup(void *, const sipTypeDef *);}
static void *cast_QButtonGroup(void *sipCppV, const sipTypeDef *targetType)
{
     ::QButtonGroup *sipCpp = reinterpret_cast< ::QButtonGroup *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QButtonGroup(void *, int);}
static void release_QButtonGroup(void *sipCppV, int)
{
     ::QButtonGroup *sipCpp = reinterpret_cast< ::QButtonGroup *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QButtonGroup(sipSimpleWrapper *);}
static void dealloc_QButtonGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQButtonGroup *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QButtonGroup(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QButtonGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QButtonGroup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQButtonGroup *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQButtonGroup(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QButtonGroup[] = {{34, 0, 1}};


static PyMethodDef methods_QButtonGroup[] = {
    {SIP_MLNAME_CAST(sipName_addButton), meth_QButtonGroup_addButton, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_addButton)},
    {SIP_MLNAME_CAST(sipName_button), meth_QButtonGroup_button, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_button)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QButtonGroup_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_buttons)},
    {SIP_MLNAME_CAST(sipName_checkedButton), meth_QButtonGroup_checkedButton, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_checkedButton)},
    {SIP_MLNAME_CAST(sipName_checkedId), meth_QButtonGroup_checkedId, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_checkedId)},
    {SIP_MLNAME_CAST(sipName_exclusive), meth_QButtonGroup_exclusive, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_exclusive)},
    {SIP_MLNAME_CAST(sipName_id), meth_QButtonGroup_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_id)},
    {SIP_MLNAME_CAST(sipName_removeButton), meth_QButtonGroup_removeButton, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_removeButton)},
    {SIP_MLNAME_CAST(sipName_setExclusive), meth_QButtonGroup_setExclusive, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_setExclusive)},
    {SIP_MLNAME_CAST(sipName_setId), meth_QButtonGroup_setId, METH_VARARGS, SIP_MLDOC_CAST(doc_QButtonGroup_setId)}
};

PyDoc_STRVAR(doc_QButtonGroup, "\1QButtonGroup(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QButtonGroup[] = {
    {"buttonReleased(QAbstractButton*)", "\1buttonReleased(self, QAbstractButton)", 0, 0},
    {"buttonReleased(int)", "\1buttonReleased(self, int)", 0, 0},
    {"buttonPressed(QAbstractButton*)", "\1buttonPressed(self, QAbstractButton)", 0, 0},
    {"buttonPressed(int)", "\1buttonPressed(self, int)", 0, 0},
    {"buttonClicked(QAbstractButton*)", "\1buttonClicked(self, QAbstractButton)", 0, 0},
    {"buttonClicked(int)", "\1buttonClicked(self, int)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QButtonGroup = {
    & ::QButtonGroup::staticMetaObject,
    0,
    signals_QButtonGroup
};


sipClassTypeDef sipTypeDef_QtGui_QButtonGroup = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QButtonGroup,
        {0},
        &plugin_QButtonGroup
    },
    {
        sipNameNr_QButtonGroup,
        {0, 0, 1},
        10, methods_QButtonGroup,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QButtonGroup,
    -1,
    -1,
    supers_QButtonGroup,
    0,
    init_type_QButtonGroup,
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
    dealloc_QButtonGroup,
    0,
    0,
    0,
    release_QButtonGroup,
    cast_QButtonGroup,
    0,
    0,
    0,
    0,
    0,
    0
};