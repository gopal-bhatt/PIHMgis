/****************************************************************************
** Meta object code from reading C++ file 'initfile.h'
**
** Created: Sat Aug 22 06:38:33 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "initfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_InitFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      39,    9,    9,    9, 0x08,
      67,    9,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,
     162,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InitFile[] = {
    "InitFile\0\0on_pushButton_Help_clicked()\0"
    "on_pushButton_Run_clicked()\0"
    "on_pushButton_Close_clicked()\0"
    "on_pushButton_InitFile_clicked()\0"
    "on_pushButton_RivFile_clicked()\0"
    "on_pushButton_MeshFile_clicked()\0"
};

const QMetaObject InitFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InitFile,
      qt_meta_data_InitFile, 0 }
};

const QMetaObject *InitFile::metaObject() const
{
    return &staticMetaObject;
}

void *InitFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InitFile))
	return static_cast<void*>(const_cast< InitFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int InitFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Help_clicked(); break;
        case 1: on_pushButton_Run_clicked(); break;
        case 2: on_pushButton_Close_clicked(); break;
        case 3: on_pushButton_InitFile_clicked(); break;
        case 4: on_pushButton_RivFile_clicked(); break;
        case 5: on_pushButton_MeshFile_clicked(); break;
        }
        _id -= 6;
    }
    return _id;
}
