/****************************************************************************
** Meta object code from reading C++ file 'qgsattributedialog.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsattributedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAttributeDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeDialog[] = {
    "QgsAttributeDialog\0\0selectFileName()\0"
};

const QMetaObject QgsAttributeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAttributeDialog,
      qt_meta_data_QgsAttributeDialog, 0 }
};

const QMetaObject *QgsAttributeDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeDialog))
	return static_cast<void*>(const_cast< QgsAttributeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsAttributeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectFileName(); break;
        }
        _id -= 1;
    }
    return _id;
}
