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

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qresource.sip"
#include <qresource.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQResource.cpp"

#line 27 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQResource.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQResource.cpp"
#line 27 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQResource.cpp"


PyDoc_STRVAR(doc_QResource_absoluteFilePath, "absoluteFilePath(self) -> str");

extern "C" {static PyObject *meth_QResource_absoluteFilePath(PyObject *, PyObject *);}
static PyObject *meth_QResource_absoluteFilePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->absoluteFilePath());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_absoluteFilePath, doc_QResource_absoluteFilePath);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_data, "data(self) -> str");

extern "C" {static PyObject *meth_QResource_data(PyObject *, PyObject *);}
static PyObject *meth_QResource_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 37 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qresource.sip"
        // The data may contain embedded '\0's so set the size explicitly.
        
        if (sipCpp->data())
        {
            if ((sipRes = SIPBytes_FromStringAndSize((char *)sipCpp->data(), sipCpp->size())) == NULL)
                sipIsErr = 1;
        }
        else
        {
            Py_INCREF(Py_None);
            sipRes = Py_None;
        }
#line 101 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQResource.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_data, doc_QResource_data);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_fileName, "fileName(self) -> str");

extern "C" {static PyObject *meth_QResource_fileName(PyObject *, PyObject *);}
static PyObject *meth_QResource_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_fileName, doc_QResource_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_isCompressed, "isCompressed(self) -> bool");

extern "C" {static PyObject *meth_QResource_isCompressed(PyObject *, PyObject *);}
static PyObject *meth_QResource_isCompressed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCompressed();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_isCompressed, doc_QResource_isCompressed);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QResource_isValid(PyObject *, PyObject *);}
static PyObject *meth_QResource_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_isValid, doc_QResource_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_locale, "locale(self) -> QLocale");

extern "C" {static PyObject *meth_QResource_locale(PyObject *, PyObject *);}
static PyObject *meth_QResource_locale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
             ::QLocale*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QLocale(sipCpp->locale());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_locale, doc_QResource_locale);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_setFileName, "setFileName(self, str)");

extern "C" {static PyObject *meth_QResource_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QResource_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QResource, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_setFileName, doc_QResource_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_setLocale, "setLocale(self, QLocale)");

extern "C" {static PyObject *meth_QResource_setLocale(PyObject *, PyObject *);}
static PyObject *meth_QResource_setLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocale* a0;
         ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QResource, &sipCpp, sipType_QLocale, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLocale(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_setLocale, doc_QResource_setLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_size, "size(self) -> int");

extern "C" {static PyObject *meth_QResource_size(PyObject *, PyObject *);}
static PyObject *meth_QResource_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResource, &sipCpp))
        {
             ::qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_size, doc_QResource_size);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_addSearchPath, "addSearchPath(str)");

extern "C" {static PyObject *meth_QResource_addSearchPath(PyObject *, PyObject *);}
static PyObject *meth_QResource_addSearchPath(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QResource::addSearchPath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_addSearchPath, doc_QResource_addSearchPath);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_registerResource, "registerResource(str, mapRoot: str = '') -> bool");

extern "C" {static PyObject *meth_QResource_registerResource(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QResource_registerResource(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mapRoot,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QResource::registerResource(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_registerResource, doc_QResource_registerResource);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_registerResourceData, "registerResourceData(bytes, mapRoot: str = '') -> bool");

extern "C" {static PyObject *meth_QResource_registerResourceData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QResource_registerResourceData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::uchar* a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mapRoot,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "s|J1", &a0, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QResource::registerResource(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_registerResourceData, doc_QResource_registerResourceData);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_searchPaths, "searchPaths() -> List[str]");

extern "C" {static PyObject *meth_QResource_searchPaths(PyObject *, PyObject *);}
static PyObject *meth_QResource_searchPaths(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QStringList( ::QResource::searchPaths());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_searchPaths, doc_QResource_searchPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_unregisterResource, "unregisterResource(str, mapRoot: str = '') -> bool");

extern "C" {static PyObject *meth_QResource_unregisterResource(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QResource_unregisterResource(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mapRoot,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QResource::unregisterResource(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_unregisterResource, doc_QResource_unregisterResource);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_unregisterResourceData, "unregisterResourceData(bytes, mapRoot: str = '') -> bool");

extern "C" {static PyObject *meth_QResource_unregisterResourceData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QResource_unregisterResourceData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::uchar* a0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mapRoot,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "s|J1", &a0, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QResource::unregisterResource(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_unregisterResourceData, doc_QResource_unregisterResourceData);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_children, "children(self) -> List[str]");

extern "C" {static PyObject *meth_QResource_children(PyObject *, PyObject *);}
static PyObject *meth_QResource_children(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QResource, &sipCpp))
        {
             ::QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QStringList(sipCpp->children());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_children, doc_QResource_children);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_isDir, "isDir(self) -> bool");

extern "C" {static PyObject *meth_QResource_isDir(PyObject *, PyObject *);}
static PyObject *meth_QResource_isDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QResource, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDir();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_isDir, doc_QResource_isDir);

    return NULL;
}


PyDoc_STRVAR(doc_QResource_isFile, "isFile(self) -> bool");

extern "C" {static PyObject *meth_QResource_isFile(PyObject *, PyObject *);}
static PyObject *meth_QResource_isFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QResource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QResource, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFile();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResource, sipName_isFile, doc_QResource_isFile);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QResource(void *, int);}
static void release_QResource(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QResource *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QResource(sipSimpleWrapper *);}
static void dealloc_QResource(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QResource(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QResource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QResource(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QResource *sipCpp = 0;

    {
        const  ::QString& a0def = QString();
        const  ::QString* a0 = &a0def;
        int a0State = 0;
        const  ::QLocale& a1def = QLocale();
        const  ::QLocale* a1 = &a1def;

        static const char *sipKwdList[] = {
            sipName_fileName,
            sipName_locale,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J9", sipType_QString,&a0, &a0State, sipType_QLocale, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QResource(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QResource[] = {
    {SIP_MLNAME_CAST(sipName_absoluteFilePath), meth_QResource_absoluteFilePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_absoluteFilePath)},
    {SIP_MLNAME_CAST(sipName_addSearchPath), meth_QResource_addSearchPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_addSearchPath)},
    {SIP_MLNAME_CAST(sipName_children), meth_QResource_children, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_children)},
    {SIP_MLNAME_CAST(sipName_data), meth_QResource_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_data)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QResource_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_fileName)},
    {SIP_MLNAME_CAST(sipName_isCompressed), meth_QResource_isCompressed, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_isCompressed)},
    {SIP_MLNAME_CAST(sipName_isDir), meth_QResource_isDir, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_isDir)},
    {SIP_MLNAME_CAST(sipName_isFile), meth_QResource_isFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_isFile)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QResource_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_isValid)},
    {SIP_MLNAME_CAST(sipName_locale), meth_QResource_locale, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_locale)},
    {SIP_MLNAME_CAST(sipName_registerResource), (PyCFunction)meth_QResource_registerResource, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QResource_registerResource)},
    {SIP_MLNAME_CAST(sipName_registerResourceData), (PyCFunction)meth_QResource_registerResourceData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QResource_registerResourceData)},
    {SIP_MLNAME_CAST(sipName_searchPaths), meth_QResource_searchPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_searchPaths)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QResource_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_setFileName)},
    {SIP_MLNAME_CAST(sipName_setLocale), meth_QResource_setLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_setLocale)},
    {SIP_MLNAME_CAST(sipName_size), meth_QResource_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QResource_size)},
    {SIP_MLNAME_CAST(sipName_unregisterResource), (PyCFunction)meth_QResource_unregisterResource, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QResource_unregisterResource)},
    {SIP_MLNAME_CAST(sipName_unregisterResourceData), (PyCFunction)meth_QResource_unregisterResourceData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QResource_unregisterResourceData)}
};

PyDoc_STRVAR(doc_QResource, "\1QResource(fileName: str = '', locale: QLocale = QLocale())");


static pyqt4ClassPluginDef plugin_QResource = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QResource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QResource,
        {0},
        &plugin_QResource
    },
    {
        sipNameNr_QResource,
        {0, 0, 1},
        18, methods_QResource,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QResource,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QResource,
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
    dealloc_QResource,
    0,
    0,
    0,
    release_QResource,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
