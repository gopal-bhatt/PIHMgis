/****************************************************************************
** Meta object code from reading C++ file 'qgsdelimitedtextplugingui.h'
**
** Created: Tue Jun 22 23:11:09 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/delimited_text/qgsdelimitedtextplugingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdelimitedtextplugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsDelimitedTextPluginGui[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      55,   52,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   26,   26,   26, 0x0a,
     103,   26,   26,   26, 0x08,
     127,   26,   26,   26, 0x08,
     151,   26,   26,   26, 0x08,
     180,   26,   26,   26, 0x08,
     215,  210,   26,   26, 0x08,
     252,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsDelimitedTextPluginGui[] = {
    "QgsDelimitedTextPluginGui\0\0"
    "drawRasterLayer(QString)\0,,\0"
    "drawVectorLayer(QString,QString,QString)\0"
    "help()\0on_buttonBox_accepted()\0"
    "on_buttonBox_rejected()\0"
    "on_buttonBox_helpRequested()\0"
    "on_btnBrowseForFile_clicked()\0text\0"
    "on_txtDelimiter_textChanged(QString)\0"
    "pbnParse_clicked()\0"
};

const QMetaObject QgsDelimitedTextPluginGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsDelimitedTextPluginGui,
      qt_meta_data_QgsDelimitedTextPluginGui, 0 }
};

const QMetaObject *QgsDelimitedTextPluginGui::metaObject() const
{
    return &staticMetaObject;
}

void *QgsDelimitedTextPluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDelimitedTextPluginGui))
	return static_cast<void*>(const_cast< QgsDelimitedTextPluginGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsDelimitedTextPluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawRasterLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: drawVectorLayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: help(); break;
        case 3: on_buttonBox_accepted(); break;
        case 4: on_buttonBox_rejected(); break;
        case 5: on_buttonBox_helpRequested(); break;
        case 6: on_btnBrowseForFile_clicked(); break;
        case 7: on_txtDelimiter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: pbnParse_clicked(); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsDelimitedTextPluginGui::drawRasterLayer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsDelimitedTextPluginGui::drawVectorLayer(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
