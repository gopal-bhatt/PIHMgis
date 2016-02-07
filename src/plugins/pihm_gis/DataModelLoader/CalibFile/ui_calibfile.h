/********************************************************************************
** Form generated from reading ui file 'calibfile.ui'
**
** Created: Wed Aug 19 22:32:48 2009
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CALIBFILE_H
#define UI_CALIBFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_CalibFile
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *soilKsatV;
    QLineEdit *macKsatV;
    QLineEdit *infD;
    QLineEdit *vAreaF;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditPorosity;
    QLineEdit *lineEditAlpha;
    QLineEdit *lineEditBeta;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *geolKsatH;
    QLineEdit *geolKsatV;
    QLineEdit *macKsatH;
    QLineEdit *macD;
    QLineEdit *hAreaf;
    QGroupBox *groupBox_4;
    QLabel *label_13;
    QLineEdit *RzD;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *VegFrac;
    QLineEdit *Albedo;
    QLineEdit *Rough;
    QLineEdit *Et0;
    QLineEdit *Et1;
    QLineEdit *Et2;
    QGroupBox *groupBox_5;
    QLineEdit *rivRough;
    QLineEdit *rivBedThickness;
    QLineEdit *rivKsatH;
    QLineEdit *rivKsatV;
    QLineEdit *rivDepth;
    QLineEdit *rivWidCoeff;
    QLabel *label_14;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_21;
    QGroupBox *groupBox_6;
    QLineEdit *Precep;
    QLineEdit *Temp;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *calibFile;
    QPushButton *pushButtonBrowse;
    QFrame *line;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonRun;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *CalibFile)
    {
    if (CalibFile->objectName().isEmpty())
        CalibFile->setObjectName(QString::fromUtf8("CalibFile"));
    CalibFile->resize(600, 480);
    groupBox = new QGroupBox(CalibFile);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 4, 561, 151));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 34, 61, 17));
    groupBox_2 = new QGroupBox(groupBox);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(10, 60, 201, 80));
    label_4 = new QLabel(groupBox_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(11, 30, 61, 17));
    label_5 = new QLabel(groupBox_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(11, 54, 61, 17));
    label_6 = new QLabel(groupBox_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(110, 30, 61, 17));
    label_7 = new QLabel(groupBox_2);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(110, 54, 61, 17));
    soilKsatV = new QLineEdit(groupBox_2);
    soilKsatV->setObjectName(QString::fromUtf8("soilKsatV"));
    soilKsatV->setGeometry(QRect(66, 27, 31, 22));
    macKsatV = new QLineEdit(groupBox_2);
    macKsatV->setObjectName(QString::fromUtf8("macKsatV"));
    macKsatV->setGeometry(QRect(66, 50, 31, 22));
    infD = new QLineEdit(groupBox_2);
    infD->setObjectName(QString::fromUtf8("infD"));
    infD->setGeometry(QRect(158, 27, 31, 22));
    vAreaF = new QLineEdit(groupBox_2);
    vAreaF->setObjectName(QString::fromUtf8("vAreaF"));
    vAreaF->setGeometry(QRect(158, 50, 31, 22));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(220, 34, 61, 17));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(418, 34, 61, 17));
    lineEditPorosity = new QLineEdit(groupBox);
    lineEditPorosity->setObjectName(QString::fromUtf8("lineEditPorosity"));
    lineEditPorosity->setGeometry(QRect(80, 31, 80, 22));
    lineEditAlpha = new QLineEdit(groupBox);
    lineEditAlpha->setObjectName(QString::fromUtf8("lineEditAlpha"));
    lineEditAlpha->setGeometry(QRect(276, 31, 80, 22));
    lineEditBeta = new QLineEdit(groupBox);
    lineEditBeta->setObjectName(QString::fromUtf8("lineEditBeta"));
    lineEditBeta->setGeometry(QRect(469, 31, 80, 22));
    groupBox_3 = new QGroupBox(groupBox);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(217, 60, 331, 80));
    label_8 = new QLabel(groupBox_3);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(12, 30, 61, 17));
    label_9 = new QLabel(groupBox_3);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(12, 54, 61, 17));
    label_10 = new QLabel(groupBox_3);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(120, 30, 61, 17));
    label_11 = new QLabel(groupBox_3);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(120, 54, 61, 17));
    label_12 = new QLabel(groupBox_3);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(237, 30, 61, 17));
    geolKsatH = new QLineEdit(groupBox_3);
    geolKsatH->setObjectName(QString::fromUtf8("geolKsatH"));
    geolKsatH->setGeometry(QRect(58, 27, 31, 22));
    geolKsatV = new QLineEdit(groupBox_3);
    geolKsatV->setObjectName(QString::fromUtf8("geolKsatV"));
    geolKsatV->setGeometry(QRect(58, 50, 31, 22));
    macKsatH = new QLineEdit(groupBox_3);
    macKsatH->setObjectName(QString::fromUtf8("macKsatH"));
    macKsatH->setGeometry(QRect(178, 27, 31, 22));
    macD = new QLineEdit(groupBox_3);
    macD->setObjectName(QString::fromUtf8("macD"));
    macD->setGeometry(QRect(178, 50, 31, 22));
    hAreaf = new QLineEdit(groupBox_3);
    hAreaf->setObjectName(QString::fromUtf8("hAreaf"));
    hAreaf->setGeometry(QRect(288, 27, 31, 22));
    groupBox_4 = new QGroupBox(CalibFile);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    groupBox_4->setGeometry(QRect(20, 152, 561, 81));
    label_13 = new QLabel(groupBox_4);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(16, 30, 61, 17));
    RzD = new QLineEdit(groupBox_4);
    RzD->setObjectName(QString::fromUtf8("RzD"));
    RzD->setGeometry(QRect(83, 26, 31, 22));
    label_15 = new QLabel(groupBox_4);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(158, 30, 61, 17));
    label_16 = new QLabel(groupBox_4);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setGeometry(QRect(158, 55, 61, 17));
    label_17 = new QLabel(groupBox_4);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(310, 30, 61, 17));
    label_18 = new QLabel(groupBox_4);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setGeometry(QRect(310, 55, 61, 17));
    label_19 = new QLabel(groupBox_4);
    label_19->setObjectName(QString::fromUtf8("label_19"));
    label_19->setGeometry(QRect(453, 30, 61, 17));
    label_20 = new QLabel(groupBox_4);
    label_20->setObjectName(QString::fromUtf8("label_20"));
    label_20->setGeometry(QRect(453, 55, 61, 17));
    VegFrac = new QLineEdit(groupBox_4);
    VegFrac->setObjectName(QString::fromUtf8("VegFrac"));
    VegFrac->setGeometry(QRect(221, 26, 31, 22));
    Albedo = new QLineEdit(groupBox_4);
    Albedo->setObjectName(QString::fromUtf8("Albedo"));
    Albedo->setGeometry(QRect(221, 52, 31, 22));
    Rough = new QLineEdit(groupBox_4);
    Rough->setObjectName(QString::fromUtf8("Rough"));
    Rough->setGeometry(QRect(367, 26, 31, 22));
    Et0 = new QLineEdit(groupBox_4);
    Et0->setObjectName(QString::fromUtf8("Et0"));
    Et0->setGeometry(QRect(367, 52, 31, 22));
    Et1 = new QLineEdit(groupBox_4);
    Et1->setObjectName(QString::fromUtf8("Et1"));
    Et1->setGeometry(QRect(507, 26, 31, 22));
    Et2 = new QLineEdit(groupBox_4);
    Et2->setObjectName(QString::fromUtf8("Et2"));
    Et2->setGeometry(QRect(507, 52, 31, 22));
    groupBox_5 = new QGroupBox(CalibFile);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    groupBox_5->setGeometry(QRect(20, 232, 561, 81));
    rivRough = new QLineEdit(groupBox_5);
    rivRough->setObjectName(QString::fromUtf8("rivRough"));
    rivRough->setGeometry(QRect(95, 27, 31, 22));
    rivBedThickness = new QLineEdit(groupBox_5);
    rivBedThickness->setObjectName(QString::fromUtf8("rivBedThickness"));
    rivBedThickness->setGeometry(QRect(95, 52, 31, 22));
    rivKsatH = new QLineEdit(groupBox_5);
    rivKsatH->setObjectName(QString::fromUtf8("rivKsatH"));
    rivKsatH->setGeometry(QRect(289, 27, 31, 22));
    rivKsatV = new QLineEdit(groupBox_5);
    rivKsatV->setObjectName(QString::fromUtf8("rivKsatV"));
    rivKsatV->setGeometry(QRect(289, 52, 31, 22));
    rivDepth = new QLineEdit(groupBox_5);
    rivDepth->setObjectName(QString::fromUtf8("rivDepth"));
    rivDepth->setGeometry(QRect(507, 27, 31, 22));
    rivWidCoeff = new QLineEdit(groupBox_5);
    rivWidCoeff->setObjectName(QString::fromUtf8("rivWidCoeff"));
    rivWidCoeff->setGeometry(QRect(507, 52, 31, 22));
    label_14 = new QLabel(groupBox_5);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(10, 30, 61, 17));
    label_22 = new QLabel(groupBox_5);
    label_22->setObjectName(QString::fromUtf8("label_22"));
    label_22->setGeometry(QRect(10, 54, 71, 17));
    label_23 = new QLabel(groupBox_5);
    label_23->setObjectName(QString::fromUtf8("label_23"));
    label_23->setGeometry(QRect(220, 30, 61, 17));
    label_24 = new QLabel(groupBox_5);
    label_24->setObjectName(QString::fromUtf8("label_24"));
    label_24->setGeometry(QRect(220, 54, 61, 17));
    label_25 = new QLabel(groupBox_5);
    label_25->setObjectName(QString::fromUtf8("label_25"));
    label_25->setGeometry(QRect(427, 30, 61, 17));
    label_26 = new QLabel(groupBox_5);
    label_26->setObjectName(QString::fromUtf8("label_26"));
    label_26->setGeometry(QRect(427, 54, 61, 17));
    label_21 = new QLabel(CalibFile);
    label_21->setObjectName(QString::fromUtf8("label_21"));
    label_21->setGeometry(QRect(30, 390, 121, 17));
    groupBox_6 = new QGroupBox(CalibFile);
    groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
    groupBox_6->setGeometry(QRect(20, 310, 561, 61));
    Precep = new QLineEdit(groupBox_6);
    Precep->setObjectName(QString::fromUtf8("Precep"));
    Precep->setGeometry(QRect(170, 29, 60, 22));
    Temp = new QLineEdit(groupBox_6);
    Temp->setObjectName(QString::fromUtf8("Temp"));
    Temp->setGeometry(QRect(450, 29, 60, 22));
    label_27 = new QLabel(groupBox_6);
    label_27->setObjectName(QString::fromUtf8("label_27"));
    label_27->setGeometry(QRect(50, 31, 81, 17));
    label_28 = new QLabel(groupBox_6);
    label_28->setObjectName(QString::fromUtf8("label_28"));
    label_28->setGeometry(QRect(330, 31, 91, 17));
    calibFile = new QLineEdit(CalibFile);
    calibFile->setObjectName(QString::fromUtf8("calibFile"));
    calibFile->setGeometry(QRect(157, 386, 291, 22));
    calibFile->setCursorPosition(0);
    pushButtonBrowse = new QPushButton(CalibFile);
    pushButtonBrowse->setObjectName(QString::fromUtf8("pushButtonBrowse"));
    pushButtonBrowse->setGeometry(QRect(460, 382, 113, 32));
    line = new QFrame(CalibFile);
    line->setObjectName(QString::fromUtf8("line"));
    line->setGeometry(QRect(10, 414, 581, 20));
    line->setFrameShadow(QFrame::Sunken);
    line->setLineWidth(2);
    line->setFrameShape(QFrame::HLine);
    pushButtonHelp = new QPushButton(CalibFile);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(10, 438, 113, 32));
    pushButtonRun = new QPushButton(CalibFile);
    pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
    pushButtonRun->setGeometry(QRect(470, 438, 113, 32));
    pushButtonRun->setDefault(true);
    pushButtonClose = new QPushButton(CalibFile);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(350, 438, 113, 32));

    retranslateUi(CalibFile);

    QMetaObject::connectSlotsByName(CalibFile);
    } // setupUi

    void retranslateUi(QDialog *CalibFile)
    {
    CalibFile->setWindowTitle(QApplication::translate("CalibFile", "CalibFile", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("CalibFile", "Soil + Geology", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("CalibFile", "Porosity", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("CalibFile", "Soil", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("CalibFile", "KsatV", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("CalibFile", "mKsatV", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("CalibFile", "infD", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("CalibFile", "vAreaF", 0, QApplication::UnicodeUTF8));
    soilKsatV->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    macKsatV->setText(QApplication::translate("CalibFile", "2", 0, QApplication::UnicodeUTF8));
    infD->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    vAreaF->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("CalibFile", "Alpha", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("CalibFile", "Beta", 0, QApplication::UnicodeUTF8));
    lineEditPorosity->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    lineEditAlpha->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    lineEditBeta->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("CalibFile", "Geology", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("CalibFile", "KsatH", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("CalibFile", "KsatV", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("CalibFile", "mKsatH", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("CalibFile", "mDepth", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("CalibFile", "hAreaF", 0, QApplication::UnicodeUTF8));
    geolKsatH->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    geolKsatV->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    macKsatH->setText(QApplication::translate("CalibFile", "50", 0, QApplication::UnicodeUTF8));
    macD->setText(QApplication::translate("CalibFile", "2.0", 0, QApplication::UnicodeUTF8));
    hAreaf->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("CalibFile", "Land Cover", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("CalibFile", "RzDepth", 0, QApplication::UnicodeUTF8));
    RzD->setText(QApplication::translate("CalibFile", "0.3", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("CalibFile", "VegFrac", 0, QApplication::UnicodeUTF8));
    label_16->setText(QApplication::translate("CalibFile", "Albedo", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("CalibFile", "Rough", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("CalibFile", "ET 0", 0, QApplication::UnicodeUTF8));
    label_19->setText(QApplication::translate("CalibFile", "ET 1", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("CalibFile", "ET 2", 0, QApplication::UnicodeUTF8));
    VegFrac->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Albedo->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Rough->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Et0->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Et1->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Et2->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    groupBox_5->setTitle(QApplication::translate("CalibFile", "River", 0, QApplication::UnicodeUTF8));
    rivRough->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    rivBedThickness->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    rivKsatH->setText(QApplication::translate("CalibFile", "50", 0, QApplication::UnicodeUTF8));
    rivKsatV->setText(QApplication::translate("CalibFile", "50", 0, QApplication::UnicodeUTF8));
    rivDepth->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    rivWidCoeff->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("CalibFile", "Rough", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("CalibFile", "Thickness", 0, QApplication::UnicodeUTF8));
    label_23->setText(QApplication::translate("CalibFile", "KsatH", 0, QApplication::UnicodeUTF8));
    label_24->setText(QApplication::translate("CalibFile", "KsatV", 0, QApplication::UnicodeUTF8));
    label_25->setText(QApplication::translate("CalibFile", "Depth", 0, QApplication::UnicodeUTF8));
    label_26->setText(QApplication::translate("CalibFile", "Width", 0, QApplication::UnicodeUTF8));
    label_21->setText(QApplication::translate("CalibFile", "Output .CALIB File", 0, QApplication::UnicodeUTF8));
    groupBox_6->setTitle(QApplication::translate("CalibFile", "Forcing", 0, QApplication::UnicodeUTF8));
    Precep->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    Temp->setText(QApplication::translate("CalibFile", "1", 0, QApplication::UnicodeUTF8));
    label_27->setText(QApplication::translate("CalibFile", "Precipitation", 0, QApplication::UnicodeUTF8));
    label_28->setText(QApplication::translate("CalibFile", "Temperature", 0, QApplication::UnicodeUTF8));
    pushButtonBrowse->setText(QApplication::translate("CalibFile", "Browse...", 0, QApplication::UnicodeUTF8));
    pushButtonHelp->setText(QApplication::translate("CalibFile", "Help", 0, QApplication::UnicodeUTF8));
    pushButtonRun->setText(QApplication::translate("CalibFile", "Run", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("CalibFile", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CalibFile);
    } // retranslateUi

};

namespace Ui {
    class CalibFile: public Ui_CalibFile {};
} // namespace Ui

#endif // UI_CALIBFILE_H
