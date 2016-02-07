/****************************************************************************
** Meta object code from reading C++ file 'quickprintgui.h'
**
** Created: Tue Jun 22 23:12:53 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/quick_print/quickprintgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickprintgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QuickPrintGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      63,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickPrintGui[] = {
    "QuickPrintGui\0\0on_buttonBox_accepted()\0"
    "on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
};

const QMetaObject QuickPrintGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuickPrintGui,
      qt_meta_data_QuickPrintGui, 0 }
};

const QMetaObject *QuickPrintGui::metaObject() const
{
    return &staticMetaObject;
}

void *QuickPrintGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickPrintGui))
	return static_cast<void*>(const_cast< QuickPrintGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuickPrintGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_buttonBox_accepted(); break;
        case 1: on_buttonBox_rejected(); break;
        case 2: on_buttonBox_helpRequested(); break;
        }
        _id -= 3;
    }
    return _id;
}
