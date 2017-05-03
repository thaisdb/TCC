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

#line 150 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQVector1900.cpp"



extern "C" {static void assign_QVector_1900(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QVector<uint> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QVector<uint> *>(sipSrc);
}


extern "C" {static void *array_QVector_1900(SIP_SSIZE_T);}
static void *array_QVector_1900(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVector<uint>[sipNrElem];
}


extern "C" {static void *copy_QVector_1900(const void *, SIP_SSIZE_T);}
static void *copy_QVector_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVector<uint>(reinterpret_cast<const  ::QVector<uint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_1900(void *, int);}
static void release_QVector_1900(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QVector<uint> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QVector<uint> **sipCppPtr = reinterpret_cast< ::QVector<uint> **>(sipCppPtrV);

#line 181 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return PyList_Check(sipPy);

    QVector<unsigned> *qv = new QVector<unsigned>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
        qv->append(PyLong_AsUnsignedLong(PyList_GET_ITEM(sipPy, i)));
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 83 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQVector1900.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_1900(void *, PyObject *);}
static PyObject *convertFrom_QVector_1900(void *sipCppV, PyObject *)
{
    ::QVector<uint> *sipCpp = reinterpret_cast< ::QVector<uint> *>(sipCppV);

#line 154 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        // Convert to a Python long to make sure it doesn't get interpreted as
        // a signed value.
        if ((pobj = PyLong_FromUnsignedLong(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 117 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQVector1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_25559,     /* QVector<uint> */
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
    assign_QVector_1900,
    array_QVector_1900,
    copy_QVector_1900,
    release_QVector_1900,
    convertTo_QVector_1900,
    convertFrom_QVector_1900
};
