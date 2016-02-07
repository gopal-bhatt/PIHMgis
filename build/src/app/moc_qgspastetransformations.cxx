/****************************************************************************
** Meta object code from reading C++ file 'qgspastetransformations.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgspastetransformations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspastetransformations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsPasteTransformations[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      34,   24,   24,   24, 0x0a,
      61,   51,   24,   24, 0x0a,
      84,   51,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsPasteTransformations[] = {
    "QgsPasteTransformations\0\0accept()\0"
    "addNewTransfer()\0layerName\0"
    "sourceChanged(QString)\0"
    "destinationChanged(QString)\0"
};

const QMetaObject QgsPasteTransformations::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsPasteTransformations,
      qt_meta_data_QgsPasteTransformations, 0 }
};

const QMetaObject *QgsPasteTransformations::metaObject() const
{
    return &staticMetaObject;
}

void *QgsPasteTransformations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPasteTransformations))
	return static_cast<void*>(const_cast< QgsPasteTransformations*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsPasteTransformations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: addNewTransfer(); break;
        case 2: sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: destinationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}
