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

#include "sipAPIQtDeclarative.h"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip"
#include <qdeclarativenetworkaccessmanagerfactory.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp"

#line 28 "sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp"


class sipQDeclarativeNetworkAccessManagerFactory : public  ::QDeclarativeNetworkAccessManagerFactory
{
public:
    sipQDeclarativeNetworkAccessManagerFactory();
    sipQDeclarativeNetworkAccessManagerFactory(const  ::QDeclarativeNetworkAccessManagerFactory&);
    virtual ~sipQDeclarativeNetworkAccessManagerFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QNetworkAccessManager* create( ::QObject*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativeNetworkAccessManagerFactory(const sipQDeclarativeNetworkAccessManagerFactory &);
    sipQDeclarativeNetworkAccessManagerFactory &operator = (const sipQDeclarativeNetworkAccessManagerFactory &);

    char sipPyMethods[1];
};

sipQDeclarativeNetworkAccessManagerFactory::sipQDeclarativeNetworkAccessManagerFactory():  ::QDeclarativeNetworkAccessManagerFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeNetworkAccessManagerFactory::sipQDeclarativeNetworkAccessManagerFactory(const  ::QDeclarativeNetworkAccessManagerFactory& a0):  ::QDeclarativeNetworkAccessManagerFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeNetworkAccessManagerFactory::~sipQDeclarativeNetworkAccessManagerFactory()
{
    sipCommonDtor(sipPySelf);
}

 ::QNetworkAccessManager* sipQDeclarativeNetworkAccessManagerFactory::create( ::QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDeclarativeNetworkAccessManagerFactory,sipName_create);

    if (!sipMeth)
        return 0;

    extern  ::QNetworkAccessManager* sipVH_QtDeclarative_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*);

    return sipVH_QtDeclarative_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDeclarativeNetworkAccessManagerFactory_create, "create(self, QObject) -> QNetworkAccessManager");

extern "C" {static PyObject *meth_QDeclarativeNetworkAccessManagerFactory_create(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeNetworkAccessManagerFactory_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QObject* a0;
        sipWrapper *sipOwner = 0;
         ::QDeclarativeNetworkAccessManagerFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJH", &sipSelf, sipType_QDeclarativeNetworkAccessManagerFactory, &sipCpp, sipType_QObject, &a0, &sipOwner))
        {
             ::QNetworkAccessManager*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativeNetworkAccessManagerFactory, sipName_create);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkAccessManager,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeNetworkAccessManagerFactory, sipName_create, doc_QDeclarativeNetworkAccessManagerFactory_create);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeNetworkAccessManagerFactory(void *, int);}
static void release_QDeclarativeNetworkAccessManagerFactory(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQDeclarativeNetworkAccessManagerFactory *>(sipCppV);
    else
        delete reinterpret_cast< ::QDeclarativeNetworkAccessManagerFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativeNetworkAccessManagerFactory(sipSimpleWrapper *);}
static void dealloc_QDeclarativeNetworkAccessManagerFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQDeclarativeNetworkAccessManagerFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDeclarativeNetworkAccessManagerFactory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QDeclarativeNetworkAccessManagerFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeNetworkAccessManagerFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDeclarativeNetworkAccessManagerFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeNetworkAccessManagerFactory();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QDeclarativeNetworkAccessManagerFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeNetworkAccessManagerFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeNetworkAccessManagerFactory(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeNetworkAccessManagerFactory[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QDeclarativeNetworkAccessManagerFactory_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeNetworkAccessManagerFactory_create)}
};

PyDoc_STRVAR(doc_QDeclarativeNetworkAccessManagerFactory, "\1QDeclarativeNetworkAccessManagerFactory()\n"
    "QDeclarativeNetworkAccessManagerFactory(QDeclarativeNetworkAccessManagerFactory)");


static pyqt4ClassPluginDef plugin_QDeclarativeNetworkAccessManagerFactory = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeNetworkAccessManagerFactory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeNetworkAccessManagerFactory,
        {0},
        &plugin_QDeclarativeNetworkAccessManagerFactory
    },
    {
        sipNameNr_QDeclarativeNetworkAccessManagerFactory,
        {0, 0, 1},
        1, methods_QDeclarativeNetworkAccessManagerFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeNetworkAccessManagerFactory,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativeNetworkAccessManagerFactory,
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
    dealloc_QDeclarativeNetworkAccessManagerFactory,
    0,
    0,
    0,
    release_QDeclarativeNetworkAccessManagerFactory,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
