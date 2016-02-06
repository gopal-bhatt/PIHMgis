/****************************************************************************
** Meta object code from reading C++ file 'qgscomposer.h'
**
** Created: Wed Jun 11 19:05:43 2008
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
      18,   10, // methods
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
     342,   12,   12,   12, 0x0a,
     376,   12,   12,   12, 0x0a,
     413,   12,   12,   12, 0x0a,
     444,   12,   12,   12, 0x0a,
     458,   12,   12,   12, 0x0a,
     471,   12,   12,   12, 0x0a,
     489,   12,   12,   12, 0x0a,
     514,   12,   12,   12, 0x0a,

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
    "on_mActionAddNewVectLegend_activated()\0"
    "on_mActionAddNewLabel_activated()\0"
    "on_mActionAddNewScalebar_activated()\0"
    "on_mActionAddImage_activated()\0"
    "projectRead()\0newProject()\0saveWindowState()\0"
    "on_helpPButton_clicked()\0"
    "on_closePButton_clicked()\0"
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
        case 9: on_mActionAddNewVectLegend_activated(); break;
        case 10: on_mActionAddNewLabel_activated(); break;
        case 11: on_mActionAddNewScalebar_activated(); break;
        case 12: on_mActionAddImage_activated(); break;
        case 13: projectRead(); break;
        case 14: newProject(); break;
        case 15: saveWindowState(); break;
        case 16: on_helpPButton_clicked(); break;
        case 17: on_closePButton_clicked(); break;
        }
        _id -= 18;
    }
    return _id;
}
