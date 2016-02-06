/********************************************************************************
** Form generated from reading ui file 'qgsgpspluginguibase.ui'
**
** Created: Wed Jun 11 19:10:27 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGPSPLUGINGUIBASE_H
#define UI_QGSGPSPLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qgsfiledropedit.h"

class Ui_QgsGPSPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QFrame *line1;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QTextEdit *textEdit;
    QLabel *lblGPXFile;
    QPushButton *pbnGPXSelectFile;
    QgsFileDropEdit *leGPXFile;
    QLabel *lblGPXFeatureTypes;
    QCheckBox *cbGPXWaypoints;
    QCheckBox *cbGPXRoutes;
    QCheckBox *cbGPXTracks;
    QWidget *tab2;
    QGridLayout *gridLayout2;
    QTextEdit *textEdit_2;
    QLineEdit *leIMPLayer;
    QLabel *textLabel1_6;
    QPushButton *pbnIMPOutput;
    QPushButton *pbnIMPInput;
    QLineEdit *leIMPOutput;
    QLabel *textLabel3_3;
    QSpacerItem *spacerItem;
    QComboBox *cmbIMPFeature;
    QLabel *textLabel2_3;
    QLineEdit *leIMPInput;
    QLabel *textLabel1_5;
    QWidget *tab3;
    QGridLayout *gridLayout3;
    QTextEdit *textEdit_3;
    QComboBox *cmbDLPort;
    QComboBox *cmbDLFeatureType;
    QLabel *textLabel2_5;
    QLabel *textLabel1_3;
    QLineEdit *leDLBasename;
    QLabel *textLabel1_2;
    QLabel *textLabel2;
    QLineEdit *leDLOutput;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *textLabel1;
    QComboBox *cmbDLDevice;
    QPushButton *pbDLEditDevices;
    QPushButton *pbnDLOutput;
    QWidget *tab4;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem3;
    QTextEdit *textEdit_4;
    QComboBox *cmbULPort;
    QLabel *textLabel3;
    QComboBox *cmbULDevice;
    QComboBox *cmbULLayer;
    QPushButton *pbULEditDevices;
    QLabel *textLabel2_4;
    QLabel *textLabel2_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGPSPluginGuiBase)
    {
    if (QgsGPSPluginGuiBase->objectName().isEmpty())
        QgsGPSPluginGuiBase->setObjectName(QString::fromUtf8("QgsGPSPluginGuiBase"));
    QgsGPSPluginGuiBase->resize(691, 406);
    QgsGPSPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsGPSPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(QgsGPSPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/gps.xpm")));
    label->setScaledContents(true);

    gridLayout->addWidget(label, 0, 0, 1, 1);

    line1 = new QFrame(QgsGPSPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 0, 1, 1, 1);

    tabWidget = new QTabWidget(QgsGPSPluginGuiBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textEdit = new QTextEdit(tab1);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy);
    textEdit->setLineWidth(0);
    textEdit->setReadOnly(true);

    gridLayout1->addWidget(textEdit, 0, 0, 1, 2);

    lblGPXFile = new QLabel(tab1);
    lblGPXFile->setObjectName(QString::fromUtf8("lblGPXFile"));

    gridLayout1->addWidget(lblGPXFile, 1, 0, 1, 1);

    pbnGPXSelectFile = new QPushButton(tab1);
    pbnGPXSelectFile->setObjectName(QString::fromUtf8("pbnGPXSelectFile"));

    gridLayout1->addWidget(pbnGPXSelectFile, 2, 1, 1, 1);

    leGPXFile = new QgsFileDropEdit(tab1);
    leGPXFile->setObjectName(QString::fromUtf8("leGPXFile"));

    gridLayout1->addWidget(leGPXFile, 2, 0, 1, 1);

    lblGPXFeatureTypes = new QLabel(tab1);
    lblGPXFeatureTypes->setObjectName(QString::fromUtf8("lblGPXFeatureTypes"));

    gridLayout1->addWidget(lblGPXFeatureTypes, 3, 0, 1, 1);

    cbGPXWaypoints = new QCheckBox(tab1);
    cbGPXWaypoints->setObjectName(QString::fromUtf8("cbGPXWaypoints"));
    cbGPXWaypoints->setEnabled(false);
    cbGPXWaypoints->setChecked(false);

    gridLayout1->addWidget(cbGPXWaypoints, 4, 0, 1, 1);

    cbGPXRoutes = new QCheckBox(tab1);
    cbGPXRoutes->setObjectName(QString::fromUtf8("cbGPXRoutes"));
    cbGPXRoutes->setEnabled(false);
    cbGPXRoutes->setChecked(false);

    gridLayout1->addWidget(cbGPXRoutes, 5, 0, 1, 1);

    cbGPXTracks = new QCheckBox(tab1);
    cbGPXTracks->setObjectName(QString::fromUtf8("cbGPXTracks"));
    cbGPXTracks->setEnabled(false);
    cbGPXTracks->setChecked(false);

    gridLayout1->addWidget(cbGPXTracks, 6, 0, 1, 1);

    tabWidget->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    gridLayout2 = new QGridLayout(tab2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textEdit_2 = new QTextEdit(tab2);
    textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
    textEdit_2->setReadOnly(true);

    gridLayout2->addWidget(textEdit_2, 0, 0, 1, 4);

    leIMPLayer = new QLineEdit(tab2);
    leIMPLayer->setObjectName(QString::fromUtf8("leIMPLayer"));

    gridLayout2->addWidget(leIMPLayer, 4, 1, 1, 2);

    textLabel1_6 = new QLabel(tab2);
    textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));

    gridLayout2->addWidget(textLabel1_6, 4, 0, 1, 1);

    pbnIMPOutput = new QPushButton(tab2);
    pbnIMPOutput->setObjectName(QString::fromUtf8("pbnIMPOutput"));

    gridLayout2->addWidget(pbnIMPOutput, 3, 3, 1, 1);

    pbnIMPInput = new QPushButton(tab2);
    pbnIMPInput->setObjectName(QString::fromUtf8("pbnIMPInput"));

    gridLayout2->addWidget(pbnIMPInput, 1, 3, 1, 1);

    leIMPOutput = new QLineEdit(tab2);
    leIMPOutput->setObjectName(QString::fromUtf8("leIMPOutput"));

    gridLayout2->addWidget(leIMPOutput, 3, 1, 1, 2);

    textLabel3_3 = new QLabel(tab2);
    textLabel3_3->setObjectName(QString::fromUtf8("textLabel3_3"));

    gridLayout2->addWidget(textLabel3_3, 3, 0, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem, 2, 2, 1, 1);

    cmbIMPFeature = new QComboBox(tab2);
    cmbIMPFeature->setObjectName(QString::fromUtf8("cmbIMPFeature"));
    cmbIMPFeature->setMinimumSize(QSize(90, 0));

    gridLayout2->addWidget(cmbIMPFeature, 2, 1, 1, 1);

    textLabel2_3 = new QLabel(tab2);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

    gridLayout2->addWidget(textLabel2_3, 2, 0, 1, 1);

    leIMPInput = new QLineEdit(tab2);
    leIMPInput->setObjectName(QString::fromUtf8("leIMPInput"));
    leIMPInput->setEnabled(false);

    gridLayout2->addWidget(leIMPInput, 1, 1, 1, 2);

    textLabel1_5 = new QLabel(tab2);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));

    gridLayout2->addWidget(textLabel1_5, 1, 0, 1, 1);

    tabWidget->addTab(tab2, QString());
    tab3 = new QWidget();
    tab3->setObjectName(QString::fromUtf8("tab3"));
    gridLayout3 = new QGridLayout(tab3);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textEdit_3 = new QTextEdit(tab3);
    textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
    textEdit_3->setReadOnly(true);

    gridLayout3->addWidget(textEdit_3, 0, 0, 1, 5);

    cmbDLPort = new QComboBox(tab3);
    cmbDLPort->setObjectName(QString::fromUtf8("cmbDLPort"));
    cmbDLPort->setMinimumSize(QSize(90, 0));

    gridLayout3->addWidget(cmbDLPort, 1, 4, 1, 1);

    cmbDLFeatureType = new QComboBox(tab3);
    cmbDLFeatureType->setObjectName(QString::fromUtf8("cmbDLFeatureType"));
    cmbDLFeatureType->setMinimumSize(QSize(100, 0));

    gridLayout3->addWidget(cmbDLFeatureType, 2, 4, 1, 1);

    textLabel2_5 = new QLabel(tab3);
    textLabel2_5->setObjectName(QString::fromUtf8("textLabel2_5"));

    gridLayout3->addWidget(textLabel2_5, 1, 3, 1, 1);

    textLabel1_3 = new QLabel(tab3);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout3->addWidget(textLabel1_3, 2, 3, 1, 1);

    leDLBasename = new QLineEdit(tab3);
    leDLBasename->setObjectName(QString::fromUtf8("leDLBasename"));

    gridLayout3->addWidget(leDLBasename, 4, 1, 1, 3);

    textLabel1_2 = new QLabel(tab3);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout3->addWidget(textLabel1_2, 4, 0, 1, 1);

    textLabel2 = new QLabel(tab3);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout3->addWidget(textLabel2, 3, 0, 1, 1);

    leDLOutput = new QLineEdit(tab3);
    leDLOutput->setObjectName(QString::fromUtf8("leDLOutput"));

    gridLayout3->addWidget(leDLOutput, 3, 1, 1, 3);

    spacerItem1 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout3->addItem(spacerItem1, 1, 2, 1, 1);

    spacerItem2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout3->addItem(spacerItem2, 2, 2, 1, 1);

    textLabel1 = new QLabel(tab3);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout3->addWidget(textLabel1, 1, 0, 1, 1);

    cmbDLDevice = new QComboBox(tab3);
    cmbDLDevice->setObjectName(QString::fromUtf8("cmbDLDevice"));
    cmbDLDevice->setMinimumSize(QSize(120, 0));

    gridLayout3->addWidget(cmbDLDevice, 1, 1, 1, 1);

    pbDLEditDevices = new QPushButton(tab3);
    pbDLEditDevices->setObjectName(QString::fromUtf8("pbDLEditDevices"));

    gridLayout3->addWidget(pbDLEditDevices, 2, 1, 1, 1);

    pbnDLOutput = new QPushButton(tab3);
    pbnDLOutput->setObjectName(QString::fromUtf8("pbnDLOutput"));

    gridLayout3->addWidget(pbnDLOutput, 3, 4, 1, 1);

    tabWidget->addTab(tab3, QString());
    tab4 = new QWidget();
    tab4->setObjectName(QString::fromUtf8("tab4"));
    gridLayout4 = new QGridLayout(tab4);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem3, 1, 2, 1, 1);

    textEdit_4 = new QTextEdit(tab4);
    textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
    textEdit_4->setReadOnly(true);

    gridLayout4->addWidget(textEdit_4, 0, 0, 1, 5);

    cmbULPort = new QComboBox(tab4);
    cmbULPort->setObjectName(QString::fromUtf8("cmbULPort"));
    cmbULPort->setMinimumSize(QSize(100, 0));

    gridLayout4->addWidget(cmbULPort, 2, 1, 1, 1);

    textLabel3 = new QLabel(tab4);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout4->addWidget(textLabel3, 2, 0, 1, 1);

    cmbULDevice = new QComboBox(tab4);
    cmbULDevice->setObjectName(QString::fromUtf8("cmbULDevice"));
    cmbULDevice->setMinimumSize(QSize(120, 0));

    gridLayout4->addWidget(cmbULDevice, 1, 4, 1, 1);

    cmbULLayer = new QComboBox(tab4);
    cmbULLayer->setObjectName(QString::fromUtf8("cmbULLayer"));
    cmbULLayer->setMinimumSize(QSize(90, 0));

    gridLayout4->addWidget(cmbULLayer, 1, 1, 1, 1);

    pbULEditDevices = new QPushButton(tab4);
    pbULEditDevices->setObjectName(QString::fromUtf8("pbULEditDevices"));

    gridLayout4->addWidget(pbULEditDevices, 2, 4, 1, 1);

    textLabel2_4 = new QLabel(tab4);
    textLabel2_4->setObjectName(QString::fromUtf8("textLabel2_4"));

    gridLayout4->addWidget(textLabel2_4, 1, 3, 1, 1);

    textLabel2_2 = new QLabel(tab4);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout4->addWidget(textLabel2_2, 1, 0, 1, 1);

    tabWidget->addTab(tab4, QString());

    gridLayout->addWidget(tabWidget, 0, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsGPSPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 3);


    retranslateUi(QgsGPSPluginGuiBase);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsGPSPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGPSPluginGuiBase)
    {
    QgsGPSPluginGuiBase->setWindowTitle(QApplication::translate("QgsGPSPluginGuiBase", "GPS Tools", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    textEdit->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:12pt;\"><span style=\" font-size:10pt;\">GPX is the </span><a href=\"http://www.topografix.com/gpx.asp\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">GPS eXchange file format</span></a><span style=\" font-size:10pt;\">, which is used to store information about waypoints, routes, and tracks.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">Select a GPX file and then select the feature types that you want to load.</p></body></html>", 0, QApplication::UnicodeUTF8));
    lblGPXFile->setText(QApplication::translate("QgsGPSPluginGuiBase", "File:", 0, QApplication::UnicodeUTF8));
    pbnGPXSelectFile->setText(QApplication::translate("QgsGPSPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    lblGPXFeatureTypes->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature types:", 0, QApplication::UnicodeUTF8));
    cbGPXWaypoints->setText(QApplication::translate("QgsGPSPluginGuiBase", "Waypoints", 0, QApplication::UnicodeUTF8));
    cbGPXRoutes->setText(QApplication::translate("QgsGPSPluginGuiBase", "Routes", 0, QApplication::UnicodeUTF8));
    cbGPXTracks->setText(QApplication::translate("QgsGPSPluginGuiBase", "Tracks", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsGPSPluginGuiBase", "Load GPX file", 0, QApplication::UnicodeUTF8));
    textEdit_2->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:12pt;\"><span style=\" font-size:10pt;\">QGIS can only load GPX files by itself, but many other formats can be converted to GPX using GPSBabel (</span><a href=\"http://gpsbabel.sf.net\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">http://gpsbabel.sf.net</span></a><span style=\" font-size:10pt;\">). This requires that you have GPSBabel installed where QGIS can find it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">Select a GPS file format and the file th"
        "at you want to import, the feature type that you want to use, a GPX filename that you want to save the converted file as, and a name for the new layer. All file formats can not store waypoints, routes, and tracks, so some feature types may be disabled for some file formats.</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("QgsGPSPluginGuiBase", "Layer name:", 0, QApplication::UnicodeUTF8));
    pbnIMPOutput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    pbnIMPInput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel3_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPX output file:", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature type:", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsGPSPluginGuiBase", "File to import:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsGPSPluginGuiBase", "Import other file", 0, QApplication::UnicodeUTF8));
    textEdit_3->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:12pt;\"><span style=\" font-size:10pt;\">This tool will help you download data from a GPS device. Choose your GPS device, the port it is connected to, the feature type you want to download, a name for your new layer, and the GPX file where you want to store the data. If your device isn't listed, or if you want to change some settings, you can also edit the devices.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">This tool uses the program GPSBabel (<a href=\"http://gpsbabel.sf.net\"><s"
        "pan style=\" text-decoration: underline; color:#0000ff;\">http://gpsbabel.sf.net</span></a>) to transfer the data. If you don't have GPSBabel installed where QGIS can find it, this tool will not work.</p></body></html>", 0, QApplication::UnicodeUTF8));
    cmbDLFeatureType->clear();
    cmbDLFeatureType->insertItems(0, QStringList()
     << QApplication::translate("QgsGPSPluginGuiBase", "Waypoints", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGPSPluginGuiBase", "Routes", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGPSPluginGuiBase", "Tracks", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_5->setText(QApplication::translate("QgsGPSPluginGuiBase", "Port:", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature type:", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Layer name:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Output file:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPS device:", 0, QApplication::UnicodeUTF8));
    pbDLEditDevices->setText(QApplication::translate("QgsGPSPluginGuiBase", "Edit devices", 0, QApplication::UnicodeUTF8));
    pbnDLOutput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsGPSPluginGuiBase", "Download from GPS", 0, QApplication::UnicodeUTF8));
    textEdit_4->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:12pt;\"><span style=\" font-size:10pt;\">This tool will help you upload data from a GPX layer to a GPS device. Choose the layer you want to upload, the device you want to upload it to, and the port your device is connected to. If your device isn't listed, or if you want to change some settings, you can also edit the devices.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">This tool uses the program GPSBabel (<a href=\"http://gpsbabel.sf.net\"><span style=\" text-decoration: underline; "
        "color:#0000ff;\">http://gpsbabel.sf.net</span></a>) to transfer the data. If you don't have GPSBabel installed where QGIS can find it, this tool will not work.</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Port:", 0, QApplication::UnicodeUTF8));
    pbULEditDevices->setText(QApplication::translate("QgsGPSPluginGuiBase", "Edit devices", 0, QApplication::UnicodeUTF8));
    textLabel2_4->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPS device:", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Data layer:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("QgsGPSPluginGuiBase", "Upload to GPS", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGPSPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGPSPluginGuiBase: public Ui_QgsGPSPluginGuiBase {};
} // namespace Ui

#endif // UI_QGSGPSPLUGINGUIBASE_H
