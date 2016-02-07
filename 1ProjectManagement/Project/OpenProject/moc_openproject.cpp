/****************************************************************************
** Meta object code from reading C++ file 'openproject.h'
**
** Created: Wed May 26 02:07:54 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "openproject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_OpenProject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      41,   12,   12,   12, 0x08,
      70,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenProject[] = {
    "OpenProject\0\0on_pushButtonOpen_clicked()\0"
    "on_pushButtonClose_clicked()\0"
    "on_pushButtonFile_clicked()\0"
};

const QMetaObject OpenProject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OpenProject,
      qt_meta_data_OpenProject, 0 }
};

const QMetaObject *OpenProject::metaObject() const
{
    return &staticMetaObject;
}

void *OpenProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenProject))
	return static_cast<void*>(const_cast< OpenProject*>(this));
    return QDialog::qt_metacast(_clname);
}

int OpenProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonOpen_clicked(); break;
        case 1: on_pushButtonClose_clicked(); break;
        case 2: on_pushButtonFile_clicked(); break;
        }
        _id -= 3;
    }
    return _id;
}
