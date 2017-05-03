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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"


extern "C" {static int slot_QSizePolicy_ControlTypes___bool__(PyObject *);}
static int slot_QSizePolicy_ControlTypes___bool__(PyObject *sipSelf)
{
     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() != a0->operator QSizePolicy::ControlTypes::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"
            sipReleaseType(const_cast< ::QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QSizePolicy_ControlTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() == a0->operator QSizePolicy::ControlTypes::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"
            sipReleaseType(const_cast< ::QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QSizePolicy_ControlTypes, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "sip/QtCore/qglobal.sip"
        *sipCpp = QSizePolicy::ControlTypes(*sipCpp ^ a0);
#line 168 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
             ::QSizePolicy::ControlTypes*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QSizePolicy::ControlTypes((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "sip/QtCore/qglobal.sip"
        *sipCpp = QSizePolicy::ControlTypes(*sipCpp | a0);
#line 242 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
             ::QSizePolicy::ControlTypes*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QSizePolicy::ControlTypes((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QSizePolicy::ControlTypes::operator&=(a0);
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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
             ::QSizePolicy::ControlTypes*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QSizePolicy::ControlTypes((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *sipSelf)
{
     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;


    {
        {
             ::QSizePolicy::ControlTypes*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QSizePolicy::ControlTypes(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *sipSelf)
{
     ::QSizePolicy::ControlTypes *sipCpp = reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

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
extern "C" {static void release_QSizePolicy_ControlTypes(void *, int);}
static void release_QSizePolicy_ControlTypes(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSizePolicy_ControlTypes(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizePolicy_ControlTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QSizePolicy::ControlTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QSizePolicy::ControlTypes *>(sipSrc);
}


extern "C" {static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T);}
static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSizePolicy::ControlTypes[sipNrElem];
}


extern "C" {static void *copy_QSizePolicy_ControlTypes(const void *, SIP_SSIZE_T);}
static void *copy_QSizePolicy_ControlTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSizePolicy::ControlTypes(reinterpret_cast<const  ::QSizePolicy::ControlTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *);}
static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSizePolicy_ControlTypes(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSizePolicy::ControlTypes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSizePolicy::ControlTypes();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSizePolicy::ControlTypes(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSizePolicy::ControlTypes(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSizePolicy_ControlTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSizePolicy_ControlTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSizePolicy::ControlTypes **sipCppPtr = reinterpret_cast< ::QSizePolicy::ControlTypes **>(sipCppPtrV);

#line 390 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSizePolicy::ControlTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)) ||
            sipCanConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)))
{
    *sipCppPtr = new QSizePolicy::ControlTypes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSizePolicy::ControlTypes *>(sipConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQSizePolicyControlTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizePolicy_ControlTypes[] = {
    {(void *)slot_QSizePolicy_ControlTypes___bool__, bool_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ne__, ne_slot},
    {(void *)slot_QSizePolicy_ControlTypes___eq__, eq_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ixor__, ixor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___xor__, xor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ior__, ior_slot},
    {(void *)slot_QSizePolicy_ControlTypes___or__, or_slot},
    {(void *)slot_QSizePolicy_ControlTypes___iand__, iand_slot},
    {(void *)slot_QSizePolicy_ControlTypes___and__, and_slot},
    {(void *)slot_QSizePolicy_ControlTypes___invert__, invert_slot},
    {(void *)slot_QSizePolicy_ControlTypes___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSizePolicy_ControlTypes, "\1QSizePolicy.ControlTypes()\n"
    "QSizePolicy.ControlTypes(Union[QSizePolicy.ControlTypes, QSizePolicy.ControlType])\n"
    "QSizePolicy.ControlTypes(QSizePolicy.ControlTypes)");


static pyqt4ClassPluginDef plugin_QSizePolicy_ControlTypes = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QSizePolicy_ControlTypes = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSizePolicy__ControlTypes,
        {0},
        &plugin_QSizePolicy_ControlTypes
    },
    {
        sipNameNr_ControlTypes,
        {448, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSizePolicy_ControlTypes,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizePolicy_ControlTypes,
    init_type_QSizePolicy_ControlTypes,
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
    dealloc_QSizePolicy_ControlTypes,
    assign_QSizePolicy_ControlTypes,
    array_QSizePolicy_ControlTypes,
    copy_QSizePolicy_ControlTypes,
    release_QSizePolicy_ControlTypes,
    0,
    convertTo_QSizePolicy_ControlTypes,
    0,
    0,
    0,
    0,
    0
};
