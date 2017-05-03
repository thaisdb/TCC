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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"


extern "C" {static int slot_QDir_SortFlags___bool__(PyObject *);}
static int slot_QDir_SortFlags___bool__(PyObject *sipSelf)
{
     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_SortFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() != a0->operator QDir::SortFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(const_cast< ::QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QDir_SortFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDir_SortFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() == a0->operator QDir::SortFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(const_cast< ::QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QDir_SortFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDir_SortFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QDir::SortFlags(*sipCpp ^ a0);
#line 168 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"

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


extern "C" {static PyObject *slot_QDir_SortFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
             ::QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::SortFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QDir::SortFlags(*sipCpp | a0);
#line 242 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"

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


extern "C" {static PyObject *slot_QDir_SortFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
             ::QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::SortFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QDir::SortFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QDir_SortFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
             ::QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::SortFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___invert__(PyObject *);}
static PyObject *slot_QDir_SortFlags___invert__(PyObject *sipSelf)
{
     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::SortFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_SortFlags___int__(PyObject *);}
static PyObject *slot_QDir_SortFlags___int__(PyObject *sipSelf)
{
     ::QDir::SortFlags *sipCpp = reinterpret_cast< ::QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

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
extern "C" {static void release_QDir_SortFlags(void *, int);}
static void release_QDir_SortFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QDir::SortFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDir_SortFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QDir_SortFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QDir::SortFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QDir::SortFlags *>(sipSrc);
}


extern "C" {static void *array_QDir_SortFlags(SIP_SSIZE_T);}
static void *array_QDir_SortFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDir::SortFlags[sipNrElem];
}


extern "C" {static void *copy_QDir_SortFlags(const void *, SIP_SSIZE_T);}
static void *copy_QDir_SortFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDir::SortFlags(reinterpret_cast<const  ::QDir::SortFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDir_SortFlags(sipSimpleWrapper *);}
static void dealloc_QDir_SortFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDir_SortFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDir_SortFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDir_SortFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDir::SortFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::SortFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::SortFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDir::SortFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDir_SortFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDir_SortFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QDir::SortFlags **sipCppPtr = reinterpret_cast< ::QDir::SortFlags **>(sipCppPtrV);

#line 390 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDir::SortFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_SortFlag)) ||
            sipCanConvertToType(sipPy, sipType_QDir_SortFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_SortFlag)))
{
    *sipCppPtr = new QDir::SortFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDir::SortFlags *>(sipConvertToType(sipPy, sipType_QDir_SortFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQDirSortFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDir_SortFlags[] = {
    {(void *)slot_QDir_SortFlags___bool__, bool_slot},
    {(void *)slot_QDir_SortFlags___ne__, ne_slot},
    {(void *)slot_QDir_SortFlags___eq__, eq_slot},
    {(void *)slot_QDir_SortFlags___ixor__, ixor_slot},
    {(void *)slot_QDir_SortFlags___xor__, xor_slot},
    {(void *)slot_QDir_SortFlags___ior__, ior_slot},
    {(void *)slot_QDir_SortFlags___or__, or_slot},
    {(void *)slot_QDir_SortFlags___iand__, iand_slot},
    {(void *)slot_QDir_SortFlags___and__, and_slot},
    {(void *)slot_QDir_SortFlags___invert__, invert_slot},
    {(void *)slot_QDir_SortFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDir_SortFlags, "\1QDir.SortFlags()\n"
    "QDir.SortFlags(Union[QDir.SortFlags, QDir.SortFlag])\n"
    "QDir.SortFlags(QDir.SortFlags)");


static pyqt4ClassPluginDef plugin_QDir_SortFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QDir_SortFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDir__SortFlags,
        {0},
        &plugin_QDir_SortFlags
    },
    {
        sipNameNr_SortFlags,
        {45, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDir_SortFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDir_SortFlags,
    init_type_QDir_SortFlags,
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
    dealloc_QDir_SortFlags,
    assign_QDir_SortFlags,
    array_QDir_SortFlags,
    copy_QDir_SortFlags,
    release_QDir_SortFlags,
    0,
    convertTo_QDir_SortFlags,
    0,
    0,
    0,
    0,
    0
};
