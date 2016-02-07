/****************************************************************************
** Meta object code from reading C++ file 'riverspatial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "7VisualAnalytics/3RiverSpatial/riverspatial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'riverspatial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RiverSpatial_t {
    QByteArrayData data[16];
    char stringdata[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RiverSpatial_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RiverSpatial_t qt_meta_stringdata_RiverSpatial = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 37),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 39),
QT_MOC_LITERAL(4, 92, 4),
QT_MOC_LITERAL(5, 97, 30),
QT_MOC_LITERAL(6, 128, 43),
QT_MOC_LITERAL(7, 172, 5),
QT_MOC_LITERAL(8, 178, 21),
QT_MOC_LITERAL(9, 200, 18),
QT_MOC_LITERAL(10, 219, 40),
QT_MOC_LITERAL(11, 260, 35),
QT_MOC_LITERAL(12, 296, 24),
QT_MOC_LITERAL(13, 321, 26),
QT_MOC_LITERAL(14, 348, 25),
QT_MOC_LITERAL(15, 374, 37)
    },
    "RiverSpatial\0on_pushButtonOutputDataFolder_clicked\0"
    "\0on_lineEditOutputDataFolder_textChanged\0"
    "arg1\0on_lineEditDataKey_textChanged\0"
    "on_comboBoxPlotVariable_currentIndexChanged\0"
    "index\0verifyInputOutputFile\0"
    "pushButtonSetFocus\0"
    "on_comboBoxStartStop_currentIndexChanged\0"
    "on_pushButtonRiverShapeFile_clicked\0"
    "on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0"
    "on_lineEditRiverShapeFile_textChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RiverSpatial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08,
       3,    1,   75,    2, 0x08,
       5,    1,   78,    2, 0x08,
       6,    1,   81,    2, 0x08,
       8,    0,   84,    2, 0x08,
       9,    0,   85,    2, 0x08,
      10,    1,   86,    2, 0x08,
      11,    0,   89,    2, 0x08,
      12,    0,   90,    2, 0x08,
      13,    0,   91,    2, 0x08,
      14,    0,   92,    2, 0x08,
      15,    1,   93,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void RiverSpatial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RiverSpatial *_t = static_cast<RiverSpatial *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonOutputDataFolder_clicked(); break;
        case 1: _t->on_lineEditOutputDataFolder_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEditDataKey_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxPlotVariable_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->verifyInputOutputFile(); break;
        case 5: _t->pushButtonSetFocus(); break;
        case 6: _t->on_comboBoxStartStop_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonRiverShapeFile_clicked(); break;
        case 8: _t->on_pushButtonRun_clicked(); break;
        case 9: _t->on_pushButtonClose_clicked(); break;
        case 10: _t->on_pushButtonHelp_clicked(); break;
        case 11: _t->on_lineEditRiverShapeFile_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RiverSpatial::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RiverSpatial.data,
      qt_meta_data_RiverSpatial,  qt_static_metacall, 0, 0}
};


const QMetaObject *RiverSpatial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RiverSpatial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RiverSpatial.stringdata))
        return static_cast<void*>(const_cast< RiverSpatial*>(this));
    return QDialog::qt_metacast(_clname);
}

int RiverSpatial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
