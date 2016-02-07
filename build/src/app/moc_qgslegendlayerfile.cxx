/****************************************************************************
** Meta object code from reading C++ file 'qgslegendlayerfile.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/legend/qgslegendlayerfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegendlayerfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLegendLayerFile[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      39,   19,   19,   19, 0x0a,
      47,   19,   19,   19, 0x0a,
      65,   19,   19,   19, 0x0a,
      97,   19,   92,   19, 0x0a,
     109,   19,   19,   19, 0x0a,
     126,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsLegendLayerFile[] = {
    "QgsLegendLayerFile\0\0updateLegendItem()\0"
    "table()\0saveAsShapefile()\0"
    "saveSelectionAsShapefile()\0bool\0"
    "isEditing()\0showInOverview()\0"
    "layerNameChanged()\0"
};

const QMetaObject QgsLegendLayerFile::staticMetaObject = {
    { &QgsLegendItem::staticMetaObject, qt_meta_stringdata_QgsLegendLayerFile,
      qt_meta_data_QgsLegendLayerFile, 0 }
};

const QMetaObject *QgsLegendLayerFile::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLegendLayerFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendLayerFile))
	return static_cast<void*>(const_cast< QgsLegendLayerFile*>(this));
    return QgsLegendItem::qt_metacast(_clname);
}

int QgsLegendLayerFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLegendItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateLegendItem(); break;
        case 1: table(); break;
        case 2: saveAsShapefile(); break;
        case 3: saveSelectionAsShapefile(); break;
        case 4: { bool _r = isEditing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: showInOverview(); break;
        case 6: layerNameChanged(); break;
        }
        _id -= 7;
    }
    return _id;
}
