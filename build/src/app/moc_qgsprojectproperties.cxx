/****************************************************************************
** Meta object code from reading C++ file 'qgsprojectproperties.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsprojectproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprojectproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsProjectProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      48,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   21,   21,   21, 0x0a,
      66,   21,   21,   21, 0x0a,
      87,   21,   21,   21, 0x0a,
     119,   21,   21,   21, 0x0a,
     147,   21,   21,   21, 0x0a,
     176,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsProjectProperties[] = {
    "QgsProjectProperties\0\0displayPrecisionChanged()\0"
    "refresh()\0apply()\0showProjectionsTab()\0"
    "on_pbnSelectionColour_clicked()\0"
    "on_pbnCanvasColor_clicked()\0"
    "on_buttonBox_helpRequested()\0"
    "on_mSnappingOptionsPushButton_clicked()\0"
};

const QMetaObject QgsProjectProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProjectProperties,
      qt_meta_data_QgsProjectProperties, 0 }
};

const QMetaObject *QgsProjectProperties::metaObject() const
{
    return &staticMetaObject;
}

void *QgsProjectProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectProperties))
	return static_cast<void*>(const_cast< QgsProjectProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsProjectProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayPrecisionChanged(); break;
        case 1: refresh(); break;
        case 2: apply(); break;
        case 3: showProjectionsTab(); break;
        case 4: on_pbnSelectionColour_clicked(); break;
        case 5: on_pbnCanvasColor_clicked(); break;
        case 6: on_buttonBox_helpRequested(); break;
        case 7: on_mSnappingOptionsPushButton_clicked(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsProjectProperties::displayPrecisionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QgsProjectProperties::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
