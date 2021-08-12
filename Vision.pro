QT += quick

CONFIG += c++11

TARGET=VisionQ

DESTDIR+=bin


#指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
RCC_DIR += tmp

#指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录
MOC_DIR += tmp

#指定目标文件(obj)的存放目录
OBJECTS_DIR += tmp

#程序编译时依赖的相关路径
DEPENDPATH += . forms include qrc sources

#头文件包含路径
INCLUDEPATH += Inc/\

#源文件编码方式
CODECFORSRC = UTF-8

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Refer to the documentation for the
# deprecated API to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


TRANSLATIONS += \
    Vision_zh_CN.ts

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SOURCES += \
    src/main.cpp

RESOURCES += \
    qml.qrc

HEADERS += \
    Inc/Test.h


