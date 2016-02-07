/********************************************************************************
** Form generated from reading ui file 'qgscustomprojectiondialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>

class Ui_QgsCustomProjectionDialogBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLabel *textLabel1;
    QLineEdit *leName;
    QLabel *textLabel3_2;
    QLineEdit *leParameters;
    QHBoxLayout *hboxLayout;
    QToolButton *pbnFirst;
    QToolButton *pbnPrevious;
    QLabel *lblRecordNo;
    QToolButton *pbnNext;
    QToolButton *pbnLast;
    QToolButton *pbnNew;
    QToolButton *pbnSave;
    QToolButton *pbnDelete;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QLabel *textLabel3_2_2;
    QLineEdit *leTestParameters;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QLabel *textLabel2_2;
    QLineEdit *northWGS84;
    QLabel *projectedX;
    QLabel *textLabel2_2_2;
    QLineEdit *eastWGS84;
    QLabel *projectedY;
    QPushButton *pbnCalculate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsCustomProjectionDialogBase)
    {
    if (QgsCustomProjectionDialogBase->objectName().isEmpty())
        QgsCustomProjectionDialogBase->setObjectName(QString::fromUtf8("QgsCustomProjectionDialogBase"));
    QgsCustomProjectionDialogBase->resize(474, 548);
    QgsCustomProjectionDialogBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsCustomProjectionDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox = new QGroupBox(QgsCustomProjectionDialogBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setWordWrap(true);

    gridLayout1->addWidget(label, 0, 0, 1, 2);

    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

    leName = new QLineEdit(groupBox);
    leName->setObjectName(QString::fromUtf8("leName"));

    gridLayout1->addWidget(leName, 1, 1, 1, 1);

    textLabel3_2 = new QLabel(groupBox);
    textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));

    gridLayout1->addWidget(textLabel3_2, 2, 0, 1, 1);

    leParameters = new QLineEdit(groupBox);
    leParameters->setObjectName(QString::fromUtf8("leParameters"));

    gridLayout1->addWidget(leParameters, 2, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbnFirst = new QToolButton(groupBox);
    pbnFirst->setObjectName(QString::fromUtf8("pbnFirst"));
    pbnFirst->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconFirst.png")));

    hboxLayout->addWidget(pbnFirst);

    pbnPrevious = new QToolButton(groupBox);
    pbnPrevious->setObjectName(QString::fromUtf8("pbnPrevious"));
    pbnPrevious->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconPrevious.png")));

    hboxLayout->addWidget(pbnPrevious);

    lblRecordNo = new QLabel(groupBox);
    lblRecordNo->setObjectName(QString::fromUtf8("lblRecordNo"));
    lblRecordNo->setAlignment(Qt::AlignCenter);

    hboxLayout->addWidget(lblRecordNo);

    pbnNext = new QToolButton(groupBox);
    pbnNext->setObjectName(QString::fromUtf8("pbnNext"));
    pbnNext->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconNext.png")));

    hboxLayout->addWidget(pbnNext);

    pbnLast = new QToolButton(groupBox);
    pbnLast->setObjectName(QString::fromUtf8("pbnLast"));
    pbnLast->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconLast.png")));

    hboxLayout->addWidget(pbnLast);

    pbnNew = new QToolButton(groupBox);
    pbnNew->setObjectName(QString::fromUtf8("pbnNew"));
    pbnNew->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconNew.png")));

    hboxLayout->addWidget(pbnNew);

    pbnSave = new QToolButton(groupBox);
    pbnSave->setObjectName(QString::fromUtf8("pbnSave"));
    pbnSave->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mActionFileSave.png")));

    hboxLayout->addWidget(pbnSave);

    pbnDelete = new QToolButton(groupBox);
    pbnDelete->setObjectName(QString::fromUtf8("pbnDelete"));
    pbnDelete->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mIconDelete.png")));

    hboxLayout->addWidget(pbnDelete);


    gridLayout1->addLayout(hboxLayout, 3, 1, 1, 1);


    gridLayout->addWidget(groupBox, 0, 0, 1, 1);

    groupBox_2 = new QGroupBox(QgsCustomProjectionDialogBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout2 = new QGridLayout(groupBox_2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setWordWrap(true);

    gridLayout2->addWidget(label_2, 0, 0, 1, 3);

    textLabel3_2_2 = new QLabel(groupBox_2);
    textLabel3_2_2->setObjectName(QString::fromUtf8("textLabel3_2_2"));

    gridLayout2->addWidget(textLabel3_2_2, 1, 0, 1, 1);

    leTestParameters = new QLineEdit(groupBox_2);
    leTestParameters->setObjectName(QString::fromUtf8("leTestParameters"));

    gridLayout2->addWidget(leTestParameters, 1, 1, 1, 2);

    textLabel1_3 = new QLabel(groupBox_2);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout2->addWidget(textLabel1_3, 2, 1, 1, 1);

    textLabel2_3 = new QLabel(groupBox_2);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

    gridLayout2->addWidget(textLabel2_3, 2, 2, 1, 1);

    textLabel2_2 = new QLabel(groupBox_2);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout2->addWidget(textLabel2_2, 3, 0, 1, 1);

    northWGS84 = new QLineEdit(groupBox_2);
    northWGS84->setObjectName(QString::fromUtf8("northWGS84"));
    northWGS84->setEnabled(true);

    gridLayout2->addWidget(northWGS84, 3, 1, 1, 1);

    projectedX = new QLabel(groupBox_2);
    projectedX->setObjectName(QString::fromUtf8("projectedX"));
    projectedX->setEnabled(true);
    projectedX->setFrameShape(QFrame::Box);

    gridLayout2->addWidget(projectedX, 3, 2, 1, 1);

    textLabel2_2_2 = new QLabel(groupBox_2);
    textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));

    gridLayout2->addWidget(textLabel2_2_2, 4, 0, 1, 1);

    eastWGS84 = new QLineEdit(groupBox_2);
    eastWGS84->setObjectName(QString::fromUtf8("eastWGS84"));

    gridLayout2->addWidget(eastWGS84, 4, 1, 1, 1);

    projectedY = new QLabel(groupBox_2);
    projectedY->setObjectName(QString::fromUtf8("projectedY"));
    projectedY->setEnabled(true);
    projectedY->setFrameShape(QFrame::Box);
    projectedY->setMargin(1);

    gridLayout2->addWidget(projectedY, 4, 2, 1, 1);

    pbnCalculate = new QPushButton(groupBox_2);
    pbnCalculate->setObjectName(QString::fromUtf8("pbnCalculate"));

    gridLayout2->addWidget(pbnCalculate, 5, 0, 1, 3);


    gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsCustomProjectionDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

    textLabel1->setBuddy(leName);
    textLabel3_2->setBuddy(leParameters);
    textLabel3_2_2->setBuddy(leTestParameters);
    textLabel2_2->setBuddy(northWGS84);
    textLabel2_2_2->setBuddy(eastWGS84);
    QWidget::setTabOrder(leName, leParameters);
    QWidget::setTabOrder(leParameters, pbnFirst);
    QWidget::setTabOrder(pbnFirst, pbnPrevious);
    QWidget::setTabOrder(pbnPrevious, pbnNext);
    QWidget::setTabOrder(pbnNext, pbnLast);
    QWidget::setTabOrder(pbnLast, pbnNew);
    QWidget::setTabOrder(pbnNew, pbnSave);
    QWidget::setTabOrder(pbnSave, pbnDelete);
    QWidget::setTabOrder(pbnDelete, leTestParameters);
    QWidget::setTabOrder(leTestParameters, northWGS84);
    QWidget::setTabOrder(northWGS84, eastWGS84);
    QWidget::setTabOrder(eastWGS84, pbnCalculate);
    QWidget::setTabOrder(pbnCalculate, buttonBox);

    retranslateUi(QgsCustomProjectionDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsCustomProjectionDialogBase, SLOT(accept()));

    QMetaObject::connectSlotsByName(QgsCustomProjectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCustomProjectionDialogBase)
    {
    QgsCustomProjectionDialogBase->setWindowTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Coordinate Reference System Definition", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Define", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QgsCustomProjectionDialogBase", "You can define your own custom Coordinate Reference System (CRS) here. The definition must conform to the proj4 format for specifying a CRS.", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
    textLabel3_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", 0, QApplication::UnicodeUTF8));
    pbnFirst->setText(QApplication::translate("QgsCustomProjectionDialogBase", "|<", 0, QApplication::UnicodeUTF8));
    pbnPrevious->setText(QApplication::translate("QgsCustomProjectionDialogBase", "<", 0, QApplication::UnicodeUTF8));
    lblRecordNo->setText(QApplication::translate("QgsCustomProjectionDialogBase", "1 of 1", 0, QApplication::UnicodeUTF8));
    pbnNext->setText(QApplication::translate("QgsCustomProjectionDialogBase", ">", 0, QApplication::UnicodeUTF8));
    pbnLast->setText(QApplication::translate("QgsCustomProjectionDialogBase", ">|", 0, QApplication::UnicodeUTF8));
    pbnNew->setText(QApplication::translate("QgsCustomProjectionDialogBase", "*", 0, QApplication::UnicodeUTF8));
    pbnSave->setText(QApplication::translate("QgsCustomProjectionDialogBase", "S", 0, QApplication::UnicodeUTF8));
    pbnDelete->setText(QApplication::translate("QgsCustomProjectionDialogBase", "X", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Test", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Use the text boxes below to test the CRS definition you are creating. Enter a coordinate where both the lat/long and the transformed result are known (for example by reading off a map). Then press the calculate button to see if the CRS definition you are creating is accurate.", 0, QApplication::UnicodeUTF8));
    textLabel3_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Geographic / WGS84", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Destination CRS        ", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "North", 0, QApplication::UnicodeUTF8));
    projectedX->setText(QString());
    textLabel2_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "East", 0, QApplication::UnicodeUTF8));
    projectedY->setText(QString());
    pbnCalculate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Calculate", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsCustomProjectionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionDialogBase: public Ui_QgsCustomProjectionDialogBase {};
} // namespace Ui

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
