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

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qgraphicslayout.sip"
#include <qgraphicslayout.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"

#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qgraphicslayoutitem.sip"
#include <qgraphicslayoutitem.h>
#line 33 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 28 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 39 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 103 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 42 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 159 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"
#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 51 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"


class sipQGraphicsLayout : public  ::QGraphicsLayout
{
public:
    sipQGraphicsLayout( ::QGraphicsLayoutItem*);
    virtual ~sipQGraphicsLayout();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void removeAt(int);
     ::QGraphicsLayoutItem* itemAt(int) const;
    int count() const;
    void widgetEvent( ::QEvent*);
    void invalidate();
    void setGeometry(const  ::QRectF&);
    void getContentsMargins( ::qreal*, ::qreal*, ::qreal*, ::qreal*) const;
    void updateGeometry();
     ::QSizeF sizeHint( ::Qt::SizeHint,const  ::QSizeF&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsLayout(const sipQGraphicsLayout &);
    sipQGraphicsLayout &operator = (const sipQGraphicsLayout &);

    char sipPyMethods[9];
};

sipQGraphicsLayout::sipQGraphicsLayout( ::QGraphicsLayoutItem*a0):  ::QGraphicsLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLayout::~sipQGraphicsLayout()
{
    sipCommonDtor(sipPySelf);
}

void sipQGraphicsLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QGraphicsLayout,sipName_removeAt);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    sipVH_QtGui_54(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QGraphicsLayoutItem* sipQGraphicsLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QGraphicsLayout,sipName_itemAt);

    if (!sipMeth)
        return 0;

    extern  ::QGraphicsLayoutItem* sipVH_QtGui_151(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtGui_151(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQGraphicsLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QGraphicsLayout,sipName_count);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtGui_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_8(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQGraphicsLayout::widgetEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_widgetEvent);

    if (!sipMeth)
    {
         ::QGraphicsLayout::widgetEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_invalidate);

    if (!sipMeth)
    {
         ::QGraphicsLayout::invalidate();
        return;
    }

    extern void sipVH_QtGui_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtGui_34(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQGraphicsLayout::setGeometry(const  ::QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setGeometry);

    if (!sipMeth)
    {
         ::QGraphicsLayout::setGeometry(a0);
        return;
    }

    extern void sipVH_QtGui_148(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QRectF&);

    sipVH_QtGui_148(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::getContentsMargins( ::qreal*a0, ::qreal*a1, ::qreal*a2, ::qreal*a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!sipMeth)
    {
         ::QGraphicsLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_149(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::qreal*, ::qreal*, ::qreal*, ::qreal*);

    sipVH_QtGui_149(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQGraphicsLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_updateGeometry);

    if (!sipMeth)
    {
         ::QGraphicsLayout::updateGeometry();
        return;
    }

    extern void sipVH_QtGui_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtGui_34(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QSizeF sipQGraphicsLayout::sizeHint( ::Qt::SizeHint a0,const  ::QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QGraphicsLayout,sipName_sizeHint);

    if (!sipMeth)
        return  ::QSizeF();

    extern  ::QSizeF sipVH_QtGui_150(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::Qt::SizeHint,const  ::QSizeF&);

    return sipVH_QtGui_150(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QGraphicsLayout_setContentsMargins, "setContentsMargins(self, float, float, float, float)");

extern "C" {static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContentsMargins(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setContentsMargins, doc_QGraphicsLayout_setContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_getContentsMargins, "getContentsMargins(self) -> Tuple[float, float, float, float]");

extern "C" {static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::getContentsMargins(&a0,&a1,&a2,&a3) : sipCpp->getContentsMargins(&a0,&a1,&a2,&a3));
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(dddd)",a0,a1,a2,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_getContentsMargins, doc_QGraphicsLayout_getContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_activate, "activate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_activate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->activate();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_activate, doc_QGraphicsLayout_activate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_isActivated, "isActivated(self) -> bool");

extern "C" {static PyObject *meth_QGraphicsLayout_isActivated(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_isActivated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isActivated();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_isActivated, doc_QGraphicsLayout_isActivated);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_invalidate, "invalidate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::invalidate() : sipCpp->invalidate());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_invalidate, doc_QGraphicsLayout_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_widgetEvent, "widgetEvent(self, QEvent)");

extern "C" {static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::widgetEvent(a0) : sipCpp->widgetEvent(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_widgetEvent, doc_QGraphicsLayout_widgetEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_count, "count(self) -> int");

extern "C" {static PyObject *meth_QGraphicsLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_count);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_count, doc_QGraphicsLayout_count);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_itemAt, "itemAt(self, int) -> QGraphicsLayoutItem");

extern "C" {static PyObject *meth_QGraphicsLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
             ::QGraphicsLayoutItem*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_itemAt);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->itemAt(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_itemAt, doc_QGraphicsLayout_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_removeAt, "removeAt(self, int)");

extern "C" {static PyObject *meth_QGraphicsLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_removeAt);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAt(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_removeAt, doc_QGraphicsLayout_removeAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_updateGeometry, "updateGeometry(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::updateGeometry() : sipCpp->updateGeometry());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_updateGeometry, doc_QGraphicsLayout_updateGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_addChildLayoutItem, "addChildLayoutItem(self, QGraphicsLayoutItem)");

extern "C" {static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ:", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addChildLayoutItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_addChildLayoutItem, doc_QGraphicsLayout_addChildLayoutItem);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *);}
static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *sipSelf)
{
     ::QGraphicsLayout *sipCpp = reinterpret_cast< ::QGraphicsLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsLayout));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 619 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtGui/sipQtGuiQGraphicsLayout.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QGraphicsLayout(void *, const sipTypeDef *);}
static void *cast_QGraphicsLayout(void *sipCppV, const sipTypeDef *targetType)
{
     ::QGraphicsLayout *sipCpp = reinterpret_cast< ::QGraphicsLayout *>(sipCppV);

    if (targetType == sipType_QGraphicsLayoutItem)
        return static_cast< ::QGraphicsLayoutItem *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsLayout(void *, int);}
static void release_QGraphicsLayout(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQGraphicsLayout *>(sipCppV);
    else
        delete reinterpret_cast< ::QGraphicsLayout *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQGraphicsLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsLayout(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QGraphicsLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsLayout *sipCpp = 0;

    {
         ::QGraphicsLayoutItem* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsLayout(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsLayout[] = {{180, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsLayout[] = {
    {(void *)slot_QGraphicsLayout___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGraphicsLayout[] = {
    {SIP_MLNAME_CAST(sipName_activate), meth_QGraphicsLayout_activate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_activate)},
    {SIP_MLNAME_CAST(sipName_addChildLayoutItem), meth_QGraphicsLayout_addChildLayoutItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_addChildLayoutItem)},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsLayout_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_count)},
    {SIP_MLNAME_CAST(sipName_getContentsMargins), meth_QGraphicsLayout_getContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_getContentsMargins)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsLayout_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_invalidate)},
    {SIP_MLNAME_CAST(sipName_isActivated), meth_QGraphicsLayout_isActivated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_isActivated)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsLayout_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_itemAt)},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsLayout_removeAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_removeAt)},
    {SIP_MLNAME_CAST(sipName_setContentsMargins), meth_QGraphicsLayout_setContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_setContentsMargins)},
    {SIP_MLNAME_CAST(sipName_updateGeometry), meth_QGraphicsLayout_updateGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_updateGeometry)},
    {SIP_MLNAME_CAST(sipName_widgetEvent), meth_QGraphicsLayout_widgetEvent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_widgetEvent)}
};

PyDoc_STRVAR(doc_QGraphicsLayout, "\1QGraphicsLayout(parent: QGraphicsLayoutItem = None)");


static pyqt4ClassPluginDef plugin_QGraphicsLayout = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QGraphicsLayout = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsLayout,
        {0},
        &plugin_QGraphicsLayout
    },
    {
        sipNameNr_QGraphicsLayout,
        {0, 0, 1},
        11, methods_QGraphicsLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsLayout,
    -1,
    -1,
    supers_QGraphicsLayout,
    slots_QGraphicsLayout,
    init_type_QGraphicsLayout,
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
    dealloc_QGraphicsLayout,
    0,
    0,
    0,
    release_QGraphicsLayout,
    cast_QGraphicsLayout,
    0,
    0,
    0,
    0,
    0,
    0
};
