/****************************************************************************
** Meta object code from reading C++ file 'qgsludialog.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsludialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsludialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLUDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsLUDialog[] = {
    "QgsLUDialog\0"
};

const QMetaObject QgsLUDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLUDialog,
      qt_meta_data_QgsLUDialog, 0 }
};

const QMetaObject *QgsLUDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLUDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLUDialog))
	return static_cast<void*>(const_cast< QgsLUDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsLUDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
