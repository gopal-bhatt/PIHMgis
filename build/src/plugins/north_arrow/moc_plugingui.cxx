/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created: Tue Jun 22 23:11:52 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/north_arrow/plugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsNorthArrowPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      45,   23,   23,   23, 0x05,
      66,   23,   23,   23, 0x05,
      89,   23,   23,   23, 0x05,
     111,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   23,   23,   23, 0x0a,
     144,   23,   23,   23, 0x0a,
     177,   23,   23,   23, 0x0a,
     195,   23,   23,   23, 0x0a,
     212,   23,   23,   23, 0x0a,
     231,   23,   23,   23, 0x0a,
     254,   23,   23,   23, 0x08,
     278,   23,   23,   23, 0x08,
     302,   23,   23,   23, 0x08,
     338,  331,   23,   23, 0x08,
     369,  331,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsNorthArrowPluginGui[] = {
    "QgsNorthArrowPluginGui\0\0rotationChanged(int)\0"
    "changePlacement(int)\0enableNorthArrow(bool)\0"
    "enableAutomatic(bool)\0needToRefresh()\0"
    "setRotation(int)\0setPlacementLabels(QStringList&)\0"
    "setPlacement(int)\0setEnabled(bool)\0"
    "setAutomatic(bool)\0setAutomaticDisabled()\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0theInt\0"
    "on_spinAngle_valueChanged(int)\0"
    "on_sliderRotation_valueChanged(int)\0"
};

const QMetaObject QgsNorthArrowPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsNorthArrowPluginGui,
      qt_meta_data_QgsNorthArrowPluginGui, 0 }
};

const QMetaObject *QgsNorthArrowPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsNorthArrowPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNorthArrowPluginGui))
	return static_cast<void*>(const_cast< QgsNorthArrowPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsNorthArrowPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changePlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: enableNorthArrow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: enableAutomatic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: needToRefresh(); break;
        case 5: setRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setPlacementLabels((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: setPlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: setAutomatic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: setAutomaticDisabled(); break;
        case 11: on_buttonBox_accepted(); break;
        case 12: on_buttonBox_rejected(); break;
        case 13: on_buttonBox_helpRequested(); break;
        case 14: on_spinAngle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: on_sliderRotation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QgsNorthArrowPluginGui::rotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsNorthArrowPluginGui::changePlacement(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsNorthArrowPluginGui::enableNorthArrow(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsNorthArrowPluginGui::enableAutomatic(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsNorthArrowPluginGui::needToRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
