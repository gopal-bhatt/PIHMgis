/****************************************************************************
** Meta object code from reading C++ file 'qgsquickprint.h'
**
** Created: Tue Jun 22 23:05:27 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/qgsquickprint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsquickprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsQuickPrint[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      34,   26,   14,   14, 0x0a,
      52,   26,   14,   14, 0x0a,
      69,   26,   14,   14, 0x0a,
     103,   91,   14,   14, 0x0a,
     126,   91,   14,   14, 0x0a,
     144,   91,   14,   14, 0x0a,
     162,   91,   14,   14, 0x0a,
     192,  184,   14,   14, 0x0a,
     238,  224,   14,   14, 0x0a,
     282,  266,   14,   14, 0x0a,
     323,  314,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QgsQuickPrint[] = {
    "QgsQuickPrint\0\0printMap()\0theText\0"
    "setTitle(QString)\0setName(QString)\0"
    "setCopyright(QString)\0theFileName\0"
    "setNorthArrow(QString)\0setLogo1(QString)\0"
    "setLogo2(QString)\0setOutputPdf(QString)\0"
    "theSize\0setPageSize(QPrinter::PageSize)\0"
    "thepMapCanvas\0setMapCanvas(QgsMapCanvas*)\0"
    "thepMapRenderer\0setMapRenderer(QgsMapRenderer*)\0"
    "theColor\0setMapBackgroundColor(QColor)\0"
};

const QMetaObject QgsQuickPrint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsQuickPrint,
      qt_meta_data_QgsQuickPrint, 0 }
};

const QMetaObject *QgsQuickPrint::metaObject() const
{
    return &staticMetaObject;
}

void *QgsQuickPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsQuickPrint))
	return static_cast<void*>(const_cast< QgsQuickPrint*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsQuickPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: printMap(); break;
        case 1: setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: setCopyright((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: setNorthArrow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: setLogo1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: setLogo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: setOutputPdf((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: setPageSize((*reinterpret_cast< QPrinter::PageSize(*)>(_a[1]))); break;
        case 9: setMapCanvas((*reinterpret_cast< QgsMapCanvas*(*)>(_a[1]))); break;
        case 10: setMapRenderer((*reinterpret_cast< QgsMapRenderer*(*)>(_a[1]))); break;
        case 11: setMapBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        }
        _id -= 12;
    }
    return _id;
}
