/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerpicturewidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerpicturewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerpicturewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerPictureWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      60,   25,   25,   25, 0x0a,
     100,   98,   25,   25, 0x0a,
     141,   25,   25,   25, 0x0a,
     177,   25,   25,   25, 0x0a,
     214,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerPictureWidget[] = {
    "QgsComposerPictureWidget\0\0"
    "on_mPictureBrowseButton_clicked()\0"
    "on_mPictureLineEdit_editingFinished()\0"
    "d\0on_mRotationSpinBox_valueChanged(double)\0"
    "on_mWidthLineEdit_editingFinished()\0"
    "on_mHeightLineEdit_editingFinished()\0"
    "setGuiElementValues()\0"
};

const QMetaObject QgsComposerPictureWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerPictureWidget,
      qt_meta_data_QgsComposerPictureWidget, 0 }
};

const QMetaObject *QgsComposerPictureWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerPictureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerPictureWidget))
	return static_cast<void*>(const_cast< QgsComposerPictureWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerPictureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mPictureBrowseButton_clicked(); break;
        case 1: on_mPictureLineEdit_editingFinished(); break;
        case 2: on_mRotationSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_mWidthLineEdit_editingFinished(); break;
        case 4: on_mHeightLineEdit_editingFinished(); break;
        case 5: setGuiElementValues(); break;
        }
        _id -= 6;
    }
    return _id;
}
