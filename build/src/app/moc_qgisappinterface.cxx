/****************************************************************************
** Meta object code from reading C++ file 'qgisappinterface.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgisappinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgisappinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgisAppInterface[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgisAppInterface[] = {
    "QgisAppInterface\0"
};

const QMetaObject QgisAppInterface::staticMetaObject = {
    { &QgisInterface::staticMetaObject, qt_meta_stringdata_QgisAppInterface,
      qt_meta_data_QgisAppInterface, 0 }
};

const QMetaObject *QgisAppInterface::metaObject() const
{
    return &staticMetaObject;
}

void *QgisAppInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgisAppInterface))
	return static_cast<void*>(const_cast< QgisAppInterface*>(this));
    return QgisInterface::qt_metacast(_clname);
}

int QgisAppInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgisInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
