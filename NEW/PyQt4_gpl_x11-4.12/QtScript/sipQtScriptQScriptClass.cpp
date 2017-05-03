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

#include "sipAPIQtScript.h"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptclass.sip"
#include <qscriptclass.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"

#line 34 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptengine.sip"
#include <qscriptengine.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 34 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptclasspropertyiterator.sip"
#include <qscriptclasspropertyiterator.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 34 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptstring.sip"
#include <qscriptstring.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtScript/qscriptclass.sip"
#include <qscriptclass.h>
#line 54 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtScript/sipQtScriptQScriptClass.cpp"


class sipQScriptClass : public  ::QScriptClass
{
public:
    sipQScriptClass( ::QScriptEngine*);
    virtual ~sipQScriptClass();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QVariant extension( ::QScriptClass::Extension,const  ::QVariant&);
    bool supportsExtension( ::QScriptClass::Extension) const;
     ::QString name() const;
     ::QScriptValue prototype() const;
     ::QScriptClassPropertyIterator* newIterator(const  ::QScriptValue&);
     ::QScriptValue::PropertyFlags propertyFlags(const  ::QScriptValue&,const  ::QScriptString&, ::uint);
    void setProperty( ::QScriptValue&,const  ::QScriptString&, ::uint,const  ::QScriptValue&);
     ::QScriptValue property(const  ::QScriptValue&,const  ::QScriptString&, ::uint);
     ::QScriptClass::QueryFlags queryProperty(const  ::QScriptValue&,const  ::QScriptString&, ::QScriptClass::QueryFlags, ::uint*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScriptClass(const sipQScriptClass &);
    sipQScriptClass &operator = (const sipQScriptClass &);

    char sipPyMethods[9];
};

sipQScriptClass::sipQScriptClass( ::QScriptEngine*a0):  ::QScriptClass(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQScriptClass::~sipQScriptClass()
{
    sipCommonDtor(sipPySelf);
}

 ::QVariant sipQScriptClass::extension( ::QScriptClass::Extension a0,const  ::QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_extension);

    if (!sipMeth)
        return  ::QScriptClass::extension(a0,a1);

    extern  ::QVariant sipVH_QtScript_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QScriptClass::Extension,const  ::QVariant&);

    return sipVH_QtScript_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQScriptClass::supportsExtension( ::QScriptClass::Extension a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_supportsExtension);

    if (!sipMeth)
        return  ::QScriptClass::supportsExtension(a0);

    extern bool sipVH_QtScript_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QScriptClass::Extension);

    return sipVH_QtScript_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QString sipQScriptClass::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_name);

    if (!sipMeth)
        return  ::QScriptClass::name();

    extern  ::QString sipVH_QtScript_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtScript_6(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QScriptValue sipQScriptClass::prototype() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_prototype);

    if (!sipMeth)
        return  ::QScriptClass::prototype();

    extern  ::QScriptValue sipVH_QtScript_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtScript_5(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QScriptClassPropertyIterator* sipQScriptClass::newIterator(const  ::QScriptValue& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_newIterator);

    if (!sipMeth)
        return  ::QScriptClass::newIterator(a0);

    extern  ::QScriptClassPropertyIterator* sipVH_QtScript_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QScriptValue&);

    return sipVH_QtScript_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QScriptValue::PropertyFlags sipQScriptClass::propertyFlags(const  ::QScriptValue& a0,const  ::QScriptString& a1, ::uint a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_propertyFlags);

    if (!sipMeth)
        return  ::QScriptClass::propertyFlags(a0,a1,a2);

    extern  ::QScriptValue::PropertyFlags sipVH_QtScript_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QScriptValue&,const  ::QScriptString&, ::uint);

    return sipVH_QtScript_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQScriptClass::setProperty( ::QScriptValue& a0,const  ::QScriptString& a1, ::uint a2,const  ::QScriptValue& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setProperty);

    if (!sipMeth)
    {
         ::QScriptClass::setProperty(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtScript_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QScriptValue&,const  ::QScriptString&, ::uint,const  ::QScriptValue&);

    sipVH_QtScript_2(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

 ::QScriptValue sipQScriptClass::property(const  ::QScriptValue& a0,const  ::QScriptString& a1, ::uint a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_property);

    if (!sipMeth)
        return  ::QScriptClass::property(a0,a1,a2);

    extern  ::QScriptValue sipVH_QtScript_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QScriptValue&,const  ::QScriptString&, ::uint);

    return sipVH_QtScript_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QScriptClass::QueryFlags sipQScriptClass::queryProperty(const  ::QScriptValue& a0,const  ::QScriptString& a1, ::QScriptClass::QueryFlags a2, ::uint*a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_queryProperty);

    if (!sipMeth)
        return  ::QScriptClass::queryProperty(a0,a1,a2,a3);

    extern  ::QScriptClass::QueryFlags sipVH_QtScript_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QScriptValue&,const  ::QScriptString&, ::QScriptClass::QueryFlags, ::uint*);

    return sipVH_QtScript_0(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QScriptClass_engine, "engine(self) -> QScriptEngine");

extern "C" {static PyObject *meth_QScriptClass_engine(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_engine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClass, &sipCpp))
        {
             ::QScriptEngine*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->engine();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QScriptEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_engine, doc_QScriptClass_engine);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_queryProperty, "queryProperty(self, QScriptValue, QScriptString, QScriptClass.QueryFlags) -> Tuple[QScriptClass.QueryFlags, int]");

extern "C" {static PyObject *meth_QScriptClass_queryProperty(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_queryProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptValue* a0;
        const  ::QScriptString* a1;
         ::QScriptClass::QueryFlags* a2;
        int a2State = 0;
         ::uint a3;
         ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9J1", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptValue, &a0, sipType_QScriptString, &a1, sipType_QScriptClass_QueryFlags, &a2, &a2State))
        {
             ::QScriptClass::QueryFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QScriptClass::QueryFlags((sipSelfWasArg ? sipCpp-> ::QScriptClass::queryProperty(*a0,*a1,*a2,&a3) : sipCpp->queryProperty(*a0,*a1,*a2,&a3)));
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_QScriptClass_QueryFlags,a2State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
            return sipBuildResult(0,"(Ru)",sipResObj,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_queryProperty, doc_QScriptClass_queryProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_property, "property(self, QScriptValue, QScriptString, int) -> QScriptValue");

extern "C" {static PyObject *meth_QScriptClass_property(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptValue* a0;
        const  ::QScriptString* a1;
         ::uint a2;
         ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9u", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptValue, &a0, sipType_QScriptString, &a1, &a2))
        {
             ::QScriptValue*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QScriptValue((sipSelfWasArg ? sipCpp-> ::QScriptClass::property(*a0,*a1,a2) : sipCpp->property(*a0,*a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_property, doc_QScriptClass_property);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_setProperty, "setProperty(self, QScriptValue, QScriptString, int, QScriptValue)");

extern "C" {static PyObject *meth_QScriptClass_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QScriptValue* a0;
        const  ::QScriptString* a1;
         ::uint a2;
        const  ::QScriptValue* a3;
         ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9uJ9", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptValue, &a0, sipType_QScriptString, &a1, &a2, sipType_QScriptValue, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QScriptClass::setProperty(*a0,*a1,a2,*a3) : sipCpp->setProperty(*a0,*a1,a2,*a3));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_setProperty, doc_QScriptClass_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_propertyFlags, "propertyFlags(self, QScriptValue, QScriptString, int) -> QScriptValue.PropertyFlags");

extern "C" {static PyObject *meth_QScriptClass_propertyFlags(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_propertyFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptValue* a0;
        const  ::QScriptString* a1;
         ::uint a2;
         ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9u", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptValue, &a0, sipType_QScriptString, &a1, &a2))
        {
             ::QScriptValue::PropertyFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QScriptValue::PropertyFlags((sipSelfWasArg ? sipCpp-> ::QScriptClass::propertyFlags(*a0,*a1,a2) : sipCpp->propertyFlags(*a0,*a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_propertyFlags, doc_QScriptClass_propertyFlags);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_newIterator, "newIterator(self, QScriptValue) -> QScriptClassPropertyIterator");

extern "C" {static PyObject *meth_QScriptClass_newIterator(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_newIterator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptValue* a0;
         ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptValue, &a0))
        {
             ::QScriptClassPropertyIterator*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QScriptClass::newIterator(*a0) : sipCpp->newIterator(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QScriptClassPropertyIterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_newIterator, doc_QScriptClass_newIterator);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_prototype, "prototype(self) -> QScriptValue");

extern "C" {static PyObject *meth_QScriptClass_prototype(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_prototype(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClass, &sipCpp))
        {
             ::QScriptValue*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QScriptValue((sipSelfWasArg ? sipCpp-> ::QScriptClass::prototype() : sipCpp->prototype()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_prototype, doc_QScriptClass_prototype);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_name, "name(self) -> str");

extern "C" {static PyObject *meth_QScriptClass_name(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClass, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QScriptClass::name() : sipCpp->name()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_name, doc_QScriptClass_name);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_supportsExtension, "supportsExtension(self, QScriptClass.Extension) -> bool");

extern "C" {static PyObject *meth_QScriptClass_supportsExtension(PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_supportsExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QScriptClass::Extension a0;
        const  ::QScriptClass *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptClass_Extension, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QScriptClass::supportsExtension(a0) : sipCpp->supportsExtension(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_supportsExtension, doc_QScriptClass_supportsExtension);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClass_extension, "extension(self, QScriptClass.Extension, argument: Any = None) -> Any");

extern "C" {static PyObject *meth_QScriptClass_extension(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QScriptClass_extension(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QScriptClass::Extension a0;
        const  ::QVariant& a1def = QVariant();
        const  ::QVariant* a1 = &a1def;
        int a1State = 0;
         ::QScriptClass *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_argument,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J1", &sipSelf, sipType_QScriptClass, &sipCpp, sipType_QScriptClass_Extension, &a0, sipType_QVariant,&a1, &a1State))
        {
             ::QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVariant((sipSelfWasArg ? sipCpp-> ::QScriptClass::extension(a0,*a1) : sipCpp->extension(a0,*a1)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClass, sipName_extension, doc_QScriptClass_extension);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptClass(void *, int);}
static void release_QScriptClass(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQScriptClass *>(sipCppV);
    else
        delete reinterpret_cast< ::QScriptClass *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptClass(sipSimpleWrapper *);}
static void dealloc_QScriptClass(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQScriptClass *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QScriptClass(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QScriptClass(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptClass(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScriptClass *sipCpp = 0;

    {
         ::QScriptEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QScriptEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQScriptClass(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptClass[] = {
    {SIP_MLNAME_CAST(sipName_engine), meth_QScriptClass_engine, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_engine)},
    {SIP_MLNAME_CAST(sipName_extension), (PyCFunction)meth_QScriptClass_extension, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QScriptClass_extension)},
    {SIP_MLNAME_CAST(sipName_name), meth_QScriptClass_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_name)},
    {SIP_MLNAME_CAST(sipName_newIterator), meth_QScriptClass_newIterator, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_newIterator)},
    {SIP_MLNAME_CAST(sipName_property), meth_QScriptClass_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_property)},
    {SIP_MLNAME_CAST(sipName_propertyFlags), meth_QScriptClass_propertyFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_propertyFlags)},
    {SIP_MLNAME_CAST(sipName_prototype), meth_QScriptClass_prototype, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_prototype)},
    {SIP_MLNAME_CAST(sipName_queryProperty), meth_QScriptClass_queryProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_queryProperty)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QScriptClass_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_setProperty)},
    {SIP_MLNAME_CAST(sipName_supportsExtension), meth_QScriptClass_supportsExtension, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClass_supportsExtension)}
};

static sipEnumMemberDef enummembers_QScriptClass[] = {
    {sipName_Callable, static_cast<int>( ::QScriptClass::Callable), 3},
    {sipName_HandlesReadAccess, static_cast<int>( ::QScriptClass::HandlesReadAccess), 4},
    {sipName_HandlesWriteAccess, static_cast<int>( ::QScriptClass::HandlesWriteAccess), 4},
    {sipName_HasInstance, static_cast<int>( ::QScriptClass::HasInstance), 3},
};

PyDoc_STRVAR(doc_QScriptClass, "\1QScriptClass(QScriptEngine)");


static pyqt4ClassPluginDef plugin_QScriptClass = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtScript_QScriptClass = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptClass,
        {0},
        &plugin_QScriptClass
    },
    {
        sipNameNr_QScriptClass,
        {0, 0, 1},
        10, methods_QScriptClass,
        4, enummembers_QScriptClass,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptClass,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QScriptClass,
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
    dealloc_QScriptClass,
    0,
    0,
    0,
    release_QScriptClass,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
