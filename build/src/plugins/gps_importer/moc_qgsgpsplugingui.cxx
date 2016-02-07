/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsplugingui.h'
**
** Created: Tue Jun 22 23:12:05 2010
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
      20,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      45,   42,   16,   16, 0x05,
     131,   86,   16,   16, 0x05,
     257,  167,   16,   16, 0x05,
     378,  327,   16,   16, 0x05,
     507,  422,   16,   16, 0x05,
     592,  571,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     637,   16,   16,   16, 0x0a,
     656,   16,   16,   16, 0x0a,
     673,   16,   16,   16, 0x0a,
     698,   16,   16,   16, 0x0a,
     728,   16,   16,   16, 0x0a,
     753,   16,   16,   16, 0x0a,
     779,   16,   16,   16, 0x0a,
     805,   16,   16,   16, 0x0a,
     832,   16,   16,   16, 0x0a,
     857,   16,   16,   16, 0x08,
     881,   16,   16,   16, 0x08,
     905,   16,   16,   16, 0x08,
     929,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsGPSPluginGui[] = {
    "QgsGPSPluginGui\0\0drawRasterLayer(QString)\0"
    ",,\0drawVectorLayer(QString,QString,QString)\0"
    "fileName,showWaypoints,showRoutes,showTracks\0"
    "loadGPXFile(QString,bool,bool,bool)\0"
    "inputFileName,importer,importWaypoints,importRoutes,importTracks,outpu"
    "tFileName,layerName\0"
    "importGPSFile(QString,QgsBabelFormat*,bool,bool,bool,QString,QString)\0"
    "inputFileName,convertType,outputFileName,layerName\0"
    "convertGPSFile(QString,int,QString,QString)\0"
    "device,port,downloadWaypoints,downloadRoutes,downloadTracks,outputFile"
    "Name,layerName\0"
    "downloadFromGPS(QString,QString,bool,bool,bool,QString,QString)\0"
    "gpxLayer,device,port\0"
    "uploadToGPS(QgsVectorLayer*,QString,QString)\0"
    "openDeviceEditor()\0devicesUpdated()\0"
    "enableRelevantControls()\0"
    "on_pbnGPXSelectFile_clicked()\0"
    "on_pbnIMPInput_clicked()\0"
    "on_pbnIMPOutput_clicked()\0"
    "on_pbnCONVInput_clicked()\0"
    "on_pbnCONVOutput_clicked()\0"
    "on_pbnDLOutput_clicked()\0"
    "on_pbnRefresh_clicked()\0on_buttonBox_accepted()\0"
    "on_buttonBox_rejected()\0"
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
        case 4: convertGPSFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: downloadFromGPS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 6: uploadToGPS((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: openDeviceEditor(); break;
        case 8: devicesUpdated(); break;
        case 9: enableRelevantControls(); break;
        case 10: on_pbnGPXSelectFile_clicked(); break;
        case 11: on_pbnIMPInput_clicked(); break;
        case 12: on_pbnIMPOutput_clicked(); break;
        case 13: on_pbnCONVInput_clicked(); break;
        case 14: on_pbnCONVOutput_clicked(); break;
        case 15: on_pbnDLOutput_clicked(); break;
        case 16: on_pbnRefresh_clicked(); break;
        case 17: on_buttonBox_accepted(); break;
        case 18: on_buttonBox_rejected(); break;
        case 19: on_buttonBox_helpRequested(); break;
        }
        _id -= 20;
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
void QgsGPSPluginGui::convertGPSFile(QString _t1, int _t2, QString _t3, QString _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsGPSPluginGui::downloadFromGPS(QString _t1, QString _t2, bool _t3, bool _t4, bool _t5, QString _t6, QString _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsGPSPluginGui::uploadToGPS(QgsVectorLayer * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
