/********************************************************************************
** Form generated from reading ui file 'qgsvectorlayerpropertiesbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERPROPERTIESBASE_H
#define UI_QGSVECTORLAYERPROPERTIESBASE_H

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
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QStackedWidget *widgetStackRenderers;
    QWidget *page;
    QWidget *page_2;
    QComboBox *legendtypecombobox;
    QLabel *legendtypelabel;
    QLabel *lblTransparencyPercent;
    QSlider *sliderTransparency;
    QWidget *tab2;
    QGridLayout *gridLayout2;
    QLabel *textLabel3;
    QLabel *textLabel2;
    QComboBox *displayFieldComboBox;
    QLineEdit *txtDisplayName;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout3;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1;
    QSpinBox *spinMinimumScale;
    QSpinBox *spinMaximumScale;
    QGroupBox *indexGroupBox;
    QGridLayout *gridLayout4;
    QLabel *indexLabel;
    QPushButton *pbnIndex;
    QSpacerItem *spacerItem;
    QGroupBox *grpSRS;
    QGridLayout *gridLayout5;
    QLineEdit *leSpatialRefSys;
    QPushButton *pbnChangeSpatialRefSys;
    QGroupBox *grpSubset;
    QGridLayout *gridLayout6;
    QTextEdit *txtSubsetSQL;
    QSpacerItem *spacerItem1;
    QPushButton *pbnQueryBuilder;
    QWidget *tab3;
    QGridLayout *gridLayout7;
    QTextEdit *teMetadata;
    QWidget *tab4;
    QGridLayout *gridLayout8;
    QFrame *labelOptionsFrame;
    QCheckBox *labelCheckBox;
    QWidget *tab5;
    QGridLayout *gridLayout9;
    QFrame *actionOptionsFrame;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
    if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
        QgsVectorLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorLayerPropertiesBase"));
    QgsVectorLayerPropertiesBase->resize(469, 600);
    QgsVectorLayerPropertiesBase->setMinimumSize(QSize(0, 600));
    QgsVectorLayerPropertiesBase->setWindowIcon(QIcon());
    QgsVectorLayerPropertiesBase->setModal(true);
    gridLayout = new QGridLayout(QgsVectorLayerPropertiesBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonBox = new QDialogButtonBox(QgsVectorLayerPropertiesBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    tabWidget = new QTabWidget(QgsVectorLayerPropertiesBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setTabShape(QTabWidget::Rounded);
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    widgetStackRenderers = new QStackedWidget(tab1);
    widgetStackRenderers->setObjectName(QString::fromUtf8("widgetStackRenderers"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
    widgetStackRenderers->setSizePolicy(sizePolicy);
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    widgetStackRenderers->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    widgetStackRenderers->addWidget(page_2);

    gridLayout1->addWidget(widgetStackRenderers, 2, 0, 1, 2);

    legendtypecombobox = new QComboBox(tab1);
    legendtypecombobox->setObjectName(QString::fromUtf8("legendtypecombobox"));
    legendtypecombobox->setMinimumSize(QSize(270, 24));
    legendtypecombobox->setMaximumSize(QSize(32767, 22));

    gridLayout1->addWidget(legendtypecombobox, 0, 1, 1, 1);

    legendtypelabel = new QLabel(tab1);
    legendtypelabel->setObjectName(QString::fromUtf8("legendtypelabel"));
    legendtypelabel->setMaximumSize(QSize(32767, 22));

    gridLayout1->addWidget(legendtypelabel, 0, 0, 1, 1);

    lblTransparencyPercent = new QLabel(tab1);
    lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));

    gridLayout1->addWidget(lblTransparencyPercent, 1, 0, 1, 1);

    sliderTransparency = new QSlider(tab1);
    sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
    sliderTransparency->setMaximum(255);
    sliderTransparency->setValue(0);
    sliderTransparency->setOrientation(Qt::Horizontal);

    gridLayout1->addWidget(sliderTransparency, 1, 1, 1, 1);

    tabWidget->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    gridLayout2 = new QGridLayout(tab2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel3 = new QLabel(tab2);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout2->addWidget(textLabel3, 0, 0, 1, 1);

    textLabel2 = new QLabel(tab2);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout2->addWidget(textLabel2, 0, 2, 1, 1);

    displayFieldComboBox = new QComboBox(tab2);
    displayFieldComboBox->setObjectName(QString::fromUtf8("displayFieldComboBox"));

    gridLayout2->addWidget(displayFieldComboBox, 0, 3, 1, 1);

    txtDisplayName = new QLineEdit(tab2);
    txtDisplayName->setObjectName(QString::fromUtf8("txtDisplayName"));

    gridLayout2->addWidget(txtDisplayName, 0, 1, 1, 1);

    chkUseScaleDependentRendering = new QGroupBox(tab2);
    chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
    chkUseScaleDependentRendering->setCheckable(true);
    gridLayout3 = new QGridLayout(chkUseScaleDependentRendering);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(8);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textLabel1_2_2 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout3->addWidget(textLabel1_2_2, 0, 2, 1, 1);

    textLabel1 = new QLabel(chkUseScaleDependentRendering);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout3->addWidget(textLabel1, 0, 0, 1, 1);

    spinMinimumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMinimumScale->setObjectName(QString::fromUtf8("spinMinimumScale"));
    spinMinimumScale->setMaximum(100000000);
    spinMinimumScale->setMinimum(1);

    gridLayout3->addWidget(spinMinimumScale, 0, 1, 1, 1);

    spinMaximumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMaximumScale->setObjectName(QString::fromUtf8("spinMaximumScale"));
    spinMaximumScale->setMaximum(100000000);
    spinMaximumScale->setMinimum(1);

    gridLayout3->addWidget(spinMaximumScale, 0, 3, 1, 1);


    gridLayout2->addWidget(chkUseScaleDependentRendering, 1, 0, 1, 4);

    indexGroupBox = new QGroupBox(tab2);
    indexGroupBox->setObjectName(QString::fromUtf8("indexGroupBox"));
    gridLayout4 = new QGridLayout(indexGroupBox);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(8);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    indexLabel = new QLabel(indexGroupBox);
    indexLabel->setObjectName(QString::fromUtf8("indexLabel"));

    gridLayout4->addWidget(indexLabel, 0, 0, 1, 1);

    pbnIndex = new QPushButton(indexGroupBox);
    pbnIndex->setObjectName(QString::fromUtf8("pbnIndex"));

    gridLayout4->addWidget(pbnIndex, 0, 2, 1, 1);

    spacerItem = new QSpacerItem(141, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem, 0, 1, 1, 1);


    gridLayout2->addWidget(indexGroupBox, 2, 0, 1, 4);

    grpSRS = new QGroupBox(tab2);
    grpSRS->setObjectName(QString::fromUtf8("grpSRS"));
    gridLayout5 = new QGridLayout(grpSRS);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(8);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    leSpatialRefSys = new QLineEdit(grpSRS);
    leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
    leSpatialRefSys->setReadOnly(true);

    gridLayout5->addWidget(leSpatialRefSys, 0, 0, 1, 1);

    pbnChangeSpatialRefSys = new QPushButton(grpSRS);
    pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

    gridLayout5->addWidget(pbnChangeSpatialRefSys, 0, 1, 1, 1);


    gridLayout2->addWidget(grpSRS, 3, 0, 1, 4);

    grpSubset = new QGroupBox(tab2);
    grpSubset->setObjectName(QString::fromUtf8("grpSubset"));
    gridLayout6 = new QGridLayout(grpSubset);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    txtSubsetSQL = new QTextEdit(grpSubset);
    txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));
    txtSubsetSQL->setEnabled(false);
    txtSubsetSQL->setAcceptDrops(false);
    txtSubsetSQL->setAcceptRichText(false);

    gridLayout6->addWidget(txtSubsetSQL, 0, 0, 1, 2);

    spacerItem1 = new QSpacerItem(480, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem1, 1, 0, 1, 1);

    pbnQueryBuilder = new QPushButton(grpSubset);
    pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

    gridLayout6->addWidget(pbnQueryBuilder, 1, 1, 1, 1);


    gridLayout2->addWidget(grpSubset, 4, 0, 1, 4);

    tabWidget->addTab(tab2, QString());
    tab3 = new QWidget();
    tab3->setObjectName(QString::fromUtf8("tab3"));
    gridLayout7 = new QGridLayout(tab3);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(9);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    teMetadata = new QTextEdit(tab3);
    teMetadata->setObjectName(QString::fromUtf8("teMetadata"));
    teMetadata->setLineWidth(2);

    gridLayout7->addWidget(teMetadata, 0, 0, 1, 1);

    tabWidget->addTab(tab3, QString());
    tab4 = new QWidget();
    tab4->setObjectName(QString::fromUtf8("tab4"));
    gridLayout8 = new QGridLayout(tab4);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(9);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    labelOptionsFrame = new QFrame(tab4);
    labelOptionsFrame->setObjectName(QString::fromUtf8("labelOptionsFrame"));
    sizePolicy.setHeightForWidth(labelOptionsFrame->sizePolicy().hasHeightForWidth());
    labelOptionsFrame->setSizePolicy(sizePolicy);
    labelOptionsFrame->setFrameShape(QFrame::NoFrame);
    labelOptionsFrame->setFrameShadow(QFrame::Plain);

    gridLayout8->addWidget(labelOptionsFrame, 1, 0, 1, 1);

    labelCheckBox = new QCheckBox(tab4);
    labelCheckBox->setObjectName(QString::fromUtf8("labelCheckBox"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(labelCheckBox->sizePolicy().hasHeightForWidth());
    labelCheckBox->setSizePolicy(sizePolicy1);

    gridLayout8->addWidget(labelCheckBox, 0, 0, 1, 1);

    tabWidget->addTab(tab4, QString());
    tab5 = new QWidget();
    tab5->setObjectName(QString::fromUtf8("tab5"));
    gridLayout9 = new QGridLayout(tab5);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(9);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    actionOptionsFrame = new QFrame(tab5);
    actionOptionsFrame->setObjectName(QString::fromUtf8("actionOptionsFrame"));
    sizePolicy.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
    actionOptionsFrame->setSizePolicy(sizePolicy);
    actionOptionsFrame->setFrameShape(QFrame::NoFrame);
    actionOptionsFrame->setFrameShadow(QFrame::Raised);

    gridLayout9->addWidget(actionOptionsFrame, 0, 0, 1, 1);

    tabWidget->addTab(tab5, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    legendtypelabel->setBuddy(legendtypecombobox);
    lblTransparencyPercent->setBuddy(sliderTransparency);
    textLabel3->setBuddy(txtDisplayName);
    textLabel2->setBuddy(displayFieldComboBox);
    textLabel1_2_2->setBuddy(spinMaximumScale);
    textLabel1->setBuddy(spinMinimumScale);
    indexLabel->setBuddy(pbnIndex);
    QWidget::setTabOrder(tabWidget, legendtypecombobox);
    QWidget::setTabOrder(legendtypecombobox, sliderTransparency);
    QWidget::setTabOrder(sliderTransparency, txtDisplayName);
    QWidget::setTabOrder(txtDisplayName, displayFieldComboBox);
    QWidget::setTabOrder(displayFieldComboBox, spinMinimumScale);
    QWidget::setTabOrder(spinMinimumScale, spinMaximumScale);
    QWidget::setTabOrder(spinMaximumScale, pbnIndex);
    QWidget::setTabOrder(pbnIndex, leSpatialRefSys);
    QWidget::setTabOrder(leSpatialRefSys, pbnChangeSpatialRefSys);
    QWidget::setTabOrder(pbnChangeSpatialRefSys, pbnQueryBuilder);
    QWidget::setTabOrder(pbnQueryBuilder, labelCheckBox);

    retranslateUi(QgsVectorLayerPropertiesBase);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
    QgsVectorLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", 0, QApplication::UnicodeUTF8));
    legendtypelabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Legend type:", 0, QApplication::UnicodeUTF8));
    lblTransparencyPercent->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsVectorLayerPropertiesBase", "Symbology", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display name", 0, QApplication::UnicodeUTF8));
    textLabel2->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
    textLabel2->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "This sets the display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field", 0, QApplication::UnicodeUTF8));
    displayFieldComboBox->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Use this control to set which field is placed at the top level of the Identify Results dialog box.", 0, QApplication::UnicodeUTF8));
    chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Use scale dependent rendering", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum 1:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum 1:", 0, QApplication::UnicodeUTF8));
    spinMinimumScale->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    spinMaximumScale->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    indexGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Spatial Index", 0, QApplication::UnicodeUTF8));
    indexLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create Spatial Index", 0, QApplication::UnicodeUTF8));
    pbnIndex->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create", 0, QApplication::UnicodeUTF8));
    grpSRS->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Spatial Reference System", 0, QApplication::UnicodeUTF8));
    pbnChangeSpatialRefSys->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Change", 0, QApplication::UnicodeUTF8));
    grpSubset->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Subset", 0, QApplication::UnicodeUTF8));
    pbnQueryBuilder->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsVectorLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
    labelCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display labels", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsVectorLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
