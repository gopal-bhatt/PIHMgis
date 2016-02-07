/****************************************************************************
** Meta object code from reading C++ file 'qgswfsdata.h'
**
** Created: Tue Jun 22 23:10:53 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/providers/wfs/qgswfsdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswfsdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsWFSData[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsWFSData[] = {
    "QgsWFSData\0\0error\0setFinished(bool)\0"
};

const QMetaObject QgsWFSData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWFSData,
      qt_meta_data_QgsWFSData, 0 }
};

const QMetaObject *QgsWFSData::metaObject() const
{
    return &staticMetaObject;
}

void *QgsWFSData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSData))
	return static_cast<void*>(const_cast< QgsWFSData*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsWFSData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
