/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsplugingui.h'
**
** Created: Wed Jun 11 19:10:26 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/gps_importer/qgsgpsplugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsplugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGPSPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      45,   42,   16,   16, 0x05,
     131,   86,   16,   16, 0x05,
     257,  167,   16,   16, 0x05,
     412,  327,   16,   16, 0x05,
     497,  476,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     542,   16,   16,   16, 0x0a,
     561,   16,   16,   16, 0x0a,
     578,   16,   16,   16, 0x0a,
     603,   16,   16,   16, 0x0a,
     633,   16,   16,   16, 0x0a,
     658,   16,   16,   16, 0x0a,
     684,   16,   16,   16, 0x0a,
     709,   16,   16,   16, 0x08,
     733,   16,   16,   16, 0x08,
     757,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsGPSPluginGui[] = {
    "QgsGPSPluginGui\0\0drawRasterLayer(QString)\0"
    ",,\0drawVectorLayer(QString,QString,QString)\0"
    "filename,showWaypoints,showRoutes,showTracks\0"
    "loadGPXFile(QString,bool,bool,bool)\0"
    "inputFilename,importer,importWaypoints,importRoutes,importTracks,outpu"
    "tFilename,layerName\0"
    "importGPSFile(QString,QgsBabelFormat*,bool,bool,bool,QString,QString)\0"
    "device,port,downloadWaypoints,downloadRoutes,downloadTracks,outputFile"
    "name,layerName\0"
    "downloadFromGPS(QString,QString,bool,bool,bool,QString,QString)\0"
    "gpxLayer,device,port\0"
    "uploadToGPS(QgsVectorLayer*,QString,QString)\0"
    "openDeviceEditor()\0devicesUpdated()\0"
    "enableRelevantControls()\0"
    "on_pbnGPXSelectFile_clicked()\0"
    "on_pbnIMPInput_clicked()\0"
    "on_pbnIMPOutput_clicked()\0"
    "on_pbnDLOutput_clicked()\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
};

const QMetaObject QgsGPSPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGPSPluginGui,
      qt_meta_data_QgsGPSPluginGui, 0 }
};

const QMetaObject *QgsGPSPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGPSPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGPSPluginGui))
	return static_cast<void*>(const_cast< QgsGPSPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGPSPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawRasterLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: loadGPXFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: importGPSFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QgsBabelFormat*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 4: downloadFromGPS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 5: uploadToGPS((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: openDeviceEditor(); break;
        case 7: devicesUpdated(); break;
        case 8: enableRelevantControls(); break;
        case 9: on_pbnGPXSelectFile_clicked(); break;
        case 10: on_pbnIMPInput_clicked(); break;
        case 11: on_pbnIMPOutput_clicked(); break;
        case 12: on_pbnDLOutput_clicked(); break;
        case 13: on_buttonBox_accepted(); break;
        case 14: on_buttonBox_rejected(); break;
        case 15: on_buttonBox_helpRequested(); break;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QgsGPSPluginGui::drawRasterLayer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGPSPluginGui::drawVectorLayer(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGPSPluginGui::loadGPXFile(QString _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsGPSPluginGui::importGPSFile(QString _t1, QgsBabelFormat * _t2, bool _t3, bool _t4, bool _t5, QString _t6, QString _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsGPSPluginGui::downloadFromGPS(QString _t1, QString _t2, bool _t3, bool _t4, bool _t5, QString _t6, QString _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsGPSPluginGui::uploadToGPS(QgsVectorLayer * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
