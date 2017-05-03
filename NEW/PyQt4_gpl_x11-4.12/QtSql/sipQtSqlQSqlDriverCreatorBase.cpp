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

#include "sipAPIQtSql.h"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtSql/qsqldatabase.sip"
#include <qsqldatabase.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtSql/sipQtSqlQSqlDriverCreatorBase.cpp"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtSql/qsqldriver.sip"
#include <qsqldriver.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtSql/sipQtSqlQSqlDriverCreatorBase.cpp"


class sipQSqlDriverCreatorBase : public  ::QSqlDriverCreatorBase
{
public:
    sipQSqlDriverCreatorBase();
    sipQSqlDriverCreatorBase(const  ::QSqlDriverCreatorBase&);
    virtual ~sipQSqlDriverCreatorBase();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QSqlDriver* createObject() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSqlDriverCreatorBase(const sipQSqlDriverCreatorBase &);
    sipQSqlDriverCreatorBase &operator = (const sipQSqlDriverCreatorBase &);

    char sipPyMethods[1];
};

sipQSqlDriverCreatorBase::sipQSqlDriverCreatorBase():  ::QSqlDriverCreatorBase(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSqlDriverCreatorBase::sipQSqlDriverCreatorBase(const  ::QSqlDriverCreatorBase& a0):  ::QSqlDriverCreatorBase(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSqlDriverCreatorBase::~sipQSqlDriverCreatorBase()
{
    sipCommonDtor(sipPySelf);
}

 ::QSqlDriver* sipQSqlDriverCreatorBase::createObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QSqlDriverCreatorBase,sipName_createObject);

    if (!sipMeth)
        return 0;

    extern  ::QSqlDriver* sipVH_QtSql_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtSql_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSqlDriverCreatorBase_createObject, "createObject(self) -> QSqlDriver");

extern "C" {static PyObject *meth_QSqlDriverCreatorBase_createObject(PyObject *, PyObject *);}
static PyObject *meth_QSqlDriverCreatorBase_createObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QSqlDriverCreatorBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlDriverCreatorBase, &sipCpp))
        {
             ::QSqlDriver*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSqlDriverCreatorBase, sipName_createObject);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->createObject();
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSqlDriver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlDriverCreatorBase, sipName_createObject, doc_QSqlDriverCreatorBase_createObject);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlDriverCreatorBase(void *, int);}
static void release_QSqlDriverCreatorBase(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQSqlDriverCreatorBase *>(sipCppV);
    else
        delete reinterpret_cast< ::QSqlDriverCreatorBase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSqlDriverCreatorBase(sipSimpleWrapper *);}
static void dealloc_QSqlDriverCreatorBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSqlDriverCreatorBase *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSqlDriverCreatorBase(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSqlDriverCreatorBase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlDriverCreatorBase(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSqlDriverCreatorBase *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSqlDriverCreatorBase();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QSqlDriverCreatorBase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlDriverCreatorBase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSqlDriverCreatorBase(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSqlDriverCreatorBase[] = {
    {SIP_MLNAME_CAST(sipName_createObject), meth_QSqlDriverCreatorBase_createObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlDriverCreatorBase_createObject)}
};

PyDoc_STRVAR(doc_QSqlDriverCreatorBase, "\1QSqlDriverCreatorBase()\n"
    "QSqlDriverCreatorBase(QSqlDriverCreatorBase)");


static pyqt4ClassPluginDef plugin_QSqlDriverCreatorBase = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSql_QSqlDriverCreatorBase = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QSqlDriverCreatorBase,
        {0},
        &plugin_QSqlDriverCreatorBase
    },
    {
        sipNameNr_QSqlDriverCreatorBase,
        {0, 0, 1},
        1, methods_QSqlDriverCreatorBase,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlDriverCreatorBase,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QSqlDriverCreatorBase,
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
    dealloc_QSqlDriverCreatorBase,
    0,
    0,
    0,
    release_QSqlDriverCreatorBase,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
