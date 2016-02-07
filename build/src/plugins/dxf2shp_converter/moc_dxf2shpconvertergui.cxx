/****************************************************************************
** Meta object code from reading C++ file 'dxf2shpconvertergui.h'
**
** Created: Tue Jun 22 23:13:09 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/dxf2shp_converter/dxf2shpconvertergui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dxf2shpconvertergui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_dxf2shpConverterGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   20,   20,   20, 0x08,
      76,   20,   20,   20, 0x08,
     100,   20,   20,   20, 0x08,
     129,   20,   20,   20, 0x08,
     159,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dxf2shpConverterGui[] = {
    "dxf2shpConverterGui\0\0,\0"
    "createLayer(QString,QString)\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
    "on_btnBrowseForFile_clicked()\0"
    "on_btnBrowseOutputDir_clicked()\0"
};

const QMetaObject dxf2shpConverterGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dxf2shpConverterGui,
      qt_meta_data_dxf2shpConverterGui, 0 }
};

const QMetaObject *dxf2shpConverterGui::metaObject() const
{
    return &staticMetaObject;
}

void *dxf2shpConverterGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dxf2shpConverterGui))
	return static_cast<void*>(const_cast< dxf2shpConverterGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int dxf2shpConverterGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: on_buttonBox_accepted(); break;
        case 2: on_buttonBox_rejected(); break;
        case 3: on_buttonBox_helpRequested(); break;
        case 4: on_btnBrowseForFile_clicked(); break;
        case 5: on_btnBrowseOutputDir_clicked(); break;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void dxf2shpConverterGui::createLayer(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
