/****************************************************************************
** Meta object code from reading C++ file 'attfile.h'
**
** Created: Tue Jul 27 23:38:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/pihm_gis/DataModelLoader/AttFile/attfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_attFileDlg[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      24,   11,   11,   11, 0x0a,
      39,   11,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,
      66,   11,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
     100,   11,   11,   11, 0x0a,
     110,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x0a,
     136,   11,   11,   11, 0x0a,
     147,   11,   11,   11, 0x0a,
     158,   11,   11,   11, 0x0a,
     169,   11,   11,   11, 0x0a,
     182,   11,   11,   11, 0x0a,
     197,   11,   11,   11, 0x0a,
     216,   11,   11,   11, 0x0a,
     232,   11,   11,   11, 0x0a,
     246,   11,   11,   11, 0x0a,
     257,   11,   11,   11, 0x0a,
     272,   11,   11,   11, 0x0a,
     284,   11,   11,   11, 0x0a,
     290,   11,   11,   11, 0x0a,
     297,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_attFileDlg[] = {
    "attFileDlg\0\0tinBrowse()\0precipBrowse()\0"
    "tempBrowse()\0humidBrowse()\0windBrowse()\0"
    "gBrowse()\0rnBrowse()\0pBrowse()\0"
    "soilBrowse()\0geolBrowse()\0mfBrowse()\0"
    "mpBrowse()\0lcBrowse()\0isICBrowse()\0"
    "snowICBrowse()\0overlandICBrowse()\0"
    "unsatICBrowse()\0satICBrowse()\0bcBrowse()\0"
    "sourceBrowse()\0attBrowse()\0run()\0"
    "help()\0on_RnLineEdit_textChanged(QString)\0"
};

const QMetaObject attFileDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_attFileDlg,
      qt_meta_data_attFileDlg, 0 }
};

const QMetaObject *attFileDlg::metaObject() const
{
    return &staticMetaObject;
}

void *attFileDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_attFileDlg))
	return static_cast<void*>(const_cast< attFileDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int attFileDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tinBrowse(); break;
        case 1: precipBrowse(); break;
        case 2: tempBrowse(); break;
        case 3: humidBrowse(); break;
        case 4: windBrowse(); break;
        case 5: gBrowse(); break;
        case 6: rnBrowse(); break;
        case 7: pBrowse(); break;
        case 8: soilBrowse(); break;
        case 9: geolBrowse(); break;
        case 10: mfBrowse(); break;
        case 11: mpBrowse(); break;
        case 12: lcBrowse(); break;
        case 13: isICBrowse(); break;
        case 14: snowICBrowse(); break;
        case 15: overlandICBrowse(); break;
        case 16: unsatICBrowse(); break;
        case 17: satICBrowse(); break;
        case 18: bcBrowse(); break;
        case 19: sourceBrowse(); break;
        case 20: attBrowse(); break;
        case 21: run(); break;
        case 22: help(); break;
        case 23: on_RnLineEdit_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 24;
    }
    return _id;
}
