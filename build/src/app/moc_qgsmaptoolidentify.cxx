/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolidentify.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsmaptoolidentify.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolidentify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapToolIdentify[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x0a,
      52,   20,   19,   19, 0x0a,
      69,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapToolIdentify[] = {
    "QgsMapToolIdentify\0\0featureId\0"
    "highlightFeature(int)\0editFeature(int)\0"
    "resultsDialogGone()\0"
};

const QMetaObject QgsMapToolIdentify::staticMetaObject = {
    { &QgsMapTool::staticMetaObject, qt_meta_stringdata_QgsMapToolIdentify,
      qt_meta_data_QgsMapToolIdentify, 0 }
};

const QMetaObject *QgsMapToolIdentify::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapToolIdentify::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolIdentify))
	return static_cast<void*>(const_cast< QgsMapToolIdentify*>(this));
    return QgsMapTool::qt_metacast(_clname);
}

int QgsMapToolIdentify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: highlightFeature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: editFeature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: resultsDialogGone(); break;
        }
        _id -= 3;
    }
    return _id;
}
