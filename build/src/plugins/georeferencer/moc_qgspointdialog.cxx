/****************************************************************************
** Meta object code from reading C++ file 'qgspointdialog.h'
**
** Created: Tue Jun 22 23:12:32 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/georeferencer/qgspointdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsPointDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      38,   16,   15,   15, 0x0a,
      66,   15,   15,   15, 0x0a,
     100,   15,   15,   15, 0x0a,
     132,   15,   15,   15, 0x0a,
     164,   15,   15,   15, 0x0a,
     201,   15,   15,   15, 0x0a,
     250,   15,   15,   15, 0x0a,
     259,   15,   15,   15, 0x0a,
     269,   15,   15,   15, 0x0a,
     283,   15,   15,   15, 0x0a,
     289,   15,   15,   15, 0x0a,
     300,   15,   15,   15, 0x0a,
     314,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsPointDialog[] = {
    "QgsPointDialog\0\0pixelCoords,mapCoords\0"
    "addPoint(QgsPoint,QgsPoint)\0"
    "on_pbnGenerateWorldFile_clicked()\0"
    "on_pbnGenerateAndLoad_clicked()\0"
    "on_pbnSelectWorldFile_clicked()\0"
    "on_pbnSelectModifiedRaster_clicked()\0"
    "on_cmbTransformType_currentIndexChanged(QString)\0"
    "zoomIn()\0zoomOut()\0zoomToLayer()\0pan()\0"
    "addPoint()\0deletePoint()\0"
    "enableRelevantControls()\0"
};

const QMetaObject QgsPointDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsPointDialog,
      qt_meta_data_QgsPointDialog, 0 }
};

const QMetaObject *QgsPointDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsPointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointDialog))
	return static_cast<void*>(const_cast< QgsPointDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsPointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addPoint((*reinterpret_cast< const QgsPoint(*)>(_a[1])),(*reinterpret_cast< const QgsPoint(*)>(_a[2]))); break;
        case 1: on_pbnGenerateWorldFile_clicked(); break;
        case 2: on_pbnGenerateAndLoad_clicked(); break;
        case 3: on_pbnSelectWorldFile_clicked(); break;
        case 4: on_pbnSelectModifiedRaster_clicked(); break;
        case 5: on_cmbTransformType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: zoomIn(); break;
        case 7: zoomOut(); break;
        case 8: zoomToLayer(); break;
        case 9: pan(); break;
        case 10: addPoint(); break;
        case 11: deletePoint(); break;
        case 12: enableRelevantControls(); break;
        }
        _id -= 13;
    }
    return _id;
}
