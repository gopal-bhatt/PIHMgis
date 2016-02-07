/****************************************************************************
** Meta object code from reading C++ file 'qgscustomprojectiondialog.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgscustomprojectiondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscustomprojectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsCustomProjectionDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      53,   26,   26,   26, 0x0a,
      75,   26,   26,   26, 0x0a,
     103,   26,   98,   26, 0x0a,
     120,   26,   26,   26, 0x0a,
     142,   26,   26,   26, 0x0a,
     167,   26,   26,   26, 0x0a,
     188,   26,   26,   26, 0x0a,
     209,   26,   26,   26, 0x0a,
     229,   26,   26,   26, 0x0a,
     285,  258,  250,   26, 0x0a,
     338,  318,  250,   26, 0x0a,
     388,  364,  250,   26, 0x0a,
     441,  424,  250,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsCustomProjectionDialog[] = {
    "QgsCustomProjectionDialog\0\0"
    "on_pbnCalculate_clicked()\0"
    "on_pbnClose_clicked()\0on_pbnDelete_clicked()\0"
    "long\0getRecordCount()\0on_pbnFirst_clicked()\0"
    "on_pbnPrevious_clicked()\0on_pbnNext_clicked()\0"
    "on_pbnLast_clicked()\0on_pbnNew_clicked()\0"
    "on_pbnSave_clicked()\0QString\0"
    "theProjectionFamilyAcronym\0"
    "getProjectionFamilyName(QString)\0"
    "theEllipsoidAcronym\0getEllipsoidName(QString)\0"
    "theProjectionFamilyName\0"
    "getProjectionFamilyAcronym(QString)\0"
    "theEllipsoidName\0getEllipsoidAcronym(QString)\0"
};

const QMetaObject QgsCustomProjectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsCustomProjectionDialog,
      qt_meta_data_QgsCustomProjectionDialog, 0 }
};

const QMetaObject *QgsCustomProjectionDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QgsCustomProjectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCustomProjectionDialog))
	return static_cast<void*>(const_cast< QgsCustomProjectionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsCustomProjectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbnCalculate_clicked(); break;
        case 1: on_pbnClose_clicked(); break;
        case 2: on_pbnDelete_clicked(); break;
        case 3: { long _r = getRecordCount();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 4: on_pbnFirst_clicked(); break;
        case 5: on_pbnPrevious_clicked(); break;
        case 6: on_pbnNext_clicked(); break;
        case 7: on_pbnLast_clicked(); break;
        case 8: on_pbnNew_clicked(); break;
        case 9: on_pbnSave_clicked(); break;
        case 10: { QString _r = getProjectionFamilyName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = getEllipsoidName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = getProjectionFamilyAcronym((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = getEllipsoidAcronym((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        }
        _id -= 14;
    }
    return _id;
}
