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

#line 1126 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQStyleOptionViewItem.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionViewItem(void *, const sipTypeDef *);}
static void *cast_QStyleOptionViewItem(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItem(void *, int);}
static void release_QStyleOptionViewItem(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStyleOptionViewItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionViewItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QStyleOptionViewItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItem(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItem(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionViewItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionViewItem(reinterpret_cast<const  ::QStyleOptionViewItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionViewItem(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionViewItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionViewItem();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionViewItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionViewItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItem[] = {{498, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItem[] = {
    {sipName_Bottom, static_cast<int>( ::QStyleOptionViewItem::Bottom), 608},
    {sipName_Left, static_cast<int>( ::QStyleOptionViewItem::Left), 608},
    {sipName_Right, static_cast<int>( ::QStyleOptionViewItem::Right), 608},
    {sipName_Top, static_cast<int>( ::QStyleOptionViewItem::Top), 608},
    {sipName_Type, static_cast<int>( ::QStyleOptionViewItem::Type), 609},
    {sipName_Version, static_cast<int>( ::QStyleOptionViewItem::Version), 610},
};


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationAlignment;

    return sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionViewItem::Position sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->decorationPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_Position);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionViewItem::Position sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = ( ::QStyleOptionViewItem::Position)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->decorationPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationSize;

    return sipConvertFromType(sipVal, sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->displayAlignment;

    return sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::Alignment*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->displayAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_font(void *sipSelf, PyObject *, PyObject *)
{
     ::QFont*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->font;

    return sipConvertFromType(sipVal, sipType_QFont, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QFont*sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->showDecorationSelected;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->showDecorationSelected = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::TextElideMode sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->textElideMode;

    return sipConvertFromEnum(sipVal, sipType_Qt_TextElideMode);
}


extern "C" {static int varset_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::TextElideMode sipVal;
     ::QStyleOptionViewItem *sipCpp = reinterpret_cast< ::QStyleOptionViewItem *>(sipSelf);

    sipVal = ( ::Qt::TextElideMode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->textElideMode = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItem[] = {
    {InstanceVariable, sipName_decorationAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_decorationAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_decorationAlignment, NULL, NULL},
    {InstanceVariable, sipName_decorationPosition, (PyMethodDef *)varget_QStyleOptionViewItem_decorationPosition, (PyMethodDef *)varset_QStyleOptionViewItem_decorationPosition, NULL, NULL},
    {InstanceVariable, sipName_decorationSize, (PyMethodDef *)varget_QStyleOptionViewItem_decorationSize, (PyMethodDef *)varset_QStyleOptionViewItem_decorationSize, NULL, NULL},
    {InstanceVariable, sipName_displayAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_displayAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_displayAlignment, NULL, NULL},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionViewItem_font, (PyMethodDef *)varset_QStyleOptionViewItem_font, NULL, NULL},
    {InstanceVariable, sipName_showDecorationSelected, (PyMethodDef *)varget_QStyleOptionViewItem_showDecorationSelected, (PyMethodDef *)varset_QStyleOptionViewItem_showDecorationSelected, NULL, NULL},
    {InstanceVariable, sipName_textElideMode, (PyMethodDef *)varget_QStyleOptionViewItem_textElideMode, (PyMethodDef *)varset_QStyleOptionViewItem_textElideMode, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionViewItem, "\1QStyleOptionViewItem()\n"
    "QStyleOptionViewItem(QStyleOptionViewItem)");


static pyqt4ClassPluginDef plugin_QStyleOptionViewItem = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItem,
        {0},
        &plugin_QStyleOptionViewItem
    },
    {
        sipNameNr_QStyleOptionViewItem,
        {0, 0, 1},
        0, 0,
        6, enummembers_QStyleOptionViewItem,
        7, variables_QStyleOptionViewItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItem,
    -1,
    -1,
    supers_QStyleOptionViewItem,
    0,
    init_type_QStyleOptionViewItem,
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
    dealloc_QStyleOptionViewItem,
    assign_QStyleOptionViewItem,
    array_QStyleOptionViewItem,
    copy_QStyleOptionViewItem,
    release_QStyleOptionViewItem,
    cast_QStyleOptionViewItem,
    0,
    0,
    0,
    0,
    0,
    0
};
