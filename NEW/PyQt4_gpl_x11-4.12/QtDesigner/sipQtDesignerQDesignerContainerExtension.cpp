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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtDesigner/container.sip"
#include <container.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQDesignerContainerExtension.cpp"

#line 28 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQDesignerContainerExtension.cpp"


class sipQDesignerContainerExtension : public  ::QDesignerContainerExtension
{
public:
    sipQDesignerContainerExtension();
    sipQDesignerContainerExtension(const  ::QDesignerContainerExtension&);
    virtual ~sipQDesignerContainerExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void remove(int);
    void insertWidget(int, ::QWidget*);
    void addWidget( ::QWidget*);
    void setCurrentIndex(int);
    int currentIndex() const;
     ::QWidget* widget(int) const;
    int count() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerContainerExtension(const sipQDesignerContainerExtension &);
    sipQDesignerContainerExtension &operator = (const sipQDesignerContainerExtension &);

    char sipPyMethods[7];
};

sipQDesignerContainerExtension::sipQDesignerContainerExtension():  ::QDesignerContainerExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerContainerExtension::sipQDesignerContainerExtension(const  ::QDesignerContainerExtension& a0):  ::QDesignerContainerExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerContainerExtension::~sipQDesignerContainerExtension()
{
    sipCommonDtor(sipPySelf);
}

void sipQDesignerContainerExtension::remove(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDesignerContainerExtension,sipName_remove);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    sipVH_QtDesigner_74(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDesignerContainerExtension::insertWidget(int a0, ::QWidget*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QDesignerContainerExtension,sipName_insertWidget);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_75(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int, ::QWidget*);

    sipVH_QtDesigner_75(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQDesignerContainerExtension::addWidget( ::QWidget*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QDesignerContainerExtension,sipName_addWidget);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QWidget*);

    sipVH_QtDesigner_55(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDesignerContainerExtension::setCurrentIndex(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QDesignerContainerExtension,sipName_setCurrentIndex);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    sipVH_QtDesigner_74(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerContainerExtension::currentIndex() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QDesignerContainerExtension,sipName_currentIndex);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtDesigner_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_27(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QWidget* sipQDesignerContainerExtension::widget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerContainerExtension,sipName_widget);

    if (!sipMeth)
        return 0;

    extern  ::QWidget* sipVH_QtDesigner_64(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_64(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerContainerExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerContainerExtension,sipName_count);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtDesigner_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_27(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_count, "count(self) -> int");

extern "C" {static PyObject *meth_QDesignerContainerExtension_count(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_count);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_count, doc_QDesignerContainerExtension_count);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_widget, "widget(self, int) -> QWidget");

extern "C" {static PyObject *meth_QDesignerContainerExtension_widget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const  ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp, &a0))
        {
             ::QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_widget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_widget, doc_QDesignerContainerExtension_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_currentIndex, "currentIndex(self) -> int");

extern "C" {static PyObject *meth_QDesignerContainerExtension_currentIndex(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_currentIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_currentIndex);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->currentIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_currentIndex, doc_QDesignerContainerExtension_currentIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_setCurrentIndex, "setCurrentIndex(self, int)");

extern "C" {static PyObject *meth_QDesignerContainerExtension_setCurrentIndex(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_setCurrentIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_setCurrentIndex);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCurrentIndex(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_setCurrentIndex, doc_QDesignerContainerExtension_setCurrentIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_addWidget, "addWidget(self, QWidget)");

extern "C" {static PyObject *meth_QDesignerContainerExtension_addWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_addWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QWidget* a0;
         ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp, sipType_QWidget, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_addWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->addWidget(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_addWidget, doc_QDesignerContainerExtension_addWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_insertWidget, "insertWidget(self, int, QWidget)");

extern "C" {static PyObject *meth_QDesignerContainerExtension_insertWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_insertWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::QWidget* a1;
         ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp, &a0, sipType_QWidget, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_insertWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->insertWidget(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_insertWidget, doc_QDesignerContainerExtension_insertWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerContainerExtension_remove, "remove(self, int)");

extern "C" {static PyObject *meth_QDesignerContainerExtension_remove(PyObject *, PyObject *);}
static PyObject *meth_QDesignerContainerExtension_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::QDesignerContainerExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerContainerExtension, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerContainerExtension, sipName_remove);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerContainerExtension, sipName_remove, doc_QDesignerContainerExtension_remove);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QDesignerContainerExtension___len__(PyObject *);}
static SIP_SSIZE_T slot_QDesignerContainerExtension___len__(PyObject *sipSelf)
{
     ::QDesignerContainerExtension *sipCpp = reinterpret_cast< ::QDesignerContainerExtension *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerContainerExtension));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 463 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtDesigner/sipQtDesignerQDesignerContainerExtension.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerContainerExtension(void *, int);}
static void release_QDesignerContainerExtension(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQDesignerContainerExtension *>(sipCppV);
    else
        delete reinterpret_cast< ::QDesignerContainerExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerContainerExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerContainerExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQDesignerContainerExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDesignerContainerExtension(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QDesignerContainerExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerContainerExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerContainerExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerContainerExtension();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QDesignerContainerExtension* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerContainerExtension, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerContainerExtension(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDesignerContainerExtension[] = {
    {(void *)slot_QDesignerContainerExtension___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDesignerContainerExtension[] = {
    {SIP_MLNAME_CAST(sipName_addWidget), meth_QDesignerContainerExtension_addWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_addWidget)},
    {SIP_MLNAME_CAST(sipName_count), meth_QDesignerContainerExtension_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_count)},
    {SIP_MLNAME_CAST(sipName_currentIndex), meth_QDesignerContainerExtension_currentIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_currentIndex)},
    {SIP_MLNAME_CAST(sipName_insertWidget), meth_QDesignerContainerExtension_insertWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_insertWidget)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QDesignerContainerExtension_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_remove)},
    {SIP_MLNAME_CAST(sipName_setCurrentIndex), meth_QDesignerContainerExtension_setCurrentIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_setCurrentIndex)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QDesignerContainerExtension_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerContainerExtension_widget)}
};

PyDoc_STRVAR(doc_QDesignerContainerExtension, "\1QDesignerContainerExtension()\n"
    "QDesignerContainerExtension(QDesignerContainerExtension)");


static pyqt4ClassPluginDef plugin_QDesignerContainerExtension = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QDesignerContainerExtension = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerContainerExtension,
        {0},
        &plugin_QDesignerContainerExtension
    },
    {
        sipNameNr_QDesignerContainerExtension,
        {0, 0, 1},
        7, methods_QDesignerContainerExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerContainerExtension,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDesignerContainerExtension,
    init_type_QDesignerContainerExtension,
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
    dealloc_QDesignerContainerExtension,
    0,
    0,
    0,
    release_QDesignerContainerExtension,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
