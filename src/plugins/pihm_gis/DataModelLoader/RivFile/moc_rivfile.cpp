/****************************************************************************
** Meta object code from reading C++ file 'rivfile.h'
**
** Created: Wed Feb 21 01:57:50 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rivfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rivfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_rivFileDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      38,   11,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      65,   11,   11,   11, 0x0a,
      77,   11,   11,   11, 0x0a,
      83,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rivFileDlg[] = {
    "rivFileDlg\0\0riverBrowse()\0eleBrowse()\0nodeBrowse()\0neighBrowse()\0"
    "rivBrowse()\0run()\0help()\0"
};

const QMetaObject rivFileDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rivFileDlg,
      qt_meta_data_rivFileDlg, 0 }
};

const QMetaObject *rivFileDlg::metaObject() const
{
    return &staticMetaObject;
}

void *rivFileDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rivFileDlg))
	return static_cast<void*>(const_cast<rivFileDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int rivFileDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: riverBrowse(); break;
        case 1: eleBrowse(); break;
        case 2: nodeBrowse(); break;
        case 3: neighBrowse(); break;
        case 4: rivBrowse(); break;
        case 5: run(); break;
        case 6: help(); break;
        }
        _id -= 7;
    }
    return _id;
}
