/****************************************************************************
** Meta object code from reading C++ file 'qgscomposermap.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposermap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposermap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerMap[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      50,   15,   15,   15, 0x0a,
      85,   15,   15,   15, 0x0a,
     124,  122,   15,   15, 0x0a,
     161,   15,   15,   15, 0x0a,
     195,   15,   15,   15, 0x0a,
     233,   15,   15,   15, 0x0a,
     273,   15,   15,   15, 0x0a,
     312,   15,   15,   15, 0x0a,
     340,  122,   15,   15, 0x0a,
     379,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerMap[] = {
    "QgsComposerMap\0\0on_mWidthLineEdit_returnPressed()\0"
    "on_mHeightLineEdit_returnPressed()\0"
    "on_mSetCurrentExtentButton_clicked()\0"
    "i\0on_mCalculateComboBox_activated(int)\0"
    "on_mScaleLineEdit_returnPressed()\0"
    "on_mFontScaleLineEdit_returnPressed()\0"
    "on_mSymbolScaleLineEdit_returnPressed()\0"
    "on_mWidthScaleLineEdit_returnPressed()\0"
    "on_mFrameCheckBox_clicked()\0"
    "on_mPreviewModeComboBox_activated(int)\0"
    "mapCanvasChanged()\0"
};

const QMetaObject QgsComposerMap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerMap,
      qt_meta_data_QgsComposerMap, 0 }
};

const QMetaObject *QgsComposerMap::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerMap))
	return static_cast<void*>(const_cast< QgsComposerMap*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
	return static_cast< QGraphicsRectItem*>(const_cast< QgsComposerMap*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerMap*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mWidthLineEdit_returnPressed(); break;
        case 1: on_mHeightLineEdit_returnPressed(); break;
        case 2: on_mSetCurrentExtentButton_clicked(); break;
        case 3: on_mCalculateComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_mScaleLineEdit_returnPressed(); break;
        case 5: on_mFontScaleLineEdit_returnPressed(); break;
        case 6: on_mSymbolScaleLineEdit_returnPressed(); break;
        case 7: on_mWidthScaleLineEdit_returnPressed(); break;
        case 8: on_mFrameCheckBox_clicked(); break;
        case 9: on_mPreviewModeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: mapCanvasChanged(); break;
        }
        _id -= 11;
    }
    return _id;
}
