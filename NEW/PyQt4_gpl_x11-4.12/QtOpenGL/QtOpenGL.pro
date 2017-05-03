TEMPLATE = lib
CONFIG += warn_on plugin
QT += opengl
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtOpenGL.pyd
    target.files = QtOpenGL.pyd
    LIBS += -L/home/thais/Faculdade/TCC/NEW/pyenv/lib -lpython27
} else {
    PY_MODULE = QtOpenGL.so
    target.files = QtOpenGL.so
}

target.CONFIG = no_check_exist
target.path = /home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/thais/Faculdade/TCC/NEW/pyenv/share/sip/PyQt4/QtOpenGL
sip.files = ../sip/QtOpenGL/qgl.sip ../sip/QtOpenGL/qglbuffer.sip ../sip/QtOpenGL/QtOpenGLmod.sip ../sip/QtOpenGL/qglpixelbuffer.sip ../sip/QtOpenGL/qglcolormap.sip ../sip/QtOpenGL/qglframebufferobject.sip ../sip/QtOpenGL/qglshaderprogram.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtOpenGL.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/thais/Faculdade/TCC/NEW/pyenv/include/python2.7
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtOpenGL

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtOpenGL
HEADERS = sipAPIQtOpenGL.h ../qpy/QtOpenGL/qpyopengl_api.h
SOURCES = sipQtOpenGLQGLFormat.cpp sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp sipQtOpenGLQGLBuffer.cpp sipQtOpenGLQGLFormatOptions.cpp sipQtOpenGLQGLColormap.cpp sipQtOpenGLQGLWidget.cpp sipQtOpenGLQGLFramebufferObjectFormat.cpp sipQtOpenGLQGLContext.cpp sipQtOpenGLcmodule.cpp sipQtOpenGLQGL.cpp sipQtOpenGLQGLContextBindOptions.cpp sipQtOpenGLQList0101QGLShader.cpp sipQtOpenGLQGLFramebufferObject.cpp sipQtOpenGLQGLShader.cpp sipQtOpenGLQGLShaderProgram.cpp sipQtOpenGLQGLPixelBuffer.cpp sipQtOpenGLQGLShaderShaderType.cpp ../qpy/QtOpenGL/qpyopengl_attribute_array.cpp ../qpy/QtOpenGL/qpyopengl_uniform_value_array.cpp
