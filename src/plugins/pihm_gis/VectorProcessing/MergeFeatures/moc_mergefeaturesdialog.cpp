/****************************************************************************
** Meta object code from reading C++ file 'mergefeaturesdialog.h'
**
** Created: Sun Feb 18 20:43:48 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mergefeaturesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mergefeaturesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_mergeFeaturesDialogDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      36,   23,   23,   23, 0x0a,
      51,   23,   23,   23, 0x0a,
      69,   23,   23,   23, 0x0a,
      84,   23,   23,   23, 0x0a,
      90,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mergeFeaturesDialogDlg[] = {
    "mergeFeaturesDialogDlg\0\0addBrowse()\0removeBrowse()\0"
    "removeAllBrowse()\0outputBrowse()\0run()\0help()\0"
};

const QMetaObject mergeFeaturesDialogDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mergeFeaturesDialogDlg,
      qt_meta_data_mergeFeaturesDialogDlg, 0 }
};

const QMetaObject *mergeFeaturesDialogDlg::metaObject() const
{
    return &staticMetaObject;
}

void *mergeFeaturesDialogDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mergeFeaturesDialogDlg))
	return static_cast<void*>(const_cast<mergeFeaturesDialogDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int mergeFeaturesDialogDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addBrowse(); break;
        case 1: removeBrowse(); break;
        case 2: removeAllBrowse(); break;
        case 3: outputBrowse(); break;
        case 4: run(); break;
        case 5: help(); break;
        }
        _id -= 6;
    }
    return _id;
}
