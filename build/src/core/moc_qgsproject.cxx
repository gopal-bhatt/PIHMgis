/****************************************************************************
** Meta object code from reading C++ file 'qgsproject.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsproject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsProject[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      66,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsProject[] = {
    "QgsProject\0\0readProject(QDomDocument)\0"
    "writeProject(QDomDocument&)\0"
    "oldProjectVersionWarning(QString)\0"
};

const QMetaObject QgsProject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsProject,
      qt_meta_data_QgsProject, 0 }
};

const QMetaObject *QgsProject::metaObject() const
{
    return &staticMetaObject;
}

void *QgsProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProject))
	return static_cast<void*>(const_cast< QgsProject*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 1: writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 2: oldProjectVersionWarning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsProject::readProject(const QDomDocument & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProject::writeProject(QDomDocument & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsProject::oldProjectVersionWarning(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
