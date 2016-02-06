/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayerproperties.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsvectorlayerproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayerproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsVectorLayerProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      34,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   57,   25,   25, 0x0a,
      90,   25,   25,   25, 0x0a,
     106,   25,   98,   25, 0x0a,
     129,  120,   25,   25, 0x0a,
     166,   25,   25,   25, 0x0a,
     185,   25,   25,   25, 0x0a,
     193,   25,   25,   25, 0x0a,
     222,   25,   25,   25, 0x0a,
     251,   25,   25,   25, 0x0a,
     273,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsVectorLayerProperties[] = {
    "QgsVectorLayerProperties\0\0layerID\0"
    "refreshLegend(QString)\0string\0"
    "alterLayerDialog(QString)\0reset()\0"
    "QString\0getMetadata()\0theValue\0"
    "sliderTransparency_valueChanged(int)\0"
    "setLabelCheckBox()\0apply()\0"
    "on_buttonBox_helpRequested()\0"
    "on_pbnQueryBuilder_clicked()\0"
    "on_pbnIndex_clicked()\0"
    "on_pbnChangeSpatialRefSys_clicked()\0"
};

const QMetaObject QgsVectorLayerProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsVectorLayerProperties,
      qt_meta_data_QgsVectorLayerProperties, 0 }
};

const QMetaObject *QgsVectorLayerProperties::metaObject() const
{
    return &staticMetaObject;
}

void *QgsVectorLayerProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerProperties))
	return static_cast<void*>(const_cast< QgsVectorLayerProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsVectorLayerProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshLegend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: alterLayerDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: reset(); break;
        case 3: { QString _r = getMetadata();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: sliderTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setLabelCheckBox(); break;
        case 6: apply(); break;
        case 7: on_buttonBox_helpRequested(); break;
        case 8: on_pbnQueryBuilder_clicked(); break;
        case 9: on_pbnIndex_clicked(); break;
        case 10: on_pbnChangeSpatialRefSys_clicked(); break;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayerProperties::refreshLegend(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
