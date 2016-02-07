/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created: Tue Jun 22 23:11:02 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/copyright_label/plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsCopyrightLabelPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      35,   24,   24,   24, 0x0a,
      49,   24,   24,   24, 0x0a,
      55,   24,   24,   24, 0x0a,
      78,   24,   24,   24, 0x0a,
      94,   24,   24,   24, 0x0a,
     103,   24,   24,   24, 0x0a,
     110,   24,   24,   24, 0x0a,
     125,   24,   24,   24, 0x0a,
     143,   24,   24,   24, 0x0a,
     160,   24,   24,   24, 0x0a,
     178,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsCopyrightLabelPlugin[] = {
    "QgsCopyrightLabelPlugin\0\0initGui()\0"
    "projectRead()\0run()\0renderLabel(QPainter*)\0"
    "refreshCanvas()\0unload()\0help()\0"
    "setFont(QFont)\0setLabel(QString)\0"
    "setColor(QColor)\0setPlacement(int)\0"
    "setEnable(bool)\0"
};

const QMetaObject QgsCopyrightLabelPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCopyrightLabelPlugin,
      qt_meta_data_QgsCopyrightLabelPlugin, 0 }
};

const QMetaObject *QgsCopyrightLabelPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsCopyrightLabelPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCopyrightLabelPlugin))
	return static_cast<void*>(const_cast< QgsCopyrightLabelPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsCopyrightLabelPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCopyrightLabelPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: projectRead(); break;
        case 2: run(); break;
        case 3: renderLabel((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 4: refreshCanvas(); break;
        case 5: unload(); break;
        case 6: help(); break;
        case 7: setFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 8: setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: setPlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: setEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 12;
    }
    return _id;
}
