/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created: Tue Jun 22 23:11:58 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/scale_bar/plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsScaleBarPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      29,   18,   18,   18, 0x0a,
      43,   18,   18,   18, 0x0a,
      69,   18,   18,   18, 0x0a,
      75,   18,   18,   18, 0x0a,
      91,   18,   18,   18, 0x0a,
     100,   18,   18,   18, 0x0a,
     107,   18,   18,   18, 0x0a,
     125,   18,   18,   18, 0x0a,
     147,   18,   18,   18, 0x0a,
     165,   18,   18,   18, 0x0a,
     182,   18,   18,   18, 0x0a,
     196,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsScaleBarPlugin[] = {
    "QgsScaleBarPlugin\0\0initGui()\0projectRead()\0"
    "renderScaleBar(QPainter*)\0run()\0"
    "refreshCanvas()\0unload()\0help()\0"
    "setPlacement(int)\0setPreferredSize(int)\0"
    "setSnapping(bool)\0setEnabled(bool)\0"
    "setStyle(int)\0setColour(QColor)\0"
};

const QMetaObject QgsScaleBarPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsScaleBarPlugin,
      qt_meta_data_QgsScaleBarPlugin, 0 }
};

const QMetaObject *QgsScaleBarPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsScaleBarPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScaleBarPlugin))
	return static_cast<void*>(const_cast< QgsScaleBarPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsScaleBarPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsScaleBarPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: projectRead(); break;
        case 2: renderScaleBar((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 3: run(); break;
        case 4: refreshCanvas(); break;
        case 5: unload(); break;
        case 6: help(); break;
        case 7: setPlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setPreferredSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: setSnapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: setStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: setColour((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        }
        _id -= 13;
    }
    return _id;
}
