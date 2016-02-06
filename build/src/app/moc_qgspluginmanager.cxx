/****************************************************************************
** Meta object code from reading C++ file 'qgspluginmanager.h'
**
** Created: Wed Jun 11 19:05:43 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgspluginmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsPluginManager[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      63,   17,   17,   17, 0x0a,
      88,   17,   17,   17, 0x0a,
     111,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsPluginManager[] = {
    "QgsPluginManager\0\0on_btnOk_clicked()\0"
    "on_btnSelectAll_clicked()\0"
    "on_btnClearAll_clicked()\0"
    "on_btnBrowse_clicked()\0on_btnClose_clicked()\0"
};

const QMetaObject QgsPluginManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsPluginManager,
      qt_meta_data_QgsPluginManager, 0 }
};

const QMetaObject *QgsPluginManager::metaObject() const
{
    return &staticMetaObject;
}

void *QgsPluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPluginManager))
	return static_cast<void*>(const_cast< QgsPluginManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsPluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnOk_clicked(); break;
        case 1: on_btnSelectAll_clicked(); break;
        case 2: on_btnClearAll_clicked(); break;
        case 3: on_btnBrowse_clicked(); break;
        case 4: on_btnClose_clicked(); break;
        }
        _id -= 5;
    }
    return _id;
}
