/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created: Tue Jun 22 23:11:16 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/grid_maker/plugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsGridMakerPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      51,   48,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   22,   22,   22, 0x08,
     125,   22,   22,   22, 0x08,
     149,   22,   22,   22, 0x08,
     173,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsGridMakerPluginGui[] = {
    "QgsGridMakerPluginGui\0\0drawRasterLayer(QString)\0"
    ",,\0drawVectorLayer(QString,QString,QString)\0"
    "on_pbnSelectOutputFile_clicked()\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
};

const QMetaObject QgsGridMakerPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGridMakerPluginGui,
      qt_meta_data_QgsGridMakerPluginGui, 0 }
};

const QMetaObject *QgsGridMakerPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsGridMakerPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGridMakerPluginGui))
	return static_cast<void*>(const_cast< QgsGridMakerPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGridMakerPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawRasterLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: on_pbnSelectOutputFile_clicked(); break;
        case 3: on_buttonBox_accepted(); break;
        case 4: on_buttonBox_rejected(); break;
        case 5: on_buttonBox_helpRequested(); break;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsGridMakerPluginGui::drawRasterLayer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGridMakerPluginGui::drawVectorLayer(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
