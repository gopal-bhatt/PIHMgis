/****************************************************************************
** Meta object code from reading C++ file 'calibfile.h'
**
** Created: Wed Aug 19 05:22:09 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calibfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CalibFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,
      66,   10,   10,   10, 0x08,
      96,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CalibFile[] = {
    "CalibFile\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonBrowse_clicked()\0"
    "on_pushButtonClose_clicked()\0"
};

const QMetaObject CalibFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CalibFile,
      qt_meta_data_CalibFile, 0 }
};

const QMetaObject *CalibFile::metaObject() const
{
    return &staticMetaObject;
}

void *CalibFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalibFile))
	return static_cast<void*>(const_cast< CalibFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int CalibFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonRun_clicked(); break;
        case 2: on_pushButtonBrowse_clicked(); break;
        case 3: on_pushButtonClose_clicked(); break;
        }
        _id -= 4;
    }
    return _id;
}
