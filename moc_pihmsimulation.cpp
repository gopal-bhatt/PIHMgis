/****************************************************************************
** Meta object code from reading C++ file 'pihmsimulation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "6PIHMSimulation/1PIHM_v2.2/pihmsimulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pihmsimulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PIHMSimulation_t {
    QByteArrayData data[19];
    char stringdata[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PIHMSimulation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PIHMSimulation_t qt_meta_stringdata_PIHMSimulation = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 36),
QT_MOC_LITERAL(2, 52, 0),
QT_MOC_LITERAL(3, 53, 24),
QT_MOC_LITERAL(4, 78, 26),
QT_MOC_LITERAL(5, 105, 25),
QT_MOC_LITERAL(6, 131, 18),
QT_MOC_LITERAL(7, 150, 15),
QT_MOC_LITERAL(8, 166, 20),
QT_MOC_LITERAL(9, 187, 14),
QT_MOC_LITERAL(10, 202, 13),
QT_MOC_LITERAL(11, 216, 27),
QT_MOC_LITERAL(12, 244, 5),
QT_MOC_LITERAL(13, 250, 22),
QT_MOC_LITERAL(14, 273, 18),
QT_MOC_LITERAL(15, 292, 38),
QT_MOC_LITERAL(16, 331, 4),
QT_MOC_LITERAL(17, 336, 30),
QT_MOC_LITERAL(18, 367, 21)
    },
    "PIHMSimulation\0on_pushButtonInputDataFolder_clicked\0"
    "\0on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
    "CheckInputFiles\0CheckInputFileAccess\0"
    "CopyInputFiles\0CopyInputFile\0"
    "on_progressBar_valueChanged\0value\0"
    "updateProgressBarValue\0PIHMThreadFinished\0"
    "on_lineEditInputDataFolder_textChanged\0"
    "arg1\0on_lineEditDataKey_textChanged\0"
    "verifyInputOutputFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PIHMSimulation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08,
       3,    0,   90,    2, 0x08,
       4,    0,   91,    2, 0x08,
       5,    0,   92,    2, 0x08,
       6,    0,   93,    2, 0x08,
       7,    0,   94,    2, 0x08,
       8,    1,   95,    2, 0x08,
       9,    1,   98,    2, 0x08,
      10,    2,  101,    2, 0x08,
      11,    1,  106,    2, 0x08,
      13,    1,  109,    2, 0x08,
      14,    0,  112,    2, 0x08,
      15,    1,  113,    2, 0x08,
      17,    1,  116,    2, 0x08,
      18,    0,  119,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void PIHMSimulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PIHMSimulation *_t = static_cast<PIHMSimulation *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonInputDataFolder_clicked(); break;
        case 1: _t->on_pushButtonRun_clicked(); break;
        case 2: _t->on_pushButtonClose_clicked(); break;
        case 3: _t->on_pushButtonHelp_clicked(); break;
        case 4: _t->pushButtonSetFocus(); break;
        case 5: { int _r = _t->CheckInputFiles();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->CheckInputFileAccess((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->CopyInputFiles((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->CopyInputFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateProgressBarValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->PIHMThreadFinished(); break;
        case 12: _t->on_lineEditInputDataFolder_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_lineEditDataKey_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->verifyInputOutputFile(); break;
        default: ;
        }
    }
}

const QMetaObject PIHMSimulation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PIHMSimulation.data,
      qt_meta_data_PIHMSimulation,  qt_static_metacall, 0, 0}
};


const QMetaObject *PIHMSimulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PIHMSimulation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PIHMSimulation.stringdata))
        return static_cast<void*>(const_cast< PIHMSimulation*>(this));
    return QDialog::qt_metacast(_clname);
}

int PIHMSimulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
