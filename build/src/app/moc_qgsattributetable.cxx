/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetable.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsattributetable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAttributeTableItemDelegate[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeTableItemDelegate[] = {
    "QgsAttributeTableItemDelegate\0"
};

const QMetaObject QgsAttributeTableItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QgsAttributeTableItemDelegate,
      qt_meta_data_QgsAttributeTableItemDelegate, 0 }
};

const QMetaObject *QgsAttributeTableItemDelegate::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeTableItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableItemDelegate))
	return static_cast<void*>(const_cast< QgsAttributeTableItemDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int QgsAttributeTableItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QgsAttributeTable[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x05,
      40,   18,   18,   18, 0x05,
      63,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   82,   18,   18, 0x0a,
     109,  105,   18,   18, 0x0a,
     136,  125,   18,   18, 0x0a,
     178,  164,   18,   18, 0x0a,
     222,  218,   18,   18, 0x0a,
     242,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeTable[] = {
    "QgsAttributeTable\0\0,\0selected(int,bool)\0"
    "selectionRemoved(bool)\0repaintRequested()\0"
    "col\0columnClicked(int)\0row\0rowClicked(int)\0"
    "menuAction\0popupItemSelected(QAction*)\0"
    "fid,idx,value\0attributeValueChanged(int,int,QVariant)\0"
    "fid\0featureDeleted(int)\0"
    "handleChangedSelections()\0"
};

const QMetaObject QgsAttributeTable::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeTable,
      qt_meta_data_QgsAttributeTable, 0 }
};

const QMetaObject *QgsAttributeTable::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTable))
	return static_cast<void*>(const_cast< QgsAttributeTable*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int QgsAttributeTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: selectionRemoved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: repaintRequested(); break;
        case 3: columnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: rowClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: popupItemSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: attributeValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 7: featureDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: handleChangedSelections(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTable::selected(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAttributeTable::selectionRemoved(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAttributeTable::repaintRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
