/****************************************************************************
** Meta object code from reading C++ file 'qgslegend.h'
**
** Created: Wed Jun 11 19:05:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/legend/qgslegend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsLegend[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x05,
      46,   40,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   40,   10,   10, 0x0a,
     110,  103,   10,   10, 0x0a,
     142,  138,   10,   10, 0x0a,
     173,   10,   10,   10, 0x0a,
     192,  185,   10,   10, 0x0a,
     208,   10,   10,   10, 0x0a,
     219,   10,   10,   10, 0x0a,
     240,   10,   10,   10, 0x0a,
     266,   10,   10,   10, 0x0a,
     294,   10,   10,   10, 0x0a,
     314,   10,   10,   10, 0x0a,
     342,   10,   10,   10, 0x0a,
     360,   10,   10,   10, 0x0a,
     384,   10,   10,   10, 0x0a,
     412,   10,   10,   10, 0x0a,
     454,  440,   10,   10, 0x08,
     501,   10,   10,   10, 0x08,
     521,   10,   10,   10, 0x08,
     533,   10,   10,   10, 0x08,
     556,  547,   10,   10, 0x08,
     612,  595,   10,   10, 0x08,
     672,   10,   10,   10, 0x08,
     685,   10,   10,   10, 0x08,
     706,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsLegend[] = {
    "QgsLegend\0\0lv\0zOrderChanged(QgsLegend*)\0"
    "layer\0currentLayerChanged(QgsMapLayer*)\0"
    "addLayer(QgsMapLayer*)\0canvas\0"
    "setMapCanvas(QgsMapCanvas*)\0key\0"
    "refreshLayerSymbology(QString)\0"
    "removeAll()\0select\0selectAll(bool)\0"
    "addGroup()\0removeLayer(QString)\0"
    "readProject(QDomDocument)\0"
    "writeProject(QDomDocument&)\0"
    "legendLayerRemove()\0legendLayerShowInOverview()\0"
    "legendLayerZoom()\0legendLayerZoomNative()\0"
    "legendLayerAttributeTable()\0"
    "legendLayerShowProperties()\0item,position\0"
    "handleRightClickEvent(QTreeWidgetItem*,QPoint)\0"
    "legendGroupRemove()\0expandAll()\0"
    "collapseAll()\0item,row\0"
    "handleItemChange(QTreeWidgetItem*,int)\0"
    "current,previous\0"
    "handleCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "openEditor()\0makeToTopLevelItem()\0"
    "showLegendLayerFileGroups()\0"
};

const QMetaObject QgsLegend::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QgsLegend,
      qt_meta_data_QgsLegend, 0 }
};

const QMetaObject *QgsLegend::metaObject() const
{
    return &staticMetaObject;
}

void *QgsLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegend))
	return static_cast<void*>(const_cast< QgsLegend*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int QgsLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: zOrderChanged((*reinterpret_cast< QgsLegend*(*)>(_a[1]))); break;
        case 1: currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: addLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 3: setMapCanvas((*reinterpret_cast< QgsMapCanvas*(*)>(_a[1]))); break;
        case 4: refreshLayerSymbology((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: removeAll(); break;
        case 6: selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: addGroup(); break;
        case 8: removeLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 10: writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 11: legendLayerRemove(); break;
        case 12: legendLayerShowInOverview(); break;
        case 13: legendLayerZoom(); break;
        case 14: legendLayerZoomNative(); break;
        case 15: legendLayerAttributeTable(); break;
        case 16: legendLayerShowProperties(); break;
        case 17: handleRightClickEvent((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 18: legendGroupRemove(); break;
        case 19: expandAll(); break;
        case 20: collapseAll(); break;
        case 21: handleItemChange((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: handleCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 23: openEditor(); break;
        case 24: makeToTopLevelItem(); break;
        case 25: showLegendLayerFileGroups(); break;
        }
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QgsLegend::zOrderChanged(QgsLegend * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsLegend::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
