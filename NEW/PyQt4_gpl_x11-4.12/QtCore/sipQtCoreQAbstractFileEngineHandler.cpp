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

#line 284 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qabstractfileengine.sip"
#include <qabstractfileengine.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQAbstractFileEngineHandler.cpp"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qabstractfileengine.sip"
#include <qabstractfileengine.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQAbstractFileEngineHandler.cpp"
#line 27 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQAbstractFileEngineHandler.cpp"


class sipQAbstractFileEngineHandler : public  ::QAbstractFileEngineHandler
{
public:
    sipQAbstractFileEngineHandler();
    sipQAbstractFileEngineHandler(const  ::QAbstractFileEngineHandler&);
    virtual ~sipQAbstractFileEngineHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QAbstractFileEngine* create(const  ::QString&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractFileEngineHandler(const sipQAbstractFileEngineHandler &);
    sipQAbstractFileEngineHandler &operator = (const sipQAbstractFileEngineHandler &);

    char sipPyMethods[1];
};

sipQAbstractFileEngineHandler::sipQAbstractFileEngineHandler():  ::QAbstractFileEngineHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractFileEngineHandler::sipQAbstractFileEngineHandler(const  ::QAbstractFileEngineHandler& a0):  ::QAbstractFileEngineHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractFileEngineHandler::~sipQAbstractFileEngineHandler()
{
    sipCommonDtor(sipPySelf);
}

 ::QAbstractFileEngine* sipQAbstractFileEngineHandler::create(const  ::QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QAbstractFileEngineHandler,sipName_create);

    if (!sipMeth)
        return 0;

    extern  ::QAbstractFileEngine* sipVH_QtCore_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtCore_35(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAbstractFileEngineHandler_create, "create(self, str) -> QAbstractFileEngine");

extern "C" {static PyObject *meth_QAbstractFileEngineHandler_create(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineHandler_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QAbstractFileEngineHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAbstractFileEngineHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QAbstractFileEngine*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractFileEngineHandler, sipName_create);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractFileEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineHandler, sipName_create, doc_QAbstractFileEngineHandler_create);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractFileEngineHandler(void *, int);}
static void release_QAbstractFileEngineHandler(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQAbstractFileEngineHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::QAbstractFileEngineHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractFileEngineHandler(sipSimpleWrapper *);}
static void dealloc_QAbstractFileEngineHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAbstractFileEngineHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractFileEngineHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAbstractFileEngineHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractFileEngineHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractFileEngineHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractFileEngineHandler();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QAbstractFileEngineHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractFileEngineHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractFileEngineHandler(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractFileEngineHandler[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QAbstractFileEngineHandler_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineHandler_create)}
};

PyDoc_STRVAR(doc_QAbstractFileEngineHandler, "\1QAbstractFileEngineHandler()\n"
    "QAbstractFileEngineHandler(QAbstractFileEngineHandler)");


static pyqt4ClassPluginDef plugin_QAbstractFileEngineHandler = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractFileEngineHandler = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractFileEngineHandler,
        {0},
        &plugin_QAbstractFileEngineHandler
    },
    {
        sipNameNr_QAbstractFileEngineHandler,
        {0, 0, 1},
        1, methods_QAbstractFileEngineHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractFileEngineHandler,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractFileEngineHandler,
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
    dealloc_QAbstractFileEngineHandler,
    0,
    0,
    0,
    release_QAbstractFileEngineHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};