/****************************************************************************
** Meta object code from reading C++ file 'qgsuniquevaluedialog.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsuniquevaluedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsuniquevaluedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsUniqueValueDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      35,   30,   21,   21, 0x0a,
      65,   21,   21,   21, 0x0a,
      83,   21,   21,   21, 0x0a,
      97,   21,   21,   21, 0x09,
     129,   21,   21,   21, 0x09,
     154,  148,   21,   21, 0x09,
     172,   21,   21,   21, 0x29,
     183,   21,   21,   21, 0x09,
     207,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsUniqueValueDialog[] = {
    "QgsUniqueValueDialog\0\0apply()\0item\0"
    "itemChanged(QListWidgetItem*)\0"
    "randomizeColors()\0resetColors()\0"
    "changeClassificationAttribute()\0"
    "selectionChanged()\0value\0addClass(QString)\0"
    "addClass()\0deleteSelectedClasses()\0"
    "applySymbologyChanges()\0"
};

const QMetaObject QgsUniqueValueDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsUniqueValueDialog,
      qt_meta_data_QgsUniqueValueDialog, 0 }
};

const QMetaObject *QgsUniqueValueDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsUniqueValueDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsUniqueValueDialog))
	return static_cast<void*>(const_cast< QgsUniqueValueDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsUniqueValueDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: randomizeColors(); break;
        case 3: resetColors(); break;
        case 4: changeClassificationAttribute(); break;
        case 5: selectionChanged(); break;
        case 6: addClass((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: addClass(); break;
        case 8: deleteSelectedClasses(); break;
        case 9: applySymbologyChanges(); break;
        }
        _id -= 10;
    }
    return _id;
}
