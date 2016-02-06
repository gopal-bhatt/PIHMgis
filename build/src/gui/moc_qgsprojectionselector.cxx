/****************************************************************************
** Meta object code from reading C++ file 'qgsprojectionselector.h'
**
** Created: Wed Jun 11 19:05:13 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsprojectionselector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprojectionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsProjectionSelector[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      31,   23,   22,   22, 0x05,
      53,   22,   22,   22, 0x05,
      63,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   87,   22,   22, 0x0a,
     134,   22,  126,   22, 0x0a,
     161,  152,   22,   22, 0x0a,
     184,   22,  126,   22, 0x0a,
     213,   22,  208,   22, 0x0a,
     230,   22,  208,   22, 0x0a,
     258,  248,   22,   22, 0x0a,
     292,   22,   22,   22, 0x0a,
     313,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsProjectionSelector[] = {
    "QgsProjectionSelector\0\0theSRID\0"
    "sridSelected(QString)\0refresh()\0"
    "searchBoxHasFocus(bool)\0theSRSName\0"
    "setSelectedSRSName(QString)\0QString\0"
    "getSelectedName()\0theSRSID\0"
    "setSelectedSRSID(long)\0getCurrentProj4String()\0"
    "long\0getCurrentSRID()\0getCurrentSRSID()\0"
    "crsFilter\0setOgcWmsCrsFilter(QSet<QString>)\0"
    "on_pbnFind_clicked()\0"
    "coordinateSystemSelected(QTreeWidgetItem*)\0"
};

const QMetaObject QgsProjectionSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProjectionSelector,
      qt_meta_data_QgsProjectionSelector, 0 }
};

const QMetaObject *QgsProjectionSelector::metaObject() const
{
    return &staticMetaObject;
}

void *QgsProjectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectionSelector))
	return static_cast<void*>(const_cast< QgsProjectionSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsProjectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sridSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: refresh(); break;
        case 2: searchBoxHasFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setSelectedSRSName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QString _r = getSelectedName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: setSelectedSRSID((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 6: { QString _r = getCurrentProj4String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { long _r = getCurrentSRID();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 8: { long _r = getCurrentSRSID();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 9: setOgcWmsCrsFilter((*reinterpret_cast< QSet<QString>(*)>(_a[1]))); break;
        case 10: on_pbnFind_clicked(); break;
        case 11: coordinateSystemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsProjectionSelector::sridSelected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProjectionSelector::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QgsProjectionSelector::searchBoxHasFocus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
