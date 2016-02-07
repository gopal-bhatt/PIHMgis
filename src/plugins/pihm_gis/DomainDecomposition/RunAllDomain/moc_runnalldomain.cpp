/****************************************************************************
** Meta object code from reading C++ file 'runnalldomain.h'
**
** Created: Mon May 17 15:44:58 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "runnalldomain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runnalldomain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_RunnAllDomain[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      43,   14,   14,   14, 0x08,
      72,   14,   14,   14, 0x08,
      99,   14,   14,   14, 0x08,
     127,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RunnAllDomain[] = {
    "RunnAllDomain\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonClose_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonMesh_clicked()\0"
    "on_pushButtonConstrain_clicked()\0"
};

const QMetaObject RunnAllDomain::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RunnAllDomain,
      qt_meta_data_RunnAllDomain, 0 }
};

const QMetaObject *RunnAllDomain::metaObject() const
{
    return &staticMetaObject;
}

void *RunnAllDomain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunnAllDomain))
	return static_cast<void*>(const_cast< RunnAllDomain*>(this));
    return QDialog::qt_metacast(_clname);
}

int RunnAllDomain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonClose_clicked(); break;
        case 2: on_pushButtonRun_clicked(); break;
        case 3: on_pushButtonMesh_clicked(); break;
        case 4: on_pushButtonConstrain_clicked(); break;
        }
        _id -= 5;
    }
    return _id;
}
