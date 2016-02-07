/****************************************************************************
** Meta object code from reading C++ file 'qgsmapoverviewcanvas.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsmapoverviewcanvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapoverviewcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMapOverviewCanvas[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x0a,
      56,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsMapOverviewCanvas[] = {
    "QgsMapOverviewCanvas\0\0flag\0"
    "hasCrsTransformEnabled(bool)\0"
    "destinationSrsChanged()\0"
};

const QMetaObject QgsMapOverviewCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsMapOverviewCanvas,
      qt_meta_data_QgsMapOverviewCanvas, 0 }
};

const QMetaObject *QgsMapOverviewCanvas::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMapOverviewCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapOverviewCanvas))
	return static_cast<void*>(const_cast< QgsMapOverviewCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsMapOverviewCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: hasCrsTransformEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: destinationSrsChanged(); break;
        }
        _id -= 2;
    }
    return _id;
}
