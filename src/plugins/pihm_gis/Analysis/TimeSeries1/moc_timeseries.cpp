/****************************************************************************
** Meta object code from reading C++ file 'timeseries.h'
**
** Created: Wed May 27 04:53:06 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timeseries.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timeseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_timeSeriesDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,
      31,   14,   14,   14, 0x0a,
      42,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_timeSeriesDlg[] = {
    "timeSeriesDlg\0\0browse()\0plot()\0"
    "savePlot()\0help()\0"
};

const QMetaObject timeSeriesDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_timeSeriesDlg,
      qt_meta_data_timeSeriesDlg, 0 }
};

const QMetaObject *timeSeriesDlg::metaObject() const
{
    return &staticMetaObject;
}

void *timeSeriesDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_timeSeriesDlg))
	return static_cast<void*>(const_cast< timeSeriesDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int timeSeriesDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browse(); break;
        case 1: plot(); break;
        case 2: savePlot(); break;
        case 3: help(); break;
        }
        _id -= 4;
    }
    return _id;
}
