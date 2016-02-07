/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcanvas.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsmapcanvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapCanvas[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,
      39,   37,   13,   13, 0x05,
      64,   13,   13,   13, 0x05,
      85,   13,   13,   13, 0x05,
     102,   13,   13,   13, 0x05,
     128,   13,   13,   13, 0x05,
     146,  144,   13,   13, 0x05,
     169,  144,   13,   13, 0x05,
     198,  193,   13,   13, 0x05,
     228,  222,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     259,   13,   13,   13, 0x0a,
     269,   13,   13,   13, 0x0a,
     313,  292,   13,   13, 0x0a,
     371,  351,   13,   13, 0x2a,
     413,  401,   13,   13, 0x2a,
     434,   13,   13,   13, 0x0a,
     461,  453,   13,   13, 0x0a,
     486,   13,  481,   13, 0x0a,
     499,   13,  481,   13, 0x0a,
     524,   13,   13,   13, 0x0a,
     542,   13,   13,   13, 0x0a,
     563,  554,   13,   13, 0x0a,
     587,   13,   13,   13, 0x0a,
     613,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapCanvas[] = {
    "QgsMapCanvas\0\0,\0setProgress(int,int)\0"
    "p\0xyCoordinates(QgsPoint&)\0"
    "scaleChanged(double)\0extentsChanged()\0"
    "renderComplete(QPainter*)\0layersChanged()\0"
    "e\0keyPressed(QKeyEvent*)\0"
    "keyReleased(QKeyEvent*)\0tool\0"
    "mapToolSet(QgsMapTool*)\0layer\0"
    "selectionChanged(QgsMapLayer*)\0refresh()\0"
    "selectionChangedSlot()\0theFileName,QPixmap,\0"
    "saveAsImage(QString,QPixmap*,QString)\0"
    "theFileName,QPixmap\0saveAsImage(QString,QPixmap*)\0"
    "theFileName\0saveAsImage(QString)\0"
    "layerStateChange()\0theFlag\0"
    "setRenderFlag(bool)\0bool\0renderFlag()\0"
    "hasCrsTransformEnabled()\0mapUnitsChanged()\0"
    "updateMap()\0mapLayer\0showError(QgsMapLayer*)\0"
    "readProject(QDomDocument)\0"
    "writeProject(QDomDocument&)\0"
};

const QMetaObject QgsMapCanvas::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsMapCanvas,
      qt_meta_data_QgsMapCanvas, 0 }
};

const QMetaObject *QgsMapCanvas::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvas))
	return static_cast<void*>(const_cast< QgsMapCanvas*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QgsMapCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: xyCoordinates((*reinterpret_cast< QgsPoint(*)>(_a[1]))); break;
        case 2: scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: extentsChanged(); break;
        case 4: renderComplete((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 5: layersChanged(); break;
        case 6: keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 7: keyReleased((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 8: mapToolSet((*reinterpret_cast< QgsMapTool*(*)>(_a[1]))); break;
        case 9: selectionChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 10: refresh(); break;
        case 11: selectionChangedSlot(); break;
        case 12: saveAsImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: saveAsImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2]))); break;
        case 14: saveAsImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: layerStateChange(); break;
        case 16: setRenderFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: { bool _r = renderFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = hasCrsTransformEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: mapUnitsChanged(); break;
        case 20: updateMap(); break;
        case 21: showError((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 22: readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 23: writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        }
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void QgsMapCanvas::setProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapCanvas::xyCoordinates(QgsPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapCanvas::scaleChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsMapCanvas::extentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QgsMapCanvas::renderComplete(QPainter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapCanvas::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QgsMapCanvas::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsMapCanvas::keyReleased(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsMapCanvas::mapToolSet(QgsMapTool * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsMapCanvas::selectionChanged(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
