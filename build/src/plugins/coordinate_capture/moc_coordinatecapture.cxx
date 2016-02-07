/****************************************************************************
** Meta object code from reading C++ file 'coordinatecapture.h'
**
** Created: Tue Jun 22 23:13:00 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/coordinate_capture/coordinatecapture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coordinatecapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CoordinateCapture[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      29,   18,   18,   18, 0x0a,
      35,   18,   18,   18, 0x0a,
      44,   18,   18,   18, 0x0a,
      51,   18,   18,   18, 0x0a,
      69,   60,   18,   18, 0x0a,
      92,   60,   18,   18, 0x0a,
     113,   60,   18,   18, 0x0a,
     130,   18,   18,   18, 0x0a,
     137,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CoordinateCapture[] = {
    "CoordinateCapture\0\0initGui()\0run()\0"
    "unload()\0help()\0setCRS()\0thePoint\0"
    "mouseClicked(QgsPoint)\0mouseMoved(QgsPoint)\0"
    "update(QgsPoint)\0copy()\0setSourceCrs()\0"
};

const QMetaObject CoordinateCapture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoordinateCapture,
      qt_meta_data_CoordinateCapture, 0 }
};

const QMetaObject *CoordinateCapture::metaObject() const
{
    return &staticMetaObject;
}

void *CoordinateCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoordinateCapture))
	return static_cast<void*>(const_cast< CoordinateCapture*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< CoordinateCapture*>(this));
    return QObject::qt_metacast(_clname);
}

int CoordinateCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: setCRS(); break;
        case 5: mouseClicked((*reinterpret_cast< QgsPoint(*)>(_a[1]))); break;
        case 6: mouseMoved((*reinterpret_cast< QgsPoint(*)>(_a[1]))); break;
        case 7: update((*reinterpret_cast< QgsPoint(*)>(_a[1]))); break;
        case 8: copy(); break;
        case 9: setSourceCrs(); break;
        }
        _id -= 10;
    }
    return _id;
}
