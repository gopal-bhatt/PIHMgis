/****************************************************************************
** Meta object code from reading C++ file 'qgscontinuouscolordialog.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgscontinuouscolordialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscontinuouscolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsContinuousColorDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      34,   25,   25,   25, 0x09,
      55,   25,   25,   25, 0x09,
      76,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsContinuousColorDialog[] = {
    "QgsContinuousColorDialog\0\0apply()\0"
    "selectMinimumColor()\0selectMaximumColor()\0"
    "on_cb_polygonOutline_clicked()\0"
};

const QMetaObject QgsContinuousColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsContinuousColorDialog,
      qt_meta_data_QgsContinuousColorDialog, 0 }
};

const QMetaObject *QgsContinuousColorDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsContinuousColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsContinuousColorDialog))
	return static_cast<void*>(const_cast< QgsContinuousColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsContinuousColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: selectMinimumColor(); break;
        case 2: selectMaximumColor(); break;
        case 3: on_cb_polygonOutline_clicked(); break;
        }
        _id -= 4;
    }
    return _id;
}
