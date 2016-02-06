/****************************************************************************
** Meta object code from reading C++ file 'qgslinestyledialog.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgslinestyledialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslinestyledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLineStyleDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsLineStyleDialog[] = {
    "QgsLineStyleDialog\0\0queryStyle()\0"
};

const QMetaObject QgsLineStyleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLineStyleDialog,
      qt_meta_data_QgsLineStyleDialog, 0 }
};

const QMetaObject *QgsLineStyleDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLineStyleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLineStyleDialog))
	return static_cast<void*>(const_cast< QgsLineStyleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsLineStyleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: queryStyle(); break;
        }
        _id -= 1;
    }
    return _id;
}
