# -------------------------------------------------
# Project created by QtCreator 2010-05-17T14:32:58
# -------------------------------------------------
QT += qt3support
TARGET = RunAllRaster
TEMPLATE = app
SOURCES += main.cpp \
    runallraster.cpp \
    pihmRasterLIBS/streamSegmentationShp.cpp \
    pihmRasterLIBS/streamSegmentation.cpp \
    pihmRasterLIBS/streamDefinition.cpp \
    pihmRasterLIBS/setdir.cpp \
    pihmRasterLIBS/lsmcom.cpp \
    pihmRasterLIBS/gridio_null.cpp \
    pihmRasterLIBS/gridio.cpp \
    pihmRasterLIBS/flood.cpp \
    pihmRasterLIBS/catProcessing.cpp \
    pihmRasterLIBS/catPoly.cpp \
    pihmRasterLIBS/callocate.cpp \
    pihmRasterLIBS/avcalls_null.cpp \
    pihmRasterLIBS/aread8.cpp \
    pihmLIBS/shpopen.c \
    pihmLIBS/dbfopen.c
HEADERS += runallraster.h \
    pihmRasterLIBS/streamSegmentationShp.h \
    pihmRasterLIBS/streamSegmentation.h \
    pihmRasterLIBS/streamDefinition.h \
    pihmRasterLIBS/setdir.h \
    pihmRasterLIBS/lsm.h \
    pihmRasterLIBS/gridio.h \
    pihmRasterLIBS/gioapi.h \
    pihmRasterLIBS/flood.h \
    pihmRasterLIBS/catProcessing.h \
    pihmRasterLIBS/catPoly.h \
    pihmRasterLIBS/bin2ascii.h \
    pihmRasterLIBS/avexec32.h \
    pihmRasterLIBS/aread8.h \
    pihmLIBS/shapefil.h
FORMS += runallraster.ui
