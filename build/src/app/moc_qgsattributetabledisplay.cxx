/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetabledisplay.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsattributetabledisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetabledisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAttributeTableDisplay[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   25,   25,   25, 0x09,
      71,   25,   25,   25, 0x09,
      89,   25,   25,   25, 0x09,
     107,   25,   25,   25, 0x09,
     137,   25,   25,   25, 0x09,
     161,   25,   25,   25, 0x09,
     170,   25,   25,   25, 0x09,
     192,  187,   25,   25, 0x09,
     222,   25,   25,   25, 0x09,
     233,   25,   25,   25, 0x09,
     253,  249,   25,   25, 0x09,
     273,  249,   25,   25, 0x09,
     306,  295,   25,   25, 0x0a,
     338,   25,   25,   25, 0x0a,
     355,   25,   25,   25, 0x0a,
     374,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsAttributeTableDisplay[] = {
    "QgsAttributeTableDisplay\0\0"
    "editingToggled(QgsMapLayer*)\0"
    "selectedToTop()\0invertSelection()\0"
    "removeSelection()\0copySelectedRowsToClipboard()\0"
    "zoomMapToSelectedRows()\0search()\0"
    "advancedSearch()\0item\0"
    "searchShowResultsChanged(int)\0showHelp()\0"
    "toggleEditing()\0idx\0attributeAdded(int)\0"
    "attributeDeleted(int)\0row,column\0"
    "changeFeatureAttribute(int,int)\0"
    "editingToggled()\0selectionChanged()\0"
    "activate()\0"
};

const QMetaObject QgsAttributeTableDisplay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAttributeTableDisplay,
      qt_meta_data_QgsAttributeTableDisplay, 0 }
};

const QMetaObject *QgsAttributeTableDisplay::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAttributeTableDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableDisplay))
	return static_cast<void*>(const_cast< QgsAttributeTableDisplay*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsAttributeTableDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: editingToggled((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: selectedToTop(); break;
        case 2: invertSelection(); break;
        case 3: removeSelection(); break;
        case 4: copySelectedRowsToClipboard(); break;
        case 5: zoomMapToSelectedRows(); break;
        case 6: search(); break;
        case 7: advancedSearch(); break;
        case 8: searchShowResultsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: showHelp(); break;
        case 10: toggleEditing(); break;
        case 11: attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: changeFeatureAttribute((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: editingToggled(); break;
        case 15: selectionChanged(); break;
        case 16: activate(); break;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTableDisplay::editingToggled(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
