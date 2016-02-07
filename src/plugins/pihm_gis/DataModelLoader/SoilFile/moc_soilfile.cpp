/****************************************************************************
** Meta object code from reading C++ file 'soilfile.h'
**
** Created: Tue Aug 18 04:00:16 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "soilfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soilfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_SoilFile[] = {

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
      70,    9,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,
     132,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SoilFile[] = {
    "SoilFile\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonSoilFile_clicked()\0"
    "on_pushButtonSoilTexture_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonClose_clicked()\0"
};

const QMetaObject SoilFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SoilFile,
      qt_meta_data_SoilFile, 0 }
};

const QMetaObject *SoilFile::metaObject() const
{
    return &staticMetaObject;
}

void *SoilFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoilFile))
	return static_cast<void*>(const_cast< SoilFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int SoilFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonSoilFile_clicked(); break;
        case 2: on_pushButtonSoilTexture_clicked(); break;
        case 3: on_pushButtonRun_clicked(); break;
        case 4: on_pushButtonClose_clicked(); break;
        }
        _id -= 5;
    }
    return _id;
}
