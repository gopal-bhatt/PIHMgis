/****************************************************************************
** Meta object code from reading C++ file 'qgscoordinatetransform.h'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgscoordinatetransform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscoordinatetransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsCoordinateTransform[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   23,   23,   23, 0x0a,
      74,   66,   61,   23, 0x0a,
     108,   93,   61,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsCoordinateTransform[] = {
    "QgsCoordinateTransform\0\0invalidTransformInput()\0"
    "initialise()\0bool\0theNode\0readXML(QDomNode&)\0"
    "theNode,theDoc\0writeXML(QDomNode&,QDomDocument&)\0"
};

const QMetaObject QgsCoordinateTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCoordinateTransform,
      qt_meta_data_QgsCoordinateTransform, 0 }
};

const QMetaObject *QgsCoordinateTransform::metaObject() const
{
    return &staticMetaObject;
}

void *QgsCoordinateTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCoordinateTransform))
	return static_cast<void*>(const_cast< QgsCoordinateTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCoordinateTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: invalidTransformInput(); break;
        case 1: initialise(); break;
        case 2: { bool _r = readXML((*reinterpret_cast< QDomNode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = writeXML((*reinterpret_cast< QDomNode(*)>(_a[1])),(*reinterpret_cast< QDomDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsCoordinateTransform::invalidTransformInput()const
{
    QMetaObject::activate(const_cast< QgsCoordinateTransform *>(this), &staticMetaObject, 0, 0);
}
