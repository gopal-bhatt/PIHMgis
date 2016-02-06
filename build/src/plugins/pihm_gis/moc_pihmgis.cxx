/****************************************************************************
** Meta object code from reading C++ file 'pihmgis.h'
**
** Created: Fri Jun 19 02:00:48 2009
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
      27,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      19,    8,    8,    8, 0x0a,
      25,    8,    8,    8, 0x0a,
      34,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      55,    8,    8,    8, 0x0a,
      69,    8,    8,    8, 0x0a,
      85,    8,    8,    8, 0x0a,
      99,    8,    8,    8, 0x0a,
     119,    8,    8,    8, 0x0a,
     138,    8,    8,    8, 0x0a,
     160,    8,    8,    8, 0x0a,
     183,    8,    8,    8, 0x0a,
     201,    8,    8,    8, 0x0a,
     216,    8,    8,    8, 0x0a,
     233,    8,    8,    8, 0x0a,
     260,    8,    8,    8, 0x0a,
     277,    8,    8,    8, 0x0a,
     293,    8,    8,    8, 0x0a,
     306,    8,    8,    8, 0x0a,
     319,    8,    8,    8, 0x0a,
     332,    8,    8,    8, 0x0a,
     346,    8,    8,    8, 0x0a,
     356,    8,    8,    8, 0x0a,
     374,    8,    8,    8, 0x0a,
     395,    8,    8,    8, 0x0a,
     406,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PIHMgis[] = {
    "PIHMgis\0\0initGui()\0run()\0unload()\0"
    "help()\0runFillPits()\0runFlowGrid()\0"
    "runStreamGrid()\0runLinkGrid()\0"
    "runStreamPolyLine()\0runCatchmentGrid()\0"
    "runCatchmentPolygon()\0runPolygonToPolyline()\0"
    "runSimplifyLine()\0runSplitLine()\0"
    "runVectorMerge()\0runGenerateShapeTopology()\0"
    "runRunTriangle()\0runCreateTINs()\0"
    "runMshFile()\0runAttFile()\0runRivFile()\0"
    "runParaFile()\0runPIHM()\0runSpatialPlots()\0"
    "runTimeSeriesPlots()\0runAbout()\0"
    "runHomePage()\0"
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
        case 4: runFillPits(); break;
        case 5: runFlowGrid(); break;
        case 6: runStreamGrid(); break;
        case 7: runLinkGrid(); break;
        case 8: runStreamPolyLine(); break;
        case 9: runCatchmentGrid(); break;
        case 10: runCatchmentPolygon(); break;
        case 11: runPolygonToPolyline(); break;
        case 12: runSimplifyLine(); break;
        case 13: runSplitLine(); break;
        case 14: runVectorMerge(); break;
        case 15: runGenerateShapeTopology(); break;
        case 16: runRunTriangle(); break;
        case 17: runCreateTINs(); break;
        case 18: runMshFile(); break;
        case 19: runAttFile(); break;
        case 20: runRivFile(); break;
        case 21: runParaFile(); break;
        case 22: runPIHM(); break;
        case 23: runSpatialPlots(); break;
        case 24: runTimeSeriesPlots(); break;
        case 25: runAbout(); break;
        case 26: runHomePage(); break;
        }
        _id -= 27;
    }
    return _id;
}
