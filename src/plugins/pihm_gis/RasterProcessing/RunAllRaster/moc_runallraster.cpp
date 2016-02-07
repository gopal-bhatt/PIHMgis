/****************************************************************************
** Meta object code from reading C++ file 'runallraster.h'
**
** Created: Mon May 17 22:31:18 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "runallraster.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runallraster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_RunAllRaster[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      42,   13,   13,   13, 0x08,
      71,   13,   13,   13, 0x08,
      98,   13,   13,   13, 0x08,
     131,   13,   13,   13, 0x08,
     161,   13,   13,   13, 0x08,
     194,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RunAllRaster[] = {
    "RunAllRaster\0\0on_pushButtonHelp_clicked()\0"
    "on_pushButtonClose_clicked()\0"
    "on_pushButtonRun_clicked()\0"
    "on_pushButtonWatershed_clicked()\0"
    "on_pushButtonStream_clicked()\0"
    "on_pushButtonSuggestMe_clicked()\0"
    "on_pushButtonDEM_clicked()\0"
};

const QMetaObject RunAllRaster::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RunAllRaster,
      qt_meta_data_RunAllRaster, 0 }
};

const QMetaObject *RunAllRaster::metaObject() const
{
    return &staticMetaObject;
}

void *RunAllRaster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunAllRaster))
	return static_cast<void*>(const_cast< RunAllRaster*>(this));
    return QDialog::qt_metacast(_clname);
}

int RunAllRaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonHelp_clicked(); break;
        case 1: on_pushButtonClose_clicked(); break;
        case 2: on_pushButtonRun_clicked(); break;
        case 3: on_pushButtonWatershed_clicked(); break;
        case 4: on_pushButtonStream_clicked(); break;
        case 5: on_pushButtonSuggestMe_clicked(); break;
        case 6: on_pushButtonDEM_clicked(); break;
        }
        _id -= 7;
    }
    return _id;
}
