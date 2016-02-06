/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterlayerproperties.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsrasterlayerproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterlayerproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsRasterLayerProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      34,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   25,   25,   25, 0x0a,
      65,   25,   25,   25, 0x0a,
     102,   25,   25,   25, 0x0a,
     134,   25,   25,   25, 0x0a,
     165,   25,   25,   25, 0x0a,
     198,   25,   25,   25, 0x0a,
     226,   25,   25,   25, 0x0a,
     262,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsRasterLayerProperties[] = {
    "QgsRasterLayerProperties\0\0layerID\0"
    "refreshLegend(QString)\0apply()\0"
    "sliderTransparency_valueChanged(int)\0"
    "on_rbtnSingleBand_toggled(bool)\0"
    "on_rbtnThreeBand_toggled(bool)\0"
    "on_buttonBuildPyramids_clicked()\0"
    "on_pbnHistRefresh_clicked()\0"
    "on_pbnChangeSpatialRefSys_clicked()\0"
    "on_buttonBox_helpRequested()\0"
};

const QMetaObject QgsRasterLayerProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsRasterLayerProperties,
      qt_meta_data_QgsRasterLayerProperties, 0 }
};

const QMetaObject *QgsRasterLayerProperties::metaObject() const
{
    return &staticMetaObject;
}

void *QgsRasterLayerProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterLayerProperties))
	return static_cast<void*>(const_cast< QgsRasterLayerProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsRasterLayerProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshLegend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: apply(); break;
        case 2: sliderTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_rbtnSingleBand_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_rbtnThreeBand_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_buttonBuildPyramids_clicked(); break;
        case 6: on_pbnHistRefresh_clicked(); break;
        case 7: on_pbnChangeSpatialRefSys_clicked(); break;
        case 8: on_buttonBox_helpRequested(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsRasterLayerProperties::refreshLegend(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
