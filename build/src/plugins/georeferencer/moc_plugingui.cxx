/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created: Wed Jun 11 19:10:51 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/georeferencer/plugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGeorefPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      42,   19,   19,   19, 0x0a,
      75,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsGeorefPluginGui[] = {
    "QgsGeorefPluginGui\0\0on_pbnClose_clicked()\0"
    "on_pbnEnterWorldCoords_clicked()\0"
    "on_pbnSelectRaster_clicked()\0"
};

const QMetaObject QgsGeorefPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGeorefPluginGui,
      qt_meta_data_QgsGeorefPluginGui, 0 }
};

const QMetaObject *QgsGeorefPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGeorefPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeorefPluginGui))
	return static_cast<void*>(const_cast< QgsGeorefPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGeorefPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbnClose_clicked(); break;
        case 1: on_pbnEnterWorldCoords_clicked(); break;
        case 2: on_pbnSelectRaster_clicked(); break;
        }
        _id -= 3;
    }
    return _id;
}