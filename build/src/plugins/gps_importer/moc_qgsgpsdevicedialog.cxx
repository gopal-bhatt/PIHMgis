/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsdevicedialog.h'
**
** Created: Tue Jun 22 23:12:05 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/gps_importer/qgsgpsdevicedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsdevicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGPSDeviceDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   19,   19,   19, 0x0a,
      63,   19,   19,   19, 0x0a,
      92,   19,   19,   19, 0x0a,
     121,   19,   19,   19, 0x0a,
     153,  143,   19,   19, 0x0a,
     183,   19,   19,   19, 0x2a,
     214,  206,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsGPSDeviceDialog[] = {
    "QgsGPSDeviceDialog\0\0devicesChanged()\0"
    "on_pbnNewDevice_clicked()\0"
    "on_pbnDeleteDevice_clicked()\0"
    "on_pbnUpdateDevice_clicked()\0"
    "on_pbnClose_clicked()\0selection\0"
    "slotUpdateDeviceList(QString)\0"
    "slotUpdateDeviceList()\0current\0"
    "slotSelectionChanged(QListWidgetItem*)\0"
};

const QMetaObject QgsGPSDeviceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGPSDeviceDialog,
      qt_meta_data_QgsGPSDeviceDialog, 0 }
};

const QMetaObject *QgsGPSDeviceDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGPSDeviceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGPSDeviceDialog))
	return static_cast<void*>(const_cast< QgsGPSDeviceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGPSDeviceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: devicesChanged(); break;
        case 1: on_pbnNewDevice_clicked(); break;
        case 2: on_pbnDeleteDevice_clicked(); break;
        case 3: on_pbnUpdateDevice_clicked(); break;
        case 4: on_pbnClose_clicked(); break;
        case 5: slotUpdateDeviceList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: slotUpdateDeviceList(); break;
        case 7: slotSelectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsGPSDeviceDialog::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
