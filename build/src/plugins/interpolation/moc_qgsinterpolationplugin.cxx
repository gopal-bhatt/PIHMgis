/****************************************************************************
** Meta object code from reading C++ file 'qgsinterpolationplugin.h'
**
** Created: Tue Jun 22 23:11:24 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/interpolation/qgsinterpolationplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsinterpolationplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsInterpolationPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsInterpolationPlugin[] = {
    "QgsInterpolationPlugin\0\0"
    "showInterpolationDialog()\0"
};

const QMetaObject QgsInterpolationPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsInterpolationPlugin,
      qt_meta_data_QgsInterpolationPlugin, 0 }
};

const QMetaObject *QgsInterpolationPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsInterpolationPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsInterpolationPlugin))
	return static_cast<void*>(const_cast< QgsInterpolationPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsInterpolationPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsInterpolationPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showInterpolationDialog(); break;
        }
        _id -= 1;
    }
    return _id;
}
