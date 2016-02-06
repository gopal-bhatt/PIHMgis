/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerview.h'
**
** Created: Wed Jun 11 19:05:44 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/composer/qgscomposerview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsComposerView[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerView[] = {
    "QgsComposerView\0"
};

const QMetaObject QgsComposerView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsComposerView,
      qt_meta_data_QgsComposerView, 0 }
};

const QMetaObject *QgsComposerView::metaObject() const
{
    return &staticMetaObject;
}

void *QgsComposerView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerView))
	return static_cast<void*>(const_cast< QgsComposerView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QgsComposerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
