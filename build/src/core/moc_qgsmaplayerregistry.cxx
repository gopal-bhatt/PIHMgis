/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerregistry.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsmaplayerregistry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapLayerRegistry[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      32,   21,   20,   20, 0x05,
      72,   60,   20,   20, 0x05,
     100,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapLayerRegistry[] = {
    "QgsMapLayerRegistry\0\0theLayerId\0"
    "layerWillBeRemoved(QString)\0theMapLayer\0"
    "layerWasAdded(QgsMapLayer*)\0removedAll()\0"
};

const QMetaObject QgsMapLayerRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayerRegistry,
      qt_meta_data_QgsMapLayerRegistry, 0 }
};

const QMetaObject *QgsMapLayerRegistry::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapLayerRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerRegistry))
	return static_cast<void*>(const_cast< QgsMapLayerRegistry*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayerRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: layerWillBeRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: layerWasAdded((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: removedAll(); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsMapLayerRegistry::layerWillBeRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayerRegistry::layerWasAdded(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayerRegistry::removedAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
