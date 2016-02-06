/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerpicture.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerpicture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerpicture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerPicture[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      56,   19,   19,   19, 0x0a,
      90,   19,   19,   19, 0x0a,
     126,   19,   19,   19, 0x0a,
     160,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerPicture[] = {
    "QgsComposerPicture\0\0"
    "on_mPictureLineEdit_returnPressed()\0"
    "on_mPictureBrowseButton_clicked()\0"
    "on_mFrameCheckBox_stateChanged(int)\0"
    "on_mAngleLineEdit_returnPressed()\0"
    "on_mWidthLineEdit_returnPressed()\0"
};

const QMetaObject QgsComposerPicture::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerPicture,
      qt_meta_data_QgsComposerPicture, 0 }
};

const QMetaObject *QgsComposerPicture::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerPicture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerPicture))
	return static_cast<void*>(const_cast< QgsComposerPicture*>(this));
    if (!strcmp(_clname, "QAbstractGraphicsShapeItem"))
	return static_cast< QAbstractGraphicsShapeItem*>(const_cast< QgsComposerPicture*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerPicture*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerPicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mPictureLineEdit_returnPressed(); break;
        case 1: on_mPictureBrowseButton_clicked(); break;
        case 2: on_mFrameCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_mAngleLineEdit_returnPressed(); break;
        case 4: on_mWidthLineEdit_returnPressed(); break;
        }
        _id -= 5;
    }
    return _id;
}
