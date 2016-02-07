/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created: Tue Jun 22 23:11:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/grid_maker/plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGridMakerPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      30,   19,   19,   19, 0x0a,
      36,   19,   19,   19, 0x0a,
      64,   61,   19,   19, 0x0a,
     105,   19,   19,   19, 0x0a,
     114,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsGridMakerPlugin[] = {
    "QgsGridMakerPlugin\0\0initGui()\0run()\0"
    "drawRasterLayer(QString)\0,,\0"
    "drawVectorLayer(QString,QString,QString)\0"
    "unload()\0help()\0"
};

const QMetaObject QgsGridMakerPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGridMakerPlugin,
      qt_meta_data_QgsGridMakerPlugin, 0 }
};

const QMetaObject *QgsGridMakerPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGridMakerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGridMakerPlugin))
	return static_cast<void*>(const_cast< QgsGridMakerPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsGridMakerPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsGridMakerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: run(); break;
        case 2: drawRasterLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: unload(); break;
        case 5: help(); break;
        }
        _id -= 6;
    }
    return _id;
}
