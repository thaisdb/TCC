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

#line 123 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#include <qlist.h>
#line 30 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 34 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"


extern "C" {static void assign_QList_0100QFontDatabase_WritingSystem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QFontDatabase_WritingSystem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QList< ::QFontDatabase::WritingSystem> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QList< ::QFontDatabase::WritingSystem> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T);}
static void *array_QList_0100QFontDatabase_WritingSystem(SIP_SSIZE_T sipNrElem)
{
    return new  ::QList< ::QFontDatabase::WritingSystem>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QFontDatabase_WritingSystem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QFontDatabase_WritingSystem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QList< ::QFontDatabase::WritingSystem>(reinterpret_cast<const  ::QList< ::QFontDatabase::WritingSystem> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QFontDatabase_WritingSystem(void *, int);}
static void release_QList_0100QFontDatabase_WritingSystem(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QList< ::QFontDatabase::WritingSystem> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QFontDatabase_WritingSystem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QList< ::QFontDatabase::WritingSystem> **sipCppPtr = reinterpret_cast< ::QList< ::QFontDatabase::WritingSystem> **>(sipCppPtrV);

#line 154 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfontdatabase.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToEnum(PyList_GET_ITEM(sipPy, i), sipType_QFontDatabase_WritingSystem))
                return 0;

        return 1;
    }

    QList<QFontDatabase::WritingSystem> *ql = new QList<QFontDatabase::WritingSystem>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        long l = SIPLong_AsLong(PyList_GET_ITEM(sipPy, i));
        ql->append(static_cast<QFontDatabase::WritingSystem>(l));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 99 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QFontDatabase_WritingSystem(void *sipCppV, PyObject *)
{
    ::QList< ::QFontDatabase::WritingSystem> *sipCpp = reinterpret_cast< ::QList< ::QFontDatabase::WritingSystem> *>(sipCppV);

#line 128 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qfontdatabase.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QFontDatabase::WritingSystem ws = sipCpp->at(i);
        PyObject *wsobj;

        if ((wsobj = sipConvertFromEnum(ws, sipType_QFontDatabase_WritingSystem)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, wsobj);
    }

    return l;
#line 132 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQList0100QFontDatabaseWritingSystem.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QFontDatabase_WritingSystem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4518,     /* QList<QFontDatabase::WritingSystem> */
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
    assign_QList_0100QFontDatabase_WritingSystem,
    array_QList_0100QFontDatabase_WritingSystem,
    copy_QList_0100QFontDatabase_WritingSystem,
    release_QList_0100QFontDatabase_WritingSystem,
    convertTo_QList_0100QFontDatabase_WritingSystem,
    convertFrom_QList_0100QFontDatabase_WritingSystem
};
