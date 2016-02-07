/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterdataprovider.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsrasterdataprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterdataprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsRasterDataProvider[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsRasterDataProvider[] = {
    "QgsRasterDataProvider\0"
};

const QMetaObject QgsRasterDataProvider::staticMetaObject = {
    { &QgsDataProvider::staticMetaObject, qt_meta_stringdata_QgsRasterDataProvider,
      qt_meta_data_QgsRasterDataProvider, 0 }
};

const QMetaObject *QgsRasterDataProvider::metaObject() const
{
    return &staticMetaObject;
}

void *QgsRasterDataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterDataProvider))
	return static_cast<void*>(const_cast< QgsRasterDataProvider*>(this));
    return QgsDataProvider::qt_metacast(_clname);
}

int QgsRasterDataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
