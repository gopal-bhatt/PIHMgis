/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayer.h'
**
** Created: Tue Jun 22 23:03:12 2010
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
      17,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      48,   35,   15,   15, 0x05,
      68,   15,   15,   15, 0x05,
      85,   15,   15,   15, 0x05,
     106,  102,   15,   15, 0x05,
     126,  102,   15,   15, 0x05,
     152,  148,   15,   15, 0x05,
     172,   15,   15,   15, 0x05,
     196,  187,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     257,  236,   15,   15, 0x0a,
     284,  274,   15,   15, 0x2a,
     296,  236,   15,   15, 0x0a,
     315,  274,   15,   15, 0x2a,
     340,  329,   15,   15, 0x0a,
     362,   15,   15,   15, 0x2a,
     380,   15,   15,   15, 0x0a,
     397,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsVectorLayer[] = {
    "QgsVectorLayer\0\0selectionChanged()\0"
    "onlyGeometry\0layerModified(bool)\0"
    "editingStarted()\0editingStopped()\0idx\0"
    "attributeAdded(int)\0attributeDeleted(int)\0"
    "fid\0featureDeleted(int)\0layerDeleted()\0"
    "fid,idx,\0attributeValueChanged(int,int,QVariant)\0"
    "featureId,emitSignal\0select(int,bool)\0"
    "featureId\0select(int)\0deselect(int,bool)\0"
    "deselect(int)\0emitSignal\0removeSelection(bool)\0"
    "removeSelection()\0triggerRepaint()\0"
    "updateExtents()\0"
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
        case 1: layerModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: editingStarted(); break;
        case 3: editingStopped(); break;
        case 4: attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: featureDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: layerDeleted(); break;
        case 8: attributeValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: select((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: select((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: deselect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: deselect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: removeSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: removeSelection(); break;
        case 15: triggerRepaint(); break;
        case 16: updateExtents(); break;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayer::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QgsVectorLayer::layerModified(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsVectorLayer::editingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QgsVectorLayer::editingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QgsVectorLayer::attributeAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsVectorLayer::attributeDeleted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsVectorLayer::featureDeleted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsVectorLayer::layerDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QgsVectorLayer::attributeValueChanged(int _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
