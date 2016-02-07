/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerlabelwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerlabelwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerlabelwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerLabelWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      51,   23,   23,   23, 0x0a,
      78,   76,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerLabelWidget[] = {
    "QgsComposerLabelWidget\0\0"
    "on_mTextEdit_textChanged()\0"
    "on_mFontButton_clicked()\0d\0"
    "on_mMarginDoubleSpinBox_valueChanged(double)\0"
};

const QMetaObject QgsComposerLabelWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerLabelWidget,
      qt_meta_data_QgsComposerLabelWidget, 0 }
};

const QMetaObject *QgsComposerLabelWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerLabelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerLabelWidget))
	return static_cast<void*>(const_cast< QgsComposerLabelWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerLabelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mTextEdit_textChanged(); break;
        case 1: on_mFontButton_clicked(); break;
        case 2: on_mMarginDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
