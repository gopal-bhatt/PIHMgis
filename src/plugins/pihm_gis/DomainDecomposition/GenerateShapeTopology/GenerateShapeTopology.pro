######################################################################
# Automatically generated by qmake (2.00a) Mon Feb 19 03:08:52 2007
######################################################################

TEMPLATE = app
TARGET += 
DEPENDPATH += . pihmLIBS pihmLIBS/helpDialog
INCLUDEPATH += . pihmLIBS pihmLIBS/helpDialog
QT += qt3support
# Input
HEADERS += generateshapetopology.h \
           pihmLIBS/createTinShapeFile.h \
           pihmLIBS/generatePolyFile.h \
           pihmLIBS/homeDir.h \
           pihmLIBS/line.h \
           pihmLIBS/mergeFeatures.h \
           pihmLIBS/pickGridValue.h \
           pihmLIBS/polygonToPolyline.h \
           pihmLIBS/shapefil.h \
           pihmLIBS/simplifyPolyline.h \
           pihmLIBS/simplifyPolySHP.h \
           pihmLIBS/splitLineAtVertices.h \
           pihmLIBS/helpDialog/helpdialog.h
FORMS += generateshapetopology.ui pihmLIBS/helpDialog/helpdialog.ui
SOURCES += main.cpp \
           pihmLIBS/dbfopen.c \
           pihmLIBS/shpopen.c \
           generateshapetopology.cpp \
           pihmLIBS/helpDialog/helpdialog.cpp