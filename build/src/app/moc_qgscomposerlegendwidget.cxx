/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerlegendwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerlegendwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerlegendwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerLegendWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x0a,
      71,   69,   24,   24, 0x0a,
     115,   69,   24,   24, 0x0a,
     160,   69,   24,   24, 0x0a,
     203,   69,   24,   24, 0x0a,
     247,   69,   24,   24, 0x0a,
     294,   24,   24,   24, 0x0a,
     324,   24,   24,   24, 0x0a,
     354,   24,   24,   24, 0x0a,
     383,   69,   24,   24, 0x0a,
     424,   24,   24,   24, 0x0a,
     457,   24,   24,   24, 0x0a,
     488,   24,   24,   24, 0x0a,
     519,   24,   24,   24, 0x0a,
     548,   24,   24,   24, 0x0a,
     579,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerLegendWidget[] = {
    "QgsComposerLegendWidget\0\0text\0"
    "on_mTitleLineEdit_textChanged(QString)\0"
    "d\0on_mSymbolWidthSpinBox_valueChanged(double)\0"
    "on_mSymbolHeightSpinBox_valueChanged(double)\0"
    "on_mLayerSpaceSpinBox_valueChanged(double)\0"
    "on_mSymbolSpaceSpinBox_valueChanged(double)\0"
    "on_mIconLabelSpaceSpinBox_valueChanged(double)\0"
    "on_mTitleFontButton_clicked()\0"
    "on_mLayerFontButton_clicked()\0"
    "on_mItemFontButton_clicked()\0"
    "on_mBoxSpaceSpinBox_valueChanged(double)\0"
    "on_mMoveDownPushButton_clicked()\0"
    "on_mMoveUpPushButton_clicked()\0"
    "on_mRemovePushButton_clicked()\0"
    "on_mEditPushButton_clicked()\0"
    "on_mUpdatePushButton_clicked()\0"
    "on_mUpdateAllPushButton_clicked()\0"
};

const QMetaObject QgsComposerLegendWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerLegendWidget,
      qt_meta_data_QgsComposerLegendWidget, 0 }
};

const QMetaObject *QgsComposerLegendWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerLegendWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerLegendWidget))
	return static_cast<void*>(const_cast< QgsComposerLegendWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerLegendWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mTitleLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_mSymbolWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: on_mSymbolHeightSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_mLayerSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_mSymbolSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: on_mIconLabelSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: on_mTitleFontButton_clicked(); break;
        case 7: on_mLayerFontButton_clicked(); break;
        case 8: on_mItemFontButton_clicked(); break;
        case 9: on_mBoxSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: on_mMoveDownPushButton_clicked(); break;
        case 11: on_mMoveUpPushButton_clicked(); break;
        case 12: on_mRemovePushButton_clicked(); break;
        case 13: on_mEditPushButton_clicked(); break;
        case 14: on_mUpdatePushButton_clicked(); break;
        case 15: on_mUpdateAllPushButton_clicked(); break;
        }
        _id -= 16;
    }
    return _id;
}
