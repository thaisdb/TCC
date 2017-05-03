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

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qtooltip.sip"
#include <qtooltip.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQToolTip.cpp"


PyDoc_STRVAR(doc_QToolTip_showText, "showText(QPoint, str, widget: QWidget = None)\n"
    "showText(QPoint, str, QWidget, QRect)");

extern "C" {static PyObject *meth_QToolTip_showText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QToolTip_showText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9J1|J8", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QToolTip::showText(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPoint* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QWidget* a2;
        const  ::QRect* a3;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "J9J1J8J9", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2, sipType_QRect, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QToolTip::showText(*a0,*a1,a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_showText, doc_QToolTip_showText);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_palette, "palette() -> QPalette");

extern "C" {static PyObject *meth_QToolTip_palette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_palette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QPalette*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPalette( ::QToolTip::palette());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPalette,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_palette, doc_QToolTip_palette);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_hideText, "hideText()");

extern "C" {static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QToolTip::hideText();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_hideText, doc_QToolTip_hideText);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_setPalette, "setPalette(QPalette)");

extern "C" {static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPalette* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPalette, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QToolTip::setPalette(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setPalette, doc_QToolTip_setPalette);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_font, "font() -> QFont");

extern "C" {static PyObject *meth_QToolTip_font(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_font(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFont( ::QToolTip::font());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_font, doc_QToolTip_font);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_setFont, "setFont(QFont)");

extern "C" {static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFont* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QToolTip::setFont(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setFont, doc_QToolTip_setFont);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_isVisible, "isVisible() -> bool");

extern "C" {static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QToolTip::isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_isVisible, doc_QToolTip_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_text, "text() -> str");

extern "C" {static PyObject *meth_QToolTip_text(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_text(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString( ::QToolTip::text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_text, doc_QToolTip_text);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QToolTip(void *, int);}
static void release_QToolTip(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QToolTip *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QToolTip(sipSimpleWrapper *);}
static void dealloc_QToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QToolTip(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QToolTip(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QToolTip(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QToolTip *sipCpp = 0;

    {
        const  ::QToolTip* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QToolTip, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QToolTip(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QToolTip[] = {
    {SIP_MLNAME_CAST(sipName_font), meth_QToolTip_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_font)},
    {SIP_MLNAME_CAST(sipName_hideText), meth_QToolTip_hideText, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_hideText)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QToolTip_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_isVisible)},
    {SIP_MLNAME_CAST(sipName_palette), meth_QToolTip_palette, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_palette)},
    {SIP_MLNAME_CAST(sipName_setFont), meth_QToolTip_setFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_setFont)},
    {SIP_MLNAME_CAST(sipName_setPalette), meth_QToolTip_setPalette, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_setPalette)},
    {SIP_MLNAME_CAST(sipName_showText), (PyCFunction)meth_QToolTip_showText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QToolTip_showText)},
    {SIP_MLNAME_CAST(sipName_text), meth_QToolTip_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_text)}
};

PyDoc_STRVAR(doc_QToolTip, "\1QToolTip(QToolTip)");


static pyqt4ClassPluginDef plugin_QToolTip = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QToolTip = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QToolTip,
        {0},
        &plugin_QToolTip
    },
    {
        sipNameNr_QToolTip,
        {0, 0, 1},
        8, methods_QToolTip,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QToolTip,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QToolTip,
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
    dealloc_QToolTip,
    0,
    0,
    0,
    release_QToolTip,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
