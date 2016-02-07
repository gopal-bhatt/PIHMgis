/****************************************************************************
** Meta object code from reading C++ file 'qgsmessageviewer.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsmessageviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmessageviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMessageViewer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsMessageViewer[] = {
    "QgsMessageViewer\0\0on_checkBox_toggled(bool)\0"
};

const QMetaObject QgsMessageViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMessageViewer,
      qt_meta_data_QgsMessageViewer, 0 }
};

const QMetaObject *QgsMessageViewer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMessageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageViewer))
	return static_cast<void*>(const_cast< QgsMessageViewer*>(this));
    if (!strcmp(_clname, "QgsMessageOutput"))
	return static_cast< QgsMessageOutput*>(const_cast< QgsMessageViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsMessageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 1;
    }
    return _id;
}
