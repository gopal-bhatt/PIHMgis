/****************************************************************************
** Meta object code from reading C++ file 'mapcoordsdialog.h'
**
** Created: Tue Jun 22 23:12:32 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/georeferencer/mapcoordsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapcoordsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_MapCoordsDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      39,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   16,   16,   16, 0x0a,
      91,   16,   16,   16, 0x0a,
     117,   16,   16,   16, 0x0a,
     151,  149,   16,   16, 0x0a,
     189,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MapCoordsDialog[] = {
    "MapCoordsDialog\0\0pixelCoords,mapCoords\0"
    "pointAdded(QgsPoint,QgsPoint)\0"
    "on_buttonOk_clicked()\0on_buttonCancel_clicked()\0"
    "on_btnPointFromCanvas_clicked()\0,\0"
    "maybeSetXY(QgsPoint&,Qt::MouseButton)\0"
    "updateOK()\0"
};

const QMetaObject MapCoordsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MapCoordsDialog,
      qt_meta_data_MapCoordsDialog, 0 }
};

const QMetaObject *MapCoordsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *MapCoordsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapCoordsDialog))
	return static_cast<void*>(const_cast< MapCoordsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MapCoordsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pointAdded((*reinterpret_cast< const QgsPoint(*)>(_a[1])),(*reinterpret_cast< const QgsPoint(*)>(_a[2]))); break;
        case 1: on_buttonOk_clicked(); break;
        case 2: on_buttonCancel_clicked(); break;
        case 3: on_btnPointFromCanvas_clicked(); break;
        case 4: maybeSetXY((*reinterpret_cast< QgsPoint(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 5: updateOK(); break;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MapCoordsDialog::pointAdded(const QgsPoint & _t1, const QgsPoint & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
