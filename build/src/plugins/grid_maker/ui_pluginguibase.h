/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Tue Jun 22 23:11:16 2010
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
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

class Ui_QgsGridMakerPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLineEdit *leYInterval;
    QLineEdit *leXInterval;
    QLabel *lblMinDistanceGap;
    QLabel *lblMinTimeGap;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QLineEdit *leYUpperRight;
    QLineEdit *leXUpperRight;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLineEdit *leYLowerLeft;
    QLineEdit *leXLowerLeft;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout;
    QLineEdit *leOutputShapeFile;
    QPushButton *pbnSelectOutputFile;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radPoint;
    QRadioButton *radPolygon;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *txtHeading;

    void setupUi(QDialog *QgsGridMakerPluginGuiBase)
    {
    if (QgsGridMakerPluginGuiBase->objectName().isEmpty())
        QgsGridMakerPluginGuiBase->setObjectName(QString::fromUtf8("QgsGridMakerPluginGuiBase"));
    QgsGridMakerPluginGuiBase->resize(626, 602);
    QgsGridMakerPluginGuiBase->setWindowIcon(QIcon(QString::fromUtf8(":/graticule.png")));
    gridLayout = new QGridLayout(QgsGridMakerPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    groupBox_2 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout1 = new QGridLayout(groupBox_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    leYInterval = new QLineEdit(groupBox_2);
    leYInterval->setObjectName(QString::fromUtf8("leYInterval"));

    gridLayout1->addWidget(leYInterval, 0, 3, 1, 1);

    leXInterval = new QLineEdit(groupBox_2);
    leXInterval->setObjectName(QString::fromUtf8("leXInterval"));

    gridLayout1->addWidget(leXInterval, 0, 1, 1, 1);

    lblMinDistanceGap = new QLabel(groupBox_2);
    lblMinDistanceGap->setObjectName(QString::fromUtf8("lblMinDistanceGap"));

    gridLayout1->addWidget(lblMinDistanceGap, 0, 2, 1, 1);

    lblMinTimeGap = new QLabel(groupBox_2);
    lblMinTimeGap->setObjectName(QString::fromUtf8("lblMinTimeGap"));

    gridLayout1->addWidget(lblMinTimeGap, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_2, 5, 1, 1, 1);

    groupBox_3 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    gridLayout2 = new QGridLayout(groupBox_3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(9, 9, 9, 9);
    leYUpperRight = new QLineEdit(groupBox_3);
    leYUpperRight->setObjectName(QString::fromUtf8("leYUpperRight"));

    gridLayout2->addWidget(leYUpperRight, 0, 3, 1, 1);

    leXUpperRight = new QLineEdit(groupBox_3);
    leXUpperRight->setObjectName(QString::fromUtf8("leXUpperRight"));

    gridLayout2->addWidget(leXUpperRight, 0, 1, 1, 1);

    textLabel1_2_2 = new QLabel(groupBox_3);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout2->addWidget(textLabel1_2_2, 0, 2, 1, 1);

    textLabel1_3 = new QLabel(groupBox_3);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout2->addWidget(textLabel1_3, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_3, 4, 1, 1, 1);

    groupBox = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout3 = new QGridLayout(groupBox);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    gridLayout3->setHorizontalSpacing(6);
    gridLayout3->setVerticalSpacing(6);
    gridLayout3->setContentsMargins(9, 9, 9, 9);
    leYLowerLeft = new QLineEdit(groupBox);
    leYLowerLeft->setObjectName(QString::fromUtf8("leYLowerLeft"));

    gridLayout3->addWidget(leYLowerLeft, 0, 3, 1, 1);

    leXLowerLeft = new QLineEdit(groupBox);
    leXLowerLeft->setObjectName(QString::fromUtf8("leXLowerLeft"));

    gridLayout3->addWidget(leXLowerLeft, 0, 1, 1, 1);

    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout3->addWidget(textLabel1_2, 0, 2, 1, 1);

    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout3->addWidget(textLabel1, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox, 3, 1, 1, 1);

    buttonBox = new QDialogButtonBox(QgsGridMakerPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 7, 0, 1, 2);

    groupBox_4 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    hboxLayout = new QHBoxLayout(groupBox_4);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(11, 11, 11, 11);
    leOutputShapeFile = new QLineEdit(groupBox_4);
    leOutputShapeFile->setObjectName(QString::fromUtf8("leOutputShapeFile"));

    hboxLayout->addWidget(leOutputShapeFile);

    pbnSelectOutputFile = new QPushButton(groupBox_4);
    pbnSelectOutputFile->setObjectName(QString::fromUtf8("pbnSelectOutputFile"));

    hboxLayout->addWidget(pbnSelectOutputFile);


    gridLayout->addWidget(groupBox_4, 6, 1, 1, 1);

    groupBox1 = new QGroupBox(QgsGridMakerPluginGuiBase);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    hboxLayout1 = new QHBoxLayout(groupBox1);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(11);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(11, 11, 11, 11);
    radPoint = new QRadioButton(groupBox1);
    radPoint->setObjectName(QString::fromUtf8("radPoint"));
    radPoint->setChecked(true);

    hboxLayout1->addWidget(radPoint);

    radPolygon = new QRadioButton(groupBox1);
    radPolygon->setObjectName(QString::fromUtf8("radPolygon"));

    hboxLayout1->addWidget(radPolygon);


    gridLayout->addWidget(groupBox1, 2, 1, 1, 1);

    textEdit = new QTextEdit(QgsGridMakerPluginGuiBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(true);

    gridLayout->addWidget(textEdit, 1, 1, 1, 1);

    label = new QLabel(QgsGridMakerPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/graticule.png")));
    label->setScaledContents(false);

    gridLayout->addWidget(label, 1, 0, 6, 1);

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

    gridLayout->addWidget(txtHeading, 0, 0, 1, 2);

    lblMinDistanceGap->setBuddy(leYInterval);
    lblMinTimeGap->setBuddy(leXInterval);
    textLabel1_2_2->setBuddy(leYUpperRight);
    textLabel1_3->setBuddy(leXUpperRight);
    textLabel1_2->setBuddy(leYLowerLeft);
    textLabel1->setBuddy(leXLowerLeft);
    QWidget::setTabOrder(radPoint, radPolygon);
    QWidget::setTabOrder(radPolygon, leXLowerLeft);
    QWidget::setTabOrder(leXLowerLeft, leYLowerLeft);
    QWidget::setTabOrder(leYLowerLeft, leXUpperRight);
    QWidget::setTabOrder(leXUpperRight, leYUpperRight);
    QWidget::setTabOrder(leYUpperRight, leXInterval);
    QWidget::setTabOrder(leXInterval, leYInterval);
    QWidget::setTabOrder(leYInterval, leOutputShapeFile);
    QWidget::setTabOrder(leOutputShapeFile, pbnSelectOutputFile);
    QWidget::setTabOrder(pbnSelectOutputFile, textEdit);
    QWidget::setTabOrder(textEdit, buttonBox);

    retranslateUi(QgsGridMakerPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsGridMakerPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGridMakerPluginGuiBase)
    {
    QgsGridMakerPluginGuiBase->setWindowTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "QGIS Graticule Creator", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Graticle size", 0, QApplication::UnicodeUTF8));
    lblMinDistanceGap->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Y Interval:", 0, QApplication::UnicodeUTF8));
    lblMinTimeGap->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "X Interval:", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "End point (upper right)", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Y", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "X", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Origin (lower left)", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Y", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "X", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Output (shape) file", 0, QApplication::UnicodeUTF8));
    pbnSelectOutputFile->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Save As...", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("QgsGridMakerPluginGuiBase", "Type", 0, QApplication::UnicodeUTF8));
    radPoint->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Point", 0, QApplication::UnicodeUTF8));
    radPolygon->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Polygon", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsGridMakerPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:11pt;\"><span style=\" font-size:10pt;\">This plugin will help you to build a graticule shapefile that you can use as an overlay within your qgis map viewer.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\">Please enter all units in decimal degrees</p></body></html>", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    txtHeading->setText(QApplication::translate("QgsGridMakerPluginGuiBase", "Graticule Builder", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGridMakerPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGridMakerPluginGuiBase: public Ui_QgsGridMakerPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
