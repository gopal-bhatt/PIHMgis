/****************************************************************************
** Meta object code from reading C++ file 'qgsmapserverexport.h'
**
** Created: Wed Jun 11 19:12:58 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tools/mapserver_export/qgsmapserverexport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapserverexport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapserverExport[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      31,   19,   19,   19, 0x0a,
      60,   19,   19,   19, 0x0a,
      87,   19,   19,   19, 0x0a,
     121,   19,   19,   19, 0x0a,
     155,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapserverExport[] = {
    "QgsMapserverExport\0\0showHelp()\0"
    "on_buttonBox_helpRequested()\0"
    "on_btnChooseFile_clicked()\0"
    "on_chkExpLayersOnly_clicked(bool)\0"
    "on_btnChooseProjectFile_clicked()\0"
    "apply()\0"
};

const QMetaObject QgsMapserverExport::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMapserverExport,
      qt_meta_data_QgsMapserverExport, 0 }
};

const QMetaObject *QgsMapserverExport::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapserverExport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapserverExport))
	return static_cast<void*>(const_cast< QgsMapserverExport*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsMapserverExport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showHelp(); break;
        case 1: on_buttonBox_helpRequested(); break;
        case 2: on_btnChooseFile_clicked(); break;
        case 3: on_chkExpLayersOnly_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_btnChooseProjectFile_clicked(); break;
        case 5: apply(); break;
        }
        _id -= 6;
    }
    return _id;
}
