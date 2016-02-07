/****************************************************************************
** Meta object code from reading C++ file 'qgswfssourceselect.h'
**
** Created: Tue Jun 22 23:12:23 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/wfs/qgswfssourceselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswfssourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsWFSSourceSelect[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      43,   19,   19,   19, 0x08,
      69,   19,   19,   19, 0x08,
      95,   19,   19,   19, 0x08,
     113,   19,   19,   19, 0x08,
     124,   19,   19,   19, 0x08,
     136,   19,   19,   19, 0x08,
     154,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsWFSSourceSelect[] = {
    "QgsWFSSourceSelect\0\0addEntryToServerList()\0"
    "modifyEntryOfServerList()\0"
    "deleteEntryOfServerList()\0connectToServer()\0"
    "addLayer()\0changeCRS()\0changeCRSFilter()\0"
    "showHelp()\0"
};

const QMetaObject QgsWFSSourceSelect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsWFSSourceSelect,
      qt_meta_data_QgsWFSSourceSelect, 0 }
};

const QMetaObject *QgsWFSSourceSelect::metaObject() const
{
    return &staticMetaObject;
}

void *QgsWFSSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWFSSourceSelect))
	return static_cast<void*>(const_cast< QgsWFSSourceSelect*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsWFSSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addEntryToServerList(); break;
        case 1: modifyEntryOfServerList(); break;
        case 2: deleteEntryOfServerList(); break;
        case 3: connectToServer(); break;
        case 4: addLayer(); break;
        case 5: changeCRS(); break;
        case 6: changeCRSFilter(); break;
        case 7: showHelp(); break;
        }
        _id -= 8;
    }
    return _id;
}
