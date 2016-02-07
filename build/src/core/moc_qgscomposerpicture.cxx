/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerpicture.h'
**
** Created: Tue Jun 22 23:03:12 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/composer/qgscomposerpicture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerpicture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerPicture[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerPicture[] = {
    "QgsComposerPicture\0\0settingsChanged()\0"
};

const QMetaObject QgsComposerPicture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsComposerPicture,
      qt_meta_data_QgsComposerPicture, 0 }
};

const QMetaObject *QgsComposerPicture::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerPicture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerPicture))
	return static_cast<void*>(const_cast< QgsComposerPicture*>(this));
    if (!strcmp(_clname, "QgsComposerItem"))
	return static_cast< QgsComposerItem*>(const_cast< QgsComposerPicture*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsComposerPicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: settingsChanged(); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsComposerPicture::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
