/****************************************************************************
** Meta object code from reading C++ file 'qgswfsprovider.h'
**
** Created: Tue Jun 22 23:10:53 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/providers/wfs/qgswfsprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswfsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsWFSProvider[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   57,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsWFSProvider[] = {
    "QgsWFSProvider\0\0message\0"
    "dataReadProgressMessage(QString)\0"
    "done,total\0handleWFSProgressMessage(int,int)\0"
};

const QMetaObject QgsWFSProvider::staticMetaObject = {
    { &QgsVectorDataProvider::staticMetaObject, qt_meta_stringdata_QgsWFSProvider,
      qt_meta_data_QgsWFSProvider, 0 }
};

const QMetaObject *QgsWFSProvider::metaObject() const
{
    return &staticMetaObject;
}

void *QgsWFSProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSProvider))
	return static_cast<void*>(const_cast< QgsWFSProvider*>(this));
    return QgsVectorDataProvider::qt_metacast(_clname);
}

int QgsWFSProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsVectorDataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataReadProgressMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: handleWFSProgressMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsWFSProvider::dataReadProgressMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
