/****************************************************************************
** Meta object code from reading C++ file 'paradatafile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "5DataModelLoader/9ParaDataFile/paradatafile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paradatafile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParaDataFile_t {
    QByteArrayData data[8];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ParaDataFile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ParaDataFile_t qt_meta_stringdata_ParaDataFile = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 33),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 24),
QT_MOC_LITERAL(4, 73, 26),
QT_MOC_LITERAL(5, 100, 25),
QT_MOC_LITERAL(6, 126, 18),
QT_MOC_LITERAL(7, 145, 14)
    },
    "ParaDataFile\0on_pushButtonParaDataFile_clicked\0"
    "\0on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
    "para_data_file\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParaDataFile[] = {

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
       7,    0,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void ParaDataFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParaDataFile *_t = static_cast<ParaDataFile *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonParaDataFile_clicked(); break;
        case 1: _t->on_pushButtonRun_clicked(); break;
        case 2: _t->on_pushButtonClose_clicked(); break;
        case 3: _t->on_pushButtonHelp_clicked(); break;
        case 4: _t->pushButtonSetFocus(); break;
        case 5: { int _r = _t->para_data_file();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ParaDataFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ParaDataFile.data,
      qt_meta_data_ParaDataFile,  qt_static_metacall, 0, 0}
};


const QMetaObject *ParaDataFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParaDataFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParaDataFile.stringdata))
        return static_cast<void*>(const_cast< ParaDataFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int ParaDataFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
