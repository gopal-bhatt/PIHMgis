/****************************************************************************
** Meta object code from reading C++ file 'qgslegendlayer.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/legend/qgslegendlayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegendlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLegendLayer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      33,   15,   15,   15, 0x0a,
      41,   15,   15,   15, 0x0a,
      59,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsLegendLayer[] = {
    "QgsLegendLayer\0\0showInOverview()\0"
    "table()\0saveAsShapefile()\0"
    "saveSelectionAsShapefile()\0"
};

const QMetaObject QgsLegendLayer::staticMetaObject = {
    { &QgsLegendItem::staticMetaObject, qt_meta_stringdata_QgsLegendLayer,
      qt_meta_data_QgsLegendLayer, 0 }
};

const QMetaObject *QgsLegendLayer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLegendLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendLayer))
	return static_cast<void*>(const_cast< QgsLegendLayer*>(this));
    return QgsLegendItem::qt_metacast(_clname);
}

int QgsLegendLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLegendItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showInOverview(); break;
        case 1: table(); break;
        case 2: saveAsShapefile(); break;
        case 3: saveSelectionAsShapefile(); break;
        }
        _id -= 4;
    }
    return _id;
}
