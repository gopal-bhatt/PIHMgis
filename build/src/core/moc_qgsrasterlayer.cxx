/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterlayer.h'
**
** Created: Wed Jun 11 19:03:32 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/raster/qgsrasterlayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsRasterLayer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x0a,
      71,   50,   42,   15, 0x0a,
     112,   15,   42,   15, 0x2a,
     221,  145,   15,   15, 0x0a,
     310,  258,   15,   15, 0x2a,
     370,  342,   15,   15, 0x2a,
     410,  397,   15,   15, 0x2a,
     448,  397,  433,   15, 0x0a,
     475,  464,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsRasterLayer[] = {
    "QgsRasterLayer\0\0,\0updateProgress(int,int)\0"
    "QString\0,theResamplingMethod\0"
    "buildPyramids(RasterPyramidList,QString)\0"
    "buildPyramids(RasterPyramidList)\0"
    "theBandNoInt,theBinCountInt,theIgnoreOutOfRangeFlag,theThoroughBandSca"
    "nFlag\0"
    "populateHistogram(int,int,bool,bool)\0"
    "theBandNoInt,theBinCountInt,theIgnoreOutOfRangeFlag\0"
    "populateHistogram(int,int,bool)\0"
    "theBandNoInt,theBinCountInt\0"
    "populateHistogram(int,int)\0theBandNoInt\0"
    "populateHistogram(int)\0QgsColorTable*\0"
    "colorTable(int)\0theMessage\0"
    "showStatusMessage(QString)\0"
};

const QMetaObject QgsRasterLayer::staticMetaObject = {
    { &QgsMapLayer::staticMetaObject, qt_meta_stringdata_QgsRasterLayer,
      qt_meta_data_QgsRasterLayer, 0 }
};

const QMetaObject *QgsRasterLayer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsRasterLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterLayer))
	return static_cast<void*>(const_cast< QgsRasterLayer*>(this));
    return QgsMapLayer::qt_metacast(_clname);
}

int QgsRasterLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: { QString _r = buildPyramids((*reinterpret_cast< const RasterPyramidList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = buildPyramids((*reinterpret_cast< const RasterPyramidList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: populateHistogram((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: populateHistogram((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: populateHistogram((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: populateHistogram((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { QgsColorTable* _r = colorTable((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsColorTable**>(_a[0]) = _r; }  break;
        case 8: showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
