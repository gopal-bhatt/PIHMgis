/****************************************************************************
** Meta object code from reading C++ file 'rivdatafile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "5DataModelLoader/3RivDataFile/rivdatafile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rivdatafile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RivDataFile_t {
    QByteArrayData data[11];
    char stringdata[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RivDataFile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RivDataFile_t qt_meta_stringdata_RivDataFile = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 32),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 29),
QT_MOC_LITERAL(4, 76, 34),
QT_MOC_LITERAL(5, 111, 30),
QT_MOC_LITERAL(6, 142, 32),
QT_MOC_LITERAL(7, 175, 24),
QT_MOC_LITERAL(8, 200, 26),
QT_MOC_LITERAL(9, 227, 25),
QT_MOC_LITERAL(10, 253, 18)
    },
    "RivDataFile\0on_pushButtonElementFile_clicked\0"
    "\0on_pushButtonNodeFile_clicked\0"
    "on_pushButtonNeighbourFile_clicked\0"
    "on_pushButtonRiverFile_clicked\0"
    "on_pushButtonRivDataFile_clicked\0"
    "on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RivDataFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    0,   67,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RivDataFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RivDataFile *_t = static_cast<RivDataFile *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonElementFile_clicked(); break;
        case 1: _t->on_pushButtonNodeFile_clicked(); break;
        case 2: _t->on_pushButtonNeighbourFile_clicked(); break;
        case 3: _t->on_pushButtonRiverFile_clicked(); break;
        case 4: _t->on_pushButtonRivDataFile_clicked(); break;
        case 5: _t->on_pushButtonRun_clicked(); break;
        case 6: _t->on_pushButtonClose_clicked(); break;
        case 7: _t->on_pushButtonHelp_clicked(); break;
        case 8: _t->pushButtonSetFocus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RivDataFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RivDataFile.data,
      qt_meta_data_RivDataFile,  qt_static_metacall, 0, 0}
};


const QMetaObject *RivDataFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RivDataFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RivDataFile.stringdata))
        return static_cast<void*>(const_cast< RivDataFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int RivDataFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
