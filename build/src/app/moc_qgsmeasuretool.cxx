/****************************************************************************
** Meta object code from reading C++ file 'qgsmeasuretool.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsmeasuretool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeasuretool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMeasureTool[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsMeasureTool[] = {
    "QgsMeasureTool\0"
};

const QMetaObject QgsMeasureTool::staticMetaObject = {
    { &QgsMapTool::staticMetaObject, qt_meta_stringdata_QgsMeasureTool,
      qt_meta_data_QgsMeasureTool, 0 }
};

const QMetaObject *QgsMeasureTool::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMeasureTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeasureTool))
	return static_cast<void*>(const_cast< QgsMeasureTool*>(this));
    return QgsMapTool::qt_metacast(_clname);
}

int QgsMeasureTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
