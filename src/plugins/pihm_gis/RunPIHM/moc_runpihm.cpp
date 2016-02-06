/****************************************************************************
** Meta object code from reading C++ file 'runpihm.h'
**
** Created: Mon Jul 23 11:58:16 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "runpihm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runpihm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_runPIHMDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      27,   11,   11,   11, 0x0a,
      33,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_runPIHMDlg[] = {
    "runPIHMDlg\0\0folderBrowse()\0run()\0help()\0"
};

const QMetaObject runPIHMDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_runPIHMDlg,
      qt_meta_data_runPIHMDlg, 0 }
};

const QMetaObject *runPIHMDlg::metaObject() const
{
    return &staticMetaObject;
}

void *runPIHMDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_runPIHMDlg))
	return static_cast<void*>(const_cast<runPIHMDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int runPIHMDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: folderBrowse(); break;
        case 1: run(); break;
        case 2: help(); break;
        }
        _id -= 3;
    }
    return _id;
}
