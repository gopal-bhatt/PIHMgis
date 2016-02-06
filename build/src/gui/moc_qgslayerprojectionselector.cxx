/****************************************************************************
** Meta object code from reading C++ file 'qgslayerprojectionselector.h'
**
** Created: Wed Jun 11 19:05:14 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgslayerprojectionselector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayerprojectionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLayerProjectionSelector[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      36,   27,   28,   27, 0x0a,
      65,   27,   60,   27, 0x0a,
      83,   27,   60,   27, 0x0a,
     108,  100,   27,   27, 0x0a,
     142,  136,   27,   27, 0x0a,
     175,  165,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsLayerProjectionSelector[] = {
    "QgsLayerProjectionSelector\0\0QString\0"
    "getCurrentProj4String()\0long\0"
    "getCurrentSRSID()\0getCurrentEpsg()\0"
    "theName\0setSelectedSRSName(QString)\0"
    "theID\0setSelectedSRSID(long)\0crsFilter\0"
    "setOgcWmsCrsFilter(QSet<QString>)\0"
};

const QMetaObject QgsLayerProjectionSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLayerProjectionSelector,
      qt_meta_data_QgsLayerProjectionSelector, 0 }
};

const QMetaObject *QgsLayerProjectionSelector::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLayerProjectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerProjectionSelector))
	return static_cast<void*>(const_cast< QgsLayerProjectionSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsLayerProjectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = getCurrentProj4String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { long _r = getCurrentSRSID();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 2: { long _r = getCurrentEpsg();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 3: setSelectedSRSName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: setSelectedSRSID((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 5: setOgcWmsCrsFilter((*reinterpret_cast< QSet<QString>(*)>(_a[1]))); break;
        }
        _id -= 6;
    }
    return _id;
}
