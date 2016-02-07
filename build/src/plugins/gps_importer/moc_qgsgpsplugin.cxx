/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsplugin.h'
**
** Created: Tue Jun 22 23:12:05 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/gps_importer/qgsgpsplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGPSPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   13,   13,   13, 0x0a,
      35,   13,   13,   13, 0x0a,
      41,   13,   13,   13, 0x0a,
      56,   53,   13,   13, 0x0a,
      97,   13,   13,   13, 0x0a,
     106,   13,   13,   13, 0x0a,
     158,  113,   13,   13, 0x0a,
     284,  194,   13,   13, 0x0a,
     405,  354,   13,   13, 0x0a,
     534,  449,   13,   13, 0x0a,
     619,  598,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsGPSPlugin[] = {
    "QgsGPSPlugin\0\0closeGui()\0initGui()\0"
    "run()\0createGPX()\0,,\0"
    "drawVectorLayer(QString,QString,QString)\0"
    "unload()\0help()\0"
    "fileName,loadWaypoints,loadRoutes,loadTracks\0"
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
};

const QMetaObject QgsGPSPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGPSPlugin,
      qt_meta_data_QgsGPSPlugin, 0 }
};

const QMetaObject *QgsGPSPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGPSPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGPSPlugin))
	return static_cast<void*>(const_cast< QgsGPSPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsGPSPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsGPSPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: closeGui(); break;
        case 1: initGui(); break;
        case 2: run(); break;
        case 3: createGPX(); break;
        case 4: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: unload(); break;
        case 6: help(); break;
        case 7: loadGPXFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 8: importGPSFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QgsBabelFormat*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 9: convertGPSFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 10: downloadFromGPS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 11: uploadToGPS((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsGPSPlugin::closeGui()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
