/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Tue Jun 22 23:13:23 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/ogr_converter/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_Dialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      56,    7,    7,    7, 0x08,
      93,   85,    7,    7, 0x08,
     123,   85,    7,    7, 0x08,
     158,   85,    7,    7, 0x08,
     192,    7,    7,    7, 0x08,
     221,    7,    7,    7, 0x08,
     256,  250,    7,    7, 0x08,
     300,  250,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0on_buttonBox_accepted()\0"
    "on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0checked\0"
    "on_radioSrcFile_toggled(bool)\0"
    "on_radioSrcDirectory_toggled(bool)\0"
    "on_radioSrcProtocol_toggled(bool)\0"
    "on_buttonSelectSrc_clicked()\0"
    "on_buttonSelectDst_clicked()\0index\0"
    "on_comboSrcFormats_currentIndexChanged(int)\0"
    "on_comboDstFormats_currentIndexChanged(int)\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

const QMetaObject *Dialog::metaObject() const
{
    return &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
	return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_buttonBox_accepted(); break;
        case 1: on_buttonBox_rejected(); break;
        case 2: on_buttonBox_helpRequested(); break;
        case 3: on_radioSrcFile_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_radioSrcDirectory_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_radioSrcProtocol_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_buttonSelectSrc_clicked(); break;
        case 7: on_buttonSelectDst_clicked(); break;
        case 8: on_comboSrcFormats_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_comboDstFormats_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 10;
    }
    return _id;
}
