/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterlayerproperties.h'
**
** Created: Tue Jun 22 23:06:15 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/app/qgsrasterlayerproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterlayerproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QgsRasterLayerProperties[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      45,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   25,   25,   25, 0x0a,
      81,   25,   25,   25, 0x0a,
     114,   25,   25,   25, 0x0a,
     151,   25,   25,   25, 0x0a,
     185,   25,   25,   25, 0x0a,
     214,   25,   25,   25, 0x0a,
     250,   25,   25,   25, 0x0a,
     280,   25,   25,   25, 0x0a,
     325,   25,   25,   25, 0x0a,
     353,   25,   25,   25, 0x0a,
     398,   25,   25,   25, 0x0a,
     432,   25,   25,   25, 0x0a,
     464,   25,   25,   25, 0x0a,
     502,   25,   25,   25, 0x0a,
     540,   25,   25,   25, 0x0a,
     571,   25,   25,   25, 0x0a,
     608,   25,   25,   25, 0x0a,
     645,   25,   25,   25, 0x0a,
     687,   25,   25,   25, 0x0a,
     728,   25,   25,   25, 0x0a,
     765,   25,   25,   25, 0x0a,
     803,   25,   25,   25, 0x08,
     843,   25,   25,   25, 0x08,
     883,   25,   25,   25, 0x08,
     924,   25,   25,   25, 0x08,
     963,   25,   25,   25, 0x08,
    1008,   25,   25,   25, 0x08,
    1037,   25,   25,   25, 0x08,
    1081, 1069,   25,   25, 0x08,
    1139,   25,   25,   25, 0x08,
    1173,   25,   25,   25, 0x08,
    1211,   25,   25,   25, 0x08,
    1249,   25,   25,   25, 0x08,
    1287,   25,   25,   25, 0x08,
    1315,   25,   25,   25, 0x08,
    1359,   25,   25,   25, 0x08,
    1416,   25,   25,   25, 0x08,
    1446,   25,   25,   25, 0x08,
    1479,   25,   25,   25, 0x08,
    1512,   25,   25,   25, 0x08,
    1538,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QgsRasterLayerProperties[] = {
    "QgsRasterLayerProperties\0\0layerID,expandItem\0"
    "refreshLegend(QString,bool)\0apply()\0"
    "on_buttonBuildPyramids_clicked()\0"
    "on_pbnAddValuesFromDisplay_clicked()\0"
    "on_pbnAddValuesManually_clicked()\0"
    "on_buttonBox_helpRequested()\0"
    "on_pbnChangeSpatialRefSys_clicked()\0"
    "on_pbnDefaultValues_clicked()\0"
    "on_pbnExportTransparentPixelValues_clicked()\0"
    "on_pbnHistRefresh_clicked()\0"
    "on_pbnImportTransparentPixelValues_clicked()\0"
    "on_pbnRemoveSelectedRow_clicked()\0"
    "on_rbtnSingleBand_toggled(bool)\0"
    "on_rbtnSingleBandMinMax_toggled(bool)\0"
    "on_rbtnSingleBandStdDev_toggled(bool)\0"
    "on_rbtnThreeBand_toggled(bool)\0"
    "on_rbtnThreeBandMinMax_toggled(bool)\0"
    "on_rbtnThreeBandStdDev_toggled(bool)\0"
    "sboxSingleBandStdDev_valueChanged(double)\0"
    "sboxThreeBandStdDev_valueChanged(double)\0"
    "sliderTransparency_valueChanged(int)\0"
    "userDefinedMinMax_textEdited(QString)\0"
    "on_cboBlue_currentIndexChanged(QString)\0"
    "on_cboGray_currentIndexChanged(QString)\0"
    "on_cboGreen_currentIndexChanged(QString)\0"
    "on_cboRed_currentIndexChanged(QString)\0"
    "on_cboxColorMap_currentIndexChanged(QString)\0"
    "on_mClassifyButton_clicked()\0"
    "on_mDeleteEntryButton_clicked()\0"
    "item,column\0"
    "handleColormapTreeWidgetDoubleClick(QTreeWidgetItem*,int)\0"
    "on_pbtnAddColorMapEntry_clicked()\0"
    "on_pbtnExportColorMapToFile_clicked()\0"
    "on_pbtnLoadColorMapFromBand_clicked()\0"
    "on_pbtnLoadColorMapFromFile_clicked()\0"
    "on_pbtnLoadMinMax_clicked()\0"
    "on_pbtnMakeBandCombinationDefault_clicked()\0"
    "on_pbtnMakeContrastEnhancementAlgorithmDefault_clicked()\0"
    "on_pbtnSortColorMap_clicked()\0"
    "on_pbnLoadDefaultStyle_clicked()\0"
    "on_pbnSaveDefaultStyle_clicked()\0"
    "on_pbnLoadStyle_clicked()\0"
    "on_pbnSaveStyleAs_clicked()\0"
};

const QMetaObject QgsRasterLayerProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsRasterLayerProperties,
      qt_meta_data_QgsRasterLayerProperties, 0 }
};

const QMetaObject *QgsRasterLayerProperties::metaObject() const
{
    return &staticMetaObject;
}

void *QgsRasterLayerProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterLayerProperties))
	return static_cast<void*>(const_cast< QgsRasterLayerProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsRasterLayerProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshLegend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: apply(); break;
        case 2: on_buttonBuildPyramids_clicked(); break;
        case 3: on_pbnAddValuesFromDisplay_clicked(); break;
        case 4: on_pbnAddValuesManually_clicked(); break;
        case 5: on_buttonBox_helpRequested(); break;
        case 6: on_pbnChangeSpatialRefSys_clicked(); break;
        case 7: on_pbnDefaultValues_clicked(); break;
        case 8: on_pbnExportTransparentPixelValues_clicked(); break;
        case 9: on_pbnHistRefresh_clicked(); break;
        case 10: on_pbnImportTransparentPixelValues_clicked(); break;
        case 11: on_pbnRemoveSelectedRow_clicked(); break;
        case 12: on_rbtnSingleBand_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: on_rbtnSingleBandMinMax_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: on_rbtnSingleBandStdDev_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: on_rbtnThreeBand_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: on_rbtnThreeBandMinMax_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: on_rbtnThreeBandStdDev_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: sboxSingleBandStdDev_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: sboxThreeBandStdDev_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: sliderTransparency_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: userDefinedMinMax_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: on_cboBlue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: on_cboGray_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: on_cboGreen_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: on_cboRed_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: on_cboxColorMap_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: on_mClassifyButton_clicked(); break;
        case 28: on_mDeleteEntryButton_clicked(); break;
        case 29: handleColormapTreeWidgetDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: on_pbtnAddColorMapEntry_clicked(); break;
        case 31: on_pbtnExportColorMapToFile_clicked(); break;
        case 32: on_pbtnLoadColorMapFromBand_clicked(); break;
        case 33: on_pbtnLoadColorMapFromFile_clicked(); break;
        case 34: on_pbtnLoadMinMax_clicked(); break;
        case 35: on_pbtnMakeBandCombinationDefault_clicked(); break;
        case 36: on_pbtnMakeContrastEnhancementAlgorithmDefault_clicked(); break;
        case 37: on_pbtnSortColorMap_clicked(); break;
        case 38: on_pbnLoadDefaultStyle_clicked(); break;
        case 39: on_pbnSaveDefaultStyle_clicked(); break;
        case 40: on_pbnLoadStyle_clicked(); break;
        case 41: on_pbnSaveStyleAs_clicked(); break;
        }
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void QgsRasterLayerProperties::refreshLegend(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
