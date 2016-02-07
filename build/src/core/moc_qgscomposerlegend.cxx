/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerlegend.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/composer/qgscomposerlegend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerLegend[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerLegend[] = {
    "QgsComposerLegend\0\0synchronizeWithModel()\0"
};

const QMetaObject QgsComposerLegend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsComposerLegend,
      qt_meta_data_QgsComposerLegend, 0 }
};

const QMetaObject *QgsComposerLegend::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerLegend))
	return static_cast<void*>(const_cast< QgsComposerLegend*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerLegend*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsComposerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: synchronizeWithModel(); break;
        }
        _id -= 1;
    }
    return _id;
}
