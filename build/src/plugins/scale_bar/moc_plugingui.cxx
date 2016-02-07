/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created: Tue Jun 22 23:11:59 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/scale_bar/plugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsScaleBarPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      50,   47,   21,   21, 0x05,
      92,   21,   21,   21, 0x05,
     113,   21,   21,   21, 0x05,
     138,   21,   21,   21, 0x05,
     159,   21,   21,   21, 0x05,
     179,   21,   21,   21, 0x05,
     196,   21,   21,   21, 0x05,
     217,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     233,   21,   21,   21, 0x08,
     257,   21,   21,   21, 0x08,
     281,   21,   21,   21, 0x08,
     310,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsScaleBarPluginGui[] = {
    "QgsScaleBarPluginGui\0\0drawRasterLayer(QString)\0"
    ",,\0drawVectorrLayer(QString,QString,QString)\0"
    "changePlacement(int)\0changePreferredSize(int)\0"
    "changeSnapping(bool)\0changeEnabled(bool)\0"
    "changeStyle(int)\0changeColour(QColor)\0"
    "refreshCanvas()\0on_buttonBox_accepted()\0"
    "on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
    "on_pbnChangeColour_clicked()\0"
};

const QMetaObject QgsScaleBarPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsScaleBarPluginGui,
      qt_meta_data_QgsScaleBarPluginGui, 0 }
};

const QMetaObject *QgsScaleBarPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsScaleBarPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScaleBarPluginGui))
	return static_cast<void*>(const_cast< QgsScaleBarPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsScaleBarPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawRasterLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: drawVectorrLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: changePlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changePreferredSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: changeSnapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: changeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: changeStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: changeColour((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: refreshCanvas(); break;
        case 9: on_buttonBox_accepted(); break;
        case 10: on_buttonBox_rejected(); break;
        case 11: on_buttonBox_helpRequested(); break;
        case 12: on_pbnChangeColour_clicked(); break;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsScaleBarPluginGui::drawRasterLayer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsScaleBarPluginGui::drawVectorrLayer(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsScaleBarPluginGui::changePlacement(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsScaleBarPluginGui::changePreferredSize(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsScaleBarPluginGui::changeSnapping(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsScaleBarPluginGui::changeEnabled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsScaleBarPluginGui::changeStyle(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsScaleBarPluginGui::changeColour(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsScaleBarPluginGui::refreshCanvas()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
