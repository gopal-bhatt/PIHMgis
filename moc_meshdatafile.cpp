/****************************************************************************
** Meta object code from reading C++ file 'meshdatafile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "5DataModelLoader/1MeshDataFile/meshdatafile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshdatafile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MeshDataFile_t {
    QByteArrayData data[15];
    char stringdata[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MeshDataFile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MeshDataFile_t qt_meta_stringdata_MeshDataFile = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 32),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 29),
QT_MOC_LITERAL(4, 77, 34),
QT_MOC_LITERAL(5, 112, 30),
QT_MOC_LITERAL(6, 143, 41),
QT_MOC_LITERAL(7, 185, 40),
QT_MOC_LITERAL(8, 226, 33),
QT_MOC_LITERAL(9, 260, 24),
QT_MOC_LITERAL(10, 285, 26),
QT_MOC_LITERAL(11, 312, 25),
QT_MOC_LITERAL(12, 338, 18),
QT_MOC_LITERAL(13, 357, 38),
QT_MOC_LITERAL(14, 396, 7)
    },
    "MeshDataFile\0on_pushButtonElementFile_clicked\0"
    "\0on_pushButtonNodeFile_clicked\0"
    "on_pushButtonNeighbourFile_clicked\0"
    "on_pushButtonRiverFile_clicked\0"
    "on_pushButtonSurfaceElevationFile_clicked\0"
    "on_pushButtonSubsurfaceThickness_clicked\0"
    "on_pushButtonMeshDataFile_clicked\0"
    "on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
    "on_checkBoxSubsurfaceThickness_toggled\0"
    "checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshDataFile[] = {

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
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    0,   78,    2, 0x08,
       7,    0,   79,    2, 0x08,
       8,    0,   80,    2, 0x08,
       9,    0,   81,    2, 0x08,
      10,    0,   82,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    1,   85,    2, 0x08,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void MeshDataFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeshDataFile *_t = static_cast<MeshDataFile *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonElementFile_clicked(); break;
        case 1: _t->on_pushButtonNodeFile_clicked(); break;
        case 2: _t->on_pushButtonNeighbourFile_clicked(); break;
        case 3: _t->on_pushButtonRiverFile_clicked(); break;
        case 4: _t->on_pushButtonSurfaceElevationFile_clicked(); break;
        case 5: _t->on_pushButtonSubsurfaceThickness_clicked(); break;
        case 6: _t->on_pushButtonMeshDataFile_clicked(); break;
        case 7: _t->on_pushButtonRun_clicked(); break;
        case 8: _t->on_pushButtonClose_clicked(); break;
        case 9: _t->on_pushButtonHelp_clicked(); break;
        case 10: _t->pushButtonSetFocus(); break;
        case 11: _t->on_checkBoxSubsurfaceThickness_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MeshDataFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshDataFile.data,
      qt_meta_data_MeshDataFile,  qt_static_metacall, 0, 0}
};


const QMetaObject *MeshDataFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshDataFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshDataFile.stringdata))
        return static_cast<void*>(const_cast< MeshDataFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshDataFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
