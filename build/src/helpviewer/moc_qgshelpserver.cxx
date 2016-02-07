/****************************************************************************
** Meta object code from reading C++ file 'qgshelpserver.h'
**
** Created: Tue Jun 22 23:10:17 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/helpviewer/qgshelpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshelpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsHelpContextServer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   42,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsHelpContextServer[] = {
    "QgsHelpContextServer\0\0setContext(QString)\0"
    "socket\0incomingConnection(int)\0"
};

const QMetaObject QgsHelpContextServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_QgsHelpContextServer,
      qt_meta_data_QgsHelpContextServer, 0 }
};

const QMetaObject *QgsHelpContextServer::metaObject() const
{
    return &staticMetaObject;
}

void *QgsHelpContextServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHelpContextServer))
	return static_cast<void*>(const_cast< QgsHelpContextServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int QgsHelpContextServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: incomingConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsHelpContextServer::setContext(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QgsHelpContextSocket[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsHelpContextSocket[] = {
    "QgsHelpContextSocket\0\0setContext(QString)\0"
    "readClient()\0"
};

const QMetaObject QgsHelpContextSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QgsHelpContextSocket,
      qt_meta_data_QgsHelpContextSocket, 0 }
};

const QMetaObject *QgsHelpContextSocket::metaObject() const
{
    return &staticMetaObject;
}

void *QgsHelpContextSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHelpContextSocket))
	return static_cast<void*>(const_cast< QgsHelpContextSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QgsHelpContextSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setContext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: readClient(); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsHelpContextSocket::setContext(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
