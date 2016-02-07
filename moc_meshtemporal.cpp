/****************************************************************************
** Meta object code from reading C++ file 'meshtemporal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "7VisualAnalytics/2MeshTemporal/meshtemporal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshtemporal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MeshTemporal_t {
    QByteArrayData data[15];
    char stringdata[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MeshTemporal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MeshTemporal_t qt_meta_stringdata_MeshTemporal = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 37),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 44),
QT_MOC_LITERAL(4, 97, 5),
QT_MOC_LITERAL(5, 103, 39),
QT_MOC_LITERAL(6, 143, 4),
QT_MOC_LITERAL(7, 148, 30),
QT_MOC_LITERAL(8, 179, 43),
QT_MOC_LITERAL(9, 223, 21),
QT_MOC_LITERAL(10, 245, 18),
QT_MOC_LITERAL(11, 264, 24),
QT_MOC_LITERAL(12, 289, 26),
QT_MOC_LITERAL(13, 316, 25),
QT_MOC_LITERAL(14, 342, 36)
    },
    "MeshTemporal\0on_pushButtonOutputDataFolder_clicked\0"
    "\0on_comboBoxModelSegments_currentIndexChanged\0"
    "index\0on_lineEditOutputDataFolder_textChanged\0"
    "arg1\0on_lineEditDataKey_textChanged\0"
    "on_comboBoxPlotVariable_currentIndexChanged\0"
    "verifyInputOutputFile\0pushButtonSetFocus\0"
    "on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0"
    "on_lineEditModelSegments_textChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshTemporal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    1,   70,    2, 0x08,
       5,    1,   73,    2, 0x08,
       7,    1,   76,    2, 0x08,
       8,    1,   79,    2, 0x08,
       9,    0,   82,    2, 0x08,
      10,    0,   83,    2, 0x08,
      11,    0,   84,    2, 0x08,
      12,    0,   85,    2, 0x08,
      13,    0,   86,    2, 0x08,
      14,    1,   87,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void MeshTemporal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeshTemporal *_t = static_cast<MeshTemporal *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonOutputDataFolder_clicked(); break;
        case 1: _t->on_comboBoxModelSegments_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_lineEditOutputDataFolder_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEditDataKey_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBoxPlotVariable_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->verifyInputOutputFile(); break;
        case 6: _t->pushButtonSetFocus(); break;
        case 7: _t->on_pushButtonRun_clicked(); break;
        case 8: _t->on_pushButtonClose_clicked(); break;
        case 9: _t->on_pushButtonHelp_clicked(); break;
        case 10: _t->on_lineEditModelSegments_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MeshTemporal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshTemporal.data,
      qt_meta_data_MeshTemporal,  qt_static_metacall, 0, 0}
};


const QMetaObject *MeshTemporal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshTemporal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshTemporal.stringdata))
        return static_cast<void*>(const_cast< MeshTemporal*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshTemporal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
