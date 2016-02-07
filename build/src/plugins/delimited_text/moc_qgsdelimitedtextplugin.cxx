/****************************************************************************
** Meta object code from reading C++ file 'qgsdelimitedtextplugin.h'
**
** Created: Tue Jun 22 23:11:09 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/delimited_text/qgsdelimitedtextplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdelimitedtextplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsDelimitedTextPlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      34,   23,   23,   23, 0x0a,
      43,   40,   23,   23, 0x0a,
      84,   23,   23,   23, 0x0a,
      93,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsDelimitedTextPlugin[] = {
    "QgsDelimitedTextPlugin\0\0initGui()\0"
    "run()\0,,\0drawVectorLayer(QString,QString,QString)\0"
    "unload()\0help()\0"
};

const QMetaObject QgsDelimitedTextPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsDelimitedTextPlugin,
      qt_meta_data_QgsDelimitedTextPlugin, 0 }
};

const QMetaObject *QgsDelimitedTextPlugin::metaObject() const
{
    return &staticMetaObject;
}

void *QgsDelimitedTextPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDelimitedTextPlugin))
	return static_cast<void*>(const_cast< QgsDelimitedTextPlugin*>(this));
    if (!strcmp(_clname, "QgisPlugin"))
	return static_cast< QgisPlugin*>(const_cast< QgsDelimitedTextPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsDelimitedTextPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initGui(); break;
        case 1: run(); break;
        case 2: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: unload(); break;
        case 4: help(); break;
        }
        _id -= 5;
    }
    return _id;
}
