/****************************************************************************
** Meta object code from reading C++ file 'qgsoptions.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsOptions[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      45,   11,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
     111,   11,   11,   11, 0x0a,
     125,   11,   11,   11, 0x0a,
     152,   11,  147,   11, 0x0a,
     165,   11,   11,   11, 0x0a,
     197,   11,   11,   11, 0x0a,
     227,   11,   11,   11, 0x0a,
     255,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsOptions[] = {
    "QgsOptions\0\0on_pbnSelectProjection_clicked()\0"
    "on_chkAntiAliasing_stateChanged()\0"
    "on_chkUseQPixmap_stateChanged()\0"
    "saveOptions()\0themeChanged(QString)\0"
    "bool\0newVisible()\0on_pbnSelectionColour_clicked()\0"
    "on_pbnMeasureColour_clicked()\0"
    "on_pbnCanvasColor_clicked()\0"
    "on_mLineColourToolButton_clicked()\0"
};

const QMetaObject QgsOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsOptions,
      qt_meta_data_QgsOptions, 0 }
};

const QMetaObject *QgsOptions::metaObject() const
{
    return &staticMetaObject;
}

void *QgsOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOptions))
	return static_cast<void*>(const_cast< QgsOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbnSelectProjection_clicked(); break;
        case 1: on_chkAntiAliasing_stateChanged(); break;
        case 2: on_chkUseQPixmap_stateChanged(); break;
        case 3: saveOptions(); break;
        case 4: themeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = newVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: on_pbnSelectionColour_clicked(); break;
        case 7: on_pbnMeasureColour_clicked(); break;
        case 8: on_pbnCanvasColor_clicked(); break;
        case 9: on_mLineColourToolButton_clicked(); break;
        }
        _id -= 10;
    }
    return _id;
}
