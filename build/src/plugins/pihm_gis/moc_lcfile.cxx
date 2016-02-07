/****************************************************************************
** Meta object code from reading C++ file 'lcfile.h'
**
** Created: Tue Jul 27 23:38:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/DataModelLoader/LCFile/lcfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lcfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_LCFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,
      63,    7,    7,    7, 0x08,
      89,    7,    7,    7, 0x08,
     117,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LCFile[] = {
    "LCFile\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonLC_clicked()\0"
    "on_pushButtonNLCD_clicked()\0"
    "on_pushButtonClose_clicked()\0"
};

const QMetaObject LCFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LCFile,
      qt_meta_data_LCFile, 0 }
};

const QMetaObject *LCFile::metaObject() const
{
    return &staticMetaObject;
}

void *LCFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LCFile))
	return static_cast<void*>(const_cast< LCFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int LCFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonRun_clicked(); break;
        case 2: on_pushButtonLC_clicked(); break;
        case 3: on_pushButtonNLCD_clicked(); break;
        case 4: on_pushButtonClose_clicked(); break;
        }
        _id -= 5;
    }
    return _id;
}
