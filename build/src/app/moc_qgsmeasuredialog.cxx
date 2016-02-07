/****************************************************************************
** Meta object code from reading C++ file 'qgsmeasuredialog.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsmeasuredialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeasuredialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMeasureDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      26,   17,   17,   17, 0x0a,
      38,   36,   17,   17, 0x0a,
      63,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMeasureDialog[] = {
    "QgsMeasureDialog\0\0close()\0restart()\0"
    "e\0closeEvent(QCloseEvent*)\0"
    "on_btnHelp_clicked()\0"
};

const QMetaObject QgsMeasureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMeasureDialog,
      qt_meta_data_QgsMeasureDialog, 0 }
};

const QMetaObject *QgsMeasureDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMeasureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeasureDialog))
	return static_cast<void*>(const_cast< QgsMeasureDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsMeasureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        case 1: restart(); break;
        case 2: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 3: on_btnHelp_clicked(); break;
        }
        _id -= 4;
    }
    return _id;
}
