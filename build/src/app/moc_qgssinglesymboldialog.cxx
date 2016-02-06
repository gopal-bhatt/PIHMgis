/****************************************************************************
** Meta object code from reading C++ file 'qgssinglesymboldialog.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgssinglesymboldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssinglesymboldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsSingleSymbolDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   41,   22,   22, 0x0a,
      66,   22,   22,   22, 0x0a,
      74,   41,   22,   22, 0x0a,
      92,   22,   22,   22, 0x0a,
     116,   22,   22,   22, 0x09,
     137,   22,   22,   22, 0x09,
     155,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsSingleSymbolDialog[] = {
    "QgsSingleSymbolDialog\0\0settingsChanged()\0"
    "sy\0set(const QgsSymbol*)\0apply()\0"
    "apply(QgsSymbol*)\0resendSettingsChanged()\0"
    "selectOutlineColor()\0selectFillColor()\0"
    "selectTextureImage()\0"
};

const QMetaObject QgsSingleSymbolDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsSingleSymbolDialog,
      qt_meta_data_QgsSingleSymbolDialog, 0 }
};

const QMetaObject *QgsSingleSymbolDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsSingleSymbolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSingleSymbolDialog))
	return static_cast<void*>(const_cast< QgsSingleSymbolDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsSingleSymbolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: settingsChanged(); break;
        case 1: set((*reinterpret_cast< const QgsSymbol*(*)>(_a[1]))); break;
        case 2: apply(); break;
        case 3: apply((*reinterpret_cast< QgsSymbol*(*)>(_a[1]))); break;
        case 4: resendSettingsChanged(); break;
        case 5: selectOutlineColor(); break;
        case 6: selectFillColor(); break;
        case 7: selectTextureImage(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsSingleSymbolDialog::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
