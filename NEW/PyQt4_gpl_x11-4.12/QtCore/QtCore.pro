TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtCore.pyd
    target.files = QtCore.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtCore.so
    target.files = QtCore.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtCore
sip.files = ../sip/QtCore/qtextcodec.sip ../sip/QtCore/qanimationgroup.sip ../sip/QtCore/qeventloop.sip ../sip/QtCore/qbytearraymatcher.sip ../sip/QtCore/qbytearray.sip ../sip/QtCore/qsharedmemory.sip ../sip/QtCore/qmimedata.sip ../sip/QtCore/qabstracteventdispatcher.sip ../sip/QtCore/qabstractstate.sip ../sip/QtCore/qtimeline.sip ../sip/QtCore/qvariant.sip ../sip/QtCore/qpropertyanimation.sip ../sip/QtCore/qprocess.sip ../sip/QtCore/qeventtransition.sip ../sip/QtCore/qlocale.sip ../sip/QtCore/qlibraryinfo.sip ../sip/QtCore/qstring.sip ../sip/QtCore/qfileinfo.sip ../sip/QtCore/qhistorystate.sip ../sip/QtCore/qsemaphore.sip ../sip/QtCore/qtemporaryfile.sip ../sip/QtCore/qabstractfileengine.sip ../sip/QtCore/qabstractitemmodel.sip ../sip/QtCore/qsequentialanimationgroup.sip ../sip/QtCore/QtCoremod.sip ../sip/QtCore/qeasingcurve.sip ../sip/QtCore/qcoreapplication.sip ../sip/QtCore/qchar.sip ../sip/QtCore/qsocketnotifier.sip ../sip/QtCore/qrect.sip ../sip/QtCore/qobject.sip ../sip/QtCore/qstatemachine.sip ../sip/QtCore/qpynullvariant.sip ../sip/QtCore/qurl.sip ../sip/QtCore/qthreadpool.sip ../sip/QtCore/qlibrary.sip ../sip/QtCore/qurlquery.sip ../sip/QtCore/qcryptographichash.sip ../sip/QtCore/qdir.sip ../sip/QtCore/qsignaltransition.sip ../sip/QtCore/qcoreevent.sip ../sip/QtCore/qfiledevice.sip ../sip/QtCore/qsettings.sip ../sip/QtCore/qfinalstate.sip ../sip/QtCore/qtranslator.sip ../sip/QtCore/qbitarray.sip ../sip/QtCore/qsize.sip ../sip/QtCore/qpauseanimation.sip ../sip/QtCore/qmap.sip ../sip/QtCore/qnamespace.sip ../sip/QtCore/qparallelanimationgroup.sip ../sip/QtCore/qpluginloader.sip ../sip/QtCore/qdatastream.sip ../sip/QtCore/qlist.sip ../sip/QtCore/qmutex.sip ../sip/QtCore/qvector.sip ../sip/QtCore/qpair.sip ../sip/QtCore/qfsfileengine.sip ../sip/QtCore/qabstractnativeeventfilter.sip ../sip/QtCore/qresource.sip ../sip/QtCore/qmargins.sip ../sip/QtCore/qreadwritelock.sip ../sip/QtCore/qset.sip ../sip/QtCore/qmetaobject.sip ../sip/QtCore/qxmlstream.sip ../sip/QtCore/qthread.sip ../sip/QtCore/qsystemsemaphore.sip ../sip/QtCore/qtextstream.sip ../sip/QtCore/qmetatype.sip ../sip/QtCore/qtimer.sip ../sip/QtCore/qstate.sip ../sip/QtCore/qabstractanimation.sip ../sip/QtCore/qdiriterator.sip ../sip/QtCore/qpoint.sip ../sip/QtCore/qfile.sip ../sip/QtCore/qabstracttransition.sip ../sip/QtCore/qregexp.sip ../sip/QtCore/qtextboundaryfinder.sip ../sip/QtCore/qvariantanimation.sip ../sip/QtCore/qnumeric.sip ../sip/QtCore/qbasictimer.sip ../sip/QtCore/qelapsedtimer.sip ../sip/QtCore/qwaitcondition.sip ../sip/QtCore/qhash.sip ../sip/QtCore/quuid.sip ../sip/QtCore/qbuffer.sip ../sip/QtCore/qsignalmapper.sip ../sip/QtCore/qiodevice.sip ../sip/QtCore/qline.sip ../sip/QtCore/qstringmatcher.sip ../sip/QtCore/qdatetime.sip ../sip/QtCore/qobjectdefs.sip ../sip/QtCore/qrunnable.sip ../sip/QtCore/qfilesystemwatcher.sip ../sip/QtCore/qstringlist.sip ../sip/QtCore/qwineventnotifier.sip ../sip/QtCore/qobjectcleanuphandler.sip ../sip/QtCore/qglobal.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtCore.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtCore

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtCore
HEADERS = sipAPIQtCore.h ../qpy/QtCore/qpycore_misc.h ../qpy/QtCore/qpycore_sip.h ../qpy/QtCore/qpycore_sip_helpers.h ../qpy/QtCore/qpycore_pyqtboundsignal.h ../qpy/QtCore/qpycore_pyqtsignal.h ../qpy/QtCore/qpycore_qmetaobjectbuilder.h ../qpy/QtCore/qpycore_types.h ../qpy/QtCore/qpycore_public_api.h ../qpy/QtCore/qpycore_api.h ../qpy/QtCore/qpycore_qpynullvariant.h ../qpy/QtCore/qpycore_pyqtproperty.h ../qpy/QtCore/qpycore_pyqtproxy.h ../qpy/QtCore/qpycore_pyqtpyobject.h ../qpy/QtCore/qpycore_chimera.h ../qpy/QtCore/qpycore_namespace.h ../qpy/QtCore/qpycore_qtlib.h ../qpy/QtCore/qpycore_pyqtmethodproxy.h ../qpy/QtCore/qpycore_classinfo.h ../qpy/QtCore/qpycore_qobject_helpers.h
SOURCES = sipQtCoreQFileSystemWatcher.cpp sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp sipQtCoreQSet1800.cpp sipQtCoreQSharedMemory.cpp sipQtCoreQAbstractAnimation.cpp sipQtCoreQHash0100QString0100QVariant.cpp sipQtCoreQProcess.cpp sipQtCoreQRect.cpp sipQtCoreQPoint.cpp sipQtCoreQPair18001800.cpp sipQtCoreQStringRef_0.cpp sipQtCoreQDirIteratorIteratorFlags.cpp sipQtCoreQPauseAnimation.cpp sipQtCoreQHash18000100QByteArray.cpp sipQtCoreQTextBoundaryFinder.cpp sipQtCoreQEventLoopProcessEventsFlags.cpp sipQtCoreQObject.cpp sipQtCoreQDir.cpp sipQtCoreQDataStream.cpp sipQtCoreQtDockWidgetAreas.cpp sipQtCoreQTextCodecConverterState.cpp sipQtCoreQList0100QByteArray.cpp sipQtCoreQAbstractFileEngineFileFlags.cpp sipQtCoreQThreadPool.cpp sipQtCoreQXmlStreamNotationDeclaration.cpp sipQtCoreQSignalTransition.cpp sipQtCoreQAbstractListModel.cpp sipQtCoreQResource.cpp sipQtCoreQtWindowFlags.cpp sipQtCoreQMetaMethod.cpp sipQtCoreQProcessEnvironment.cpp sipQtCoreQWaitCondition.cpp sipQtCoreQAbstractFileEngineIterator.cpp sipQtCoreQLocale.cpp sipQtCoreQXmlStreamEntityDeclaration.cpp sipQtCoreQFilePermissions.cpp sipQtCoreQList0100QModelIndex.cpp sipQtCoreQStateMachineWrappedEvent.cpp sipQtCoreQRegExp.cpp sipQtCoreQHistoryState.cpp sipQtCoreQEvent.cpp sipQtCoreQSet0101QAbstractState.cpp sipQtCoreQSystemSemaphore.cpp sipQtCoreQXmlStreamAttribute.cpp sipQtCoreQMetaType.cpp sipQtCoreQList0600QPair18001800.cpp sipQtCoreQUrl.cpp sipQtCoreQList0101QObject.cpp sipQtCoreQtToolBarAreas.cpp sipQtCoreQVariant_4.cpp sipQtCoreQSignalMapper.cpp sipQtCoreQAbstractItemModel.cpp sipQtCoreQXmlStreamNamespaceDeclaration.cpp sipQtCoreQMap18000100QVariant.cpp sipQtCoreQReadLocker.cpp sipQtCoreQStringMatcher_0.cpp sipQtCoreQChar_1.cpp sipQtCoreQPyNullVariant_5.cpp sipQtCoreQVector1900.cpp sipQtCoreQDirSortFlags.cpp sipQtCoreQXmlStreamReader.cpp sipQtCoreQMimeData.cpp sipQtCoreQPluginLoader.cpp sipQtCoreQState.cpp sipQtCoreQSystemLocale.cpp sipQtCoreQEventTransition.cpp sipQtCoreQXmlStreamAttributes.cpp sipQtCoreQDateTime.cpp sipQtCoreQList0600QPair0100QString0100QString.cpp sipQtCoreQIODevice.cpp sipQtCoreQElapsedTimer.cpp sipQtCoreQtTextInteractionFlags.cpp sipQtCoreQGenericReturnArgument.cpp sipQtCoreQList0100QtDayOfWeek.cpp sipQtCoreQTextStreamManipulator.cpp sipQtCoreQByteArrayMatcher.cpp sipQtCoreQList2400.cpp sipQtCoreQAbstractFileEngine.cpp sipQtCoreQMargins.cpp sipQtCoreQString_0.cpp sipQtCoreQPointF.cpp sipQtCoreQBuffer.cpp sipQtCoreQTextEncoder.cpp sipQtCoreQTime.cpp sipQtCoreQSet0100QtDayOfWeek.cpp sipQtCoreQVariantAnimation.cpp sipQtCoreQXmlStreamWriter.cpp sipQtCoreQString_1.cpp sipQtCoreQLibraryLoadHints.cpp sipQtCoreQMutexLocker.cpp sipQtCoreQAnimationGroup.cpp sipQtCoreQEasingCurve.cpp sipQtCoreQFile.cpp sipQtCoreQSizeF.cpp sipQtCoreQMetaProperty.cpp sipQtCoreQVector2400.cpp sipQtCoreQSocketNotifier.cpp sipQtCoreQTimer.cpp sipQtCoreQPropertyAnimation.cpp sipQtCoreQAbstractEventDispatcher.cpp sipQtCoreQTextDecoder.cpp sipQtCoreQAbstractFileEngineHandler.cpp sipQtCoreQGenericArgument.cpp sipQtCoreQtWindowStates.cpp sipQtCoreQtOrientations.cpp sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp sipQtCoreQList0100QUrl.cpp sipQtCoreQList0100QVariant.cpp sipQtCoreQtTouchPointStates.cpp sipQtCoreQSettings.cpp sipQtCoreQCryptographicHash.cpp sipQtCoreQList0101QAbstractState.cpp sipQtCoreQEventLoop.cpp sipQtCoreQDirIterator.cpp sipQtCoreQLine.cpp sipQtCoreQObjectCleanupHandler.cpp sipQtCoreQSequentialAnimationGroup.cpp qpycore_post_init.cpp sipQtCoreQRunnable.cpp sipQtCoreQList0101QAbstractAnimation.cpp sipQtCoreQtDropActions.cpp sipQtCoreQMetaClassInfo.cpp sipQtCoreQTimeLine.cpp sipQtCoreQList1900.cpp sipQtCoreQList0100QLocaleCountry.cpp sipQtCoreQFinalState.cpp sipQtCoreQRectF.cpp sipQtCoreQThread.cpp sipQtCoreQAbstractTableModel.cpp sipQtCoreQTranslator.cpp sipQtCoreQBitArray.cpp sipQtCoreQModelIndex.cpp sipQtCoreQMetaEnum.cpp sipQtCorequintptr.cpp sipQtCoreQtKeyboardModifiers.cpp sipQtCoreQByteArray.cpp sipQtCoreQSize.cpp sipQtCoreQLatin1String_0.cpp sipQtCoreQDirFilters.cpp sipQtCoreQTextCodec.cpp sipQtCoreQFileFileHandleFlags.cpp sipQtCoreQtGestureFlags.cpp sipQtCoreQLineF.cpp sipQtCoreQChar_0.cpp sipQtCoreQStringList_1.cpp sipQtCoreQVariant_5.cpp sipQtCoreQStringSectionFlags_0.cpp sipQtCoreQVector0600QPair24000100QVariant.cpp sipQtCoreQMetaObject.cpp sipQtCoreQSysInfo.cpp sipQtCoreQTextStream.cpp sipQtCoreQLibraryInfo.cpp sipQtCoreQList0600QPair24002400.cpp sipQtCoreQSet1900.cpp sipQtCoreQtAlignment.cpp sipQtCoreQVector1800.cpp sipQtCoreQMutex.cpp sipQtCoreQList1800.cpp sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp sipQtCoreQMap0100QString0100QVariant.cpp sipQtCoreQAbstractState.cpp sipQtCoreQIODeviceOpenMode.cpp sipQtCoreQChildEvent.cpp sipQtCoreQXmlStreamEntityResolver.cpp sipQtCoreQList0100QFileInfo.cpp sipQtCoreQUuid.cpp sipQtCoreQList0100QVariantType.cpp sipQtCoreQStringRef_1.cpp sipQtCoreQDate.cpp sipQtCoreQTextCodecConversionFlags.cpp sipQtCoreQt.cpp sipQtCorecmodule.cpp sipQtCoreQCoreApplication.cpp sipQtCoreQList0101QAbstractTransition.cpp sipQtCoreQUrlFormattingOptions.cpp sipQtCoreQWriteLocker.cpp sipQtCoreQParallelAnimationGroup.cpp sipQtCoreQPair19001900.cpp sipQtCoreQBasicTimer.cpp sipQtCoreQtImageConversionFlags.cpp sipQtCoreQtInputMethodHints.cpp sipQtCoreQDynamicPropertyChangeEvent.cpp sipQtCoreQtItemFlags.cpp sipQtCoreQReadWriteLock.cpp sipQtCoreQLibrary.cpp sipQtCoreQtMatchFlags.cpp sipQtCoreQList0100QLocale.cpp sipQtCoreQStateMachineSignalEvent.cpp sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp sipQtCoreQTimerEvent.cpp sipQtCoreQPersistentModelIndex.cpp sipQtCoreQSemaphore.cpp sipQtCoreQLocaleNumberOptions.cpp sipQtCoreQTemporaryFile.cpp sipQtCoreQStringList_0.cpp sipQtCoreQFileInfo.cpp sipQtCoreQStateMachine.cpp sipQtCoreQAbstractTransition.cpp sipQtCoreQtMouseButtons.cpp sipQtCoreQFSFileEngine.cpp sipQtCoreQTextStreamNumberFlags.cpp sipQtCoreQLatin1Char_0.cpp sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp ../qpy/QtCore/qpycore_qabstracteventdispatcher.cpp ../qpy/QtCore/qpycore_qmetaobject.cpp ../qpy/QtCore/qpycore_qpynullvariant.cpp ../qpy/QtCore/qpycore_qstringlist.cpp ../qpy/QtCore/qpycore_qvariant.cpp ../qpy/QtCore/qpycore_pyqtmethodproxy.cpp ../qpy/QtCore/qpycore_pyqtboundsignal.cpp ../qpy/QtCore/qpycore_classinfo.cpp ../qpy/QtCore/qpycore_chimera_storage.cpp ../qpy/QtCore/qpycore_misc.cpp ../qpy/QtCore/qpycore_chimera.cpp ../qpy/QtCore/qpycore_qtlib.cpp ../qpy/QtCore/qpycore_chimera_signature.cpp ../qpy/QtCore/qpycore_qvariant_value.cpp ../qpy/QtCore/qpycore_init.cpp ../qpy/QtCore/qpycore_qstring.cpp ../qpy/QtCore/qpycore_types.cpp ../qpy/QtCore/qpycore_pyqtsignal.cpp ../qpy/QtCore/qpycore_qmetaobject_helpers.cpp ../qpy/QtCore/qpycore_pyqtpyobject.cpp ../qpy/QtCore/qpycore_qobject_getattr.cpp ../qpy/QtCore/qpycore_pyqtconfigure.cpp ../qpy/QtCore/qpycore_pyqtslot.cpp ../qpy/QtCore/qpycore_pyqtproperty.cpp ../qpy/QtCore/qpycore_pyqtproxy.cpp ../qpy/QtCore/qpycore_qobject_helpers.cpp ../qpy/QtCore/qpycore_public_api.cpp ../qpy/QtCore/qpycore_sip_helpers.cpp