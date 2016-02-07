/****************************************************************************
** Meta object code from reading C++ file 'qgscomposeritemgroup.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/composer/qgscomposeritemgroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposeritemgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerItemGroup[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerItemGroup[] = {
    "QgsComposerItemGroup\0\0item\0"
    "childItemDeleted(QgsComposerItem*)\0"
};

const QMetaObject QgsComposerItemGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsComposerItemGroup,
      qt_meta_data_QgsComposerItemGroup, 0 }
};

const QMetaObject *QgsComposerItemGroup::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerItemGroup))
	return static_cast<void*>(const_cast< QgsComposerItemGroup*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerItemGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsComposerItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: childItemDeleted((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsComposerItemGroup::childItemDeleted(QgsComposerItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
