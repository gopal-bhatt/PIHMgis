/****************************************************************************
** Meta object code from reading C++ file 'qgsabout.h'
**
** Created: Tue Jun 22 23:06:14 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsabout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsabout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsAbout[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      44,   36,    9,    9, 0x08,
      93,    9,    9,    9, 0x08,
     118,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsAbout[] = {
    "QgsAbout\0\0on_buttonCancel_clicked()\0"
    "theItem\0on_listBox1_currentItemChanged(QListWidgetItem*)\0"
    "on_btnQgisUser_clicked()\0"
    "on_btnQgisHome_clicked()\0"
};

const QMetaObject QgsAbout::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAbout,
      qt_meta_data_QgsAbout, 0 }
};

const QMetaObject *QgsAbout::metaObject() const
{
    return &staticMetaObject;
}

void *QgsAbout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAbout))
	return static_cast<void*>(const_cast< QgsAbout*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsAbout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_buttonCancel_clicked(); break;
        case 1: on_listBox1_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: on_btnQgisUser_clicked(); break;
        case 3: on_btnQgisHome_clicked(); break;
        }
        _id -= 4;
    }
    return _id;
}
