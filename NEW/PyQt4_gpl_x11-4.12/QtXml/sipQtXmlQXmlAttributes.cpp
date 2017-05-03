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

#include "sipAPIQtXml.h"

#line 52 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtXml/sipQtXmlQXmlAttributes.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtXml/sipQtXmlQXmlAttributes.cpp"


class sipQXmlAttributes : public  ::QXmlAttributes
{
public:
    sipQXmlAttributes();
    sipQXmlAttributes(const  ::QXmlAttributes&);
    ~sipQXmlAttributes();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlAttributes(const sipQXmlAttributes &);
    sipQXmlAttributes &operator = (const sipQXmlAttributes &);
};

sipQXmlAttributes::sipQXmlAttributes():  ::QXmlAttributes(), sipPySelf(0)
{
}

sipQXmlAttributes::sipQXmlAttributes(const  ::QXmlAttributes& a0):  ::QXmlAttributes(a0), sipPySelf(0)
{
}

sipQXmlAttributes::~sipQXmlAttributes()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QXmlAttributes_index, "index(self, str) -> int\n"
    "index(self, str, str) -> int");

extern "C" {static PyObject *meth_QXmlAttributes_index(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->index(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->index(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_index, doc_QXmlAttributes_index);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_length, "length(self) -> int");

extern "C" {static PyObject *meth_QXmlAttributes_length(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlAttributes, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_length, doc_QXmlAttributes_length);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_localName, "localName(self, int) -> str");

extern "C" {static PyObject *meth_QXmlAttributes_localName(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_localName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlAttributes, &sipCpp, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->localName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_localName, doc_QXmlAttributes_localName);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_qName, "qName(self, int) -> str");

extern "C" {static PyObject *meth_QXmlAttributes_qName(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_qName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlAttributes, &sipCpp, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->qName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_qName, doc_QXmlAttributes_qName);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_uri, "uri(self, int) -> str");

extern "C" {static PyObject *meth_QXmlAttributes_uri(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_uri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlAttributes, &sipCpp, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->uri(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_uri, doc_QXmlAttributes_uri);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_type, "type(self, int) -> str\n"
    "type(self, str) -> str\n"
    "type(self, str, str) -> str");

extern "C" {static PyObject *meth_QXmlAttributes_type(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlAttributes, &sipCpp, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->type(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->type(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->type(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_type, doc_QXmlAttributes_type);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_value, "value(self, int) -> str\n"
    "value(self, str) -> str\n"
    "value(self, str, str) -> str");

extern "C" {static PyObject *meth_QXmlAttributes_value(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlAttributes, &sipCpp, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->value(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->value(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->value(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_value, doc_QXmlAttributes_value);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_clear, "clear(self)");

extern "C" {static PyObject *meth_QXmlAttributes_clear(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlAttributes, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_clear, doc_QXmlAttributes_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_append, "append(self, str, str, str, str)");

extern "C" {static PyObject *meth_QXmlAttributes_append(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;
         ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1J1", &sipSelf, sipType_QXmlAttributes, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_append, doc_QXmlAttributes_append);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlAttributes_count, "count(self) -> int");

extern "C" {static PyObject *meth_QXmlAttributes_count(PyObject *, PyObject *);}
static PyObject *meth_QXmlAttributes_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlAttributes, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlAttributes, sipName_count, doc_QXmlAttributes_count);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QXmlAttributes___len__(PyObject *);}
static SIP_SSIZE_T slot_QXmlAttributes___len__(PyObject *sipSelf)
{
     ::QXmlAttributes *sipCpp = reinterpret_cast< ::QXmlAttributes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlAttributes));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 507 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtXml/sipQtXmlQXmlAttributes.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlAttributes(void *, int);}
static void release_QXmlAttributes(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQXmlAttributes *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlAttributes *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlAttributes(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlAttributes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QXmlAttributes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QXmlAttributes *>(sipSrc);
}


extern "C" {static void *array_QXmlAttributes(SIP_SSIZE_T);}
static void *array_QXmlAttributes(SIP_SSIZE_T sipNrElem)
{
    return new  ::QXmlAttributes[sipNrElem];
}


extern "C" {static void *copy_QXmlAttributes(const void *, SIP_SSIZE_T);}
static void *copy_QXmlAttributes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QXmlAttributes(reinterpret_cast<const  ::QXmlAttributes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlAttributes(sipSimpleWrapper *);}
static void dealloc_QXmlAttributes(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlAttributes *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlAttributes(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlAttributes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlAttributes(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlAttributes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlAttributes();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlAttributes* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlAttributes, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlAttributes(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlAttributes[] = {
    {(void *)slot_QXmlAttributes___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlAttributes[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QXmlAttributes_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_append)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QXmlAttributes_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QXmlAttributes_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_count)},
    {SIP_MLNAME_CAST(sipName_index), meth_QXmlAttributes_index, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_index)},
    {SIP_MLNAME_CAST(sipName_length), meth_QXmlAttributes_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_length)},
    {SIP_MLNAME_CAST(sipName_localName), meth_QXmlAttributes_localName, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_localName)},
    {SIP_MLNAME_CAST(sipName_qName), meth_QXmlAttributes_qName, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_qName)},
    {SIP_MLNAME_CAST(sipName_type), meth_QXmlAttributes_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_type)},
    {SIP_MLNAME_CAST(sipName_uri), meth_QXmlAttributes_uri, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_uri)},
    {SIP_MLNAME_CAST(sipName_value), meth_QXmlAttributes_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlAttributes_value)}
};

PyDoc_STRVAR(doc_QXmlAttributes, "\1QXmlAttributes()\n"
    "QXmlAttributes(QXmlAttributes)");


static pyqt4ClassPluginDef plugin_QXmlAttributes = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlAttributes = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlAttributes,
        {0},
        &plugin_QXmlAttributes
    },
    {
        sipNameNr_QXmlAttributes,
        {0, 0, 1},
        10, methods_QXmlAttributes,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlAttributes,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlAttributes,
    init_type_QXmlAttributes,
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
    dealloc_QXmlAttributes,
    assign_QXmlAttributes,
    array_QXmlAttributes,
    copy_QXmlAttributes,
    release_QXmlAttributes,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
