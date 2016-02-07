/****************************************************************************
** Meta object code from reading C++ file 'qgscompositionwidget.h'
**
** Created: Tue Jun 22 23:06:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscompositionwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscompositionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsCompositionWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x0a,
      78,   22,   21,   21, 0x0a,
     136,   21,   21,   21, 0x0a,
     177,   21,   21,   21, 0x0a,
     219,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsCompositionWidget[] = {
    "QgsCompositionWidget\0\0text\0"
    "on_mPaperSizeComboBox_currentIndexChanged(QString)\0"
    "on_mPaperOrientationComboBox_currentIndexChanged(QString)\0"
    "on_mPaperWidthLineEdit_editingFinished()\0"
    "on_mPaperHeightLineEdit_editingFinished()\0"
    "on_mResolutionLineEdit_textChanged(QString)\0"
};

const QMetaObject QgsCompositionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsCompositionWidget,
      qt_meta_data_QgsCompositionWidget, 0 }
};

const QMetaObject *QgsCompositionWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QgsCompositionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCompositionWidget))
	return static_cast<void*>(const_cast< QgsCompositionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsCompositionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mPaperSizeComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_mPaperOrientationComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: on_mPaperWidthLineEdit_editingFinished(); break;
        case 3: on_mPaperHeightLineEdit_editingFinished(); break;
        case 4: on_mResolutionLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
