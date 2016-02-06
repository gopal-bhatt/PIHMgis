/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetabledisplay.h'
**
** Created: Wed Jun 11 19:05:42 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsattributetabledisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetabledisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAttributeTableDisplay[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   25,   25,   25, 0x09,
      55,   25,   25,   25, 0x09,
      70,   25,   25,   25, 0x09,
      85,   25,   25,   25, 0x09,
      99,   25,   25,   25, 0x09,
     115,   25,   25,   25, 0x09,
     133,   25,   25,   25, 0x09,
     151,   25,   25,   25, 0x09,
     181,   25,   25,   25, 0x09,
     190,   25,   25,   25, 0x09,
     212,  207,   25,   25, 0x09,
     242,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeTableDisplay[] = {
    "QgsAttributeTableDisplay\0\0deleted()\0"
    "deleteAttributes()\0addAttribute()\0"
    "startEditing()\0stopEditing()\0"
    "selectedToTop()\0invertSelection()\0"
    "removeSelection()\0copySelectedRowsToClipboard()\0"
    "search()\0advancedSearch()\0item\0"
    "searchShowResultsChanged(int)\0"
    "on_btnHelp_clicked()\0"
};

const QMetaObject QgsAttributeTableDisplay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAttributeTableDisplay,
      qt_meta_data_QgsAttributeTableDisplay, 0 }
};

const QMetaObject *QgsAttributeTableDisplay::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeTableDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableDisplay))
	return static_cast<void*>(const_cast< QgsAttributeTableDisplay*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsAttributeTableDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: deleted(); break;
        case 1: deleteAttributes(); break;
        case 2: addAttribute(); break;
        case 3: startEditing(); break;
        case 4: stopEditing(); break;
        case 5: selectedToTop(); break;
        case 6: invertSelection(); break;
        case 7: removeSelection(); break;
        case 8: copySelectedRowsToClipboard(); break;
        case 9: search(); break;
        case 10: advancedSearch(); break;
        case 11: searchShowResultsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: on_btnHelp_clicked(); break;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTableDisplay::deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
