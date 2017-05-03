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

#include "sipAPIQtNetwork.h"

#line 69 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtNetwork/qhttp.sip"
#include <qhttp.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtNetwork/sipQtNetworkQHttpResponseHeader.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtNetwork/sipQtNetworkQHttpResponseHeader.cpp"
#line 27 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtNetwork/sipQtNetworkQHttpResponseHeader.cpp"
#line 196 "sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 40 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtNetwork/sipQtNetworkQHttpResponseHeader.cpp"
#line 68 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtNetwork/sipQtNetworkQHttpResponseHeader.cpp"


class sipQHttpResponseHeader : public  ::QHttpResponseHeader
{
public:
    sipQHttpResponseHeader();
    sipQHttpResponseHeader(const  ::QHttpResponseHeader&);
    sipQHttpResponseHeader(const  ::QString&);
    sipQHttpResponseHeader(int,const  ::QString&,int,int);
    virtual ~sipQHttpResponseHeader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString toString() const;
    int majorVersion() const;
    int minorVersion() const;
    bool parseLine(const  ::QString&,int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHttpResponseHeader(const sipQHttpResponseHeader &);
    sipQHttpResponseHeader &operator = (const sipQHttpResponseHeader &);

    char sipPyMethods[4];
};

sipQHttpResponseHeader::sipQHttpResponseHeader():  ::QHttpResponseHeader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpResponseHeader::sipQHttpResponseHeader(const  ::QHttpResponseHeader& a0):  ::QHttpResponseHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpResponseHeader::sipQHttpResponseHeader(const  ::QString& a0):  ::QHttpResponseHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpResponseHeader::sipQHttpResponseHeader(int a0,const  ::QString& a1,int a2,int a3):  ::QHttpResponseHeader(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpResponseHeader::~sipQHttpResponseHeader()
{
    sipCommonDtor(sipPySelf);
}

 ::QString sipQHttpResponseHeader::toString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_toString);

    if (!sipMeth)
        return  ::QHttpResponseHeader::toString();

    extern  ::QString sipVH_QtNetwork_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_21(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQHttpResponseHeader::majorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_majorVersion);

    if (!sipMeth)
        return  ::QHttpResponseHeader::majorVersion();

    extern int sipVH_QtNetwork_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_22(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQHttpResponseHeader::minorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_minorVersion);

    if (!sipMeth)
        return  ::QHttpResponseHeader::minorVersion();

    extern int sipVH_QtNetwork_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_22(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQHttpResponseHeader::parseLine(const  ::QString& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_parseLine);

    if (!sipMeth)
        return  ::QHttpResponseHeader::parseLine(a0,a1);

    extern bool sipVH_QtNetwork_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,int);

    return sipVH_QtNetwork_23(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QHttpResponseHeader_setStatusLine, "setStatusLine(self, int, text: str = '', major: int = 1, minor: int = 1)");

extern "C" {static PyObject *meth_QHttpResponseHeader_setStatusLine(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_setStatusLine(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;
         ::QHttpResponseHeader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_text,
            sipName_major,
            sipName_minor,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|J1ii", &sipSelf, sipType_QHttpResponseHeader, &sipCpp, &a0, sipType_QString,&a1, &a1State, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStatusLine(a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_setStatusLine, doc_QHttpResponseHeader_setStatusLine);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_statusCode, "statusCode(self) -> int");

extern "C" {static PyObject *meth_QHttpResponseHeader_statusCode(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_statusCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpResponseHeader, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->statusCode();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_statusCode, doc_QHttpResponseHeader_statusCode);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_reasonPhrase, "reasonPhrase(self) -> str");

extern "C" {static PyObject *meth_QHttpResponseHeader_reasonPhrase(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_reasonPhrase(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpResponseHeader, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->reasonPhrase());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_reasonPhrase, doc_QHttpResponseHeader_reasonPhrase);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_majorVersion, "majorVersion(self) -> int");

extern "C" {static PyObject *meth_QHttpResponseHeader_majorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_majorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpResponseHeader, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QHttpResponseHeader::majorVersion() : sipCpp->majorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_majorVersion, doc_QHttpResponseHeader_majorVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_minorVersion, "minorVersion(self) -> int");

extern "C" {static PyObject *meth_QHttpResponseHeader_minorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_minorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpResponseHeader, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QHttpResponseHeader::minorVersion() : sipCpp->minorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_minorVersion, doc_QHttpResponseHeader_minorVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_toString, "toString(self) -> str");

extern "C" {static PyObject *meth_QHttpResponseHeader_toString(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpResponseHeader, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QHttpResponseHeader::toString() : sipCpp->toString()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_toString, doc_QHttpResponseHeader_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpResponseHeader_parseLine, "parseLine(self, str, int) -> bool");

extern "C" {static PyObject *meth_QHttpResponseHeader_parseLine(PyObject *, PyObject *);}
static PyObject *meth_QHttpResponseHeader_parseLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1;
         ::QHttpResponseHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1i", &sipSelf, sipType_QHttpResponseHeader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QHttpResponseHeader::parseLine(*a0,a1) : sipCpp->parseLine(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpResponseHeader, sipName_parseLine, doc_QHttpResponseHeader_parseLine);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QHttpResponseHeader(void *, const sipTypeDef *);}
static void *cast_QHttpResponseHeader(void *sipCppV, const sipTypeDef *targetType)
{
     ::QHttpResponseHeader *sipCpp = reinterpret_cast< ::QHttpResponseHeader *>(sipCppV);

    if (targetType == sipType_QHttpHeader)
        return static_cast< ::QHttpHeader *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpResponseHeader(void *, int);}
static void release_QHttpResponseHeader(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQHttpResponseHeader *>(sipCppV);
    else
        delete reinterpret_cast< ::QHttpResponseHeader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHttpResponseHeader(void *, SIP_SSIZE_T, const void *);}
static void assign_QHttpResponseHeader(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QHttpResponseHeader *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QHttpResponseHeader *>(sipSrc);
}


extern "C" {static void *array_QHttpResponseHeader(SIP_SSIZE_T);}
static void *array_QHttpResponseHeader(SIP_SSIZE_T sipNrElem)
{
    return new  ::QHttpResponseHeader[sipNrElem];
}


extern "C" {static void *copy_QHttpResponseHeader(const void *, SIP_SSIZE_T);}
static void *copy_QHttpResponseHeader(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QHttpResponseHeader(reinterpret_cast<const  ::QHttpResponseHeader *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHttpResponseHeader(sipSimpleWrapper *);}
static void dealloc_QHttpResponseHeader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQHttpResponseHeader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHttpResponseHeader(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QHttpResponseHeader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHttpResponseHeader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHttpResponseHeader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpResponseHeader();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QHttpResponseHeader* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHttpResponseHeader, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpResponseHeader(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpResponseHeader(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_text,
            sipName_major,
            sipName_minor,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|J1ii", &a0, sipType_QString,&a1, &a1State, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpResponseHeader(a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHttpResponseHeader[] = {{23, 255, 1}};


static PyMethodDef methods_QHttpResponseHeader[] = {
    {SIP_MLNAME_CAST(sipName_majorVersion), meth_QHttpResponseHeader_majorVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_majorVersion)},
    {SIP_MLNAME_CAST(sipName_minorVersion), meth_QHttpResponseHeader_minorVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_minorVersion)},
    {SIP_MLNAME_CAST(sipName_parseLine), meth_QHttpResponseHeader_parseLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_parseLine)},
    {SIP_MLNAME_CAST(sipName_reasonPhrase), meth_QHttpResponseHeader_reasonPhrase, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_reasonPhrase)},
    {SIP_MLNAME_CAST(sipName_setStatusLine), (PyCFunction)meth_QHttpResponseHeader_setStatusLine, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_setStatusLine)},
    {SIP_MLNAME_CAST(sipName_statusCode), meth_QHttpResponseHeader_statusCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_statusCode)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QHttpResponseHeader_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpResponseHeader_toString)}
};

PyDoc_STRVAR(doc_QHttpResponseHeader, "\1QHttpResponseHeader()\n"
    "QHttpResponseHeader(QHttpResponseHeader)\n"
    "QHttpResponseHeader(str)\n"
    "QHttpResponseHeader(int, text: str = '', major: int = 1, minor: int = 1)");


static pyqt4ClassPluginDef plugin_QHttpResponseHeader = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QHttpResponseHeader = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHttpResponseHeader,
        {0},
        &plugin_QHttpResponseHeader
    },
    {
        sipNameNr_QHttpResponseHeader,
        {0, 0, 1},
        7, methods_QHttpResponseHeader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHttpResponseHeader,
    -1,
    -1,
    supers_QHttpResponseHeader,
    0,
    init_type_QHttpResponseHeader,
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
    dealloc_QHttpResponseHeader,
    assign_QHttpResponseHeader,
    array_QHttpResponseHeader,
    copy_QHttpResponseHeader,
    release_QHttpResponseHeader,
    cast_QHttpResponseHeader,
    0,
    0,
    0,
    0,
    0,
    0
};
