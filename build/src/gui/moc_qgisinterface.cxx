/****************************************************************************
** Meta object code from reading C++ file 'qgisinterface.h'
**
** Created: Wed Jun 11 19:05:13 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgisinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgisinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgisInterface[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   14,   14,   14, 0x0a,
      66,   14,   14,   14, 0x0a,
      81,   14,   14,   14, 0x0a,
     141,  104,   99,   14, 0x0a,
     197,  181,   99,   14, 0x0a,
     255,  221,   99,   14, 0x0a,
     307,  292,   99,   14, 0x2a,
     350,  339,   99,   14, 0x0a,
     390,  370,   14,   14, 0x0a,
     407,   14,   14,   14, 0x2a,
     433,   14,  420,   14, 0x0a,
     459,  451,  447,   14, 0x0a,
     484,  451,   14,   14, 0x0a,
     527,  522,  512,   14, 0x0a,
     571,  547,   14,   14, 0x0a,
     597,  593,   14,   14, 0x2a,
     628,   14,  614,   14, 0x0a,
     652,   14,  643,   14, 0x0a,
     680,  668,   14,   14, 0x0a,
     712,  668,   14,   14, 0x0a,
     757,   14,  747,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgisInterface[] = {
    "QgisInterface\0\0layer\0"
    "currentLayerChanged(QgsMapLayer*)\0"
    "zoomFull()\0zoomPrevious()\0zoomActiveLayer()\0"
    "bool\0vectorLayerPath,baseName,providerKey\0"
    "addVectorLayer(QString,QString,QString)\0"
    "rasterLayerPath\0addRasterLayer(QString)\0"
    "theRasterLayer,theForceRenderFlag\0"
    "addRasterLayer(QgsRasterLayer*,bool)\0"
    "theRasterLayer\0addRasterLayer(QgsRasterLayer*)\0"
    "theProject\0addProject(QString)\0"
    "thePromptToSaveFlag\0newProject(bool)\0"
    "newProject()\0QgsMapLayer*\0activeLayer()\0"
    "int\0qAction\0addToolBarIcon(QAction*)\0"
    "removeToolBarIcon(QAction*)\0QToolBar*\0"
    "name\0addToolBar(QString)\0"
    "url,useQgisDocDirectory\0openURL(QString,bool)\0"
    "url\0openURL(QString)\0QgsMapCanvas*\0"
    "getMapCanvas()\0QWidget*\0getMainWindow()\0"
    "name,action\0addPluginMenu(QString,QAction*)\0"
    "removePluginMenu(QString,QAction*)\0"
    "QToolBox*\0getToolBox()\0"
};

const QMetaObject QgisInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgisInterface,
      qt_meta_data_QgisInterface, 0 }
};

const QMetaObject *QgisInterface::metaObject() const
{
    return &staticMetaObject;
}

void *QgisInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgisInterface))
	return static_cast<void*>(const_cast< QgisInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QgisInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: zoomFull(); break;
        case 2: zoomPrevious(); break;
        case 3: zoomActiveLayer(); break;
        case 4: { bool _r = addVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = addRasterLayer((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = addRasterLayer((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = addRasterLayer((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = addProject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: newProject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: newProject(); break;
        case 11: { QgsMapLayer* _r = activeLayer();
            if (_a[0]) *reinterpret_cast< QgsMapLayer**>(_a[0]) = _r; }  break;
        case 12: { int _r = addToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: removeToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: { QToolBar* _r = addToolBar((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = _r; }  break;
        case 15: openURL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: openURL((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: { QgsMapCanvas* _r = getMapCanvas();
            if (_a[0]) *reinterpret_cast< QgsMapCanvas**>(_a[0]) = _r; }  break;
        case 18: { QWidget* _r = getMainWindow();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 19: addPluginMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 20: removePluginMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 21: { QToolBox* _r = getToolBox();
            if (_a[0]) *reinterpret_cast< QToolBox**>(_a[0]) = _r; }  break;
        }
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QgisInterface::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
