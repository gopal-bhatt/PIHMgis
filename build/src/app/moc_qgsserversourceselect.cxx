/****************************************************************************
** Meta object code from reading C++ file 'qgsserversourceselect.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsserversourceselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsserversourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsServerSourceSelect[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      43,   22,   22,   22, 0x0a,
      64,   22,   22,   22, 0x0a,
      87,   22,   22,   22, 0x0a,
     111,   22,   22,   22, 0x0a,
     131,   22,   22,   22, 0x0a,
     167,   22,   22,   22, 0x0a,
     188,   22,   22,   22, 0x0a,
     235,  224,   22,   22, 0x0a,
     266,  262,   22,   22, 0x0a,
     293,   22,   22,   22, 0x0a,
     326,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsServerSourceSelect[] = {
    "QgsServerSourceSelect\0\0on_btnNew_clicked()\0"
    "on_btnEdit_clicked()\0on_btnDelete_clicked()\0"
    "on_btnConnect_clicked()\0on_btnAdd_clicked()\0"
    "on_btnChangeSpatialRefSys_clicked()\0"
    "on_btnHelp_clicked()\0"
    "on_lstLayers_itemSelectionChanged()\0"
    "theMessage\0showStatusMessage(QString)\0"
    "wms\0showError(QgsWmsProvider*)\0"
    "on_cmbConnections_activated(int)\0"
    "on_btnAddDefault_clicked()\0"
};

const QMetaObject QgsServerSourceSelect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsServerSourceSelect,
      qt_meta_data_QgsServerSourceSelect, 0 }
};

const QMetaObject *QgsServerSourceSelect::metaObject() const
{
    return &staticMetaObject;
}

void *QgsServerSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsServerSourceSelect))
	return static_cast<void*>(const_cast< QgsServerSourceSelect*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsServerSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnNew_clicked(); break;
        case 1: on_btnEdit_clicked(); break;
        case 2: on_btnDelete_clicked(); break;
        case 3: on_btnConnect_clicked(); break;
        case 4: on_btnAdd_clicked(); break;
        case 5: on_btnChangeSpatialRefSys_clicked(); break;
        case 6: on_btnHelp_clicked(); break;
        case 7: on_lstLayers_itemSelectionChanged(); break;
        case 8: showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: showError((*reinterpret_cast< QgsWmsProvider*(*)>(_a[1]))); break;
        case 10: on_cmbConnections_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_btnAddDefault_clicked(); break;
        }
        _id -= 12;
    }
    return _id;
}
