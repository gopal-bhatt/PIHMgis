/****************************************************************************
** Meta object code from reading C++ file 'qgslegendlayerfile.h'
**
** Created: Wed Jun 11 19:05:44 2008
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
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      28,   19,   19,   19, 0x0a,
      53,   19,   19,   19, 0x0a,
      95,   72,   19,   19, 0x0a,
     112,   19,   19,   19, 0x0a,
     130,   19,   19,   19, 0x0a,
     157,   19,   19,   19, 0x0a,
     173,   19,   19,   19, 0x0a,
     190,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsLegendLayerFile[] = {
    "QgsLegendLayerFile\0\0table()\0"
    "invalidateTableDisplay()\0selectionChanged()\0"
    "onlyGeometryWasChanged\0closeTable(bool)\0"
    "saveAsShapefile()\0saveSelectionAsShapefile()\0"
    "toggleEditing()\0showInOverview()\0"
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
        case 0: table(); break;
        case 1: invalidateTableDisplay(); break;
        case 2: selectionChanged(); break;
        case 3: closeTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: saveAsShapefile(); break;
        case 5: saveSelectionAsShapefile(); break;
        case 6: toggleEditing(); break;
        case 7: showInOverview(); break;
        case 8: layerNameChanged(); break;
        }
        _id -= 9;
    }
    return _id;
}
