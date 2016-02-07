/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayer.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsmaplayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapLayer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      39,   13,   12,   12, 0x05,
      74,   64,   12,   12, 0x05,
      97,   12,   12,   12, 0x05,
     116,   12,   12,   12, 0x05,
     135,   12,   12,   12, 0x05,
     159,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     180,   12,   12,   12, 0x0a,
     216,  204,   12,   12, 0x0a,
     245,   12,  239,   12, 0x0a,
     272,  260,   12,   12, 0x0a,
     295,   12,  239,   12, 0x0a,
     328,  310,   12,   12, 0x0a,
     366,   12,  361,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapLayer[] = {
    "QgsMapLayer\0\0theProgress,theTotalSteps\0"
    "drawingProgress(int,int)\0theStatus\0"
    "statusChanged(QString)\0layerNameChanged()\0"
    "repaintRequested()\0screenUpdateRequested()\0"
    "recalculateExtents()\0invalidTransformInput()\0"
    "theMinScale\0setMinimumScale(float)\0"
    "float\0minimumScale()\0theMaxScale\0"
    "setMaximumScale(float)\0maximumScale()\0"
    "theVisibilityFlag\0toggleScaleBasedVisibility(bool)\0"
    "bool\0hasScaleBasedVisibility()\0"
};

const QMetaObject QgsMapLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayer,
      qt_meta_data_QgsMapLayer, 0 }
};

const QMetaObject *QgsMapLayer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayer))
	return static_cast<void*>(const_cast< QgsMapLayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawingProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: layerNameChanged(); break;
        case 3: repaintRequested(); break;
        case 4: screenUpdateRequested(); break;
        case 5: recalculateExtents(); break;
        case 6: invalidTransformInput(); break;
        case 7: setMinimumScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: { float _r = minimumScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 9: setMaximumScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: { float _r = maximumScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 11: toggleScaleBasedVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = hasScaleBasedVisibility();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsMapLayer::drawingProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayer::statusChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayer::layerNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QgsMapLayer::repaintRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QgsMapLayer::screenUpdateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QgsMapLayer::recalculateExtents()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
