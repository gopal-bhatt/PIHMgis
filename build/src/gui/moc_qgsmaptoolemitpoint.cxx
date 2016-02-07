/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolemitpoint.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsmaptoolemitpoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolemitpoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapToolEmitPoint[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      34,   21,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapToolEmitPoint[] = {
    "QgsMapToolEmitPoint\0\0point,button\0"
    "canvasClicked(QgsPoint&,Qt::MouseButton)\0"
};

const QMetaObject QgsMapToolEmitPoint::staticMetaObject = {
    { &QgsMapTool::staticMetaObject, qt_meta_stringdata_QgsMapToolEmitPoint,
      qt_meta_data_QgsMapToolEmitPoint, 0 }
};

const QMetaObject *QgsMapToolEmitPoint::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapToolEmitPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolEmitPoint))
	return static_cast<void*>(const_cast< QgsMapToolEmitPoint*>(this));
    return QgsMapTool::qt_metacast(_clname);
}

int QgsMapToolEmitPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: canvasClicked((*reinterpret_cast< QgsPoint(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsMapToolEmitPoint::canvasClicked(QgsPoint & _t1, Qt::MouseButton _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
