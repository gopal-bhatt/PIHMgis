/****************************************************************************
** Meta object code from reading C++ file 'qgshttptransaction.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/qgshttptransaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshttptransaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsHttpTransaction[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      46,   20,   19,   19, 0x05,
      84,   67,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,  107,   19,   19, 0x0a,
     132,  127,   19,   19, 0x0a,
     172,  127,   19,   19, 0x0a,
     217,  206,   19,   19, 0x0a,
     248,  239,   19,   19, 0x0a,
     277,  271,   19,   19, 0x0a,
     309,  303,   19,   19, 0x0a,
     331,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsHttpTransaction[] = {
    "QgsHttpTransaction\0\0theProgress,theTotalSteps\0"
    "setProgress(int,int)\0theStatusQString\0"
    "statusChanged(QString)\0id\0dataStarted(int)\0"
    "resp\0dataHeaderReceived(QHttpResponseHeader)\0"
    "dataReceived(QHttpResponseHeader)\0"
    "done,total\0dataProgress(int,int)\0"
    "id,error\0dataFinished(int,bool)\0error\0"
    "transactionFinished(bool)\0state\0"
    "dataStateChanged(int)\0networkTimedOut()\0"
};

const QMetaObject QgsHttpTransaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsHttpTransaction,
      qt_meta_data_QgsHttpTransaction, 0 }
};

const QMetaObject *QgsHttpTransaction::metaObject() const
{
    return &staticMetaObject;
}

void *QgsHttpTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHttpTransaction))
	return static_cast<void*>(const_cast< QgsHttpTransaction*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsHttpTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: dataStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: dataHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 4: dataReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 5: dataProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: dataFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: transactionFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: dataStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: networkTimedOut(); break;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsHttpTransaction::setProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsHttpTransaction::statusChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
