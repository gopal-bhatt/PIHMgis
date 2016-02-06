/********************************************************************************
** Form generated from reading ui file 'qgsprojectpropertiesbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"
#include "qgsprojectionselector.h"

class Ui_QgsProjectPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *vboxLayout;
    QGroupBox *titleBox;
    QGridLayout *gridLayout1;
    QLineEdit *titleEdit;
    QGroupBox *btnGrpMapUnits;
    QHBoxLayout *hboxLayout;
    QRadioButton *radMeters;
    QRadioButton *radFeet;
    QRadioButton *radDecimalDegrees;
    QSpacerItem *spacerItem;
    QGroupBox *btnGrpPrecision;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QSpinBox *spinBoxDP;
    QLabel *textLabel3;
    QSpacerItem *spacerItem1;
    QGroupBox *grpDigitizing;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_2_2;
    QSpinBox *spinDigitisedLineWidth;
    QgsColorButton *pbnDigitisedLineColour;
    QLabel *textLabel1_2_2_2;
    QLineEdit *leSnappingTolerance;
    QLabel *textLabel1_2;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QgsColorButton *pbnSelectionColour;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *tab2;
    QGridLayout *gridLayout3;
    QCheckBox *cbxProjectionEnabled;
    QgsProjectionSelector *projectionSelector;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
    if (QgsProjectPropertiesBase->objectName().isEmpty())
        QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
    QgsProjectPropertiesBase->resize(583, 517);
    QgsProjectPropertiesBase->setWindowIcon(QIcon());
    QgsProjectPropertiesBase->setSizeGripEnabled(true);
    QgsProjectPropertiesBase->setModal(true);
    gridLayout = new QGridLayout(QgsProjectPropertiesBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonBox = new QDialogButtonBox(QgsProjectPropertiesBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    tabWidget = new QTabWidget(QgsProjectPropertiesBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    vboxLayout = new QVBoxLayout(tab1);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    titleBox = new QGroupBox(tab1);
    titleBox->setObjectName(QString::fromUtf8("titleBox"));
    gridLayout1 = new QGridLayout(titleBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(8);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    titleEdit = new QLineEdit(titleBox);
    titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

    gridLayout1->addWidget(titleEdit, 0, 0, 1, 1);


    vboxLayout->addWidget(titleBox);

    btnGrpMapUnits = new QGroupBox(tab1);
    btnGrpMapUnits->setObjectName(QString::fromUtf8("btnGrpMapUnits"));
    hboxLayout = new QHBoxLayout(btnGrpMapUnits);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(9);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    radMeters = new QRadioButton(btnGrpMapUnits);
    radMeters->setObjectName(QString::fromUtf8("radMeters"));
    radMeters->setChecked(true);

    hboxLayout->addWidget(radMeters);

    radFeet = new QRadioButton(btnGrpMapUnits);
    radFeet->setObjectName(QString::fromUtf8("radFeet"));

    hboxLayout->addWidget(radFeet);

    radDecimalDegrees = new QRadioButton(btnGrpMapUnits);
    radDecimalDegrees->setObjectName(QString::fromUtf8("radDecimalDegrees"));

    hboxLayout->addWidget(radDecimalDegrees);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    vboxLayout->addWidget(btnGrpMapUnits);

    btnGrpPrecision = new QGroupBox(tab1);
    btnGrpPrecision->setObjectName(QString::fromUtf8("btnGrpPrecision"));
    hboxLayout1 = new QHBoxLayout(btnGrpPrecision);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(9);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    radAutomatic = new QRadioButton(btnGrpPrecision);
    radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
    radAutomatic->setChecked(true);

    hboxLayout1->addWidget(radAutomatic);

    radManual = new QRadioButton(btnGrpPrecision);
    radManual->setObjectName(QString::fromUtf8("radManual"));

    hboxLayout1->addWidget(radManual);

    spinBoxDP = new QSpinBox(btnGrpPrecision);
    spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

    hboxLayout1->addWidget(spinBoxDP);

    textLabel3 = new QLabel(btnGrpPrecision);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy);

    hboxLayout1->addWidget(textLabel3);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);


    vboxLayout->addWidget(btnGrpPrecision);

    grpDigitizing = new QGroupBox(tab1);
    grpDigitizing->setObjectName(QString::fromUtf8("grpDigitizing"));
    gridLayout2 = new QGridLayout(grpDigitizing);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1_2_2 = new QLabel(grpDigitizing);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout2->addWidget(textLabel1_2_2, 0, 0, 1, 1);

    spinDigitisedLineWidth = new QSpinBox(grpDigitizing);
    spinDigitisedLineWidth->setObjectName(QString::fromUtf8("spinDigitisedLineWidth"));
    spinDigitisedLineWidth->setMinimum(1);

    gridLayout2->addWidget(spinDigitisedLineWidth, 0, 1, 1, 1);

    pbnDigitisedLineColour = new QgsColorButton(grpDigitizing);
    pbnDigitisedLineColour->setObjectName(QString::fromUtf8("pbnDigitisedLineColour"));
    pbnDigitisedLineColour->setMinimumSize(QSize(100, 0));

    gridLayout2->addWidget(pbnDigitisedLineColour, 1, 1, 1, 1);

    textLabel1_2_2_2 = new QLabel(grpDigitizing);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));

    gridLayout2->addWidget(textLabel1_2_2_2, 0, 2, 1, 1);

    leSnappingTolerance = new QLineEdit(grpDigitizing);
    leSnappingTolerance->setObjectName(QString::fromUtf8("leSnappingTolerance"));
    leSnappingTolerance->setMaximumSize(QSize(120, 32767));

    gridLayout2->addWidget(leSnappingTolerance, 0, 3, 1, 1);

    textLabel1_2 = new QLabel(grpDigitizing);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout2->addWidget(textLabel1_2, 1, 0, 1, 1);


    vboxLayout->addWidget(grpDigitizing);

    groupBox = new QGroupBox(tab1);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    hboxLayout2 = new QHBoxLayout(groupBox);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(9);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout2->addWidget(textLabel1);

    pbnSelectionColour = new QgsColorButton(groupBox);
    pbnSelectionColour->setObjectName(QString::fromUtf8("pbnSelectionColour"));
    pbnSelectionColour->setMinimumSize(QSize(100, 0));

    hboxLayout2->addWidget(pbnSelectionColour);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem2);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    hboxLayout2->addWidget(label);

    pbnCanvasColor = new QgsColorButton(groupBox);
    pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
    pbnCanvasColor->setMinimumSize(QSize(100, 0));

    hboxLayout2->addWidget(pbnCanvasColor);

    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem3);


    vboxLayout->addWidget(groupBox);

    spacerItem4 = new QSpacerItem(31, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem4);

    tabWidget->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    gridLayout3 = new QGridLayout(tab2);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    cbxProjectionEnabled = new QCheckBox(tab2);
    cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));

    gridLayout3->addWidget(cbxProjectionEnabled, 0, 0, 1, 1);

    projectionSelector = new QgsProjectionSelector(tab2);
    projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

    gridLayout3->addWidget(projectionSelector, 1, 0, 1, 1);

    tabWidget->addTab(tab2, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    textLabel1_2_2->setBuddy(spinDigitisedLineWidth);
    textLabel1_2_2_2->setBuddy(leSnappingTolerance);
    textLabel1_2->setBuddy(pbnDigitisedLineColour);
    textLabel1->setBuddy(pbnSelectionColour);
    label->setBuddy(pbnCanvasColor);
    QWidget::setTabOrder(tabWidget, titleEdit);
    QWidget::setTabOrder(titleEdit, radMeters);
    QWidget::setTabOrder(radMeters, radFeet);
    QWidget::setTabOrder(radFeet, radDecimalDegrees);
    QWidget::setTabOrder(radDecimalDegrees, radAutomatic);
    QWidget::setTabOrder(radAutomatic, radManual);
    QWidget::setTabOrder(radManual, spinBoxDP);
    QWidget::setTabOrder(spinBoxDP, spinDigitisedLineWidth);
    QWidget::setTabOrder(spinDigitisedLineWidth, leSnappingTolerance);
    QWidget::setTabOrder(leSnappingTolerance, pbnDigitisedLineColour);
    QWidget::setTabOrder(pbnDigitisedLineColour, pbnSelectionColour);
    QWidget::setTabOrder(pbnSelectionColour, pbnCanvasColor);
    QWidget::setTabOrder(pbnCanvasColor, cbxProjectionEnabled);

    retranslateUi(QgsProjectPropertiesBase);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
    QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", 0, QApplication::UnicodeUTF8));
    titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Title", 0, QApplication::UnicodeUTF8));
    titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", 0, QApplication::UnicodeUTF8));
    titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", 0, QApplication::UnicodeUTF8));
    btnGrpMapUnits->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Map Units", 0, QApplication::UnicodeUTF8));
    radMeters->setText(QApplication::translate("QgsProjectPropertiesBase", "Meters", 0, QApplication::UnicodeUTF8));
    radFeet->setText(QApplication::translate("QgsProjectPropertiesBase", "Feet", 0, QApplication::UnicodeUTF8));
    radDecimalDegrees->setText(QApplication::translate("QgsProjectPropertiesBase", "Decimal degrees", 0, QApplication::UnicodeUTF8));
    btnGrpPrecision->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Precision", 0, QApplication::UnicodeUTF8));
    radAutomatic->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places in the mouse position display", 0, QApplication::UnicodeUTF8));
    radAutomatic->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places that are used when displaying the mouse position is automatically set to be enough so that moving the mouse by one pixel gives a change in the position display", 0, QApplication::UnicodeUTF8));
    radAutomatic->setText(QApplication::translate("QgsProjectPropertiesBase", "Automatic", 0, QApplication::UnicodeUTF8));
    radManual->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
    radManual->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
    radManual->setText(QApplication::translate("QgsProjectPropertiesBase", "Manual", 0, QApplication::UnicodeUTF8));
    spinBoxDP->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
    spinBoxDP->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsProjectPropertiesBase", "decimal places", 0, QApplication::UnicodeUTF8));
    grpDigitizing->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Digitizing", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Line Width:", 0, QApplication::UnicodeUTF8));
    spinDigitisedLineWidth->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Line width in pixels", 0, QApplication::UnicodeUTF8));
    pbnDigitisedLineColour->setText(QString());
    textLabel1_2_2_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Snapping Tolerance (in map units):", 0, QApplication::UnicodeUTF8));
    leSnappingTolerance->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Snapping tolerance in map units", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Line Colour:", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Map Appearance", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection Color:", 0, QApplication::UnicodeUTF8));
    pbnSelectionColour->setText(QString());
    label->setText(QApplication::translate("QgsProjectPropertiesBase", "Background Color:", 0, QApplication::UnicodeUTF8));
    pbnCanvasColor->setText(QString());
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
    cbxProjectionEnabled->setText(QApplication::translate("QgsProjectPropertiesBase", "Enable on the fly projection", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsProjectPropertiesBase", "Projection", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsProjectPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

#endif // UI_QGSPROJECTPROPERTIESBASE_H
