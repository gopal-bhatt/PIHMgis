/********************************************************************************
** Form generated from reading ui file 'qgsgpspluginguibase.ui'
**
** Created: Tue Jun 22 23:12:05 2010
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
    QTextEdit *teLoadDescription;
    QLabel *lblGPXFile;
    QPushButton *pbnGPXSelectFile;
    QgsFileDropEdit *leGPXFile;
    QLabel *lblGPXFeatureTypes;
    QCheckBox *cbGPXWaypoints;
    QCheckBox *cbGPXRoutes;
    QCheckBox *cbGPXTracks;
    QWidget *tab2;
    QGridLayout *gridLayout2;
    QTextEdit *teIMPDescription;
    QLineEdit *leIMPLayer;
    QLabel *textLabel1_6;
    QPushButton *pbnIMPOutput;
    QPushButton *pbnIMPInput;
    QLineEdit *leIMPOutput;
    QLabel *textLabel3_3;
    QSpacerItem *spacerItem;
    QComboBox *cmbIMPFeature;
    QLabel *textLabel2_3;
    QLabel *textLabel2_6;
    QLineEdit *leIMPInput;
    QLabel *textLabel1_5;
    QWidget *tab3;
    QGridLayout *gridLayout3;
    QTextEdit *teDLDescription;
    QLabel *textLabel1;
    QComboBox *cmbDLDevice;
    QPushButton *pbDLEditDevices;
    QSpacerItem *spacerItem1;
    QLabel *textLabel2_5;
    QComboBox *cmbDLPort;
    QPushButton *pbnRefresh;
    QSpacerItem *spacerItem2;
    QLabel *textLabel1_3;
    QComboBox *cmbDLFeatureType;
    QLabel *textLabel2;
    QLineEdit *leDLOutput;
    QPushButton *pbnDLOutput;
    QLabel *textLabel1_2;
    QLineEdit *leDLBasename;
    QWidget *tab4;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem3;
    QTextEdit *teULDescription;
    QComboBox *cmbULPort;
    QLabel *textLabel3;
    QComboBox *cmbULDevice;
    QComboBox *cmbULLayer;
    QPushButton *pbULEditDevices;
    QLabel *textLabel2_4;
    QLabel *textLabel2_2;
    QWidget *tab5;
    QGridLayout *gridLayout5;
    QTextEdit *teCONVDescription;
    QLineEdit *leCONVLayer;
    QLabel *textLabel5_1;
    QPushButton *pbnCONVOutput;
    QPushButton *pbnCONVInput;
    QLineEdit *leCONVOutput;
    QLabel *textLabel5_2;
    QSpacerItem *spacerItem4;
    QComboBox *cmbCONVType;
    QLabel *textLabel5_3;
    QLineEdit *leCONVInput;
    QLabel *textLabel5_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGPSPluginGuiBase)
    {
    if (QgsGPSPluginGuiBase->objectName().isEmpty())
        QgsGPSPluginGuiBase->setObjectName(QString::fromUtf8("QgsGPSPluginGuiBase"));
    QgsGPSPluginGuiBase->resize(987, 428);
    QgsGPSPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsGPSPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
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
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    teLoadDescription = new QTextEdit(tab1);
    teLoadDescription->setObjectName(QString::fromUtf8("teLoadDescription"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(teLoadDescription->sizePolicy().hasHeightForWidth());
    teLoadDescription->setSizePolicy(sizePolicy);
    teLoadDescription->setLineWidth(0);
    teLoadDescription->setReadOnly(true);

    gridLayout1->addWidget(teLoadDescription, 0, 0, 1, 2);

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
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(9, 9, 9, 9);
    teIMPDescription = new QTextEdit(tab2);
    teIMPDescription->setObjectName(QString::fromUtf8("teIMPDescription"));
    teIMPDescription->setReadOnly(true);

    gridLayout2->addWidget(teIMPDescription, 0, 0, 1, 4);

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
    cmbIMPFeature->setMinimumSize(QSize(130, 0));

    gridLayout2->addWidget(cmbIMPFeature, 2, 1, 1, 1);

    textLabel2_3 = new QLabel(tab2);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

    gridLayout2->addWidget(textLabel2_3, 2, 0, 1, 1);

    textLabel2_6 = new QLabel(tab2);
    textLabel2_6->setObjectName(QString::fromUtf8("textLabel2_6"));

    gridLayout2->addWidget(textLabel2_6, 2, 2, 1, 1);

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
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    teDLDescription = new QTextEdit(tab3);
    teDLDescription->setObjectName(QString::fromUtf8("teDLDescription"));
    teDLDescription->setReadOnly(true);

    gridLayout3->addWidget(teDLDescription, 0, 0, 1, 9);

    textLabel1 = new QLabel(tab3);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout3->addWidget(textLabel1, 1, 0, 1, 1);

    cmbDLDevice = new QComboBox(tab3);
    cmbDLDevice->setObjectName(QString::fromUtf8("cmbDLDevice"));
    cmbDLDevice->setMinimumSize(QSize(120, 0));

    gridLayout3->addWidget(cmbDLDevice, 1, 1, 1, 1);

    pbDLEditDevices = new QPushButton(tab3);
    pbDLEditDevices->setObjectName(QString::fromUtf8("pbDLEditDevices"));

    gridLayout3->addWidget(pbDLEditDevices, 1, 2, 1, 1);

    spacerItem1 = new QSpacerItem(121, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout3->addItem(spacerItem1, 1, 3, 1, 1);

    textLabel2_5 = new QLabel(tab3);
    textLabel2_5->setObjectName(QString::fromUtf8("textLabel2_5"));

    gridLayout3->addWidget(textLabel2_5, 1, 4, 1, 2);

    cmbDLPort = new QComboBox(tab3);
    cmbDLPort->setObjectName(QString::fromUtf8("cmbDLPort"));
    cmbDLPort->setMinimumSize(QSize(90, 0));

    gridLayout3->addWidget(cmbDLPort, 1, 6, 1, 2);

    pbnRefresh = new QPushButton(tab3);
    pbnRefresh->setObjectName(QString::fromUtf8("pbnRefresh"));

    gridLayout3->addWidget(pbnRefresh, 1, 8, 1, 1);

    spacerItem2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout3->addItem(spacerItem2, 2, 2, 1, 3);

    textLabel1_3 = new QLabel(tab3);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout3->addWidget(textLabel1_3, 2, 5, 1, 2);

    cmbDLFeatureType = new QComboBox(tab3);
    cmbDLFeatureType->setObjectName(QString::fromUtf8("cmbDLFeatureType"));
    cmbDLFeatureType->setMinimumSize(QSize(100, 0));

    gridLayout3->addWidget(cmbDLFeatureType, 2, 7, 1, 2);

    textLabel2 = new QLabel(tab3);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout3->addWidget(textLabel2, 3, 0, 1, 1);

    leDLOutput = new QLineEdit(tab3);
    leDLOutput->setObjectName(QString::fromUtf8("leDLOutput"));

    gridLayout3->addWidget(leDLOutput, 3, 1, 1, 6);

    pbnDLOutput = new QPushButton(tab3);
    pbnDLOutput->setObjectName(QString::fromUtf8("pbnDLOutput"));

    gridLayout3->addWidget(pbnDLOutput, 3, 7, 1, 2);

    textLabel1_2 = new QLabel(tab3);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout3->addWidget(textLabel1_2, 4, 0, 1, 1);

    leDLBasename = new QLineEdit(tab3);
    leDLBasename->setObjectName(QString::fromUtf8("leDLBasename"));

    gridLayout3->addWidget(leDLBasename, 4, 1, 1, 6);

    tabWidget->addTab(tab3, QString());
    tab4 = new QWidget();
    tab4->setObjectName(QString::fromUtf8("tab4"));
    gridLayout4 = new QGridLayout(tab4);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    gridLayout4->setHorizontalSpacing(6);
    gridLayout4->setVerticalSpacing(6);
    gridLayout4->setContentsMargins(9, 9, 9, 9);
    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem3, 1, 2, 1, 1);

    teULDescription = new QTextEdit(tab4);
    teULDescription->setObjectName(QString::fromUtf8("teULDescription"));
    teULDescription->setReadOnly(true);

    gridLayout4->addWidget(teULDescription, 0, 0, 1, 5);

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
    tab5 = new QWidget();
    tab5->setObjectName(QString::fromUtf8("tab5"));
    gridLayout5 = new QGridLayout(tab5);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    gridLayout5->setHorizontalSpacing(6);
    gridLayout5->setVerticalSpacing(6);
    gridLayout5->setContentsMargins(9, 9, 9, 9);
    teCONVDescription = new QTextEdit(tab5);
    teCONVDescription->setObjectName(QString::fromUtf8("teCONVDescription"));
    teCONVDescription->setReadOnly(true);

    gridLayout5->addWidget(teCONVDescription, 0, 0, 1, 4);

    leCONVLayer = new QLineEdit(tab5);
    leCONVLayer->setObjectName(QString::fromUtf8("leCONVLayer"));

    gridLayout5->addWidget(leCONVLayer, 4, 1, 1, 2);

    textLabel5_1 = new QLabel(tab5);
    textLabel5_1->setObjectName(QString::fromUtf8("textLabel5_1"));

    gridLayout5->addWidget(textLabel5_1, 4, 0, 1, 1);

    pbnCONVOutput = new QPushButton(tab5);
    pbnCONVOutput->setObjectName(QString::fromUtf8("pbnCONVOutput"));

    gridLayout5->addWidget(pbnCONVOutput, 3, 3, 1, 1);

    pbnCONVInput = new QPushButton(tab5);
    pbnCONVInput->setObjectName(QString::fromUtf8("pbnCONVInput"));

    gridLayout5->addWidget(pbnCONVInput, 1, 3, 1, 1);

    leCONVOutput = new QLineEdit(tab5);
    leCONVOutput->setObjectName(QString::fromUtf8("leCONVOutput"));

    gridLayout5->addWidget(leCONVOutput, 3, 1, 1, 2);

    textLabel5_2 = new QLabel(tab5);
    textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));

    gridLayout5->addWidget(textLabel5_2, 3, 0, 1, 1);

    spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout5->addItem(spacerItem4, 2, 2, 1, 1);

    cmbCONVType = new QComboBox(tab5);
    cmbCONVType->setObjectName(QString::fromUtf8("cmbCONVType"));
    cmbCONVType->setMinimumSize(QSize(10, 0));

    gridLayout5->addWidget(cmbCONVType, 2, 1, 1, 1);

    textLabel5_3 = new QLabel(tab5);
    textLabel5_3->setObjectName(QString::fromUtf8("textLabel5_3"));

    gridLayout5->addWidget(textLabel5_3, 2, 0, 1, 1);

    leCONVInput = new QLineEdit(tab5);
    leCONVInput->setObjectName(QString::fromUtf8("leCONVInput"));
    leCONVInput->setEnabled(false);

    gridLayout5->addWidget(leCONVInput, 1, 1, 1, 2);

    textLabel5_4 = new QLabel(tab5);
    textLabel5_4->setObjectName(QString::fromUtf8("textLabel5_4"));

    gridLayout5->addWidget(textLabel5_4, 1, 0, 1, 1);

    tabWidget->addTab(tab5, QString());

    gridLayout->addWidget(tabWidget, 0, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsGPSPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

    QWidget::setTabOrder(leGPXFile, pbnGPXSelectFile);
    QWidget::setTabOrder(pbnGPXSelectFile, cbGPXWaypoints);
    QWidget::setTabOrder(cbGPXWaypoints, cbGPXRoutes);
    QWidget::setTabOrder(cbGPXRoutes, cbGPXTracks);
    QWidget::setTabOrder(cbGPXTracks, buttonBox);
    QWidget::setTabOrder(buttonBox, leIMPInput);
    QWidget::setTabOrder(leIMPInput, pbnIMPInput);
    QWidget::setTabOrder(pbnIMPInput, cmbIMPFeature);
    QWidget::setTabOrder(cmbIMPFeature, leIMPOutput);
    QWidget::setTabOrder(leIMPOutput, pbnIMPOutput);
    QWidget::setTabOrder(pbnIMPOutput, leIMPLayer);
    QWidget::setTabOrder(leIMPLayer, cmbDLDevice);
    QWidget::setTabOrder(cmbDLDevice, cmbDLPort);
    QWidget::setTabOrder(cmbDLPort, pbDLEditDevices);
    QWidget::setTabOrder(pbDLEditDevices, cmbDLFeatureType);
    QWidget::setTabOrder(cmbDLFeatureType, leDLOutput);
    QWidget::setTabOrder(leDLOutput, pbnDLOutput);
    QWidget::setTabOrder(pbnDLOutput, leDLBasename);
    QWidget::setTabOrder(leDLBasename, cmbULLayer);
    QWidget::setTabOrder(cmbULLayer, cmbULDevice);
    QWidget::setTabOrder(cmbULDevice, cmbULPort);
    QWidget::setTabOrder(cmbULPort, pbULEditDevices);
    QWidget::setTabOrder(pbULEditDevices, leCONVInput);
    QWidget::setTabOrder(leCONVInput, pbnCONVInput);
    QWidget::setTabOrder(pbnCONVInput, cmbCONVType);
    QWidget::setTabOrder(cmbCONVType, leCONVOutput);
    QWidget::setTabOrder(leCONVOutput, pbnCONVOutput);
    QWidget::setTabOrder(pbnCONVOutput, leCONVLayer);
    QWidget::setTabOrder(leCONVLayer, teCONVDescription);
    QWidget::setTabOrder(teCONVDescription, teDLDescription);
    QWidget::setTabOrder(teDLDescription, teULDescription);
    QWidget::setTabOrder(teULDescription, teLoadDescription);
    QWidget::setTabOrder(teLoadDescription, tabWidget);
    QWidget::setTabOrder(tabWidget, teIMPDescription);

    retranslateUi(QgsGPSPluginGuiBase);

    tabWidget->setCurrentIndex(2);


    QMetaObject::connectSlotsByName(QgsGPSPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGPSPluginGuiBase)
    {
    QgsGPSPluginGuiBase->setWindowTitle(QApplication::translate("QgsGPSPluginGuiBase", "GPS Tools", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    teLoadDescription->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    lblGPXFile->setText(QApplication::translate("QgsGPSPluginGuiBase", "File:", 0, QApplication::UnicodeUTF8));
    pbnGPXSelectFile->setText(QApplication::translate("QgsGPSPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    lblGPXFeatureTypes->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature types:", 0, QApplication::UnicodeUTF8));
    cbGPXWaypoints->setText(QApplication::translate("QgsGPSPluginGuiBase", "Waypoints", 0, QApplication::UnicodeUTF8));
    cbGPXRoutes->setText(QApplication::translate("QgsGPSPluginGuiBase", "Routes", 0, QApplication::UnicodeUTF8));
    cbGPXTracks->setText(QApplication::translate("QgsGPSPluginGuiBase", "Tracks", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsGPSPluginGuiBase", "Load GPX file", 0, QApplication::UnicodeUTF8));
    teIMPDescription->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("QgsGPSPluginGuiBase", "Layer name:", 0, QApplication::UnicodeUTF8));
    pbnIMPOutput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    pbnIMPInput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel3_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPX output file:", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature type:", 0, QApplication::UnicodeUTF8));
    textLabel2_6->setText(QApplication::translate("QgsGPSPluginGuiBase", "(Note: Selecting correct file type in browser dialog important!)", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsGPSPluginGuiBase", "File to import:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsGPSPluginGuiBase", "Import other file", 0, QApplication::UnicodeUTF8));
    teDLDescription->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPS device:", 0, QApplication::UnicodeUTF8));
    pbDLEditDevices->setText(QApplication::translate("QgsGPSPluginGuiBase", "Edit devices...", 0, QApplication::UnicodeUTF8));
    textLabel2_5->setText(QApplication::translate("QgsGPSPluginGuiBase", "Port:", 0, QApplication::UnicodeUTF8));
    pbnRefresh->setText(QApplication::translate("QgsGPSPluginGuiBase", "Refresh", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Feature type:", 0, QApplication::UnicodeUTF8));
    cmbDLFeatureType->clear();
    cmbDLFeatureType->insertItems(0, QStringList()
     << QApplication::translate("QgsGPSPluginGuiBase", "Waypoints", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGPSPluginGuiBase", "Routes", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGPSPluginGuiBase", "Tracks", 0, QApplication::UnicodeUTF8)
    );
    textLabel2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Output file:", 0, QApplication::UnicodeUTF8));
    pbnDLOutput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Layer name:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsGPSPluginGuiBase", "Download from GPS", 0, QApplication::UnicodeUTF8));
    teULDescription->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Port:", 0, QApplication::UnicodeUTF8));
    pbULEditDevices->setText(QApplication::translate("QgsGPSPluginGuiBase", "Edit devices", 0, QApplication::UnicodeUTF8));
    textLabel2_4->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPS device:", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsGPSPluginGuiBase", "Data layer:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("QgsGPSPluginGuiBase", "Upload to GPS", 0, QApplication::UnicodeUTF8));
    teCONVDescription->setHtml(QApplication::translate("QgsGPSPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel5_1->setText(QApplication::translate("QgsGPSPluginGuiBase", "Layer name:", 0, QApplication::UnicodeUTF8));
    pbnCONVOutput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    pbnCONVInput->setText(QApplication::translate("QgsGPSPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel5_2->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPX output file:", 0, QApplication::UnicodeUTF8));
    textLabel5_3->setText(QApplication::translate("QgsGPSPluginGuiBase", "Conversion:", 0, QApplication::UnicodeUTF8));
    textLabel5_4->setText(QApplication::translate("QgsGPSPluginGuiBase", "GPX input file:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("QgsGPSPluginGuiBase", "GPX Conversions", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGPSPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGPSPluginGuiBase: public Ui_QgsGPSPluginGuiBase {};
} // namespace Ui

#endif // UI_QGSGPSPLUGINGUIBASE_H
