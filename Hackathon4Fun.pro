#-------------------------------------------------
#
# Project created by QtCreator 2017-04-07T14:45:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hackathon4Fun
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    libs/jsoncpp/jsoncpp.cpp \
    model/Admin.cpp \
    model/Hackathon.cpp \
    model/PersistableObject.cpp \
    model/TeamMember.cpp \
    model/User.cpp \
    persistence/BasePersistenceManager.cpp \
    persistence/HackathonPersistenceManager.cpp \
    utils/DirectoryHelper.cpp \
    hackathonView.cpp \
    hackathoncreatorView.cpp \
    loginview.cpp \
    stepview.cpp \
    stepcreatorview.cpp \
    teamview.cpp \
    teamcreatorview.cpp \
    teammemberview.cpp \
    teammembercreatorview.cpp \
    model/Mark.cpp \
    model/Step.cpp \
    model/Team.cpp \
    manager/HackathonManager.cpp \
    Dashboard.cpp \
    hackathondetailview.cpp \
    addmarkview.cpp

HEADERS  += \
    libs/jsoncpp/json/json-forwards.h \
    libs/jsoncpp/json/json.h \
    model/enum/PersistenceErrorHandler.h \
    model/Admin.h \
    model/Hackathon.h \
    model/PersistableObject.h \
    model/TeamMember.h \
    model/User.h \
    persistence/BasePersistenceManager.h \
    persistence/HackathonPersistenceManager.h \
    utils/DirectoryHelper.h \
    hackathonview.h \
    hackathoncreatorview.h \
    loginview.h \
    stepview.h \
    stepcreatorview.h \
    teamview.h \
    teamcreatorview.h \
    teammemberview.h \
    teammembercreatorview.h \
    model/Mark.h \
    model/Step.h \
    model/Team.h \
    manager/HackathonManager.h \
    Dashboard.h \
    hackathondetailview.h \
    addmarkview.h

FORMS    += login.ui \
    hackathon.ui \
    hackathoncreator.ui \
    team.ui \
    teamcreator.ui \
    step.ui \
    stepcreator.ui \
    teammember.ui \
    teammembercreator.ui \
    Dashboard.ui \
    hackathondetailview.ui \
    addmarkview.ui

DISTFILES +=
