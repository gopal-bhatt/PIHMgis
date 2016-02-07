/****************************************************************************
** Meta object code from reading C++ file 'qgscontexthelp.h'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgscontexthelp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscontexthelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsContextHelp[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      27,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsContextHelp[] = {
    "QgsContextHelp\0\0readPort()\0processExited()\0"
};

const QMetaObject QgsContextHelp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsContextHelp,
      qt_meta_data_QgsContextHelp, 0 }
};

const QMetaObject *QgsContextHelp::metaObject() const
{
    return &staticMetaObject;
}

void *QgsContextHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsContextHelp))
	return static_cast<void*>(const_cast< QgsContextHelp*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsContextHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readPort(); break;
        case 1: processExited(); break;
        }
        _id -= 2;
    }
    return _id;
}
