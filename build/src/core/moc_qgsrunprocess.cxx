/****************************************************************************
** Meta object code from reading C++ file 'qgsrunprocess.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgsrunprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrunprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsRunProcess[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      33,   14,   14,   14, 0x0a,
      51,   14,   14,   14, 0x0a,
      90,   88,   14,   14, 0x0a,
     128,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsRunProcess[] = {
    "QgsRunProcess\0\0stdoutAvailable()\0"
    "stderrAvailable()\0"
    "processError(QProcess::ProcessError)\0"
    ",\0processExit(int,QProcess::ExitStatus)\0"
    "dialogGone()\0"
};

const QMetaObject QgsRunProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsRunProcess,
      qt_meta_data_QgsRunProcess, 0 }
};

const QMetaObject *QgsRunProcess::metaObject() const
{
    return &staticMetaObject;
}

void *QgsRunProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRunProcess))
	return static_cast<void*>(const_cast< QgsRunProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsRunProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stdoutAvailable(); break;
        case 1: stderrAvailable(); break;
        case 2: processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: processExit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: dialogGone(); break;
        }
        _id -= 5;
    }
    return _id;
}
