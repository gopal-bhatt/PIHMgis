/****************************************************************************
** Meta object code from reading C++ file 'qgsmarkerdialog.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsmarkerdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmarkerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMarkerDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      35,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMarkerDialog[] = {
    "QgsMarkerDialog\0\0changeDirectory()\0"
    "updateSelectedMarker()\0"
};

const QMetaObject QgsMarkerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMarkerDialog,
      qt_meta_data_QgsMarkerDialog, 0 }
};

const QMetaObject *QgsMarkerDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMarkerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMarkerDialog))
	return static_cast<void*>(const_cast< QgsMarkerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsMarkerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeDirectory(); break;
        case 1: updateSelectedMarker(); break;
        }
        _id -= 2;
    }
    return _id;
}
