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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQPixmapCache.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 35 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 35 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQPixmapCache.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 38 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQPixmapCache.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQPixmapCache.cpp"


PyDoc_STRVAR(doc_QPixmapCache_cacheLimit, "cacheLimit() -> int");

extern "C" {static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_cacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::cacheLimit();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_cacheLimit, doc_QPixmapCache_cacheLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_clear, "clear()");

extern "C" {static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_clear(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QPixmapCache::clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_clear, doc_QPixmapCache_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_find, "find(str) -> QPixmap\n"
    "find(str, QPixmap) -> bool\n"
    "find(QPixmapCache.Key, QPixmap) -> bool");

extern "C" {static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_find(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::find(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QPixmap,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QPixmap* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QString,&a0, &a0State, sipType_QPixmap, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::find(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QPixmapCache::Key* a0;
         ::QPixmap* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J8", sipType_QPixmapCache_Key, &a0, sipType_QPixmap, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::find(*a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_find, doc_QPixmapCache_find);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_insert, "insert(str, QPixmap) -> bool\n"
    "insert(QPixmap) -> QPixmapCache.Key");

extern "C" {static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_insert(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QPixmap* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J9", sipType_QString,&a0, &a0State, sipType_QPixmap, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::insert(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QPixmap* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPixmap, &a0))
        {
             ::QPixmapCache::Key*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPixmapCache::Key( ::QPixmapCache::insert(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmapCache_Key,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_insert, doc_QPixmapCache_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_remove, "remove(str)\n"
    "remove(QPixmapCache.Key)");

extern "C" {static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_remove(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QPixmapCache::remove(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPixmapCache::Key* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPixmapCache_Key, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QPixmapCache::remove(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_remove, doc_QPixmapCache_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_replace, "replace(QPixmapCache.Key, QPixmap) -> bool");

extern "C" {static PyObject *meth_QPixmapCache_replace(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_replace(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPixmapCache::Key* a0;
        const  ::QPixmap* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QPixmapCache_Key, &a0, sipType_QPixmap, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QPixmapCache::replace(*a0,*a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_replace, doc_QPixmapCache_replace);

    return NULL;
}


PyDoc_STRVAR(doc_QPixmapCache_setCacheLimit, "setCacheLimit(int)");

extern "C" {static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QPixmapCache_setCacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QPixmapCache::setCacheLimit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixmapCache, sipName_setCacheLimit, doc_QPixmapCache_setCacheLimit);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPixmapCache(void *, int);}
static void release_QPixmapCache(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QPixmapCache *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPixmapCache(void *, SIP_SSIZE_T, const void *);}
static void assign_QPixmapCache(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QPixmapCache *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QPixmapCache *>(sipSrc);
}


extern "C" {static void *array_QPixmapCache(SIP_SSIZE_T);}
static void *array_QPixmapCache(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPixmapCache[sipNrElem];
}


extern "C" {static void *copy_QPixmapCache(const void *, SIP_SSIZE_T);}
static void *copy_QPixmapCache(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPixmapCache(reinterpret_cast<const  ::QPixmapCache *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPixmapCache(sipSimpleWrapper *);}
static void dealloc_QPixmapCache(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPixmapCache(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPixmapCache(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPixmapCache(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPixmapCache *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPixmapCache();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPixmapCache* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmapCache, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPixmapCache(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPixmapCache[] = {
    {SIP_MLNAME_CAST(sipName_cacheLimit), meth_QPixmapCache_cacheLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_cacheLimit)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QPixmapCache_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_clear)},
    {SIP_MLNAME_CAST(sipName_find), meth_QPixmapCache_find, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_find)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QPixmapCache_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_insert)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QPixmapCache_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_remove)},
    {SIP_MLNAME_CAST(sipName_replace), meth_QPixmapCache_replace, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_replace)},
    {SIP_MLNAME_CAST(sipName_setCacheLimit), meth_QPixmapCache_setCacheLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixmapCache_setCacheLimit)}
};

PyDoc_STRVAR(doc_QPixmapCache, "\1QPixmapCache()\n"
    "QPixmapCache(QPixmapCache)");


static pyqt4ClassPluginDef plugin_QPixmapCache = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPixmapCache = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPixmapCache,
        {0},
        &plugin_QPixmapCache
    },
    {
        sipNameNr_QPixmapCache,
        {0, 0, 1},
        7, methods_QPixmapCache,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPixmapCache,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPixmapCache,
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
    dealloc_QPixmapCache,
    assign_QPixmapCache,
    array_QPixmapCache,
    copy_QPixmapCache,
    release_QPixmapCache,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};