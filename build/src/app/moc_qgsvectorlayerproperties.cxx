/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayerproperties.h'
**
** Created: Tue Jun 22 23:06:16 2010
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
      22,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      45,   26,   25,   25, 0x05,
      73,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,  101,   25,   25, 0x0a,
     134,   25,   25,   25, 0x0a,
     150,   25,  142,   25, 0x0a,
     170,  161,   25,   25, 0x0a,
     207,   25,   25,   25, 0x0a,
     226,   25,   25,   25, 0x0a,
     234,   25,   25,   25, 0x0a,
     250,   25,   25,   25, 0x0a,
     267,   25,   25,   25, 0x0a,
     296,   25,   25,   25, 0x0a,
     325,   25,   25,   25, 0x0a,
     347,   25,   25,   25, 0x0a,
     383,   25,   25,   25, 0x0a,
     416,   25,   25,   25, 0x0a,
     449,   25,   25,   25, 0x0a,
     475,   25,   25,   25, 0x0a,
     503,   25,   25,   25, 0x0a,
     518,   25,   25,   25, 0x0a,
     540,  536,   25,   25, 0x0a,
     560,  536,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsVectorLayerProperties[] = {
    "QgsVectorLayerProperties\0\0layerID,expandItem\0"
    "refreshLegend(QString,bool)\0"
    "toggleEditing(QgsMapLayer*)\0string\0"
    "alterLayerDialog(QString)\0reset()\0"
    "QString\0metadata()\0theValue\0"
    "sliderTransparency_valueChanged(int)\0"
    "setLabelCheckBox()\0apply()\0toggleEditing()\0"
    "editingToggled()\0on_buttonBox_helpRequested()\0"
    "on_pbnQueryBuilder_clicked()\0"
    "on_pbnIndex_clicked()\0"
    "on_pbnChangeSpatialRefSys_clicked()\0"
    "on_pbnLoadDefaultStyle_clicked()\0"
    "on_pbnSaveDefaultStyle_clicked()\0"
    "on_pbnLoadStyle_clicked()\0"
    "on_pbnSaveStyleAs_clicked()\0addAttribute()\0"
    "deleteAttribute()\0idx\0attributeAdded(int)\0"
    "attributeDeleted(int)\0"
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
        case 0: refreshLegend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: toggleEditing((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: alterLayerDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: reset(); break;
        case 4: { QString _r = metadata();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: sliderTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setLabelCheckBox(); break;
        case 7: apply(); break;
        case 8: toggleEditing(); break;
        case 9: editingToggled(); break;
        case 10: on_buttonBox_helpRequested(); break;
        case 11: on_pbnQueryBuilder_clicked(); break;
        case 12: on_pbnIndex_clicked(); break;
        case 13: on_pbnChangeSpatialRefSys_clicked(); break;
        case 14: on_pbnLoadDefaultStyle_clicked(); break;
        case 15: on_pbnSaveDefaultStyle_clicked(); break;
        case 16: on_pbnLoadStyle_clicked(); break;
        case 17: on_pbnSaveStyleAs_clicked(); break;
        case 18: addAttribute(); break;
        case 19: deleteAttribute(); break;
        case 20: attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayerProperties::refreshLegend(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsVectorLayerProperties::toggleEditing(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
