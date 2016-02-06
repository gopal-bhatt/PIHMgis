/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerscalebar.h'
**
** Created: Wed Jun 11 19:05:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerscalebar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerscalebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerScalebar[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      46,   20,   20,   20, 0x0a,
      84,   20,   20,   20, 0x0a,
     120,   20,   20,   20, 0x0a,
     164,   20,   20,   20, 0x0a,
     204,   20,   20,   20, 0x0a,
     248,  246,   20,   20, 0x0a,
     282,  279,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerScalebar[] = {
    "QgsComposerScalebar\0\0on_mFontButton_clicked()\0"
    "on_mUnitLabelLineEdit_returnPressed()\0"
    "on_mLineWidthSpinBox_valueChanged()\0"
    "on_mMapUnitsPerUnitLineEdit_returnPressed()\0"
    "on_mNumSegmentsLineEdit_returnPressed()\0"
    "on_mSegmentLengthLineEdit_returnPressed()\0"
    "i\0on_mMapComboBox_activated(int)\0id\0"
    "mapChanged(int)\0"
};

const QMetaObject QgsComposerScalebar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsComposerScalebar,
      qt_meta_data_QgsComposerScalebar, 0 }
};

const QMetaObject *QgsComposerScalebar::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerScalebar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerScalebar))
	return static_cast<void*>(const_cast< QgsComposerScalebar*>(this));
    if (!strcmp(_clname, "QAbstractGraphicsShapeItem"))
	return static_cast< QAbstractGraphicsShapeItem*>(const_cast< QgsComposerScalebar*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerScalebar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsComposerScalebar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_mFontButton_clicked(); break;
        case 1: on_mUnitLabelLineEdit_returnPressed(); break;
        case 2: on_mLineWidthSpinBox_valueChanged(); break;
        case 3: on_mMapUnitsPerUnitLineEdit_returnPressed(); break;
        case 4: on_mNumSegmentsLineEdit_returnPressed(); break;
        case 5: on_mSegmentLengthLineEdit_returnPressed(); break;
        case 6: on_mMapComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: mapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}
