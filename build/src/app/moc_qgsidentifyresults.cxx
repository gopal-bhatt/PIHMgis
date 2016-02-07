/****************************************************************************
** Meta object code from reading C++ file 'qgsidentifyresults.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsidentifyresults.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsidentifyresults.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsIdentifyResults[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x05,
      58,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   19,   19,   19, 0x0a,
      82,   19,   19,   19, 0x0a,
      90,   19,   19,   19, 0x0a,
     138,  127,   19,   19, 0x0a,
     170,  166,   19,   19, 0x0a,
     196,   19,   19,   19, 0x0a,
     220,   19,   19,   19, 0x0a,
     268,  251,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsIdentifyResults[] = {
    "QgsIdentifyResults\0\0featureId\0"
    "selectedFeatureChanged(int)\0"
    "editFeature(int)\0show()\0close()\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "menuAction\0popupItemSelected(QAction*)\0"
    "lvi\0clicked(QTreeWidgetItem*)\0"
    "on_buttonHelp_clicked()\0"
    "itemExpanded(QTreeWidgetItem*)\0"
    "current,previous\0"
    "handleCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

const QMetaObject QgsIdentifyResults::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsIdentifyResults,
      qt_meta_data_QgsIdentifyResults, 0 }
};

const QMetaObject *QgsIdentifyResults::metaObject() const
{
    return &staticMetaObject;
}

void *QgsIdentifyResults::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyResults))
	return static_cast<void*>(const_cast< QgsIdentifyResults*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsIdentifyResults::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectedFeatureChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: editFeature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: show(); break;
        case 3: close(); break;
        case 4: contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 5: popupItemSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: clicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: on_buttonHelp_clicked(); break;
        case 8: itemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: handleCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsIdentifyResults::selectedFeatureChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsIdentifyResults::editFeature(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
