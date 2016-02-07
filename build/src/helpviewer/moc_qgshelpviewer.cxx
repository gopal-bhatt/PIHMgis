/****************************************************************************
** Meta object code from reading C++ file 'qgshelpviewer.h'
**
** Created: Tue Jun 22 23:10:17 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/helpviewer/qgshelpviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshelpviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsHelpViewer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      25,   15,   14,   14, 0x0a,
      45,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsHelpViewer[] = {
    "QgsHelpViewer\0\0contextId\0setContext(QString)\0"
    "fileExit()\0"
};

const QMetaObject QgsHelpViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsHelpViewer,
      qt_meta_data_QgsHelpViewer, 0 }
};

const QMetaObject *QgsHelpViewer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsHelpViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHelpViewer))
	return static_cast<void*>(const_cast< QgsHelpViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsHelpViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: fileExit(); break;
        }
        _id -= 2;
    }
    return _id;
}
