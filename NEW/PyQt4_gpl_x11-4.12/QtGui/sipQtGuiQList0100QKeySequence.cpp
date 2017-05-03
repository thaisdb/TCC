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

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QKeySequence.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QKeySequence.cpp"


extern "C" {static void assign_QList_0100QKeySequence(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QKeySequence(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList< ::QKeySequence> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList< ::QKeySequence> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QKeySequence(SIP_SSIZE_T);}
static void *array_QList_0100QKeySequence(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QKeySequence>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QKeySequence(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QKeySequence(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QKeySequence>(reinterpret_cast<const QList< ::QKeySequence> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QKeySequence(void *, int);}
static void release_QList_0100QKeySequence(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QKeySequence> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QKeySequence(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QKeySequence(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QKeySequence> **sipCppPtr = reinterpret_cast<QList< ::QKeySequence> **>(sipCppPtrV);

#line 59 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QKeySequence, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QKeySequence> *ql = new QList<QKeySequence>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QKeySequence *t = reinterpret_cast<QKeySequence *>(sipConvertToType(itm, sipType_QKeySequence, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QKeySequence, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QKeySequence, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 123 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QKeySequence.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QKeySequence(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QKeySequence(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QKeySequence> *sipCpp = reinterpret_cast<QList< ::QKeySequence> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QKeySequence *t = new QKeySequence(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QKeySequence, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 157 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QKeySequence.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QKeySequence = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_29698,     /* QList<QKeySequence> */
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
    assign_QList_0100QKeySequence,
    array_QList_0100QKeySequence,
    copy_QList_0100QKeySequence,
    release_QList_0100QKeySequence,
    convertTo_QList_0100QKeySequence,
    convertFrom_QList_0100QKeySequence
};
