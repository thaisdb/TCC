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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"


extern "C" {static int slot_Qt_GestureFlags___bool__(PyObject *);}
static int slot_Qt_GestureFlags___bool__(PyObject *sipSelf)
{
     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::GestureFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_GestureFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::GestureFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_GestureFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::GestureFlags::Int() != a0->operator Qt::GestureFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"
            sipReleaseType(const_cast< ::Qt::GestureFlags *>(a0),sipType_Qt_GestureFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_GestureFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_GestureFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::GestureFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_GestureFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::GestureFlags::Int() == a0->operator Qt::GestureFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"
            sipReleaseType(const_cast< ::Qt::GestureFlags *>(a0),sipType_Qt_GestureFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_GestureFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_GestureFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_GestureFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::GestureFlags(*sipCpp ^ a0);
#line 168 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_GestureFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::GestureFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_GestureFlags, &a0, &a0State, &a1))
        {
             ::Qt::GestureFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::GestureFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_GestureFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_GestureFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_GestureFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_GestureFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::GestureFlags(*sipCpp | a0);
#line 242 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_GestureFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::GestureFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_GestureFlags, &a0, &a0State, &a1))
        {
             ::Qt::GestureFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::GestureFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_GestureFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_GestureFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_GestureFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_GestureFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::Qt::GestureFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_GestureFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_GestureFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::GestureFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_GestureFlags, &a0, &a0State, &a1))
        {
             ::Qt::GestureFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::GestureFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_GestureFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_GestureFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_GestureFlags___invert__(PyObject *);}
static PyObject *slot_Qt_GestureFlags___invert__(PyObject *sipSelf)
{
     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::GestureFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::GestureFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_GestureFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_GestureFlags___int__(PyObject *);}
static PyObject *slot_Qt_GestureFlags___int__(PyObject *sipSelf)
{
     ::Qt::GestureFlags *sipCpp = reinterpret_cast< ::Qt::GestureFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_GestureFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_GestureFlags(void *, int);}
static void release_Qt_GestureFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::Qt::GestureFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_GestureFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_GestureFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::Qt::GestureFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::Qt::GestureFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_GestureFlags(SIP_SSIZE_T);}
static void *array_Qt_GestureFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::GestureFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_GestureFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_GestureFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::GestureFlags(reinterpret_cast<const  ::Qt::GestureFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_GestureFlags(sipSimpleWrapper *);}
static void dealloc_Qt_GestureFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_GestureFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_GestureFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_GestureFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::GestureFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::GestureFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::GestureFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::Qt::GestureFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_GestureFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::GestureFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::Qt::GestureFlags *>(a0),sipType_Qt_GestureFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_GestureFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_GestureFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::GestureFlags **sipCppPtr = reinterpret_cast< ::Qt::GestureFlags **>(sipCppPtrV);

#line 390 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::GestureFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_GestureFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_GestureFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_GestureFlag)))
{
    *sipCppPtr = new Qt::GestureFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::GestureFlags *>(sipConvertToType(sipPy, sipType_Qt_GestureFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQtGestureFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_GestureFlags[] = {
    {(void *)slot_Qt_GestureFlags___bool__, bool_slot},
    {(void *)slot_Qt_GestureFlags___ne__, ne_slot},
    {(void *)slot_Qt_GestureFlags___eq__, eq_slot},
    {(void *)slot_Qt_GestureFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_GestureFlags___xor__, xor_slot},
    {(void *)slot_Qt_GestureFlags___ior__, ior_slot},
    {(void *)slot_Qt_GestureFlags___or__, or_slot},
    {(void *)slot_Qt_GestureFlags___iand__, iand_slot},
    {(void *)slot_Qt_GestureFlags___and__, and_slot},
    {(void *)slot_Qt_GestureFlags___invert__, invert_slot},
    {(void *)slot_Qt_GestureFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_GestureFlags, "\1Qt.GestureFlags()\n"
    "Qt.GestureFlags(Union[Qt.GestureFlags, Qt.GestureFlag])\n"
    "Qt.GestureFlags(Qt.GestureFlags)");


static pyqt4ClassPluginDef plugin_Qt_GestureFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_GestureFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__GestureFlags,
        {0},
        &plugin_Qt_GestureFlags
    },
    {
        sipNameNr_GestureFlags,
        {273, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_GestureFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_GestureFlags,
    init_type_Qt_GestureFlags,
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
    dealloc_Qt_GestureFlags,
    assign_Qt_GestureFlags,
    array_Qt_GestureFlags,
    copy_Qt_GestureFlags,
    release_Qt_GestureFlags,
    0,
    convertTo_Qt_GestureFlags,
    0,
    0,
    0,
    0,
    0
};
