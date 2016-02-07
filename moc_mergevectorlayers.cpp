/****************************************************************************
** Meta object code from reading C++ file 'mergevectorlayers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "3VectorProcessing/5MergeVectorLayers/mergevectorlayers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mergevectorlayers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MergeVectorLayers_t {
    QByteArrayData data[10];
    char stringdata[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MergeVectorLayers_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MergeVectorLayers_t qt_meta_stringdata_MergeVectorLayers = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 24),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 27),
QT_MOC_LITERAL(4, 72, 26),
QT_MOC_LITERAL(5, 99, 31),
QT_MOC_LITERAL(6, 131, 24),
QT_MOC_LITERAL(7, 156, 26),
QT_MOC_LITERAL(8, 183, 25),
QT_MOC_LITERAL(9, 209, 18)
    },
    "MergeVectorLayers\0on_pushButtonAdd_clicked\0"
    "\0on_pushButtonRemove_clicked\0"
    "on_pushButtonClear_clicked\0"
    "on_pushButtonMergeLayer_clicked\0"
    "on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MergeVectorLayers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    0,   55,    2, 0x08,
       4,    0,   56,    2, 0x08,
       5,    0,   57,    2, 0x08,
       6,    0,   58,    2, 0x08,
       7,    0,   59,    2, 0x08,
       8,    0,   60,    2, 0x08,
       9,    0,   61,    2, 0x08,

 // slots: parameters
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

void MergeVectorLayers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MergeVectorLayers *_t = static_cast<MergeVectorLayers *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonAdd_clicked(); break;
        case 1: _t->on_pushButtonRemove_clicked(); break;
        case 2: _t->on_pushButtonClear_clicked(); break;
        case 3: _t->on_pushButtonMergeLayer_clicked(); break;
        case 4: _t->on_pushButtonRun_clicked(); break;
        case 5: _t->on_pushButtonClose_clicked(); break;
        case 6: _t->on_pushButtonHelp_clicked(); break;
        case 7: _t->pushButtonSetFocus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MergeVectorLayers::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MergeVectorLayers.data,
      qt_meta_data_MergeVectorLayers,  qt_static_metacall, 0, 0}
};


const QMetaObject *MergeVectorLayers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MergeVectorLayers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MergeVectorLayers.stringdata))
        return static_cast<void*>(const_cast< MergeVectorLayers*>(this));
    return QDialog::qt_metacast(_clname);
}

int MergeVectorLayers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
