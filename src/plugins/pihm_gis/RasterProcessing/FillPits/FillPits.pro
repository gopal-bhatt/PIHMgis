######################################################################
# Automatically generated by qmake (2.00a) Sat Feb 17 17:45:39 2007
######################################################################

TEMPLATE = app
TARGET += 
DEPENDPATH += . pihmLIBS pihmRasterLIBS pihmLIBS/helpDialog
INCLUDEPATH += . pihmLIBS pihmLIBS/helpDialog
QT += qt3support
# Input
HEADERS += fillpits.h \
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
           pihmRasterLIBS/avcalls_null.h \
           pihmRasterLIBS/avexec32.h \
           pihmRasterLIBS/flood.h \
           pihmRasterLIBS/gioapi.h \
           pihmRasterLIBS/gridio.h \
           pihmRasterLIBS/lsm.h \
           pihmLIBS/helpDialog/helpdialog.h
FORMS += fillpits.ui pihmLIBS/helpDialog/helpdialog.ui
SOURCES += main.cpp \
           pihmLIBS/dbfopen.c \
           pihmLIBS/shpopen.c \
           fillpits.cpp \
           pihmLIBS/helpDialog/helpdialog.cpp