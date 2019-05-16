VERSION = 1.2
QMAKE_TARGET_DESCRIPTION = "Qt app that displays SQL table; for educational purposes"
QMAKE_TARGET_COPYRIGHT   = "Andrzej Wojtowicz, Adam Mickiewicz University in Poznan"
QMAKE_TARGET_PRODUCT     = "Qt SQL Example"

QT      += core gui sql widgets

TARGET   = qt-sql-example
TEMPLATE = app

SOURCES += src/main.cpp\
           src/mainwindow.cpp \
           src/db_controller.cpp \
    src/base_window.cpp \
    src/form.cpp \
    src/user_ui.cpp \
    src/admin_ui.cpp \
    src/manager_ui.cpp

HEADERS += src/mainwindow.h \
           src/db_controller.h \
    src/base_window.h \
    src/form.h \
    src/user_ui.h \
    src/admin_ui.h \
    src/manager_ui.h

FORMS   += src/mainwindow.ui \
    src/base_window.ui \
    src/form.ui \
    src/user_ui.ui \
    src/admin_ui.ui \
    src/manager_ui.ui

RESOURCES += res/icons.qrc

win32:RC_ICONS += res/database.ico
