/****************************************************************************
** Meta object code from reading C++ file 'mshfile.h'
**
** Created: Tue Jul 27 23:38:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/DataModelLoader/MeshFile/mshfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mshfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_mshFileDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      24,   11,   11,   11, 0x0a,
      37,   11,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      64,   11,   11,   11, 0x0a,
      77,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
      95,   11,   11,   11, 0x0a,
     102,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mshFileDlg[] = {
    "mshFileDlg\0\0eleBrowse()\0nodeBrowse()\0"
    "neighBrowse()\0sEleBrowse()\0bEleBrowse()\0"
    "mshBrowse()\0run()\0help()\0"
    "on_rivFileButton_clicked()\0"
};

const QMetaObject mshFileDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mshFileDlg,
      qt_meta_data_mshFileDlg, 0 }
};

const QMetaObject *mshFileDlg::metaObject() const
{
    return &staticMetaObject;
}

void *mshFileDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mshFileDlg))
	return static_cast<void*>(const_cast< mshFileDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int mshFileDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: eleBrowse(); break;
        case 1: nodeBrowse(); break;
        case 2: neighBrowse(); break;
        case 3: sEleBrowse(); break;
        case 4: bEleBrowse(); break;
        case 5: mshBrowse(); break;
        case 6: run(); break;
        case 7: help(); break;
        case 8: on_rivFileButton_clicked(); break;
        }
        _id -= 9;
    }
    return _id;
}
