/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerlabel.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerlabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerLabel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      43,   17,   17,   17, 0x0a,
      76,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerLabel[] = {
    "QgsComposerLabel\0\0on_mFontButton_clicked()\0"
    "on_mTextLineEdit_returnPressed()\0"
    "on_mBoxCheckBox_clicked()\0"
};

const QMetaObject QgsComposerLabel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerLabel,
      qt_meta_data_QgsComposerLabel, 0 }
};

const QMetaObject *QgsComposerLabel::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerLabel))
	return static_cast<void*>(const_cast< QgsComposerLabel*>(this));
    if (!strcmp(_clname, "QAbstractGraphicsShapeItem"))
	return static_cast< QAbstractGraphicsShapeItem*>(const_cast< QgsComposerLabel*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerLabel*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mFontButton_clicked(); break;
        case 1: on_mTextLineEdit_returnPressed(); break;
        case 2: on_mBoxCheckBox_clicked(); break;
        }
        _id -= 3;
    }
    return _id;
}
