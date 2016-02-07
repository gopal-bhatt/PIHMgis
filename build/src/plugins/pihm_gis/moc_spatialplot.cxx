/****************************************************************************
** Meta object code from reading C++ file 'spatialplot.h'
**
** Created: Tue Jul 27 23:38:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/Analysis/SpatialPlot/spatialplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spatialplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_spatialPlotDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      37,   15,   15,   15, 0x0a,
      58,   15,   15,   15, 0x0a,
      76,   15,   15,   15, 0x0a,
      87,   15,   15,   15, 0x0a,
      94,   15,   15,   15, 0x08,
     128,  122,   15,   15, 0x08,
     176,  122,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_spatialPlotDlg[] = {
    "spatialPlotDlg\0\0browseEleShapeFile()\0"
    "browseRivShapeFile()\0browseModelFile()\0"
    "generate()\0help()\0on_cancelButton_2_clicked()\0"
    "index\0on_comboBoxRivVariable_currentIndexChanged(int)\0"
    "on_comboBoxEleVariable_currentIndexChanged(int)\0"
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
	return static_cast<void*>(const_cast< spatialPlotDlg*>(this));
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
        case 5: on_cancelButton_2_clicked(); break;
        case 6: on_comboBoxRivVariable_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_comboBoxEleVariable_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}
