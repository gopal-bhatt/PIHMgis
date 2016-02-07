# -------------------------------------------------
# Project created by QtCreator 2010-05-17T15:21:51
# -------------------------------------------------
QT += qt3support
TARGET = RunAllDomain
TEMPLATE = app
SOURCES += main.cpp \
    runnalldomain.cpp \
    pihmLIBS/dbfopen.c \
    pihmLIBS/shpopen.c \
    pihmLIBS/triangle.cpp
HEADERS += runnalldomain.h \
    pihmLIBS/generatePolyFile.h \
    pihmLIBS/shapefil.h \
    pihmLIBS/triangle.h \
    pihmLIBS/createTinShapeFile.h
FORMS += runnalldomain.ui
