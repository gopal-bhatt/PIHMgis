/****************************************************************************
** Meta object code from reading C++ file 'qgscomposermapwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposermapwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposermapwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerMapWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      58,   21,   21,   21, 0x0a,
      97,   95,   21,   21, 0x0a,
     136,   21,   21,   21, 0x0a,
     172,   21,   21,   21, 0x0a,
     213,   21,   21,   21, 0x0a,
     247,   21,   21,   21, 0x0a,
     282,   21,   21,   21, 0x0a,
     317,   21,   21,   21, 0x0a,
     352,   21,   21,   21, 0x0a,
     387,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerMapWidget[] = {
    "QgsComposerMapWidget\0\0"
    "on_mWidthLineEdit_editingFinished()\0"
    "on_mHeightLineEdit_editingFinished()\0"
    "i\0on_mPreviewModeComboBox_activated(int)\0"
    "on_mScaleLineEdit_editingFinished()\0"
    "on_mSetToMapCanvasExtentButton_clicked()\0"
    "on_mUpdatePreviewButton_clicked()\0"
    "on_mXMinLineEdit_editingFinished()\0"
    "on_mXMaxLineEdit_editingFinished()\0"
    "on_mYMinLineEdit_editingFinished()\0"
    "on_mYMaxLineEdit_editingFinished()\0"
    "updateSettingsNoSignals()\0"
};

const QMetaObject QgsComposerMapWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerMapWidget,
      qt_meta_data_QgsComposerMapWidget, 0 }
};

const QMetaObject *QgsComposerMapWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerMapWidget))
	return static_cast<void*>(const_cast< QgsComposerMapWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mWidthLineEdit_editingFinished(); break;
        case 1: on_mHeightLineEdit_editingFinished(); break;
        case 2: on_mPreviewModeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_mScaleLineEdit_editingFinished(); break;
        case 4: on_mSetToMapCanvasExtentButton_clicked(); break;
        case 5: on_mUpdatePreviewButton_clicked(); break;
        case 6: on_mXMinLineEdit_editingFinished(); break;
        case 7: on_mXMaxLineEdit_editingFinished(); break;
        case 8: on_mYMinLineEdit_editingFinished(); break;
        case 9: on_mYMaxLineEdit_editingFinished(); break;
        case 10: updateSettingsNoSignals(); break;
        }
        _id -= 11;
    }
    return _id;
}
