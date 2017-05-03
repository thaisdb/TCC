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

#include "sipAPIQtHelp.h"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtHelp/sipQtHelpQList0100QStringList.cpp"

#line 47 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtHelp/sipQtHelpQList0100QStringList.cpp"
#line 27 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtHelp/sipQtHelpQList0100QStringList.cpp"


extern "C" {static void assign_QList_0100QStringList(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QStringList(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList< ::QStringList> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList< ::QStringList> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QStringList(SIP_SSIZE_T);}
static void *array_QList_0100QStringList(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QStringList>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QStringList(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QStringList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QStringList>(reinterpret_cast<const QList< ::QStringList> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QStringList(void *, int);}
static void release_QList_0100QStringList(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QStringList> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QStringList(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QStringList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QStringList> **sipCppPtr = reinterpret_cast<QList< ::QStringList> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QStringList, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QStringList> *ql = new QList<QStringList>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QStringList *t = reinterpret_cast<QStringList *>(sipConvertToType(itm, sipType_QStringList, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QStringList, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QStringList, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 126 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtHelp/sipQtHelpQList0100QStringList.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QStringList(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QStringList(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QStringList> *sipCpp = reinterpret_cast<QList< ::QStringList> *>(sipCppV);

#line 32 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QStringList *t = new QStringList(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QStringList, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 160 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtHelp/sipQtHelpQList0100QStringList.cpp"
}


sipMappedTypeDef sipTypeDef_QtHelp_QList_0100QStringList = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_656,     /* QList<QStringList> */
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
    assign_QList_0100QStringList,
    array_QList_0100QStringList,
    copy_QList_0100QStringList,
    release_QList_0100QStringList,
    convertTo_QList_0100QStringList,
    convertFrom_QList_0100QStringList
};
