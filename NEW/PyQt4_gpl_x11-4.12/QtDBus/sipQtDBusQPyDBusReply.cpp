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

#include "sipAPIQtDBus.h"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDBus/qpydbusreply.sip"
#include <qpydbusreply.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDBus/sipQtDBusQPyDBusReply.cpp"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDBus/sipQtDBusQPyDBusReply.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDBus/qdbuspendingcall.sip"
#include <qdbuspendingcall.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDBus/sipQtDBusQPyDBusReply.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDBus/sipQtDBusQPyDBusReply.cpp"


PyDoc_STRVAR(doc_QPyDBusReply_error, "error(self) -> QDBusError");

extern "C" {static PyObject *meth_QPyDBusReply_error(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusReply_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusReply, &sipCpp))
        {
             ::QDBusError*sipRes;

            sipRes = new  ::QDBusError(sipCpp->error());

            return sipConvertFromNewType(sipRes,sipType_QDBusError,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusReply, sipName_error, doc_QPyDBusReply_error);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusReply_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QPyDBusReply_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPyDBusReply_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPyDBusReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDBusReply, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusReply, sipName_isValid, doc_QPyDBusReply_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QPyDBusReply_value, "value(self, type: object = None) -> object");

extern "C" {static PyObject *meth_QPyDBusReply_value(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPyDBusReply_value(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0 = 0;
        const  ::QPyDBusReply *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|P0", &sipSelf, sipType_QPyDBusReply, &sipCpp, &a0))
        {
            PyObject * sipRes;

            sipRes = sipCpp->value(a0);

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusReply, sipName_value, doc_QPyDBusReply_value);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDBusReply(void *, int);}
static void release_QPyDBusReply(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPyDBusReply *>(sipCppV);
}


extern "C" {static void dealloc_QPyDBusReply(sipSimpleWrapper *);}
static void dealloc_QPyDBusReply(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDBusReply(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPyDBusReply(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDBusReply(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPyDBusReply *sipCpp = 0;

    {
        const  ::QDBusMessage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusMessage, &a0))
        {
            sipCpp = new  ::QPyDBusReply(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QDBusPendingCall* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusPendingCall, &a0))
        {
            sipCpp = new  ::QPyDBusReply(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QDBusError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusError, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPyDBusReply(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPyDBusReply* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPyDBusReply, &a0))
        {
            sipCpp = new  ::QPyDBusReply(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPyDBusReply[] = {
    {SIP_MLNAME_CAST(sipName_error), meth_QPyDBusReply_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusReply_error)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPyDBusReply_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPyDBusReply_isValid)},
    {SIP_MLNAME_CAST(sipName_value), (PyCFunction)meth_QPyDBusReply_value, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPyDBusReply_value)}
};

PyDoc_STRVAR(doc_QPyDBusReply, "\1QDBusReply(QDBusMessage)\n"
    "QDBusReply(QDBusPendingCall)\n"
    "QDBusReply(QDBusError)\n"
    "QDBusReply(QDBusReply)");


static pyqt4ClassPluginDef plugin_QPyDBusReply = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QPyDBusReply = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPyDBusReply,
        {0},
        &plugin_QPyDBusReply
    },
    {
        sipNameNr_QDBusReply,
        {0, 0, 1},
        3, methods_QPyDBusReply,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDBusReply,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPyDBusReply,
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
    dealloc_QPyDBusReply,
    0,
    0,
    0,
    release_QPyDBusReply,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
