/********************************************************************************
** Form generated from reading ui file 'qgsprojectpropertiesbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"
#include "qgsprojectionselector.h"

class Ui_QgsProjectPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QGroupBox *titleBox;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QLineEdit *titleEdit;
    QLabel *textLabel1;
    QSpacerItem *spacerItem;
    QgsColorButton *pbnSelectionColour;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QgsColorButton *pbnCanvasColor;
    QGroupBox *btnGrpMapUnits;
    QHBoxLayout *hboxLayout;
    QRadioButton *radMeters;
    QRadioButton *radFeet;
    QRadioButton *radDecimalDegrees;
    QGroupBox *btnGrpPrecision;
    QGridLayout *gridLayout3;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QSpinBox *spinBoxDP;
    QLabel *textLabel3;
    QGroupBox *grpDigitizing;
    QGridLayout *gridLayout4;
    QCheckBox *mEnableTopologicalEditingCheckBox;
    QCheckBox *mAvoidIntersectionsCheckBox;
    QPushButton *mSnappingOptionsPushButton;
    QWidget *tab2;
    QGridLayout *gridLayout5;
    QCheckBox *cbxProjectionEnabled;
    QgsProjectionSelector *projectionSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
    if (QgsProjectPropertiesBase->objectName().isEmpty())
        QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
    QgsProjectPropertiesBase->resize(452, 495);
    QgsProjectPropertiesBase->setWindowIcon(QIcon());
    QgsProjectPropertiesBase->setSizeGripEnabled(true);
    QgsProjectPropertiesBase->setModal(true);
    gridLayout = new QGridLayout(QgsProjectPropertiesBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(QgsProjectPropertiesBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    titleBox = new QGroupBox(tab1);
    titleBox->setObjectName(QString::fromUtf8("titleBox"));
    gridLayout2 = new QGridLayout(titleBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_2 = new QLabel(titleBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout2->addWidget(label_2, 0, 0, 1, 1);

    titleEdit = new QLineEdit(titleBox);
    titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

    gridLayout2->addWidget(titleEdit, 0, 1, 1, 3);

    textLabel1 = new QLabel(titleBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout2->addWidget(textLabel1, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem, 1, 2, 1, 1);

    pbnSelectionColour = new QgsColorButton(titleBox);
    pbnSelectionColour->setObjectName(QString::fromUtf8("pbnSelectionColour"));
    pbnSelectionColour->setMinimumSize(QSize(100, 0));

    gridLayout2->addWidget(pbnSelectionColour, 1, 3, 1, 1);

    label = new QLabel(titleBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout2->addWidget(label, 2, 0, 1, 2);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem1, 2, 2, 1, 1);

    pbnCanvasColor = new QgsColorButton(titleBox);
    pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
    pbnCanvasColor->setMinimumSize(QSize(100, 0));

    gridLayout2->addWidget(pbnCanvasColor, 2, 3, 1, 1);


    gridLayout1->addWidget(titleBox, 0, 0, 1, 1);

    btnGrpMapUnits = new QGroupBox(tab1);
    btnGrpMapUnits->setObjectName(QString::fromUtf8("btnGrpMapUnits"));
    hboxLayout = new QHBoxLayout(btnGrpMapUnits);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(11, 11, 11, 11);
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


    gridLayout1->addWidget(btnGrpMapUnits, 1, 0, 1, 1);

    btnGrpPrecision = new QGroupBox(tab1);
    btnGrpPrecision->setObjectName(QString::fromUtf8("btnGrpPrecision"));
    gridLayout3 = new QGridLayout(btnGrpPrecision);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    radAutomatic = new QRadioButton(btnGrpPrecision);
    radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
    radAutomatic->setChecked(true);

    gridLayout3->addWidget(radAutomatic, 0, 0, 1, 1);

    radManual = new QRadioButton(btnGrpPrecision);
    radManual->setObjectName(QString::fromUtf8("radManual"));

    gridLayout3->addWidget(radManual, 0, 1, 1, 1);

    spinBoxDP = new QSpinBox(btnGrpPrecision);
    spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

    gridLayout3->addWidget(spinBoxDP, 0, 2, 1, 1);

    textLabel3 = new QLabel(btnGrpPrecision);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy);

    gridLayout3->addWidget(textLabel3, 0, 3, 1, 1);


    gridLayout1->addWidget(btnGrpPrecision, 2, 0, 1, 1);

    grpDigitizing = new QGroupBox(tab1);
    grpDigitizing->setObjectName(QString::fromUtf8("grpDigitizing"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(grpDigitizing->sizePolicy().hasHeightForWidth());
    grpDigitizing->setSizePolicy(sizePolicy1);
    gridLayout4 = new QGridLayout(grpDigitizing);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    mEnableTopologicalEditingCheckBox = new QCheckBox(grpDigitizing);
    mEnableTopologicalEditingCheckBox->setObjectName(QString::fromUtf8("mEnableTopologicalEditingCheckBox"));

    gridLayout4->addWidget(mEnableTopologicalEditingCheckBox, 0, 0, 1, 1);

    mAvoidIntersectionsCheckBox = new QCheckBox(grpDigitizing);
    mAvoidIntersectionsCheckBox->setObjectName(QString::fromUtf8("mAvoidIntersectionsCheckBox"));

    gridLayout4->addWidget(mAvoidIntersectionsCheckBox, 1, 0, 1, 1);

    mSnappingOptionsPushButton = new QPushButton(grpDigitizing);
    mSnappingOptionsPushButton->setObjectName(QString::fromUtf8("mSnappingOptionsPushButton"));

    gridLayout4->addWidget(mSnappingOptionsPushButton, 2, 0, 1, 1);


    gridLayout1->addWidget(grpDigitizing, 3, 0, 1, 1);

    tabWidget->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    gridLayout5 = new QGridLayout(tab2);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    gridLayout5->setContentsMargins(3, 11, 3, 11);
    cbxProjectionEnabled = new QCheckBox(tab2);
    cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));

    gridLayout5->addWidget(cbxProjectionEnabled, 0, 0, 1, 1);

    projectionSelector = new QgsProjectionSelector(tab2);
    projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

    gridLayout5->addWidget(projectionSelector, 1, 0, 1, 1);

    tabWidget->addTab(tab2, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsProjectPropertiesBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    textLabel1->setBuddy(pbnSelectionColour);
    label->setBuddy(pbnCanvasColor);
    QWidget::setTabOrder(titleEdit, pbnSelectionColour);
    QWidget::setTabOrder(pbnSelectionColour, pbnCanvasColor);
    QWidget::setTabOrder(pbnCanvasColor, radMeters);
    QWidget::setTabOrder(radMeters, radFeet);
    QWidget::setTabOrder(radFeet, radDecimalDegrees);
    QWidget::setTabOrder(radDecimalDegrees, radAutomatic);
    QWidget::setTabOrder(radAutomatic, radManual);
    QWidget::setTabOrder(radManual, spinBoxDP);
    QWidget::setTabOrder(spinBoxDP, mEnableTopologicalEditingCheckBox);
    QWidget::setTabOrder(mEnableTopologicalEditingCheckBox, mAvoidIntersectionsCheckBox);
    QWidget::setTabOrder(mAvoidIntersectionsCheckBox, mSnappingOptionsPushButton);
    QWidget::setTabOrder(mSnappingOptionsPushButton, cbxProjectionEnabled);
    QWidget::setTabOrder(cbxProjectionEnabled, tabWidget);
    QWidget::setTabOrder(tabWidget, buttonBox);

    retranslateUi(QgsProjectPropertiesBase);
    QObject::connect(radManual, SIGNAL(clicked(bool)), spinBoxDP, SLOT(setEnabled(bool)));
    QObject::connect(radManual, SIGNAL(clicked(bool)), textLabel3, SLOT(setEnabled(bool)));
    QObject::connect(radAutomatic, SIGNAL(clicked(bool)), spinBoxDP, SLOT(setDisabled(bool)));
    QObject::connect(radAutomatic, SIGNAL(clicked(bool)), textLabel3, SLOT(setDisabled(bool)));

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
    QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", 0, QApplication::UnicodeUTF8));
    titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Title and colors", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
    titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", 0, QApplication::UnicodeUTF8));
    titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection color", 0, QApplication::UnicodeUTF8));
    pbnSelectionColour->setText(QString());
    label->setText(QApplication::translate("QgsProjectPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
    pbnCanvasColor->setText(QString());
    btnGrpMapUnits->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Map units", 0, QApplication::UnicodeUTF8));
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
    mEnableTopologicalEditingCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Enable topological editing", 0, QApplication::UnicodeUTF8));
    mAvoidIntersectionsCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Avoid intersections of new polygons", 0, QApplication::UnicodeUTF8));
    mSnappingOptionsPushButton->setText(QApplication::translate("QgsProjectPropertiesBase", "Snapping options...", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
    cbxProjectionEnabled->setText(QApplication::translate("QgsProjectPropertiesBase", "Enable 'on the fly' CRS transformation", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System (CRS)", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsProjectPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

#endif // UI_QGSPROJECTPROPERTIESBASE_H
