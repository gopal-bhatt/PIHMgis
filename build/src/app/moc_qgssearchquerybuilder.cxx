/****************************************************************************
** Meta object code from reading C++ file 'qgssearchquerybuilder.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgssearchquerybuilder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssearchquerybuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsSearchQueryBuilder[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      45,   22,   22,   22, 0x0a,
      64,   22,   22,   22, 0x0a,
      89,   22,   22,   22, 0x0a,
     117,   22,   22,   22, 0x0a,
     137,   22,   22,   22, 0x0a,
     156,   22,   22,   22, 0x0a,
     178,   22,   22,   22, 0x0a,
     199,   22,   22,   22, 0x0a,
     227,  221,   22,   22, 0x0a,
     267,  221,   22,   22, 0x0a,
     307,   22,   22,   22, 0x0a,
     333,   22,   22,   22, 0x0a,
     362,   22,   22,   22, 0x0a,
     387,   22,   22,   22, 0x0a,
     407,   22,   22,   22, 0x0a,
     427,   22,   22,   22, 0x0a,
     446,   22,   22,   22, 0x0a,
     468,   22,   22,   22, 0x0a,
     489,   22,   22,   22, 0x0a,
     518,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsSearchQueryBuilder[] = {
    "QgsSearchQueryBuilder\0\0on_btnEqual_clicked()\0"
    "on_btnOk_clicked()\0on_btnLessThan_clicked()\0"
    "on_btnGreaterThan_clicked()\0"
    "on_btnPct_clicked()\0on_btnIn_clicked()\0"
    "on_btnNotIn_clicked()\0on_btnLike_clicked()\0"
    "on_btnILike_clicked()\0index\0"
    "on_lstFields_doubleClicked(QModelIndex)\0"
    "on_lstValues_doubleClicked(QModelIndex)\0"
    "on_btnLessEqual_clicked()\0"
    "on_btnGreaterEqual_clicked()\0"
    "on_btnNotEqual_clicked()\0on_btnAnd_clicked()\0"
    "on_btnNot_clicked()\0on_btnOr_clicked()\0"
    "on_btnClear_clicked()\0on_btnTest_clicked()\0"
    "on_btnGetAllValues_clicked()\0"
    "on_btnSampleValues_clicked()\0"
};

const QMetaObject QgsSearchQueryBuilder::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsSearchQueryBuilder,
      qt_meta_data_QgsSearchQueryBuilder, 0 }
};

const QMetaObject *QgsSearchQueryBuilder::metaObject() const
{
    return &staticMetaObject;
}

void *QgsSearchQueryBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSearchQueryBuilder))
	return static_cast<void*>(const_cast< QgsSearchQueryBuilder*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsSearchQueryBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnEqual_clicked(); break;
        case 1: on_btnOk_clicked(); break;
        case 2: on_btnLessThan_clicked(); break;
        case 3: on_btnGreaterThan_clicked(); break;
        case 4: on_btnPct_clicked(); break;
        case 5: on_btnIn_clicked(); break;
        case 6: on_btnNotIn_clicked(); break;
        case 7: on_btnLike_clicked(); break;
        case 8: on_btnILike_clicked(); break;
        case 9: on_lstFields_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: on_lstValues_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: on_btnLessEqual_clicked(); break;
        case 12: on_btnGreaterEqual_clicked(); break;
        case 13: on_btnNotEqual_clicked(); break;
        case 14: on_btnAnd_clicked(); break;
        case 15: on_btnNot_clicked(); break;
        case 16: on_btnOr_clicked(); break;
        case 17: on_btnClear_clicked(); break;
        case 18: on_btnTest_clicked(); break;
        case 19: on_btnGetAllValues_clicked(); break;
        case 20: on_btnSampleValues_clicked(); break;
        }
        _id -= 21;
    }
    return _id;
}
