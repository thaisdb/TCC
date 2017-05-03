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

#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQVector0100QRect.cpp"

#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQVector0100QRect.cpp"


extern "C" {static void assign_QVector_0100QRect(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QRect(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector< ::QRect> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector< ::QRect> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QRect(SIP_SSIZE_T);}
static void *array_QVector_0100QRect(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QRect>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QRect(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QRect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QRect>(reinterpret_cast<const QVector< ::QRect> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QRect(void *, int);}
static void release_QVector_0100QRect(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector< ::QRect> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QRect(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QRect(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QRect> **sipCppPtr = reinterpret_cast<QVector< ::QRect> **>(sipCppPtrV);

#line 59 "sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QRect, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QRect> *qv = new QVector<QRect>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QRect *t = reinterpret_cast<QRect *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QRect, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QRect, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QRect, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 110 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQVector0100QRect.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QRect(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QRect(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QRect> *sipCpp = reinterpret_cast<QVector< ::QRect> *>(sipCppV);

#line 32 "sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QRect *t = new QRect(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QRect, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 144 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQVector0100QRect.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QRect = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_55230,     /* QVector<QRect> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0100QRect,
    array_QVector_0100QRect,
    copy_QVector_0100QRect,
    release_QVector_0100QRect,
    convertTo_QVector_0100QRect,
    convertFrom_QVector_0100QRect
};
