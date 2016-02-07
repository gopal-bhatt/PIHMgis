/****************************************************************************
** Meta object code from reading C++ file 'streampolyline.h'
**
** Created: Tue Jul 27 23:38:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/RasterProcessing/StreamPolyLine/streampolyline.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streampolyline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_StreamPolyLineDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      36,   18,   18,   18, 0x0a,
      53,   18,   18,   18, 0x0a,
      68,   18,   18,   18, 0x0a,
      74,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StreamPolyLineDlg[] = {
    "StreamPolyLineDlg\0\0inputSTRBrowse()\0"
    "inputFDRBrowse()\0outputBrowse()\0run()\0"
    "help()\0"
};

const QMetaObject StreamPolyLineDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StreamPolyLineDlg,
      qt_meta_data_StreamPolyLineDlg, 0 }
};

const QMetaObject *StreamPolyLineDlg::metaObject() const
{
    return &staticMetaObject;
}

void *StreamPolyLineDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StreamPolyLineDlg))
	return static_cast<void*>(const_cast< StreamPolyLineDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int StreamPolyLineDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputSTRBrowse(); break;
        case 1: inputFDRBrowse(); break;
        case 2: outputBrowse(); break;
        case 3: run(); break;
        case 4: help(); break;
        }
        _id -= 5;
    }
    return _id;
}
