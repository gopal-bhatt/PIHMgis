/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerview.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgscomposerview.h"
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
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x05,
      76,   70,   16,   16, 0x05,
     118,  114,   16,   16, 0x05,
     161,  152,   16,   16, 0x05,
     212,  205,   16,   16, 0x05,
     260,  252,   16,   16, 0x05,
     302,   16,   16,   16, 0x05,
     332,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     354,  349,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsComposerView[] = {
    "QgsComposerView\0\0selected\0"
    "selectedItemChanged(const QgsComposerItem*)\0"
    "label\0composerLabelAdded(QgsComposerLabel*)\0"
    "map\0composerMapAdded(QgsComposerMap*)\0"
    "scalebar\0composerScaleBarAdded(QgsComposerScaleBar*)\0"
    "legend\0composerLegendAdded(QgsComposerLegend*)\0"
    "picture\0composerPictureAdded(QgsComposerPicture*)\0"
    "itemRemoved(QgsComposerItem*)\0"
    "actionFinished()\0item\0"
    "sendItemRemovedSignal(QgsComposerItem*)\0"
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
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectedItemChanged((*reinterpret_cast< const QgsComposerItem*(*)>(_a[1]))); break;
        case 1: composerLabelAdded((*reinterpret_cast< QgsComposerLabel*(*)>(_a[1]))); break;
        case 2: composerMapAdded((*reinterpret_cast< QgsComposerMap*(*)>(_a[1]))); break;
        case 3: composerScaleBarAdded((*reinterpret_cast< QgsComposerScaleBar*(*)>(_a[1]))); break;
        case 4: composerLegendAdded((*reinterpret_cast< QgsComposerLegend*(*)>(_a[1]))); break;
        case 5: composerPictureAdded((*reinterpret_cast< QgsComposerPicture*(*)>(_a[1]))); break;
        case 6: itemRemoved((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 7: actionFinished(); break;
        case 8: sendItemRemovedSignal((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsComposerView::selectedItemChanged(const QgsComposerItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsComposerView::composerLabelAdded(QgsComposerLabel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsComposerView::composerMapAdded(QgsComposerMap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsComposerView::composerScaleBarAdded(QgsComposerScaleBar * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsComposerView::composerLegendAdded(QgsComposerLegend * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsComposerView::composerPictureAdded(QgsComposerPicture * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsComposerView::itemRemoved(QgsComposerItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsComposerView::actionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
