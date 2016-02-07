/****************************************************************************
** Meta object code from reading C++ file 'qgscomposer.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      43,   12,   12,   12, 0x0a,
      72,   12,   12,   12, 0x0a,
     102,   12,   12,   12, 0x0a,
     136,   12,   12,   12, 0x0a,
     164,   12,   12,   12, 0x0a,
     200,   12,   12,   12, 0x0a,
     234,   12,   12,   12, 0x0a,
     271,   12,   12,   12, 0x0a,
     303,   12,   12,   12, 0x0a,
     338,   12,   12,   12, 0x0a,
     372,   12,   12,   12, 0x0a,
     409,   12,   12,   12, 0x0a,
     440,   12,   12,   12, 0x0a,
     478,   12,   12,   12, 0x0a,
     511,   12,   12,   12, 0x0a,
     546,   12,   12,   12, 0x0a,
     579,   12,   12,   12, 0x0a,
     612,   12,   12,   12, 0x0a,
     649,   12,   12,   12, 0x0a,
     689,   12,   12,   12, 0x0a,
     707,   12,   12,   12, 0x0a,
     732,   12,   12,   12, 0x0a,
     762,  758,   12,   12, 0x0a,
     800,  794,   12,   12, 0x0a,
     845,  836,   12,   12, 0x0a,
     894,  887,   12,   12, 0x0a,
     940,  932,   12,   12, 0x0a,
     985,  980,   12,   12, 0x0a,
    1016, 1014,   12,   12, 0x0a,
    1060, 1056,   12,   12, 0x0a,
    1084, 1056,   12,   12, 0x0a,
    1106,   12,   12,   12, 0x0a,
    1125,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposer[] = {
    "QgsComposer\0\0on_mActionZoomAll_activated()\0"
    "on_mActionZoomIn_activated()\0"
    "on_mActionZoomOut_activated()\0"
    "on_mActionRefreshView_activated()\0"
    "on_mActionPrint_activated()\0"
    "on_mActionExportAsImage_activated()\0"
    "on_mActionExportAsSVG_activated()\0"
    "on_mActionSelectMoveItem_activated()\0"
    "on_mActionAddNewMap_activated()\0"
    "on_mActionAddNewLegend_activated()\0"
    "on_mActionAddNewLabel_activated()\0"
    "on_mActionAddNewScalebar_activated()\0"
    "on_mActionAddImage_activated()\0"
    "on_mActionMoveItemContent_activated()\0"
    "on_mActionGroupItems_activated()\0"
    "on_mActionUngroupItems_activated()\0"
    "on_mActionRaiseItems_activated()\0"
    "on_mActionLowerItems_activated()\0"
    "on_mActionMoveItemsToTop_activated()\0"
    "on_mActionMoveItemsToBottom_activated()\0"
    "saveWindowState()\0on_helpPButton_clicked()\0"
    "on_closePButton_clicked()\0map\0"
    "addComposerMap(QgsComposerMap*)\0label\0"
    "addComposerLabel(QgsComposerLabel*)\0"
    "scalebar\0addComposerScaleBar(QgsComposerScaleBar*)\0"
    "legend\0addComposerLegend(QgsComposerLegend*)\0"
    "picture\0addComposerPicture(QgsComposerPicture*)\0"
    "item\0deleteItem(QgsComposerItem*)\0i\0"
    "showItemOptions(const QgsComposerItem*)\0"
    "doc\0writeXML(QDomDocument&)\0"
    "readXML(QDomDocument)\0setSelectionTool()\0"
    "activate()\0"
};

const QMetaObject QgsComposer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QgsComposer,
      qt_meta_data_QgsComposer, 0 }
};

const QMetaObject *QgsComposer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposer))
	return static_cast<void*>(const_cast< QgsComposer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QgsComposer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mActionZoomAll_activated(); break;
        case 1: on_mActionZoomIn_activated(); break;
        case 2: on_mActionZoomOut_activated(); break;
        case 3: on_mActionRefreshView_activated(); break;
        case 4: on_mActionPrint_activated(); break;
        case 5: on_mActionExportAsImage_activated(); break;
        case 6: on_mActionExportAsSVG_activated(); break;
        case 7: on_mActionSelectMoveItem_activated(); break;
        case 8: on_mActionAddNewMap_activated(); break;
        case 9: on_mActionAddNewLegend_activated(); break;
        case 10: on_mActionAddNewLabel_activated(); break;
        case 11: on_mActionAddNewScalebar_activated(); break;
        case 12: on_mActionAddImage_activated(); break;
        case 13: on_mActionMoveItemContent_activated(); break;
        case 14: on_mActionGroupItems_activated(); break;
        case 15: on_mActionUngroupItems_activated(); break;
        case 16: on_mActionRaiseItems_activated(); break;
        case 17: on_mActionLowerItems_activated(); break;
        case 18: on_mActionMoveItemsToTop_activated(); break;
        case 19: on_mActionMoveItemsToBottom_activated(); break;
        case 20: saveWindowState(); break;
        case 21: on_helpPButton_clicked(); break;
        case 22: on_closePButton_clicked(); break;
        case 23: addComposerMap((*reinterpret_cast< QgsComposerMap*(*)>(_a[1]))); break;
        case 24: addComposerLabel((*reinterpret_cast< QgsComposerLabel*(*)>(_a[1]))); break;
        case 25: addComposerScaleBar((*reinterpret_cast< QgsComposerScaleBar*(*)>(_a[1]))); break;
        case 26: addComposerLegend((*reinterpret_cast< QgsComposerLegend*(*)>(_a[1]))); break;
        case 27: addComposerPicture((*reinterpret_cast< QgsComposerPicture*(*)>(_a[1]))); break;
        case 28: deleteItem((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 29: showItemOptions((*reinterpret_cast< const QgsComposerItem*(*)>(_a[1]))); break;
        case 30: writeXML((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 31: readXML((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 32: setSelectionTool(); break;
        case 33: activate(); break;
        }
        _id -= 34;
    }
    return _id;
}
