/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayer.h'
**
** Created: Wed Jun 11 19:03:32 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsvectorlayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsVectorLayer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      48,   35,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   66,   15,   15, 0x0a,
     114,  104,   15,   15, 0x2a,
     137,  126,   15,   15, 0x0a,
     159,   15,   15,   15, 0x2a,
     177,   15,   15,   15, 0x0a,
     194,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsVectorLayer[] = {
    "QgsVectorLayer\0\0selectionChanged()\0"
    "onlyGeometry\0wasModified(bool)\0"
    "featureId,emitSignal\0select(int,bool)\0"
    "featureId\0select(int)\0emitSignal\0"
    "removeSelection(bool)\0removeSelection()\0"
    "triggerRepaint()\0updateExtents()\0"
};

const QMetaObject QgsVectorLayer::staticMetaObject = {
    { &QgsMapLayer::staticMetaObject, qt_meta_stringdata_QgsVectorLayer,
      qt_meta_data_QgsVectorLayer, 0 }
};

const QMetaObject *QgsVectorLayer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsVectorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayer))
	return static_cast<void*>(const_cast< QgsVectorLayer*>(this));
    return QgsMapLayer::qt_metacast(_clname);
}

int QgsVectorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged(); break;
        case 1: wasModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: select((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: select((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: removeSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: removeSelection(); break;
        case 6: triggerRepaint(); break;
        case 7: updateExtents(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayer::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QgsVectorLayer::wasModified(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
