/****************************************************************************
** Meta object code from reading C++ file 'ibcdatafile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "5DataModelLoader/8IbcDataFile/ibcdatafile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ibcdatafile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IbcDataFile_t {
    QByteArrayData data[8];
    char stringdata[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_IbcDataFile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_IbcDataFile_t qt_meta_stringdata_IbcDataFile = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 32),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 24),
QT_MOC_LITERAL(4, 71, 26),
QT_MOC_LITERAL(5, 98, 25),
QT_MOC_LITERAL(6, 124, 18),
QT_MOC_LITERAL(7, 143, 13)
    },
    "IbcDataFile\0on_pushButtonIbcDataFile_clicked\0"
    "\0on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
    "ibc_data_file\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IbcDataFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    1,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    2,

       0        // eod
};

void IbcDataFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IbcDataFile *_t = static_cast<IbcDataFile *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonIbcDataFile_clicked(); break;
        case 1: _t->on_pushButtonRun_clicked(); break;
        case 2: _t->on_pushButtonClose_clicked(); break;
        case 3: _t->on_pushButtonHelp_clicked(); break;
        case 4: _t->pushButtonSetFocus(); break;
        case 5: { int _r = _t->ibc_data_file((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject IbcDataFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IbcDataFile.data,
      qt_meta_data_IbcDataFile,  qt_static_metacall, 0, 0}
};


const QMetaObject *IbcDataFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IbcDataFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IbcDataFile.stringdata))
        return static_cast<void*>(const_cast< IbcDataFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int IbcDataFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
