/****************************************************************************
** Meta object code from reading C++ file 'qgsgenericprojectionselector.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsgenericprojectionselector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgenericprojectionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGenericProjectionSelector[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      41,   30,   29,   29, 0x0a,
      61,   29,   29,   29, 0x2a,
      82,   29,   74,   29, 0x0a,
     109,   29,  104,   29, 0x0a,
     125,   29,  104,   29, 0x0a,
     148,  140,   29,   29, 0x0a,
     182,  176,   29,   29, 0x0a,
     205,  176,   29,   29, 0x0a,
     237,  227,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsGenericProjectionSelector[] = {
    "QgsGenericProjectionSelector\0\0theMessage\0"
    "setMessage(QString)\0setMessage()\0"
    "QString\0selectedProj4String()\0long\0"
    "selectedCrsId()\0selectedEpsg()\0theName\0"
    "setSelectedCrsName(QString)\0theID\0"
    "setSelectedCrsId(long)\0setSelectedEpsg(long)\0"
    "crsFilter\0setOgcWmsCrsFilter(QSet<QString>)\0"
};

const QMetaObject QgsGenericProjectionSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGenericProjectionSelector,
      qt_meta_data_QgsGenericProjectionSelector, 0 }
};

const QMetaObject *QgsGenericProjectionSelector::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGenericProjectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGenericProjectionSelector))
	return static_cast<void*>(const_cast< QgsGenericProjectionSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGenericProjectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: setMessage(); break;
        case 2: { QString _r = selectedProj4String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { long _r = selectedCrsId();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 4: { long _r = selectedEpsg();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 5: setSelectedCrsName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: setSelectedCrsId((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 7: setSelectedEpsg((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 8: setOgcWmsCrsFilter((*reinterpret_cast< QSet<QString>(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
