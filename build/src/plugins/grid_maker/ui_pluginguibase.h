/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Wed Jun 11 19:10:05 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PLUGINGUIBASE_H
#define UI_PLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

class Ui_QgsGridMakerPluginGuiBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *txtHeading;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QFrame *line1;
    QVBoxLayout *vboxLayout1;
    QTextEdit *textEdit;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radPoint;
    QRadioButton *radLine;
    QRadioButton *radPolygon;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QLineEdit *leOriginLatitude;
    QLabel *textLabel1_2;
    QLineEdit *leOriginLongitude;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1_3;
    QLineEdit *leEndPointLatitude;
    QLabel *textLabel1_2_2;
    QLineEdit *leEndPointLongitude;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout4;
    QLabel *lblMinTimeGap;
    QLineEdit *leLatitudeInterval;
    QLabel *lblMinDistanceGap;
    QLineEdit *leLongitudeInterval;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout5;
    QLineEdit *leOutputShapeFile;
    QPushButton *pbnSelectOutputFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGridMakerPluginGuiBase)
    {
    if (QgsGridMakerPluginGuiBase->objectName().isEmpty())
        QgsGridMakerPluginGuiBase->setObjectName(QString::fromUtf8("QgsGridMakerPluginGuiBase"));
    QgsGridMakerPluginGuiBase->resize(626, 602);
    QgsGridMakerPluginGuiBase->setWindowIcon(QIcon());
    vboxLayout = new QVBoxLayout(QgsGridMakerPluginGuiBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    txtHeading = new QLabel(QgsGridMakerPluginGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(24);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    txtHeading->setFont(font);
    txtHeading->setAlignment(Qt::AlignCenter);

    vboxLayout->addWidget(txtHeading);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    label = new QLabel(QgsGridMakerPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/grid_pic2.png")));
    label->setScaledContents(true);

    hboxLayout->addWidget(label);

    line1 = new QFrame(QgsGridMakerPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    hboxLayout->addWidget(line1);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    textEdit = new QTextEdit(QgsGridMakerPluginGuiBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(true);

    vboxLayout1->addWidget(textEdit);

    groupBox1 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    hboxLayout1 = new QHBoxLayout(groupBox1);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(9);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    radPoint = new QRadioButton(groupBox1);
    radPoint->setObjectName(QString::fromUtf8("radPoint"));
    radPoint->setChecked(true);

    hboxLayout1->addWidget(radPoint);

    radLine = new QRadioButton(groupBox1);
    radLine->setObjectName(QString::fromUtf8("radLine"));

    hboxLayout1->addWidget(radLine);

    radPolygon = new QRadioButton(groupBox1);
    radPolygon->setObjectName(QString::fromUtf8("radPolygon"));

    hboxLayout1->addWidget(radPolygon);


    vboxLayout1->addWidget(groupBox1);

    groupBox = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    hboxLayout2 = new QHBoxLayout(groupBox);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(9);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout2->addWidget(textLabel1);

    leOriginLatitude = new QLineEdit(groupBox);
    leOriginLatitude->setObjectName(QString::fromUtf8("leOriginLatitude"));

    hboxLayout2->addWidget(leOriginLatitude);

    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    hboxLayout2->addWidget(textLabel1_2);

    leOriginLongitude = new QLineEdit(groupBox);
    leOriginLongitude->setObjectName(QString::fromUtf8("leOriginLongitude"));

    hboxLayout2->addWidget(leOriginLongitude);


    vboxLayout1->addWidget(groupBox);

    groupBox_3 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    hboxLayout3 = new QHBoxLayout(groupBox_3);
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(9);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    textLabel1_3 = new QLabel(groupBox_3);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    hboxLayout3->addWidget(textLabel1_3);

    leEndPointLatitude = new QLineEdit(groupBox_3);
    leEndPointLatitude->setObjectName(QString::fromUtf8("leEndPointLatitude"));

    hboxLayout3->addWidget(leEndPointLatitude);

    textLabel1_2_2 = new QLabel(groupBox_3);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    hboxLayout3->addWidget(textLabel1_2_2);

    leEndPointLongitude = new QLineEdit(groupBox_3);
    leEndPointLongitude->setObjectName(QString::fromUtf8("leEndPointLongitude"));

    hboxLayout3->addWidget(leEndPointLongitude);


    vboxLayout1->addWidget(groupBox_3);

    groupBox_2 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    hboxLayout4 = new QHBoxLayout(groupBox_2);
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(9);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    lblMinTimeGap = new QLabel(groupBox_2);
    lblMinTimeGap->setObjectName(QString::fromUtf8("lblMinTimeGap"));

    hboxLayout4->addWidget(lblMinTimeGap);

    leLatitudeInterval = new QLineEdit(groupBox_2);
    leLatitudeInterval->setObjectName(QString::fromUtf8("leLatitudeInterval"));

    hboxLayout4->addWidget(leLatitudeInterval);

    lblMinDistanceGap = new QLabel(groupBox_2);
    lblMinDistanceGap->setObjectName(QString::fromUtf8("lblMinDistanceGap"));

    hboxLayout4->addWidget(lblMinDistanceGap);

    leLongitudeInterval = new QLineEdit(groupBox_2);
    leLongitudeInterval->setObjectName(QString::fromUtf8("leLongitudeInterval"));

    hboxLayout4->addWidget(leLongitudeInterval);


    vboxLayout1->addWidget(groupBox_2);

    groupBox_4 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    hboxLayout5 = new QHBoxLayout(groupBox_4);
    hboxLayout5->setSpacing(6);
    hboxLayout5->setMargin(9);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    leOutputShapeFile = new QLineEdit(groupBox_4);
    leOutputShapeFile->setObjectName(QString::fromUtf8("leOutputShapeFile"));

    hboxLayout5->addWidget(leOutputShapeFile);

    pbnSelectOutputFile = new QPushButton(groupBox_4);
    pbnSelectOutputFile->setObjectName(QString::fromUtf8("pbnSelectOutputFile"));

    hboxLayout5->addWidget(pbnSelectOutputFile);


    vboxLayout1->addWidget(groupBox_4);


    hboxLayout->addLayout(vboxLayout1);


    vboxLayout->addLayout(hboxLayout);

    buttonBox = new QDialogButtonBox(QgsGridMakerPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    vboxLayout->addWidget(buttonBox);


    retranslateUi(QgsGridMakerPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsGridMakerPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGridMakerPluginGuiBase)
    {
    QgsGridMakerPluginGuiBase->setWindowTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "QGIS Plugin Template", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Graticule Builder", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    textEdit->setHtml(QApplication::translate("QgsGridMakerPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:Arial; font-size:11pt;\"><span style=\" font-size:10pt;\">This plugin will help you to build a graticule shapefile that you can use as an overlay within your qgis map viewer.</span></p><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:Arial; font-size:10pt;\">Please enter all units in decimal degrees</p></body></html>", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Type", 0, QApplication::UnicodeUTF8));
    radPoint->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Point", 0, QApplication::UnicodeUTF8));
    radLine->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Line", 0, QApplication::UnicodeUTF8));
    radPolygon->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Polygon", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Origin (lower left)", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Latitude:", 0, QApplication::UnicodeUTF8));
    leOriginLatitude->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Longitude:", 0, QApplication::UnicodeUTF8));
    leOriginLongitude->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "End point (upper right)", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Latitude:", 0, QApplication::UnicodeUTF8));
    leEndPointLatitude->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Longitude:", 0, QApplication::UnicodeUTF8));
    leEndPointLongitude->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Graticle size (units in degrees)", 0, QApplication::UnicodeUTF8));
    lblMinTimeGap->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Latitude Interval:", 0, QApplication::UnicodeUTF8));
    leLatitudeInterval->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    lblMinDistanceGap->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Longitude Interval:", 0, QApplication::UnicodeUTF8));
    leLongitudeInterval->setInputMask(QApplication::translate("QgsGridMakerPluginGuiBase", "#000.00000; ", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Output (shape) file", 0, QApplication::UnicodeUTF8));
    pbnSelectOutputFile->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGridMakerPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGridMakerPluginGuiBase: public Ui_QgsGridMakerPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
