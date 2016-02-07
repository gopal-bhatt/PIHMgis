/********************************************************************************
** Form generated from reading ui file 'attfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ATTFILE_H
#define UI_ATTFILE_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_AttFileGeneration
{
public:
    Q3GroupBox *groupBox8;
    QLabel *textLabel4;
    QPushButton *TINPushButton;
    QLineEdit *TINLineEdit;
    Q3ButtonGroup *shapeFileNameGroup;
    QLabel *mshFileLabel;
    QLineEdit *attFileLineEdit;
    QPushButton *attFilePushButton;
    Q3TextBrowser *textBrowser11;
    Q3GroupBox *groupBox8_3;
    Q3ButtonGroup *buttonGroup2;
    QRadioButton *OrthoRadioButton;
    QRadioButton *EleRadioButton;
    QRadioButton *CentroidRadioButton;
    QTabWidget *tabWidget3;
    QWidget *tab1;
    Q3GroupBox *groupBox14;
    QLabel *textLabel4_2_5;
    QLabel *textLabel4_2_2_2;
    QLabel *textLabel4_2_3_2;
    QLabel *textLabel4_2_4_2;
    QLabel *textLabel4_2_2_2_2;
    QLabel *textLabel4_2_5_2;
    QLabel *textLabel4_2_3_2_2;
    QPushButton *PrecipPushButton;
    QPushButton *TempPushButton;
    QPushButton *HumidPushButton;
    QPushButton *WindPushButton;
    QPushButton *GPushButton;
    QPushButton *RnPushButton;
    QPushButton *PPushButton;
    QLineEdit *PrecipLineEdit;
    QLineEdit *TempLineEdit;
    QLineEdit *HumidLineEdit;
    QLineEdit *WindLineEdit;
    QLineEdit *GLineEdit;
    QLineEdit *RnLineEdit;
    QLineEdit *PLineEdit;
    QWidget *tab2;
    Q3GroupBox *groupBox14_2;
    QLabel *textLabel4_2_2_2_3;
    QLabel *textLabel4_2_5_3;
    QPushButton *SoilPushButton;
    QLineEdit *SoilLineEdit;
    QLineEdit *LCLineEdit;
    QPushButton *LCPushButton;
    QLabel *textLabel4_2_2_2_5;
    QLabel *textLabel4_2_2_2_4;
    QLabel *textLabel4_2_5_4;
    QLineEdit *GeolLineEdit;
    QPushButton *GeolPushButton;
    QPushButton *MFPushButton;
    QLineEdit *MFLineEdit;
    QPushButton *MPPushButton;
    QLineEdit *MPLineEdit;
    QWidget *TabPage;
    Q3GroupBox *groupBox14_2_2;
    QLabel *textLabel4_2_2_2_3_2;
    QLabel *textLabel4_2_5_3_2;
    QLabel *textLabel4_2_5_3_3;
    QLabel *textLabel4_2_5_3_4;
    QLabel *textLabel4_2_5_3_5;
    QLabel *textLabel4_2_5_3_6;
    QLabel *textLabel4_2_2_2_3_2_2;
    QPushButton *ISICPushButton;
    QPushButton *SnowICPushButton;
    QPushButton *UnSatICPushButton;
    QPushButton *SatICPushButton;
    QPushButton *BCPushButton;
    QPushButton *OverlandICPushButton;
    QLineEdit *OverlandICLineEdit;
    QLineEdit *UnSatICLineEdit;
    QLineEdit *SatICLineEdit;
    QLineEdit *BCLineEdit;
    QPushButton *SourcePushButton;
    QLineEdit *SourceLineEdit;
    QLineEdit *ISICLineEdit;
    QLineEdit *SnowICLineEdit;
    QPushButton *runButton;
    QPushButton *helpButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AttFileGeneration)
    {
    if (AttFileGeneration->objectName().isEmpty())
        AttFileGeneration->setObjectName(QString::fromUtf8("AttFileGeneration"));
    AttFileGeneration->resize(599, 693);
    groupBox8 = new Q3GroupBox(AttFileGeneration);
    groupBox8->setObjectName(QString::fromUtf8("groupBox8"));
    groupBox8->setGeometry(QRect(10, 6, 580, 51));
    textLabel4 = new QLabel(groupBox8);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    textLabel4->setGeometry(QRect(30, 7, 70, 41));
    TINPushButton = new QPushButton(groupBox8);
    TINPushButton->setObjectName(QString::fromUtf8("TINPushButton"));
    TINPushButton->setGeometry(QRect(470, 12, 98, 32));
    TINPushButton->setAutoDefault(false);
    TINLineEdit = new QLineEdit(groupBox8);
    TINLineEdit->setObjectName(QString::fromUtf8("TINLineEdit"));
    TINLineEdit->setGeometry(QRect(138, 16, 325, 22));
    shapeFileNameGroup = new Q3ButtonGroup(AttFileGeneration);
    shapeFileNameGroup->setObjectName(QString::fromUtf8("shapeFileNameGroup"));
    shapeFileNameGroup->setGeometry(QRect(10, 480, 580, 51));
    mshFileLabel = new QLabel(shapeFileNameGroup);
    mshFileLabel->setObjectName(QString::fromUtf8("mshFileLabel"));
    mshFileLabel->setGeometry(QRect(25, 7, 111, 38));
    attFileLineEdit = new QLineEdit(shapeFileNameGroup);
    attFileLineEdit->setObjectName(QString::fromUtf8("attFileLineEdit"));
    attFileLineEdit->setGeometry(QRect(162, 15, 294, 22));
    attFilePushButton = new QPushButton(shapeFileNameGroup);
    attFilePushButton->setObjectName(QString::fromUtf8("attFilePushButton"));
    attFilePushButton->setGeometry(QRect(472, 12, 98, 32));
    attFilePushButton->setAutoDefault(false);
    textBrowser11 = new Q3TextBrowser(AttFileGeneration);
    textBrowser11->setObjectName(QString::fromUtf8("textBrowser11"));
    textBrowser11->setGeometry(QRect(15, 572, 570, 111));
    groupBox8_3 = new Q3GroupBox(AttFileGeneration);
    groupBox8_3->setObjectName(QString::fromUtf8("groupBox8_3"));
    groupBox8_3->setGeometry(QRect(10, 399, 580, 70));
    buttonGroup2 = new Q3ButtonGroup(groupBox8_3);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(10, 27, 561, 36));
    OrthoRadioButton = new QRadioButton(buttonGroup2);
    OrthoRadioButton->setObjectName(QString::fromUtf8("OrthoRadioButton"));
    OrthoRadioButton->setEnabled(false);
    OrthoRadioButton->setGeometry(QRect(220, 2, 121, 31));
    EleRadioButton = new QRadioButton(buttonGroup2);
    EleRadioButton->setObjectName(QString::fromUtf8("EleRadioButton"));
    EleRadioButton->setEnabled(false);
    EleRadioButton->setGeometry(QRect(420, 2, 121, 31));
    CentroidRadioButton = new QRadioButton(buttonGroup2);
    CentroidRadioButton->setObjectName(QString::fromUtf8("CentroidRadioButton"));
    CentroidRadioButton->setGeometry(QRect(30, 2, 121, 31));
    CentroidRadioButton->setChecked(true);
    tabWidget3 = new QTabWidget(AttFileGeneration);
    tabWidget3->setObjectName(QString::fromUtf8("tabWidget3"));
    tabWidget3->setGeometry(QRect(10, 66, 581, 333));
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    groupBox14 = new Q3GroupBox(tab1);
    groupBox14->setObjectName(QString::fromUtf8("groupBox14"));
    groupBox14->setGeometry(QRect(8, 4, 561, 292));
    textLabel4_2_5 = new QLabel(groupBox14);
    textLabel4_2_5->setObjectName(QString::fromUtf8("textLabel4_2_5"));
    textLabel4_2_5->setGeometry(QRect(20, 17, 101, 41));
    textLabel4_2_2_2 = new QLabel(groupBox14);
    textLabel4_2_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2"));
    textLabel4_2_2_2->setGeometry(QRect(20, 54, 91, 41));
    textLabel4_2_3_2 = new QLabel(groupBox14);
    textLabel4_2_3_2->setObjectName(QString::fromUtf8("textLabel4_2_3_2"));
    textLabel4_2_3_2->setGeometry(QRect(20, 93, 70, 41));
    textLabel4_2_4_2 = new QLabel(groupBox14);
    textLabel4_2_4_2->setObjectName(QString::fromUtf8("textLabel4_2_4_2"));
    textLabel4_2_4_2->setGeometry(QRect(20, 133, 91, 41));
    textLabel4_2_2_2_2 = new QLabel(groupBox14);
    textLabel4_2_2_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2_2"));
    textLabel4_2_2_2_2->setGeometry(QRect(20, 169, 70, 41));
    textLabel4_2_5_2 = new QLabel(groupBox14);
    textLabel4_2_5_2->setObjectName(QString::fromUtf8("textLabel4_2_5_2"));
    textLabel4_2_5_2->setGeometry(QRect(20, 207, 101, 41));
    textLabel4_2_3_2_2 = new QLabel(groupBox14);
    textLabel4_2_3_2_2->setObjectName(QString::fromUtf8("textLabel4_2_3_2_2"));
    textLabel4_2_3_2_2->setGeometry(QRect(20, 245, 101, 41));
    PrecipPushButton = new QPushButton(groupBox14);
    PrecipPushButton->setObjectName(QString::fromUtf8("PrecipPushButton"));
    PrecipPushButton->setGeometry(QRect(460, 25, 98, 32));
    PrecipPushButton->setAutoDefault(false);
    TempPushButton = new QPushButton(groupBox14);
    TempPushButton->setObjectName(QString::fromUtf8("TempPushButton"));
    TempPushButton->setGeometry(QRect(460, 62, 98, 32));
    TempPushButton->setAutoDefault(false);
    HumidPushButton = new QPushButton(groupBox14);
    HumidPushButton->setObjectName(QString::fromUtf8("HumidPushButton"));
    HumidPushButton->setGeometry(QRect(460, 100, 98, 32));
    HumidPushButton->setAutoDefault(false);
    WindPushButton = new QPushButton(groupBox14);
    WindPushButton->setObjectName(QString::fromUtf8("WindPushButton"));
    WindPushButton->setGeometry(QRect(460, 138, 98, 32));
    WindPushButton->setAutoDefault(false);
    GPushButton = new QPushButton(groupBox14);
    GPushButton->setObjectName(QString::fromUtf8("GPushButton"));
    GPushButton->setEnabled(false);
    GPushButton->setGeometry(QRect(460, 176, 98, 32));
    GPushButton->setAutoDefault(false);
    RnPushButton = new QPushButton(groupBox14);
    RnPushButton->setObjectName(QString::fromUtf8("RnPushButton"));
    RnPushButton->setGeometry(QRect(460, 214, 98, 32));
    RnPushButton->setAutoDefault(false);
    PPushButton = new QPushButton(groupBox14);
    PPushButton->setObjectName(QString::fromUtf8("PPushButton"));
    PPushButton->setGeometry(QRect(460, 253, 98, 32));
    PPushButton->setAutoDefault(false);
    PrecipLineEdit = new QLineEdit(groupBox14);
    PrecipLineEdit->setObjectName(QString::fromUtf8("PrecipLineEdit"));
    PrecipLineEdit->setGeometry(QRect(124, 28, 325, 22));
    TempLineEdit = new QLineEdit(groupBox14);
    TempLineEdit->setObjectName(QString::fromUtf8("TempLineEdit"));
    TempLineEdit->setGeometry(QRect(124, 65, 325, 22));
    HumidLineEdit = new QLineEdit(groupBox14);
    HumidLineEdit->setObjectName(QString::fromUtf8("HumidLineEdit"));
    HumidLineEdit->setGeometry(QRect(124, 103, 325, 22));
    WindLineEdit = new QLineEdit(groupBox14);
    WindLineEdit->setObjectName(QString::fromUtf8("WindLineEdit"));
    WindLineEdit->setGeometry(QRect(124, 142, 325, 22));
    GLineEdit = new QLineEdit(groupBox14);
    GLineEdit->setObjectName(QString::fromUtf8("GLineEdit"));
    GLineEdit->setEnabled(false);
    GLineEdit->setGeometry(QRect(124, 180, 325, 22));
    RnLineEdit = new QLineEdit(groupBox14);
    RnLineEdit->setObjectName(QString::fromUtf8("RnLineEdit"));
    RnLineEdit->setGeometry(QRect(124, 218, 325, 22));
    PLineEdit = new QLineEdit(groupBox14);
    PLineEdit->setObjectName(QString::fromUtf8("PLineEdit"));
    PLineEdit->setGeometry(QRect(124, 256, 325, 22));
    tabWidget3->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    groupBox14_2 = new Q3GroupBox(tab2);
    groupBox14_2->setObjectName(QString::fromUtf8("groupBox14_2"));
    groupBox14_2->setGeometry(QRect(8, 2, 561, 293));
    textLabel4_2_2_2_3 = new QLabel(groupBox14_2);
    textLabel4_2_2_2_3->setObjectName(QString::fromUtf8("textLabel4_2_2_2_3"));
    textLabel4_2_2_2_3->setGeometry(QRect(20, 130, 81, 41));
    textLabel4_2_5_3 = new QLabel(groupBox14_2);
    textLabel4_2_5_3->setObjectName(QString::fromUtf8("textLabel4_2_5_3"));
    textLabel4_2_5_3->setGeometry(QRect(20, 34, 70, 41));
    SoilPushButton = new QPushButton(groupBox14_2);
    SoilPushButton->setObjectName(QString::fromUtf8("SoilPushButton"));
    SoilPushButton->setGeometry(QRect(460, 37, 98, 32));
    SoilPushButton->setAutoDefault(false);
    SoilLineEdit = new QLineEdit(groupBox14_2);
    SoilLineEdit->setObjectName(QString::fromUtf8("SoilLineEdit"));
    SoilLineEdit->setGeometry(QRect(122, 40, 325, 22));
    LCLineEdit = new QLineEdit(groupBox14_2);
    LCLineEdit->setObjectName(QString::fromUtf8("LCLineEdit"));
    LCLineEdit->setGeometry(QRect(122, 140, 325, 22));
    LCPushButton = new QPushButton(groupBox14_2);
    LCPushButton->setObjectName(QString::fromUtf8("LCPushButton"));
    LCPushButton->setGeometry(QRect(460, 135, 98, 32));
    LCPushButton->setAutoDefault(false);
    textLabel4_2_2_2_5 = new QLabel(groupBox14_2);
    textLabel4_2_2_2_5->setObjectName(QString::fromUtf8("textLabel4_2_2_2_5"));
    textLabel4_2_2_2_5->setGeometry(QRect(20, 180, 70, 41));
    textLabel4_2_2_2_4 = new QLabel(groupBox14_2);
    textLabel4_2_2_2_4->setObjectName(QString::fromUtf8("textLabel4_2_2_2_4"));
    textLabel4_2_2_2_4->setGeometry(QRect(20, 79, 70, 41));
    textLabel4_2_5_4 = new QLabel(groupBox14_2);
    textLabel4_2_5_4->setObjectName(QString::fromUtf8("textLabel4_2_5_4"));
    textLabel4_2_5_4->setGeometry(QRect(20, 230, 70, 41));
    GeolLineEdit = new QLineEdit(tab2);
    GeolLineEdit->setObjectName(QString::fromUtf8("GeolLineEdit"));
    GeolLineEdit->setGeometry(QRect(130, 90, 325, 22));
    GeolPushButton = new QPushButton(tab2);
    GeolPushButton->setObjectName(QString::fromUtf8("GeolPushButton"));
    GeolPushButton->setGeometry(QRect(468, 87, 98, 32));
    GeolPushButton->setAutoDefault(false);
    MFPushButton = new QPushButton(tab2);
    MFPushButton->setObjectName(QString::fromUtf8("MFPushButton"));
    MFPushButton->setGeometry(QRect(468, 185, 98, 32));
    MFPushButton->setAutoDefault(false);
    MFLineEdit = new QLineEdit(tab2);
    MFLineEdit->setObjectName(QString::fromUtf8("MFLineEdit"));
    MFLineEdit->setGeometry(QRect(130, 190, 325, 22));
    MPPushButton = new QPushButton(tab2);
    MPPushButton->setObjectName(QString::fromUtf8("MPPushButton"));
    MPPushButton->setGeometry(QRect(468, 234, 98, 32));
    MPPushButton->setAutoDefault(false);
    MPLineEdit = new QLineEdit(tab2);
    MPLineEdit->setObjectName(QString::fromUtf8("MPLineEdit"));
    MPLineEdit->setGeometry(QRect(130, 240, 325, 22));
    tabWidget3->addTab(tab2, QString());
    TabPage = new QWidget();
    TabPage->setObjectName(QString::fromUtf8("TabPage"));
    groupBox14_2_2 = new Q3GroupBox(TabPage);
    groupBox14_2_2->setObjectName(QString::fromUtf8("groupBox14_2_2"));
    groupBox14_2_2->setGeometry(QRect(8, 4, 561, 296));
    textLabel4_2_2_2_3_2 = new QLabel(groupBox14_2_2);
    textLabel4_2_2_2_3_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2_3_2"));
    textLabel4_2_2_2_3_2->setGeometry(QRect(18, 213, 101, 41));
    textLabel4_2_5_3_2 = new QLabel(groupBox14_2_2);
    textLabel4_2_5_3_2->setObjectName(QString::fromUtf8("textLabel4_2_5_3_2"));
    textLabel4_2_5_3_2->setGeometry(QRect(18, 21, 91, 41));
    textLabel4_2_5_3_3 = new QLabel(groupBox14_2_2);
    textLabel4_2_5_3_3->setObjectName(QString::fromUtf8("textLabel4_2_5_3_3"));
    textLabel4_2_5_3_3->setGeometry(QRect(18, 56, 70, 41));
    textLabel4_2_5_3_4 = new QLabel(groupBox14_2_2);
    textLabel4_2_5_3_4->setObjectName(QString::fromUtf8("textLabel4_2_5_3_4"));
    textLabel4_2_5_3_4->setGeometry(QRect(18, 95, 70, 41));
    textLabel4_2_5_3_5 = new QLabel(groupBox14_2_2);
    textLabel4_2_5_3_5->setObjectName(QString::fromUtf8("textLabel4_2_5_3_5"));
    textLabel4_2_5_3_5->setGeometry(QRect(18, 134, 91, 41));
    textLabel4_2_5_3_6 = new QLabel(groupBox14_2_2);
    textLabel4_2_5_3_6->setObjectName(QString::fromUtf8("textLabel4_2_5_3_6"));
    textLabel4_2_5_3_6->setGeometry(QRect(18, 173, 91, 41));
    textLabel4_2_2_2_3_2_2 = new QLabel(groupBox14_2_2);
    textLabel4_2_2_2_3_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2_3_2_2"));
    textLabel4_2_2_2_3_2_2->setGeometry(QRect(18, 253, 91, 41));
    ISICPushButton = new QPushButton(groupBox14_2_2);
    ISICPushButton->setObjectName(QString::fromUtf8("ISICPushButton"));
    ISICPushButton->setGeometry(QRect(461, 27, 98, 32));
    ISICPushButton->setAutoDefault(false);
    SnowICPushButton = new QPushButton(groupBox14_2_2);
    SnowICPushButton->setObjectName(QString::fromUtf8("SnowICPushButton"));
    SnowICPushButton->setGeometry(QRect(461, 63, 98, 32));
    SnowICPushButton->setAutoDefault(false);
    UnSatICPushButton = new QPushButton(groupBox14_2_2);
    UnSatICPushButton->setObjectName(QString::fromUtf8("UnSatICPushButton"));
    UnSatICPushButton->setGeometry(QRect(461, 140, 98, 32));
    UnSatICPushButton->setAutoDefault(false);
    SatICPushButton = new QPushButton(groupBox14_2_2);
    SatICPushButton->setObjectName(QString::fromUtf8("SatICPushButton"));
    SatICPushButton->setGeometry(QRect(461, 178, 98, 32));
    SatICPushButton->setAutoDefault(false);
    BCPushButton = new QPushButton(groupBox14_2_2);
    BCPushButton->setObjectName(QString::fromUtf8("BCPushButton"));
    BCPushButton->setGeometry(QRect(461, 219, 98, 32));
    BCPushButton->setAutoDefault(false);
    OverlandICPushButton = new QPushButton(groupBox14_2_2);
    OverlandICPushButton->setObjectName(QString::fromUtf8("OverlandICPushButton"));
    OverlandICPushButton->setGeometry(QRect(461, 101, 98, 32));
    OverlandICPushButton->setAutoDefault(false);
    OverlandICLineEdit = new QLineEdit(groupBox14_2_2);
    OverlandICLineEdit->setObjectName(QString::fromUtf8("OverlandICLineEdit"));
    OverlandICLineEdit->setGeometry(QRect(126, 105, 325, 22));
    UnSatICLineEdit = new QLineEdit(groupBox14_2_2);
    UnSatICLineEdit->setObjectName(QString::fromUtf8("UnSatICLineEdit"));
    UnSatICLineEdit->setGeometry(QRect(126, 144, 325, 22));
    SatICLineEdit = new QLineEdit(groupBox14_2_2);
    SatICLineEdit->setObjectName(QString::fromUtf8("SatICLineEdit"));
    SatICLineEdit->setGeometry(QRect(126, 183, 325, 22));
    BCLineEdit = new QLineEdit(groupBox14_2_2);
    BCLineEdit->setObjectName(QString::fromUtf8("BCLineEdit"));
    BCLineEdit->setGeometry(QRect(126, 223, 325, 22));
    SourcePushButton = new QPushButton(groupBox14_2_2);
    SourcePushButton->setObjectName(QString::fromUtf8("SourcePushButton"));
    SourcePushButton->setGeometry(QRect(461, 257, 98, 32));
    SourcePushButton->setAutoDefault(false);
    SourceLineEdit = new QLineEdit(groupBox14_2_2);
    SourceLineEdit->setObjectName(QString::fromUtf8("SourceLineEdit"));
    SourceLineEdit->setGeometry(QRect(126, 262, 325, 22));
    ISICLineEdit = new QLineEdit(groupBox14_2_2);
    ISICLineEdit->setObjectName(QString::fromUtf8("ISICLineEdit"));
    ISICLineEdit->setGeometry(QRect(126, 31, 325, 22));
    SnowICLineEdit = new QLineEdit(groupBox14_2_2);
    SnowICLineEdit->setObjectName(QString::fromUtf8("SnowICLineEdit"));
    SnowICLineEdit->setGeometry(QRect(126, 68, 325, 22));
    tabWidget3->addTab(TabPage, QString());
    runButton = new QPushButton(AttFileGeneration);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(490, 535, 98, 34));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(AttFileGeneration);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(11, 535, 98, 34));
    helpButton->setAutoDefault(false);
    cancelButton = new QPushButton(AttFileGeneration);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(390, 535, 98, 34));
    cancelButton->setAutoDefault(false);

    retranslateUi(AttFileGeneration);

    tabWidget3->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(AttFileGeneration);
    } // setupUi

    void retranslateUi(QDialog *AttFileGeneration)
    {
    AttFileGeneration->setWindowTitle(QApplication::translate("AttFileGeneration", "Att File Generation", 0, QApplication::UnicodeUTF8));
    groupBox8->setTitle(QString());
    textLabel4->setText(QApplication::translate("AttFileGeneration", "TIN File", 0, QApplication::UnicodeUTF8));
    TINPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    shapeFileNameGroup->setTitle(QString());
    mshFileLabel->setText(QApplication::translate("AttFileGeneration", "Output ATT File", 0, QApplication::UnicodeUTF8));
    attFilePushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox8_3->setTitle(QApplication::translate("AttFileGeneration", "Extract Using", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QString());
    OrthoRadioButton->setText(QApplication::translate("AttFileGeneration", "Ortho-center", 0, QApplication::UnicodeUTF8));
    EleRadioButton->setText(QApplication::translate("AttFileGeneration", "TIN Element", 0, QApplication::UnicodeUTF8));
    CentroidRadioButton->setText(QApplication::translate("AttFileGeneration", "Centroid", 0, QApplication::UnicodeUTF8));
    groupBox14->setTitle(QApplication::translate("AttFileGeneration", "Index / Classification Grid Map", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5->setText(QApplication::translate("AttFileGeneration", "Precipitation", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2->setText(QApplication::translate("AttFileGeneration", "Temperature", 0, QApplication::UnicodeUTF8));
    textLabel4_2_3_2->setText(QApplication::translate("AttFileGeneration", "Humidity", 0, QApplication::UnicodeUTF8));
    textLabel4_2_4_2->setText(QApplication::translate("AttFileGeneration", "Wind Velocity", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_2->setText(QApplication::translate("AttFileGeneration", "G", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_2->setText(QApplication::translate("AttFileGeneration", "Solar Radiation", 0, QApplication::UnicodeUTF8));
    textLabel4_2_3_2_2->setText(QApplication::translate("AttFileGeneration", "Vapor Pressure", 0, QApplication::UnicodeUTF8));
    PrecipPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    TempPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    HumidPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    WindPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    GPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    RnPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    PPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    tabWidget3->setTabText(tabWidget3->indexOf(tab1), QApplication::translate("AttFileGeneration", "     Climate     ", 0, QApplication::UnicodeUTF8));
    groupBox14_2->setTitle(QApplication::translate("AttFileGeneration", "Index / Classification Grid Map", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_3->setText(QApplication::translate("AttFileGeneration", "Land Cover", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3->setText(QApplication::translate("AttFileGeneration", "Soil", 0, QApplication::UnicodeUTF8));
    SoilPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    LCPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_5->setText(QApplication::translate("AttFileGeneration", "Melt Factor", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_4->setText(QApplication::translate("AttFileGeneration", "Geology", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_4->setText(QApplication::translate("AttFileGeneration", "Macropore", 0, QApplication::UnicodeUTF8));
    GeolPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    MFPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    MPPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    tabWidget3->setTabText(tabWidget3->indexOf(tab2), QApplication::translate("AttFileGeneration", "Landuse/Landcover", 0, QApplication::UnicodeUTF8));
    groupBox14_2_2->setTitle(QApplication::translate("AttFileGeneration", "Initial Conditions | Boundary Conditions | Sources/Sinks", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_3_2->setText(QApplication::translate("AttFileGeneration", "Boundary Cond.", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3_2->setText(QApplication::translate("AttFileGeneration", "Interception", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3_3->setText(QApplication::translate("AttFileGeneration", "Snow", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3_4->setText(QApplication::translate("AttFileGeneration", "Overland", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3_5->setText(QApplication::translate("AttFileGeneration", "Soil Moisture", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_3_6->setText(QApplication::translate("AttFileGeneration", "Groundwater", 0, QApplication::UnicodeUTF8));
    textLabel4_2_2_2_3_2_2->setText(QApplication::translate("AttFileGeneration", "Source/Well", 0, QApplication::UnicodeUTF8));
    ISICPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    SnowICPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    UnSatICPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    SatICPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    BCPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    OverlandICPushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    SourcePushButton->setText(QApplication::translate("AttFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    tabWidget3->setTabText(tabWidget3->indexOf(TabPage), QApplication::translate("AttFileGeneration", "Miscellaneous", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("AttFileGeneration", "Run!", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("AttFileGeneration", "Help", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("AttFileGeneration", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AttFileGeneration);
    } // retranslateUi

};

namespace Ui {
    class AttFileGeneration: public Ui_AttFileGeneration {};
} // namespace Ui

#endif // UI_ATTFILE_H
