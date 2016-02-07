/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerscalebarwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerscalebarwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerscalebarwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerScaleBarWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      32,   27,   26,   26, 0x0a,
      69,   67,   26,   26, 0x0a,
     107,  105,   26,   26, 0x0a,
     149,  105,   26,   26, 0x0a,
     193,   67,   26,   26, 0x0a,
     235,   67,   26,   26, 0x0a,
     281,   27,   26,   26, 0x0a,
     324,  105,   26,   26, 0x0a,
     375,   26,   26,   26, 0x0a,
     405,   26,   26,   26, 0x0a,
     430,   27,   26,   26, 0x0a,
     477,  105,   26,   26, 0x0a,
     523,  105,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerScaleBarWidget[] = {
    "QgsComposerScaleBarWidget\0\0text\0"
    "on_mMapComboBox_activated(QString)\0i\0"
    "on_mHeightSpinBox_valueChanged(int)\0"
    "d\0on_mLineWidthSpinBox_valueChanged(double)\0"
    "on_mSegmentSizeSpinBox_valueChanged(double)\0"
    "on_mSegmentsLeftSpinBox_valueChanged(int)\0"
    "on_mNumberOfSegmentsSpinBox_valueChanged(int)\0"
    "on_mUnitLabelLineEdit_textChanged(QString)\0"
    "on_mMapUnitsPerBarUnitSpinBox_valueChanged(double)\0"
    "on_mColorPushButton_clicked()\0"
    "on_mFontButton_clicked()\0"
    "on_mStyleComboBox_currentIndexChanged(QString)\0"
    "on_mLabelBarSpaceSpinBox_valueChanged(double)\0"
    "on_mBoxSizeSpinBox_valueChanged(double)\0"
};

const QMetaObject QgsComposerScaleBarWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerScaleBarWidget,
      qt_meta_data_QgsComposerScaleBarWidget, 0 }
};

const QMetaObject *QgsComposerScaleBarWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerScaleBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerScaleBarWidget))
	return static_cast<void*>(const_cast< QgsComposerScaleBarWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerScaleBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mMapComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_mHeightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_mLineWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_mSegmentSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_mSegmentsLeftSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_mNumberOfSegmentsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_mUnitLabelLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: on_mMapUnitsPerBarUnitSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: on_mColorPushButton_clicked(); break;
        case 9: on_mFontButton_clicked(); break;
        case 10: on_mStyleComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: on_mLabelBarSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: on_mBoxSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        }
        _id -= 13;
    }
    return _id;
}
