/****************************************************************************
** Meta object code from reading C++ file 'simplifylinedialog.h'
**
** Created: Sun Feb 18 19:51:58 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "simplifylinedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplifylinedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_simplifyLineDialogDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      37,   22,   22,   22, 0x0a,
      49,   22,   22,   22, 0x0a,
      64,   22,   22,   22, 0x0a,
      82,   22,   22,   22, 0x0a,
      98,   22,   22,   22, 0x0a,
     104,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_simplifyLineDialogDlg[] = {
    "simplifyLineDialogDlg\0\0inputBrowse()\0addBrowse()\0removeBrowse()\0"
    "removeAllBrowse()\0editTolerance()\0run()\0help()\0"
};

const QMetaObject simplifyLineDialogDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_simplifyLineDialogDlg,
      qt_meta_data_simplifyLineDialogDlg, 0 }
};

const QMetaObject *simplifyLineDialogDlg::metaObject() const
{
    return &staticMetaObject;
}

void *simplifyLineDialogDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_simplifyLineDialogDlg))
	return static_cast<void*>(const_cast<simplifyLineDialogDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int simplifyLineDialogDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputBrowse(); break;
        case 1: addBrowse(); break;
        case 2: removeBrowse(); break;
        case 3: removeAllBrowse(); break;
        case 4: editTolerance(); break;
        case 5: run(); break;
        case 6: help(); break;
        }
        _id -= 7;
    }
    return _id;
}
