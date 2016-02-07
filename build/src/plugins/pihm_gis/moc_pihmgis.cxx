/****************************************************************************
** Meta object code from reading C++ file 'pihmgis.h'
**
** Created: Tue Jul 27 23:38:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/pihmgis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pihmgis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_PIHMgis[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      19,    8,    8,    8, 0x0a,
      25,    8,    8,    8, 0x0a,
      34,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      60,    8,    8,    8, 0x0a,
      77,    8,    8,    8, 0x0a,
      95,    8,    8,    8, 0x0a,
     114,    8,    8,    8, 0x0a,
     132,    8,    8,    8, 0x0a,
     146,    8,    8,    8, 0x0a,
     160,    8,    8,    8, 0x0a,
     176,    8,    8,    8, 0x0a,
     190,    8,    8,    8, 0x0a,
     210,    8,    8,    8, 0x0a,
     229,    8,    8,    8, 0x0a,
     251,    8,    8,    8, 0x0a,
     265,    8,    8,    8, 0x0a,
     288,    8,    8,    8, 0x0a,
     306,    8,    8,    8, 0x0a,
     321,    8,    8,    8, 0x0a,
     338,    8,    8,    8, 0x0a,
     356,    8,    8,    8, 0x0a,
     383,    8,    8,    8, 0x0a,
     400,    8,    8,    8, 0x0a,
     416,    8,    8,    8, 0x0a,
     429,    8,    8,    8, 0x0a,
     442,    8,    8,    8, 0x0a,
     455,    8,    8,    8, 0x0a,
     469,    8,    8,    8, 0x0a,
     483,    8,    8,    8, 0x0a,
     497,    8,    8,    8, 0x0a,
     509,    8,    8,    8, 0x0a,
     524,    8,    8,    8, 0x0a,
     538,    8,    8,    8, 0x0a,
     551,    8,    8,    8, 0x0a,
     565,    8,    8,    8, 0x0a,
     575,    8,    8,    8, 0x0a,
     593,    8,    8,    8, 0x0a,
     614,    8,    8,    8, 0x0a,
     625,    8,    8,    8, 0x0a,
     639,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PIHMgis[] = {
    "PIHMgis\0\0initGui()\0run()\0unload()\0"
    "help()\0runDefineProject()\0runOpenProject()\0"
    "runCloseProject()\0runImportProject()\0"
    "runRunAllRaster()\0runFillPits()\0"
    "runFlowGrid()\0runStreamGrid()\0"
    "runLinkGrid()\0runStreamPolyLine()\0"
    "runCatchmentGrid()\0runCatchmentPolygon()\0"
    "runDissolve()\0runPolygonToPolyline()\0"
    "runSimplifyLine()\0runSplitLine()\0"
    "runVectorMerge()\0runRunAllDomain()\0"
    "runGenerateShapeTopology()\0runRunTriangle()\0"
    "runCreateTINs()\0runMshFile()\0runAttFile()\0"
    "runRivFile()\0runParaFile()\0runSoilFile()\0"
    "runGeolFile()\0runLCFile()\0runCalibFile()\0"
    "runInitFile()\0runIBCFile()\0runForcFile()\0"
    "runPIHM()\0runSpatialPlots()\0"
    "runTimeSeriesPlots()\0runAbout()\0"
    "runHomePage()\0runOnlineHelp()\0"
};

const QMetaObject PIHMgis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PIHMgis,
      qt_meta_data_PIHMgis, 0 }
};

const QMetaObject *PIHMgis::metaObject() const
{
    return &staticMetaObject;
}

void *PIHMgis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PIHMgis))
	return static_cast<void*>(const_cast< PIHMgis*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< PIHMgis*>(this));
    return QObject::qt_metacast(_clname);
}

int PIHMgis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: run(); break;
        case 2: unload(); break;
        case 3: help(); break;
        case 4: runDefineProject(); break;
        case 5: runOpenProject(); break;
        case 6: runCloseProject(); break;
        case 7: runImportProject(); break;
        case 8: runRunAllRaster(); break;
        case 9: runFillPits(); break;
        case 10: runFlowGrid(); break;
        case 11: runStreamGrid(); break;
        case 12: runLinkGrid(); break;
        case 13: runStreamPolyLine(); break;
        case 14: runCatchmentGrid(); break;
        case 15: runCatchmentPolygon(); break;
        case 16: runDissolve(); break;
        case 17: runPolygonToPolyline(); break;
        case 18: runSimplifyLine(); break;
        case 19: runSplitLine(); break;
        case 20: runVectorMerge(); break;
        case 21: runRunAllDomain(); break;
        case 22: runGenerateShapeTopology(); break;
        case 23: runRunTriangle(); break;
        case 24: runCreateTINs(); break;
        case 25: runMshFile(); break;
        case 26: runAttFile(); break;
        case 27: runRivFile(); break;
        case 28: runParaFile(); break;
        case 29: runSoilFile(); break;
        case 30: runGeolFile(); break;
        case 31: runLCFile(); break;
        case 32: runCalibFile(); break;
        case 33: runInitFile(); break;
        case 34: runIBCFile(); break;
        case 35: runForcFile(); break;
        case 36: runPIHM(); break;
        case 37: runSpatialPlots(); break;
        case 38: runTimeSeriesPlots(); break;
        case 39: runAbout(); break;
        case 40: runHomePage(); break;
        case 41: runOnlineHelp(); break;
        }
        _id -= 42;
    }
    return _id;
}
