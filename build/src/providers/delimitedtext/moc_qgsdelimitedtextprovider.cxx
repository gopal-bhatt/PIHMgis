/****************************************************************************
** Meta object code from reading C++ file 'qgsdelimitedtextprovider.h'
**
** Created: Tue Jun 22 23:10:41 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/providers/delimitedtext/qgsdelimitedtextprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdelimitedtextprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsDelimitedTextProvider[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsDelimitedTextProvider[] = {
    "QgsDelimitedTextProvider\0"
};

const QMetaObject QgsDelimitedTextProvider::staticMetaObject = {
    { &QgsVectorDataProvider::staticMetaObject, qt_meta_stringdata_QgsDelimitedTextProvider,
      qt_meta_data_QgsDelimitedTextProvider, 0 }
};

const QMetaObject *QgsDelimitedTextProvider::metaObject() const
{
    return &staticMetaObject;
}

void *QgsDelimitedTextProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDelimitedTextProvider))
	return static_cast<void*>(const_cast< QgsDelimitedTextProvider*>(this));
    return QgsVectorDataProvider::qt_metacast(_clname);
}

int QgsDelimitedTextProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsVectorDataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
