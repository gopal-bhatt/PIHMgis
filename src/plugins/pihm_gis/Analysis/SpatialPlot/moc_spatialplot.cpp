/****************************************************************************
** Meta object code from reading C++ file 'spatialplot.h'
**
** Created: Mon Jul 23 13:02:01 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spatialplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spatialplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_spatialPlotDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      37,   15,   15,   15, 0x0a,
      58,   15,   15,   15, 0x0a,
      76,   15,   15,   15, 0x0a,
      87,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_spatialPlotDlg[] = {
    "spatialPlotDlg\0\0browseEleShapeFile()\0browseRivShapeFile()\0"
    "browseModelFile()\0generate()\0help()\0"
};

const QMetaObject spatialPlotDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_spatialPlotDlg,
      qt_meta_data_spatialPlotDlg, 0 }
};

const QMetaObject *spatialPlotDlg::metaObject() const
{
    return &staticMetaObject;
}

void *spatialPlotDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_spatialPlotDlg))
	return static_cast<void*>(const_cast<spatialPlotDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int spatialPlotDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browseEleShapeFile(); break;
        case 1: browseRivShapeFile(); break;
        case 2: browseModelFile(); break;
        case 3: generate(); break;
        case 4: help(); break;
        }
        _id -= 5;
    }
    return _id;
}
