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

#line 26 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 29 "/home/thais/Faculdade/TCC/NEW/PyQt4_gpl_x11-4.12/QtCore/sipQtCoreQMetaType.cpp"



PyDoc_STRVAR(doc_QMetaType_type, "type(str) -> int");

extern "C" {static PyObject *meth_QMetaType_type(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_type(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::type(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_type, doc_QMetaType_type);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaType_typeName, "typeName(int) -> str");

extern "C" {static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::typeName(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_typeName, doc_QMetaType_typeName);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaType_isRegistered, "isRegistered(int) -> bool");

extern "C" {static PyObject *meth_QMetaType_isRegistered(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_isRegistered(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMetaType::isRegistered(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_isRegistered, doc_QMetaType_isRegistered);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaType(void *, int);}
static void release_QMetaType(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QMetaType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaType(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QMetaType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QMetaType *>(sipSrc);
}


extern "C" {static void *array_QMetaType(SIP_SSIZE_T);}
static void *array_QMetaType(SIP_SSIZE_T sipNrElem)
{
    return new  ::QMetaType[sipNrElem];
}


extern "C" {static void *copy_QMetaType(const void *, SIP_SSIZE_T);}
static void *copy_QMetaType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QMetaType(reinterpret_cast<const  ::QMetaType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaType(sipSimpleWrapper *);}
static void dealloc_QMetaType(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMetaType(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMetaType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMetaType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QMetaType* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QMetaType(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMetaType[] = {
    {SIP_MLNAME_CAST(sipName_isRegistered), meth_QMetaType_isRegistered, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_isRegistered)},
    {SIP_MLNAME_CAST(sipName_type), meth_QMetaType_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_type)},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QMetaType_typeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaType_typeName)}
};

static sipEnumMemberDef enummembers_QMetaType[] = {
    {sipName_Bool, static_cast<int>( ::QMetaType::Bool), 135},
    {sipName_Char, static_cast<int>( ::QMetaType::Char), 135},
    {sipName_Double, static_cast<int>( ::QMetaType::Double), 135},
    {sipName_FirstGuiType, static_cast<int>( ::QMetaType::FirstGuiType), 135},
    {sipName_Float, static_cast<int>( ::QMetaType::Float), 135},
    {sipName_Int, static_cast<int>( ::QMetaType::Int), 135},
    {sipName_LastCoreType, static_cast<int>( ::QMetaType::LastCoreType), 135},
    {sipName_Long, static_cast<int>( ::QMetaType::Long), 135},
    {sipName_LongLong, static_cast<int>( ::QMetaType::LongLong), 135},
    {sipName_QBitArray, static_cast<int>( ::QMetaType::QBitArray), 135},
    {sipName_QBitmap, static_cast<int>( ::QMetaType::QBitmap), 135},
    {sipName_QBrush, static_cast<int>( ::QMetaType::QBrush), 135},
    {sipName_QByteArray, static_cast<int>( ::QMetaType::QByteArray), 135},
    {sipName_QChar, static_cast<int>( ::QMetaType::QChar), 135},
    {sipName_QColor, static_cast<int>( ::QMetaType::QColor), 135},
    {sipName_QCursor, static_cast<int>( ::QMetaType::QCursor), 135},
    {sipName_QDate, static_cast<int>( ::QMetaType::QDate), 135},
    {sipName_QDateTime, static_cast<int>( ::QMetaType::QDateTime), 135},
    {sipName_QEasingCurve, static_cast<int>( ::QMetaType::QEasingCurve), 135},
    {sipName_QFont, static_cast<int>( ::QMetaType::QFont), 135},
    {sipName_QIcon, static_cast<int>( ::QMetaType::QIcon), 135},
    {sipName_QImage, static_cast<int>( ::QMetaType::QImage), 135},
    {sipName_QKeySequence, static_cast<int>( ::QMetaType::QKeySequence), 135},
    {sipName_QLine, static_cast<int>( ::QMetaType::QLine), 135},
    {sipName_QLineF, static_cast<int>( ::QMetaType::QLineF), 135},
    {sipName_QLocale, static_cast<int>( ::QMetaType::QLocale), 135},
    {sipName_QMatrix, static_cast<int>( ::QMetaType::QMatrix), 135},
    {sipName_QMatrix4x4, static_cast<int>( ::QMetaType::QMatrix4x4), 135},
    {sipName_QObjectStar, static_cast<int>( ::QMetaType::QObjectStar), 135},
    {sipName_QPalette, static_cast<int>( ::QMetaType::QPalette), 135},
    {sipName_QPen, static_cast<int>( ::QMetaType::QPen), 135},
    {sipName_QPixmap, static_cast<int>( ::QMetaType::QPixmap), 135},
    {sipName_QPoint, static_cast<int>( ::QMetaType::QPoint), 135},
    {sipName_QPointF, static_cast<int>( ::QMetaType::QPointF), 135},
    {sipName_QPolygon, static_cast<int>( ::QMetaType::QPolygon), 135},
    {sipName_QQuaternion, static_cast<int>( ::QMetaType::QQuaternion), 135},
    {sipName_QRect, static_cast<int>( ::QMetaType::QRect), 135},
    {sipName_QRectF, static_cast<int>( ::QMetaType::QRectF), 135},
    {sipName_QRegExp, static_cast<int>( ::QMetaType::QRegExp), 135},
    {sipName_QRegion, static_cast<int>( ::QMetaType::QRegion), 135},
    {sipName_QSize, static_cast<int>( ::QMetaType::QSize), 135},
    {sipName_QSizeF, static_cast<int>( ::QMetaType::QSizeF), 135},
    {sipName_QSizePolicy, static_cast<int>( ::QMetaType::QSizePolicy), 135},
    {sipName_QString, static_cast<int>( ::QMetaType::QString), 135},
    {sipName_QStringList, static_cast<int>( ::QMetaType::QStringList), 135},
    {sipName_QTextFormat, static_cast<int>( ::QMetaType::QTextFormat), 135},
    {sipName_QTextLength, static_cast<int>( ::QMetaType::QTextLength), 135},
    {sipName_QTime, static_cast<int>( ::QMetaType::QTime), 135},
    {sipName_QTransform, static_cast<int>( ::QMetaType::QTransform), 135},
    {sipName_QUrl, static_cast<int>( ::QMetaType::QUrl), 135},
    {sipName_QVariant, static_cast<int>( ::QMetaType::QVariant), 135},
    {sipName_QVariantHash, static_cast<int>( ::QMetaType::QVariantHash), 135},
    {sipName_QVariantList, static_cast<int>( ::QMetaType::QVariantList), 135},
    {sipName_QVariantMap, static_cast<int>( ::QMetaType::QVariantMap), 135},
    {sipName_QVector2D, static_cast<int>( ::QMetaType::QVector2D), 135},
    {sipName_QVector3D, static_cast<int>( ::QMetaType::QVector3D), 135},
    {sipName_QVector4D, static_cast<int>( ::QMetaType::QVector4D), 135},
    {sipName_QWidgetStar, static_cast<int>( ::QMetaType::QWidgetStar), 135},
    {sipName_Short, static_cast<int>( ::QMetaType::Short), 135},
    {sipName_UChar, static_cast<int>( ::QMetaType::UChar), 135},
    {sipName_UInt, static_cast<int>( ::QMetaType::UInt), 135},
    {sipName_ULong, static_cast<int>( ::QMetaType::ULong), 135},
    {sipName_ULongLong, static_cast<int>( ::QMetaType::ULongLong), 135},
    {sipName_UShort, static_cast<int>( ::QMetaType::UShort), 135},
    {sipName_User, static_cast<int>( ::QMetaType::User), 135},
    {sipName_Void, static_cast<int>( ::QMetaType::Void), 135},
    {sipName_VoidStar, static_cast<int>( ::QMetaType::VoidStar), 135},
};

PyDoc_STRVAR(doc_QMetaType, "\1QMetaType()\n"
    "QMetaType(QMetaType)");


static pyqt4ClassPluginDef plugin_QMetaType = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QMetaType = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaType,
        {0},
        &plugin_QMetaType
    },
    {
        sipNameNr_QMetaType,
        {0, 0, 1},
        3, methods_QMetaType,
        67, enummembers_QMetaType,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaType,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMetaType,
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
    dealloc_QMetaType,
    assign_QMetaType,
    array_QMetaType,
    copy_QMetaType,
    release_QMetaType,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
