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

#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 75 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 31 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQTextLayoutFormatRange.cpp"

#line 336 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 35 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQTextLayoutFormatRange.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QTextLayout_FormatRange(void *, int);}
static void release_QTextLayout_FormatRange(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTextLayout::FormatRange *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextLayout_FormatRange(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextLayout_FormatRange(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QTextLayout::FormatRange *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QTextLayout::FormatRange *>(sipSrc);
}


extern "C" {static void *array_QTextLayout_FormatRange(SIP_SSIZE_T);}
static void *array_QTextLayout_FormatRange(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTextLayout::FormatRange[sipNrElem];
}


extern "C" {static void *copy_QTextLayout_FormatRange(const void *, SIP_SSIZE_T);}
static void *copy_QTextLayout_FormatRange(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTextLayout::FormatRange(reinterpret_cast<const  ::QTextLayout::FormatRange *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextLayout_FormatRange(sipSimpleWrapper *);}
static void dealloc_QTextLayout_FormatRange(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextLayout_FormatRange(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextLayout_FormatRange(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextLayout_FormatRange(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextLayout::FormatRange *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextLayout::FormatRange();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTextLayout::FormatRange* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextLayout_FormatRange, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextLayout::FormatRange(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QTextLayout_FormatRange_format(void *, PyObject *, PyObject *);}
static PyObject *varget_QTextLayout_FormatRange_format(void *sipSelf, PyObject *, PyObject *)
{
     ::QTextCharFormat*sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    sipVal = &sipCpp->format;

    return sipConvertFromType(sipVal, sipType_QTextCharFormat, NULL);
}


extern "C" {static int varset_QTextLayout_FormatRange_format(void *, PyObject *, PyObject *);}
static int varset_QTextLayout_FormatRange_format(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QTextCharFormat*sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QTextCharFormat *>(sipForceConvertToType(sipPy,sipType_QTextCharFormat,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->format = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QTextLayout_FormatRange_length(void *, PyObject *, PyObject *);}
static PyObject *varget_QTextLayout_FormatRange_length(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    sipVal = sipCpp->length;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QTextLayout_FormatRange_length(void *, PyObject *, PyObject *);}
static int varset_QTextLayout_FormatRange_length(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->length = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QTextLayout_FormatRange_start(void *, PyObject *, PyObject *);}
static PyObject *varget_QTextLayout_FormatRange_start(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    sipVal = sipCpp->start;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QTextLayout_FormatRange_start(void *, PyObject *, PyObject *);}
static int varset_QTextLayout_FormatRange_start(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QTextLayout::FormatRange *sipCpp = reinterpret_cast< ::QTextLayout::FormatRange *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->start = sipVal;

    return 0;
}

sipVariableDef variables_QTextLayout_FormatRange[] = {
    {InstanceVariable, sipName_format, (PyMethodDef *)varget_QTextLayout_FormatRange_format, (PyMethodDef *)varset_QTextLayout_FormatRange_format, NULL, NULL},
    {InstanceVariable, sipName_length, (PyMethodDef *)varget_QTextLayout_FormatRange_length, (PyMethodDef *)varset_QTextLayout_FormatRange_length, NULL, NULL},
    {InstanceVariable, sipName_start, (PyMethodDef *)varget_QTextLayout_FormatRange_start, (PyMethodDef *)varset_QTextLayout_FormatRange_start, NULL, NULL},
};

PyDoc_STRVAR(doc_QTextLayout_FormatRange, "\1QTextLayout.FormatRange()\n"
    "QTextLayout.FormatRange(QTextLayout.FormatRange)");


static pyqt4ClassPluginDef plugin_QTextLayout_FormatRange = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTextLayout_FormatRange = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextLayout__FormatRange,
        {0},
        &plugin_QTextLayout_FormatRange
    },
    {
        sipNameNr_FormatRange,
        {689, 255, 0},
        0, 0,
        0, 0,
        3, variables_QTextLayout_FormatRange,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextLayout_FormatRange,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextLayout_FormatRange,
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
    dealloc_QTextLayout_FormatRange,
    assign_QTextLayout_FormatRange,
    array_QTextLayout_FormatRange,
    copy_QTextLayout_FormatRange,
    release_QTextLayout_FormatRange,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
