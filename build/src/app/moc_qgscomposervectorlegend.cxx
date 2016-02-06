/****************************************************************************
** Meta object code from reading C++ file 'qgscomposervectorlegend.h'
**
** Created: Wed Jun 11 19:05:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposervectorlegend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposervectorlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerVectorLegend[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      50,   24,   24,   24, 0x0a,
      86,   84,   24,   24, 0x0a,
     125,   84,   24,   24, 0x0a,
     159,  156,   24,   24, 0x0a,
     183,  175,   24,   24, 0x0a,
     235,  231,   24,   24, 0x0a,
     265,   24,   24,   24, 0x0a,
     279,   84,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerVectorLegend[] = {
    "QgsComposerVectorLegend\0\0"
    "on_mFontButton_clicked()\0"
    "on_mTitleLineEdit_returnPressed()\0i\0"
    "on_mPreviewModeComboBox_activated(int)\0"
    "on_mMapComboBox_activated(int)\0id\0"
    "mapChanged(int)\0lvi,pt,\0"
    "showLayersPopupMenu(Q3ListViewItem*,QPoint,int)\0"
    "lvi\0layerChanged(Q3ListViewItem*)\0"
    "groupLayers()\0on_mFrameCheckBox_stateChanged(int)\0"
};

const QMetaObject QgsComposerVectorLegend::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerVectorLegend,
      qt_meta_data_QgsComposerVectorLegend, 0 }
};

const QMetaObject *QgsComposerVectorLegend::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerVectorLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerVectorLegend))
	return static_cast<void*>(const_cast< QgsComposerVectorLegend*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
	return static_cast< QGraphicsRectItem*>(const_cast< QgsComposerVectorLegend*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerVectorLegend*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerVectorLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mFontButton_clicked(); break;
        case 1: on_mTitleLineEdit_returnPressed(); break;
        case 2: on_mPreviewModeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_mMapComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: mapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: showLayersPopupMenu((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: layerChanged((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 7: groupLayers(); break;
        case 8: on_mFrameCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}
