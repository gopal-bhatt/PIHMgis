/****************************************************************************
** Meta object code from reading C++ file 'qgsbookmarks.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsbookmarks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsbookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsBookmarks[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      35,   13,   13,   13, 0x08,
      58,   13,   13,   13, 0x08,
      81,   13,   13,   13, 0x08,
     129,   13,   13,   13, 0x08,
     145,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsBookmarks[] = {
    "QgsBookmarks\0\0saveWindowLocation()\0"
    "on_btnDelete_clicked()\0on_btnZoomTo_clicked()\0"
    "on_lstBookmarks_doubleClicked(QTreeWidgetItem*)\0"
    "helpRequested()\0refreshBookmarks()\0"
};

const QMetaObject QgsBookmarks::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsBookmarks,
      qt_meta_data_QgsBookmarks, 0 }
};

const QMetaObject *QgsBookmarks::metaObject() const
{
    return &staticMetaObject;
}

void *QgsBookmarks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBookmarks))
	return static_cast<void*>(const_cast< QgsBookmarks*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsBookmarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveWindowLocation(); break;
        case 1: on_btnDelete_clicked(); break;
        case 2: on_btnZoomTo_clicked(); break;
        case 3: on_lstBookmarks_doubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: helpRequested(); break;
        case 5: refreshBookmarks(); break;
        }
        _id -= 6;
    }
    return _id;
}
