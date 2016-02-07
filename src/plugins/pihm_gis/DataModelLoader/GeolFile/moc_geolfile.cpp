/****************************************************************************
** Meta object code from reading C++ file 'geolfile.h'
**
** Created: Tue Aug 25 03:57:58 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "geolfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geolfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_GeolFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      38,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     132,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GeolFile[] = {
    "GeolFile\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonGeolFile_clicked()\0"
    "on_pushButtonGeolTexture_clicked()\0"
    "on_pushButtonClose_clicked()\0"
};

const QMetaObject GeolFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GeolFile,
      qt_meta_data_GeolFile, 0 }
};

const QMetaObject *GeolFile::metaObject() const
{
    return &staticMetaObject;
}

void *GeolFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeolFile))
	return static_cast<void*>(const_cast< GeolFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int GeolFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonRun_clicked(); break;
        case 2: on_pushButtonGeolFile_clicked(); break;
        case 3: on_pushButtonGeolTexture_clicked(); break;
        case 4: on_pushButtonClose_clicked(); break;
        }
        _id -= 5;
    }
    return _id;
}
