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

#include "sipAPIQtDesigner.h"

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQAbstractExtensionFactory.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQAbstractExtensionFactory.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQAbstractExtensionFactory.cpp"


class sipQAbstractExtensionFactory : public  ::QAbstractExtensionFactory
{
public:
    sipQAbstractExtensionFactory();
    sipQAbstractExtensionFactory(const  ::QAbstractExtensionFactory&);
    virtual ~sipQAbstractExtensionFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QObject* extension( ::QObject*,const  ::QString&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractExtensionFactory(const sipQAbstractExtensionFactory &);
    sipQAbstractExtensionFactory &operator = (const sipQAbstractExtensionFactory &);

    char sipPyMethods[1];
};

sipQAbstractExtensionFactory::sipQAbstractExtensionFactory():  ::QAbstractExtensionFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionFactory::sipQAbstractExtensionFactory(const  ::QAbstractExtensionFactory& a0):  ::QAbstractExtensionFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionFactory::~sipQAbstractExtensionFactory()
{
    sipCommonDtor(sipPySelf);
}

 ::QObject* sipQAbstractExtensionFactory::extension( ::QObject*a0,const  ::QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QAbstractExtensionFactory,sipName_extension);

    if (!sipMeth)
        return 0;

    extern  ::QObject* sipVH_QtDesigner_80(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*,const  ::QString&);

    return sipVH_QtDesigner_80(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QAbstractExtensionFactory_extension, "extension(self, QObject, str) -> QObject");

extern "C" {static PyObject *meth_QAbstractExtensionFactory_extension(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionFactory_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QAbstractExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionFactory, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
             ::QObject*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionFactory, sipName_extension);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extension(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionFactory, sipName_extension, doc_QAbstractExtensionFactory_extension);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractExtensionFactory(void *, int);}
static void release_QAbstractExtensionFactory(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQAbstractExtensionFactory *>(sipCppV);
    else
        delete reinterpret_cast< ::QAbstractExtensionFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractExtensionFactory(sipSimpleWrapper *);}
static void dealloc_QAbstractExtensionFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAbstractExtensionFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractExtensionFactory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAbstractExtensionFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractExtensionFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractExtensionFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionFactory();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QAbstractExtensionFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractExtensionFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionFactory(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractExtensionFactory[] = {
    {SIP_MLNAME_CAST(sipName_extension), meth_QAbstractExtensionFactory_extension, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionFactory_extension)}
};

PyDoc_STRVAR(doc_QAbstractExtensionFactory, "\1QAbstractExtensionFactory()\n"
    "QAbstractExtensionFactory(QAbstractExtensionFactory)");


static pyqt4ClassPluginDef plugin_QAbstractExtensionFactory = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QAbstractExtensionFactory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractExtensionFactory,
        {0},
        &plugin_QAbstractExtensionFactory
    },
    {
        sipNameNr_QAbstractExtensionFactory,
        {0, 0, 1},
        1, methods_QAbstractExtensionFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractExtensionFactory,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractExtensionFactory,
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
    dealloc_QAbstractExtensionFactory,
    0,
    0,
    0,
    release_QAbstractExtensionFactory,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
