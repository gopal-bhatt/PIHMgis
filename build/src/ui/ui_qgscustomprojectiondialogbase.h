/********************************************************************************
** Form generated from reading ui file 'qgscustomprojectiondialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
#define UI_QGSCUSTOMPROJECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

class Ui_QgsCustomProjectionDialogBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget2;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QTextBrowser *textBrowser;
    QLabel *textLabel5;
    QLineEdit *leParameters;
    QLabel *textLabel3_2;
    QHBoxLayout *hboxLayout;
    QPushButton *pbnFirst;
    QPushButton *pbnPrevious;
    QLabel *lblRecordNo;
    QPushButton *pbnNext;
    QPushButton *pbnLast;
    QPushButton *pbnNew;
    QPushButton *pbnSave;
    QPushButton *pbnDelete;
    QPushButton *pbnClose;
    QLabel *textLabel1;
    QLineEdit *leName;
    QWidget *tab2;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_2;
    QTextBrowser *textBrowser_2;
    QLabel *textLabel3_2_2;
    QLineEdit *leTestParameters;
    QSpacerItem *spacerItem;
    QLabel *textLabel2_3;
    QLabel *textLabel1_3;
    QLabel *projectedY;
    QLineEdit *eastWGS84;
    QLabel *textLabel2_2_2;
    QLabel *textLabel2_2;
    QLineEdit *northWGS84;
    QLabel *projectedX;
    QPushButton *pbnCalculate;

    void setupUi(QDialog *QgsCustomProjectionDialogBase)
    {
    if (QgsCustomProjectionDialogBase->objectName().isEmpty())
        QgsCustomProjectionDialogBase->setObjectName(QString::fromUtf8("QgsCustomProjectionDialogBase"));
    QgsCustomProjectionDialogBase->resize(718, 323);
    QgsCustomProjectionDialogBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsCustomProjectionDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget2 = new QTabWidget(QgsCustomProjectionDialogBase);
    tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textBrowser = new QTextBrowser(tab1);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

    gridLayout1->addWidget(textBrowser, 1, 0, 1, 2);

    textLabel5 = new QLabel(tab1);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    QFont font;
    font.setFamily(QString::fromUtf8("Arial"));
    font.setPointSize(18);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    textLabel5->setFont(font);

    gridLayout1->addWidget(textLabel5, 0, 0, 1, 2);

    leParameters = new QLineEdit(tab1);
    leParameters->setObjectName(QString::fromUtf8("leParameters"));

    gridLayout1->addWidget(leParameters, 3, 1, 1, 1);

    textLabel3_2 = new QLabel(tab1);
    textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));

    gridLayout1->addWidget(textLabel3_2, 3, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbnFirst = new QPushButton(tab1);
    pbnFirst->setObjectName(QString::fromUtf8("pbnFirst"));

    hboxLayout->addWidget(pbnFirst);

    pbnPrevious = new QPushButton(tab1);
    pbnPrevious->setObjectName(QString::fromUtf8("pbnPrevious"));

    hboxLayout->addWidget(pbnPrevious);

    lblRecordNo = new QLabel(tab1);
    lblRecordNo->setObjectName(QString::fromUtf8("lblRecordNo"));
    lblRecordNo->setAlignment(Qt::AlignCenter);

    hboxLayout->addWidget(lblRecordNo);

    pbnNext = new QPushButton(tab1);
    pbnNext->setObjectName(QString::fromUtf8("pbnNext"));

    hboxLayout->addWidget(pbnNext);

    pbnLast = new QPushButton(tab1);
    pbnLast->setObjectName(QString::fromUtf8("pbnLast"));

    hboxLayout->addWidget(pbnLast);

    pbnNew = new QPushButton(tab1);
    pbnNew->setObjectName(QString::fromUtf8("pbnNew"));

    hboxLayout->addWidget(pbnNew);

    pbnSave = new QPushButton(tab1);
    pbnSave->setObjectName(QString::fromUtf8("pbnSave"));

    hboxLayout->addWidget(pbnSave);

    pbnDelete = new QPushButton(tab1);
    pbnDelete->setObjectName(QString::fromUtf8("pbnDelete"));

    hboxLayout->addWidget(pbnDelete);

    pbnClose = new QPushButton(tab1);
    pbnClose->setObjectName(QString::fromUtf8("pbnClose"));

    hboxLayout->addWidget(pbnClose);


    gridLayout1->addLayout(hboxLayout, 4, 0, 1, 2);

    textLabel1 = new QLabel(tab1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout1->addWidget(textLabel1, 2, 0, 1, 1);

    leName = new QLineEdit(tab1);
    leName->setObjectName(QString::fromUtf8("leName"));

    gridLayout1->addWidget(leName, 2, 1, 1, 1);

    tabWidget2->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    gridLayout2 = new QGridLayout(tab2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1_2 = new QLabel(tab2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout2->addWidget(textLabel1_2, 0, 0, 1, 3);

    textBrowser_2 = new QTextBrowser(tab2);
    textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

    gridLayout2->addWidget(textBrowser_2, 1, 0, 1, 3);

    textLabel3_2_2 = new QLabel(tab2);
    textLabel3_2_2->setObjectName(QString::fromUtf8("textLabel3_2_2"));

    gridLayout2->addWidget(textLabel3_2_2, 2, 0, 1, 1);

    leTestParameters = new QLineEdit(tab2);
    leTestParameters->setObjectName(QString::fromUtf8("leTestParameters"));

    gridLayout2->addWidget(leTestParameters, 2, 1, 1, 2);

    spacerItem = new QSpacerItem(41, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem, 3, 0, 1, 1);

    textLabel2_3 = new QLabel(tab2);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

    gridLayout2->addWidget(textLabel2_3, 3, 2, 1, 1);

    textLabel1_3 = new QLabel(tab2);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout2->addWidget(textLabel1_3, 3, 1, 1, 1);

    projectedY = new QLabel(tab2);
    projectedY->setObjectName(QString::fromUtf8("projectedY"));
    projectedY->setEnabled(true);
    projectedY->setFrameShape(QFrame::Box);
    projectedY->setMargin(1);

    gridLayout2->addWidget(projectedY, 5, 2, 1, 1);

    eastWGS84 = new QLineEdit(tab2);
    eastWGS84->setObjectName(QString::fromUtf8("eastWGS84"));

    gridLayout2->addWidget(eastWGS84, 5, 1, 1, 1);

    textLabel2_2_2 = new QLabel(tab2);
    textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));

    gridLayout2->addWidget(textLabel2_2_2, 5, 0, 1, 1);

    textLabel2_2 = new QLabel(tab2);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout2->addWidget(textLabel2_2, 4, 0, 1, 1);

    northWGS84 = new QLineEdit(tab2);
    northWGS84->setObjectName(QString::fromUtf8("northWGS84"));
    northWGS84->setEnabled(true);

    gridLayout2->addWidget(northWGS84, 4, 1, 1, 1);

    projectedX = new QLabel(tab2);
    projectedX->setObjectName(QString::fromUtf8("projectedX"));
    projectedX->setEnabled(true);
    projectedX->setFrameShape(QFrame::Box);

    gridLayout2->addWidget(projectedX, 4, 2, 1, 1);

    pbnCalculate = new QPushButton(tab2);
    pbnCalculate->setObjectName(QString::fromUtf8("pbnCalculate"));

    gridLayout2->addWidget(pbnCalculate, 6, 0, 1, 3);

    tabWidget2->addTab(tab2, QString());

    gridLayout->addWidget(tabWidget2, 0, 0, 1, 1);

    textLabel3_2_2->setBuddy(leTestParameters);
    textLabel2_2_2->setBuddy(eastWGS84);
    textLabel2_2->setBuddy(northWGS84);
    QWidget::setTabOrder(tabWidget2, textBrowser);
    QWidget::setTabOrder(textBrowser, leName);
    QWidget::setTabOrder(leName, leParameters);
    QWidget::setTabOrder(leParameters, pbnFirst);
    QWidget::setTabOrder(pbnFirst, pbnPrevious);
    QWidget::setTabOrder(pbnPrevious, pbnNext);
    QWidget::setTabOrder(pbnNext, pbnLast);
    QWidget::setTabOrder(pbnLast, pbnNew);
    QWidget::setTabOrder(pbnNew, pbnSave);
    QWidget::setTabOrder(pbnSave, pbnDelete);
    QWidget::setTabOrder(pbnDelete, pbnClose);
    QWidget::setTabOrder(pbnClose, textBrowser_2);
    QWidget::setTabOrder(textBrowser_2, leTestParameters);
    QWidget::setTabOrder(leTestParameters, northWGS84);
    QWidget::setTabOrder(northWGS84, eastWGS84);
    QWidget::setTabOrder(eastWGS84, pbnCalculate);

    retranslateUi(QgsCustomProjectionDialogBase);

    tabWidget2->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsCustomProjectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCustomProjectionDialogBase)
    {
    QgsCustomProjectionDialogBase->setWindowTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Projection Definition", 0, QApplication::UnicodeUTF8));
    textBrowser->setHtml(QApplication::translate("QgsCustomProjectionDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">You can define your own custom projection here. The definition must conform to the proj4 format for specifying a Spatial Reference System.</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Projection Definition", 0, QApplication::UnicodeUTF8));
    textLabel3_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters:", 0, QApplication::UnicodeUTF8));
    pbnFirst->setText(QApplication::translate("QgsCustomProjectionDialogBase", "|<", 0, QApplication::UnicodeUTF8));
    pbnPrevious->setText(QApplication::translate("QgsCustomProjectionDialogBase", "<", 0, QApplication::UnicodeUTF8));
    lblRecordNo->setText(QApplication::translate("QgsCustomProjectionDialogBase", "1 of 1", 0, QApplication::UnicodeUTF8));
    pbnNext->setText(QApplication::translate("QgsCustomProjectionDialogBase", ">", 0, QApplication::UnicodeUTF8));
    pbnLast->setText(QApplication::translate("QgsCustomProjectionDialogBase", ">|", 0, QApplication::UnicodeUTF8));
    pbnNew->setText(QApplication::translate("QgsCustomProjectionDialogBase", "New", 0, QApplication::UnicodeUTF8));
    pbnSave->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Save", 0, QApplication::UnicodeUTF8));
    pbnDelete->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Delete", 0, QApplication::UnicodeUTF8));
    pbnClose->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Close", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Name:", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab1), QApplication::translate("QgsCustomProjectionDialogBase", "Define", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Transform from WGS84 to the chosen projection", 0, QApplication::UnicodeUTF8));
    textBrowser_2->setHtml(QApplication::translate("QgsCustomProjectionDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial'; font-size:10pt;\">Use the text boxes below to test the projection definition you are creating. Enter a coordinate where both the lat/long and the projected result are known (for example by reading off a map). Then press the calculate button to see if the projection definition you are creating is accurate.</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel3_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters:", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Projected Corrdinate System", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Geographic / WGS84", 0, QApplication::UnicodeUTF8));
    projectedY->setText(QString());
    textLabel2_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "East:", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "North:", 0, QApplication::UnicodeUTF8));
    projectedX->setText(QString());
    pbnCalculate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Calculate", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab2), QApplication::translate("QgsCustomProjectionDialogBase", "Test", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsCustomProjectionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionDialogBase: public Ui_QgsCustomProjectionDialogBase {};
} // namespace Ui

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
