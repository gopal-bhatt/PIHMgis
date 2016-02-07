/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created: Tue Jun 22 23:11:02 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/copyright_label/plugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsCopyrightLabelPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,
      46,   27,   27,   27, 0x05,
      67,   27,   27,   27, 0x05,
      87,   27,   27,   27, 0x05,
     108,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     135,   27,   27,   27, 0x08,
     159,   27,   27,   27, 0x08,
     183,   27,   27,   27, 0x08,
     212,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsCopyrightLabelPluginGui[] = {
    "QgsCopyrightLabelPluginGui\0\0"
    "changeFont(QFont)\0changeLabel(QString)\0"
    "changeColor(QColor)\0changePlacement(int)\0"
    "enableCopyrightLabel(bool)\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
    "on_pbnColorChooser_clicked()\0"
};

const QMetaObject QgsCopyrightLabelPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsCopyrightLabelPluginGui,
      qt_meta_data_QgsCopyrightLabelPluginGui, 0 }
};

const QMetaObject *QgsCopyrightLabelPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsCopyrightLabelPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCopyrightLabelPluginGui))
	return static_cast<void*>(const_cast< QgsCopyrightLabelPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsCopyrightLabelPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: changeLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: changeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: changePlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: enableCopyrightLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_buttonBox_accepted(); break;
        case 6: on_buttonBox_rejected(); break;
        case 7: on_buttonBox_helpRequested(); break;
        case 8: on_pbnColorChooser_clicked(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsCopyrightLabelPluginGui::changeFont(QFont _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsCopyrightLabelPluginGui::changeLabel(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsCopyrightLabelPluginGui::changeColor(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsCopyrightLabelPluginGui::changePlacement(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsCopyrightLabelPluginGui::enableCopyrightLabel(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
