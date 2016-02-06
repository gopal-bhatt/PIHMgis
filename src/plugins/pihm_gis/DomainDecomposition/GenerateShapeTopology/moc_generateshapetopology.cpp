/****************************************************************************
** Meta object code from reading C++ file 'generateshapetopology.h'
**
** Created: Mon Feb 19 03:15:12 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "generateshapetopology.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generateshapetopology.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_generateShapeTopologyDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      40,   25,   25,   25, 0x0a,
      55,   25,   25,   25, 0x0a,
      61,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_generateShapeTopologyDlg[] = {
    "generateShapeTopologyDlg\0\0inputBrowse()\0outputBrowse()\0run()\0"
    "help()\0"
};

const QMetaObject generateShapeTopologyDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_generateShapeTopologyDlg,
      qt_meta_data_generateShapeTopologyDlg, 0 }
};

const QMetaObject *generateShapeTopologyDlg::metaObject() const
{
    return &staticMetaObject;
}

void *generateShapeTopologyDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_generateShapeTopologyDlg))
	return static_cast<void*>(const_cast<generateShapeTopologyDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int generateShapeTopologyDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputBrowse(); break;
        case 1: outputBrowse(); break;
        case 2: run(); break;
        case 3: help(); break;
        }
        _id -= 4;
    }
    return _id;
}
