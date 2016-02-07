/****************************************************************************
** Meta object code from reading C++ file 'qgscomposeritemwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposeritemwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposeritemwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerItemWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      54,   22,   22,   22, 0x0a,
      90,   22,   22,   22, 0x0a,
     127,  125,   22,   22, 0x0a,
     178,  172,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerItemWidget[] = {
    "QgsComposerItemWidget\0\0"
    "on_mFrameColorButton_clicked()\0"
    "on_mBackgroundColorButton_clicked()\0"
    "on_mOpacitySlider_sliderReleased()\0d\0"
    "on_mOutlineWidthSpinBox_valueChanged(double)\0"
    "state\0on_mFrameCheckBox_stateChanged(int)\0"
};

const QMetaObject QgsComposerItemWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerItemWidget,
      qt_meta_data_QgsComposerItemWidget, 0 }
};

const QMetaObject *QgsComposerItemWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerItemWidget))
	return static_cast<void*>(const_cast< QgsComposerItemWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mFrameColorButton_clicked(); break;
        case 1: on_mBackgroundColorButton_clicked(); break;
        case 2: on_mOpacitySlider_sliderReleased(); break;
        case 3: on_mOutlineWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_mFrameCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
