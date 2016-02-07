/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created: Tue Jun 22 23:11:52 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/north_arrow/plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsNorthArrowPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      31,   20,   20,   20, 0x0a,
      45,   20,   20,   20, 0x0a,
      51,   20,   20,   20, 0x0a,
      79,   20,   20,   20, 0x0a,
     100,   20,   20,   20, 0x0a,
     116,   20,   20,   20, 0x0a,
     125,   20,   20,   20, 0x0a,
     132,   20,   20,   20, 0x0a,
     150,   20,   20,   20, 0x0a,
     167,   20,   20,   20, 0x0a,
     191,   20,  186,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsNorthArrowPlugin[] = {
    "QgsNorthArrowPlugin\0\0initGui()\0"
    "projectRead()\0run()\0renderNorthArrow(QPainter*)\0"
    "rotationChanged(int)\0refreshCanvas()\0"
    "unload()\0help()\0setPlacement(int)\0"
    "setEnabled(bool)\0setAutomatic(bool)\0"
    "bool\0calculateNorthDirection()\0"
};

const QMetaObject QgsNorthArrowPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsNorthArrowPlugin,
      qt_meta_data_QgsNorthArrowPlugin, 0 }
};

const QMetaObject *QgsNorthArrowPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsNorthArrowPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNorthArrowPlugin))
	return static_cast<void*>(const_cast< QgsNorthArrowPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsNorthArrowPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsNorthArrowPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: projectRead(); break;
        case 2: run(); break;
        case 3: renderNorthArrow((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 4: rotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: refreshCanvas(); break;
        case 6: unload(); break;
        case 7: help(); break;
        case 8: setPlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: setAutomatic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = calculateNorthDirection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 12;
    }
    return _id;
}
