/****************************************************************************
** Meta object code from reading C++ file 'about.h'
**
** Created: Tue Jul 27 23:38:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/Help/About/about.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'about.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_AboutDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AboutDlg[] = {
    "AboutDlg\0\0link\0on_label_11_linkActivated(QString)\0"
};

const QMetaObject AboutDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AboutDlg,
      qt_meta_data_AboutDlg, 0 }
};

const QMetaObject *AboutDlg::metaObject() const
{
    return &staticMetaObject;
}

void *AboutDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AboutDlg))
	return static_cast<void*>(const_cast< AboutDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AboutDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_label_11_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
