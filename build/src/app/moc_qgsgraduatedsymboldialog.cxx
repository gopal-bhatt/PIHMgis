/****************************************************************************
** Meta object code from reading C++ file 'qgsgraduatedsymboldialog.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsgraduatedsymboldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgraduatedsymboldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGraduatedSymbolDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      34,   25,   25,   25, 0x09,
      58,   25,   25,   25, 0x09,
      81,   25,   25,   25, 0x09,
     102,   25,   25,   25, 0x09,
     131,  126,   25,   25, 0x09,
     161,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsGraduatedSymbolDialog[] = {
    "QgsGraduatedSymbolDialog\0\0apply()\0"
    "adjustNumberOfClasses()\0adjustClassification()\0"
    "changeCurrentValue()\0applySymbologyChanges()\0"
    "item\0modifyClass(QListWidgetItem*)\0"
    "deleteCurrentClass()\0"
};

const QMetaObject QgsGraduatedSymbolDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolDialog,
      qt_meta_data_QgsGraduatedSymbolDialog, 0 }
};

const QMetaObject *QgsGraduatedSymbolDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGraduatedSymbolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolDialog))
	return static_cast<void*>(const_cast< QgsGraduatedSymbolDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGraduatedSymbolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: adjustNumberOfClasses(); break;
        case 2: adjustClassification(); break;
        case 3: changeCurrentValue(); break;
        case 4: applySymbologyChanges(); break;
        case 5: modifyClass((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: deleteCurrentClass(); break;
        }
        _id -= 7;
    }
    return _id;
}
