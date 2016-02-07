/****************************************************************************
** Meta object code from reading C++ file 'qgsattributeactiondialog.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsattributeactiondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributeactiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAttributeActionDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      35,   25,   25,   25, 0x0a,
      46,   25,   25,   25, 0x0a,
      55,   25,   25,   25, 0x0a,
      64,   25,   25,   25, 0x0a,
      73,   25,   25,   25, 0x0a,
      87,   25,   25,   25, 0x0a,
      95,   25,   25,   25, 0x0a,
     104,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeActionDialog[] = {
    "QgsAttributeActionDialog\0\0moveUp()\0"
    "moveDown()\0browse()\0remove()\0insert()\0"
    "insertField()\0apply()\0update()\0"
    "itemSelectionChanged()\0"
};

const QMetaObject QgsAttributeActionDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeActionDialog,
      qt_meta_data_QgsAttributeActionDialog, 0 }
};

const QMetaObject *QgsAttributeActionDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeActionDialog))
	return static_cast<void*>(const_cast< QgsAttributeActionDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsAttributeActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: moveUp(); break;
        case 1: moveDown(); break;
        case 2: browse(); break;
        case 3: remove(); break;
        case 4: insert(); break;
        case 5: insertField(); break;
        case 6: apply(); break;
        case 7: update(); break;
        case 8: itemSelectionChanged(); break;
        }
        _id -= 9;
    }
    return _id;
}
