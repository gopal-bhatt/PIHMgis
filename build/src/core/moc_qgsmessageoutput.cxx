/****************************************************************************
** Meta object code from reading C++ file 'qgsmessageoutput.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsmessageoutput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmessageoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsMessageOutputConsole[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsMessageOutputConsole[] = {
    "QgsMessageOutputConsole\0\0destroyed()\0"
};

const QMetaObject QgsMessageOutputConsole::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMessageOutputConsole,
      qt_meta_data_QgsMessageOutputConsole, 0 }
};

const QMetaObject *QgsMessageOutputConsole::metaObject() const
{
    return &staticMetaObject;
}

void *QgsMessageOutputConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageOutputConsole))
	return static_cast<void*>(const_cast< QgsMessageOutputConsole*>(this));
    if (!strcmp(_clname, "QgsMessageOutput"))
	return static_cast< QgsMessageOutput*>(const_cast< QgsMessageOutputConsole*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMessageOutputConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: destroyed(); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsMessageOutputConsole::destroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
