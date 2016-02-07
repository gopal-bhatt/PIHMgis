/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created: Tue Jun 22 23:13:23 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/ogr_converter/plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_OgrPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,
      27,   10,   10,   10, 0x0a,
      36,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OgrPlugin[] = {
    "OgrPlugin\0\0initGui()\0run()\0unload()\0"
    "help()\0"
};

const QMetaObject OgrPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OgrPlugin,
      qt_meta_data_OgrPlugin, 0 }
};

const QMetaObject *OgrPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *OgrPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OgrPlugin))
	return static_cast<void*>(const_cast< OgrPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< OgrPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int OgrPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        }
        _id -= 4;
    }
    return _id;
}
