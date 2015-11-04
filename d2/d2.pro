#-------------------------------------------------
#
# Project created by QtCreator 2015-10-27T16:47:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = d2
TEMPLATE = app


SOURCES += main.cpp\
    choosewindow.cpp \
    profilewindow.cpp \
    projectwindow.cpp \
    projectdesc.cpp \
    adminwindow.cpp \
    project_obj.cpp \
    student_obj.cpp \
    studentpre_obj.cpp \
    entrywindow.cpp \
    db_utility.cpp \
    admin_obj.cpp \
    adminprojectwindow.cpp \
    createproject.cpp


HEADERS  += \
    entrywindow.h \
    choosewindow.h \
    profilewindow.h \
    projectwindow.h \
    projectdesc.h \
    adminwindow.h \
    project_obj.h \
    student_obj.h \
    studentpre_obj.h \
    db_utility.h \
    admin_obj.h \
    adminprojectwindow.h\
    createproject.h

FORMS    += \
    entrywindow.ui \
    choosewindow.ui \
    profilewindow.ui \
    projectwindow.ui \
    projectdesc.ui \
    adminwindow.ui \
    adminprojectwindow.ui \
    createproject.ui

