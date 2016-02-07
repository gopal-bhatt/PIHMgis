/********************************************************************************
** Form generated from reading ui file 'qgsvectorlayerpropertiesbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *pbnLoadDefaultStyle;
    QPushButton *pbnSaveDefaultStyle;
    QPushButton *pbnLoadStyle;
    QPushButton *pbnSaveStyleAs;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QGroupBox *indexGroupBox;
    QGridLayout *gridLayout2;
    QLabel *textLabel3;
    QLineEdit *txtDisplayName;
    QLabel *textLabel2;
    QComboBox *displayFieldComboBox;
    QLineEdit *leSpatialRefSys;
    QPushButton *pbnIndex;
    QPushButton *pbnChangeSpatialRefSys;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout3;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1;
    QSpinBox *spinMinimumScale;
    QSpinBox *spinMaximumScale;
    QGroupBox *grpSubset;
    QGridLayout *gridLayout4;
    QTextEdit *txtSubsetSQL;
    QSpacerItem *spacerItem;
    QPushButton *pbnQueryBuilder;
    QWidget *tab2;
    QGridLayout *gridLayout5;
    QLabel *legendtypelabel;
    QComboBox *legendtypecombobox;
    QLabel *lblTransparencyPercent;
    QSlider *sliderTransparency;
    QStackedWidget *widgetStackRenderers;
    QWidget *page;
    QWidget *page_2;
    QWidget *tab3;
    QGridLayout *gridLayout6;
    QTextEdit *teMetadata;
    QWidget *tab4;
    QGridLayout *gridLayout7;
    QCheckBox *labelCheckBox;
    QFrame *labelOptionsFrame;
    QWidget *tab5;
    QGridLayout *gridLayout8;
    QFrame *actionOptionsFrame;
    QWidget *tab6;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QToolButton *mAddAttributeButton;
    QToolButton *mDeleteAttributeButton;
    QToolButton *mToggleEditingButton;
    QSpacerItem *spacerItem1;
    QTableWidget *tblAttributes;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
    if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
        QgsVectorLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorLayerPropertiesBase"));
    QgsVectorLayerPropertiesBase->resize(839, 675);
    QgsVectorLayerPropertiesBase->setMinimumSize(QSize(0, 600));
    QgsVectorLayerPropertiesBase->setWindowIcon(QIcon());
    QgsVectorLayerPropertiesBase->setModal(true);
    gridLayout = new QGridLayout(QgsVectorLayerPropertiesBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(3);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(1, 1, 1, 1);
    pbnLoadDefaultStyle = new QPushButton(QgsVectorLayerPropertiesBase);
    pbnLoadDefaultStyle->setObjectName(QString::fromUtf8("pbnLoadDefaultStyle"));

    hboxLayout->addWidget(pbnLoadDefaultStyle);

    pbnSaveDefaultStyle = new QPushButton(QgsVectorLayerPropertiesBase);
    pbnSaveDefaultStyle->setObjectName(QString::fromUtf8("pbnSaveDefaultStyle"));

    hboxLayout->addWidget(pbnSaveDefaultStyle);

    pbnLoadStyle = new QPushButton(QgsVectorLayerPropertiesBase);
    pbnLoadStyle->setObjectName(QString::fromUtf8("pbnLoadStyle"));

    hboxLayout->addWidget(pbnLoadStyle);

    pbnSaveStyleAs = new QPushButton(QgsVectorLayerPropertiesBase);
    pbnSaveStyleAs->setObjectName(QString::fromUtf8("pbnSaveStyleAs"));

    hboxLayout->addWidget(pbnSaveStyleAs);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsVectorLayerPropertiesBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

    tabWidget = new QTabWidget(QgsVectorLayerPropertiesBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setEnabled(true);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
    tabWidget->setSizePolicy(sizePolicy);
    tabWidget->setAutoFillBackground(false);
    tabWidget->setTabShape(QTabWidget::Rounded);
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    indexGroupBox = new QGroupBox(tab1);
    indexGroupBox->setObjectName(QString::fromUtf8("indexGroupBox"));
    gridLayout2 = new QGridLayout(indexGroupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel3 = new QLabel(indexGroupBox);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout2->addWidget(textLabel3, 0, 0, 1, 1);

    txtDisplayName = new QLineEdit(indexGroupBox);
    txtDisplayName->setObjectName(QString::fromUtf8("txtDisplayName"));

    gridLayout2->addWidget(txtDisplayName, 0, 1, 1, 2);

    textLabel2 = new QLabel(indexGroupBox);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout2->addWidget(textLabel2, 1, 0, 1, 1);

    displayFieldComboBox = new QComboBox(indexGroupBox);
    displayFieldComboBox->setObjectName(QString::fromUtf8("displayFieldComboBox"));

    gridLayout2->addWidget(displayFieldComboBox, 1, 1, 1, 2);

    leSpatialRefSys = new QLineEdit(indexGroupBox);
    leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
    leSpatialRefSys->setReadOnly(true);

    gridLayout2->addWidget(leSpatialRefSys, 2, 0, 1, 3);

    pbnIndex = new QPushButton(indexGroupBox);
    pbnIndex->setObjectName(QString::fromUtf8("pbnIndex"));

    gridLayout2->addWidget(pbnIndex, 3, 1, 1, 1);

    pbnChangeSpatialRefSys = new QPushButton(indexGroupBox);
    pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

    gridLayout2->addWidget(pbnChangeSpatialRefSys, 3, 2, 1, 1);


    gridLayout1->addWidget(indexGroupBox, 0, 0, 1, 1);

    chkUseScaleDependentRendering = new QGroupBox(tab1);
    chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
    chkUseScaleDependentRendering->setCheckable(true);
    gridLayout3 = new QGridLayout(chkUseScaleDependentRendering);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    gridLayout3->setContentsMargins(11, 11, 11, 11);
    textLabel1_2_2 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout3->addWidget(textLabel1_2_2, 0, 2, 1, 1);

    textLabel1 = new QLabel(chkUseScaleDependentRendering);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout3->addWidget(textLabel1, 0, 0, 1, 1);

    spinMinimumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMinimumScale->setObjectName(QString::fromUtf8("spinMinimumScale"));
    spinMinimumScale->setMinimum(1);
    spinMinimumScale->setMaximum(100000000);

    gridLayout3->addWidget(spinMinimumScale, 0, 1, 1, 1);

    spinMaximumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMaximumScale->setObjectName(QString::fromUtf8("spinMaximumScale"));
    spinMaximumScale->setMinimum(1);
    spinMaximumScale->setMaximum(100000000);

    gridLayout3->addWidget(spinMaximumScale, 0, 3, 1, 1);


    gridLayout1->addWidget(chkUseScaleDependentRendering, 1, 0, 1, 1);

    grpSubset = new QGroupBox(tab1);
    grpSubset->setObjectName(QString::fromUtf8("grpSubset"));
    gridLayout4 = new QGridLayout(grpSubset);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    gridLayout4->setContentsMargins(11, 11, 11, 11);
    txtSubsetSQL = new QTextEdit(grpSubset);
    txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));
    txtSubsetSQL->setEnabled(false);
    txtSubsetSQL->setAcceptDrops(false);
    txtSubsetSQL->setAcceptRichText(false);

    gridLayout4->addWidget(txtSubsetSQL, 0, 0, 1, 2);

    spacerItem = new QSpacerItem(480, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem, 1, 0, 1, 1);

    pbnQueryBuilder = new QPushButton(grpSubset);
    pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

    gridLayout4->addWidget(pbnQueryBuilder, 1, 1, 1, 1);


    gridLayout1->addWidget(grpSubset, 2, 0, 1, 1);

    tabWidget->addTab(tab1, QString());
    tab2 = new QWidget();
    tab2->setObjectName(QString::fromUtf8("tab2"));
    sizePolicy.setHeightForWidth(tab2->sizePolicy().hasHeightForWidth());
    tab2->setSizePolicy(sizePolicy);
    gridLayout5 = new QGridLayout(tab2);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    legendtypelabel = new QLabel(tab2);
    legendtypelabel->setObjectName(QString::fromUtf8("legendtypelabel"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(legendtypelabel->sizePolicy().hasHeightForWidth());
    legendtypelabel->setSizePolicy(sizePolicy1);
    legendtypelabel->setMaximumSize(QSize(32767, 22));

    gridLayout5->addWidget(legendtypelabel, 0, 0, 1, 1);

    legendtypecombobox = new QComboBox(tab2);
    legendtypecombobox->setObjectName(QString::fromUtf8("legendtypecombobox"));
    QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(legendtypecombobox->sizePolicy().hasHeightForWidth());
    legendtypecombobox->setSizePolicy(sizePolicy2);
    legendtypecombobox->setMinimumSize(QSize(0, 26));
    legendtypecombobox->setMaximumSize(QSize(32767, 22));

    gridLayout5->addWidget(legendtypecombobox, 0, 1, 1, 1);

    lblTransparencyPercent = new QLabel(tab2);
    lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));
    sizePolicy1.setHeightForWidth(lblTransparencyPercent->sizePolicy().hasHeightForWidth());
    lblTransparencyPercent->setSizePolicy(sizePolicy1);

    gridLayout5->addWidget(lblTransparencyPercent, 0, 2, 1, 1);

    sliderTransparency = new QSlider(tab2);
    sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(sliderTransparency->sizePolicy().hasHeightForWidth());
    sliderTransparency->setSizePolicy(sizePolicy3);
    sliderTransparency->setMaximum(255);
    sliderTransparency->setValue(0);
    sliderTransparency->setOrientation(Qt::Horizontal);

    gridLayout5->addWidget(sliderTransparency, 0, 3, 1, 1);

    widgetStackRenderers = new QStackedWidget(tab2);
    widgetStackRenderers->setObjectName(QString::fromUtf8("widgetStackRenderers"));
    sizePolicy.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
    widgetStackRenderers->setSizePolicy(sizePolicy);
    widgetStackRenderers->setFrameShape(QFrame::NoFrame);
    widgetStackRenderers->setFrameShadow(QFrame::Sunken);
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    widgetStackRenderers->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    widgetStackRenderers->addWidget(page_2);

    gridLayout5->addWidget(widgetStackRenderers, 1, 0, 1, 4);

    tabWidget->addTab(tab2, QString());
    tab3 = new QWidget();
    tab3->setObjectName(QString::fromUtf8("tab3"));
    gridLayout6 = new QGridLayout(tab3);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(11);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    gridLayout6->setContentsMargins(11, 11, 11, 11);
    teMetadata = new QTextEdit(tab3);
    teMetadata->setObjectName(QString::fromUtf8("teMetadata"));
    teMetadata->setLineWidth(2);
    teMetadata->setReadOnly(true);

    gridLayout6->addWidget(teMetadata, 0, 0, 1, 1);

    tabWidget->addTab(tab3, QString());
    tab4 = new QWidget();
    tab4->setObjectName(QString::fromUtf8("tab4"));
    gridLayout7 = new QGridLayout(tab4);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(11);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    labelCheckBox = new QCheckBox(tab4);
    labelCheckBox->setObjectName(QString::fromUtf8("labelCheckBox"));
    QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(labelCheckBox->sizePolicy().hasHeightForWidth());
    labelCheckBox->setSizePolicy(sizePolicy4);

    gridLayout7->addWidget(labelCheckBox, 0, 0, 1, 1);

    labelOptionsFrame = new QFrame(tab4);
    labelOptionsFrame->setObjectName(QString::fromUtf8("labelOptionsFrame"));
    labelOptionsFrame->setEnabled(false);
    sizePolicy.setHeightForWidth(labelOptionsFrame->sizePolicy().hasHeightForWidth());
    labelOptionsFrame->setSizePolicy(sizePolicy);
    labelOptionsFrame->setFrameShape(QFrame::NoFrame);
    labelOptionsFrame->setFrameShadow(QFrame::Plain);

    gridLayout7->addWidget(labelOptionsFrame, 1, 0, 1, 1);

    tabWidget->addTab(tab4, QString());
    tab5 = new QWidget();
    tab5->setObjectName(QString::fromUtf8("tab5"));
    gridLayout8 = new QGridLayout(tab5);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(11);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    actionOptionsFrame = new QFrame(tab5);
    actionOptionsFrame->setObjectName(QString::fromUtf8("actionOptionsFrame"));
    sizePolicy.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
    actionOptionsFrame->setSizePolicy(sizePolicy);
    actionOptionsFrame->setFrameShape(QFrame::NoFrame);
    actionOptionsFrame->setFrameShadow(QFrame::Raised);

    gridLayout8->addWidget(actionOptionsFrame, 0, 0, 1, 1);

    tabWidget->addTab(tab5, QString());
    tab6 = new QWidget();
    tab6->setObjectName(QString::fromUtf8("tab6"));
    vboxLayout = new QVBoxLayout(tab6);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setSizeConstraint(QLayout::SetNoConstraint);
    mAddAttributeButton = new QToolButton(tab6);
    mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
    QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
    mAddAttributeButton->setSizePolicy(sizePolicy5);
    mAddAttributeButton->setIcon(QIcon(QString::fromUtf8("../xpm/new_attribute.png")));

    hboxLayout1->addWidget(mAddAttributeButton);

    mDeleteAttributeButton = new QToolButton(tab6);
    mDeleteAttributeButton->setObjectName(QString::fromUtf8("mDeleteAttributeButton"));
    mDeleteAttributeButton->setIcon(QIcon(QString::fromUtf8("../xpm/delete_attribute.png")));

    hboxLayout1->addWidget(mDeleteAttributeButton);

    mToggleEditingButton = new QToolButton(tab6);
    mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
    mToggleEditingButton->setCheckable(true);

    hboxLayout1->addWidget(mToggleEditingButton);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);


    vboxLayout->addLayout(hboxLayout1);

    tblAttributes = new QTableWidget(tab6);
    tblAttributes->setObjectName(QString::fromUtf8("tblAttributes"));
    sizePolicy.setHeightForWidth(tblAttributes->sizePolicy().hasHeightForWidth());
    tblAttributes->setSizePolicy(sizePolicy);
    tblAttributes->setMinimumSize(QSize(256, 0));
    tblAttributes->setSortingEnabled(false);

    vboxLayout->addWidget(tblAttributes);

    tabWidget->addTab(tab6, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    textLabel3->setBuddy(txtDisplayName);
    textLabel2->setBuddy(displayFieldComboBox);
    textLabel1_2_2->setBuddy(spinMaximumScale);
    textLabel1->setBuddy(spinMinimumScale);
    legendtypelabel->setBuddy(legendtypecombobox);
    lblTransparencyPercent->setBuddy(sliderTransparency);
    QWidget::setTabOrder(legendtypecombobox, sliderTransparency);
    QWidget::setTabOrder(sliderTransparency, txtDisplayName);
    QWidget::setTabOrder(txtDisplayName, displayFieldComboBox);
    QWidget::setTabOrder(displayFieldComboBox, leSpatialRefSys);
    QWidget::setTabOrder(leSpatialRefSys, pbnIndex);
    QWidget::setTabOrder(pbnIndex, pbnChangeSpatialRefSys);
    QWidget::setTabOrder(pbnChangeSpatialRefSys, chkUseScaleDependentRendering);
    QWidget::setTabOrder(chkUseScaleDependentRendering, spinMinimumScale);
    QWidget::setTabOrder(spinMinimumScale, spinMaximumScale);
    QWidget::setTabOrder(spinMaximumScale, txtSubsetSQL);
    QWidget::setTabOrder(txtSubsetSQL, pbnQueryBuilder);
    QWidget::setTabOrder(pbnQueryBuilder, teMetadata);
    QWidget::setTabOrder(teMetadata, labelCheckBox);
    QWidget::setTabOrder(labelCheckBox, pbnLoadDefaultStyle);
    QWidget::setTabOrder(pbnLoadDefaultStyle, pbnSaveDefaultStyle);
    QWidget::setTabOrder(pbnSaveDefaultStyle, pbnLoadStyle);
    QWidget::setTabOrder(pbnLoadStyle, pbnSaveStyleAs);
    QWidget::setTabOrder(pbnSaveStyleAs, buttonBox);
    QWidget::setTabOrder(buttonBox, tabWidget);

    retranslateUi(QgsVectorLayerPropertiesBase);
    QObject::connect(labelCheckBox, SIGNAL(clicked(bool)), labelOptionsFrame, SLOT(setEnabled(bool)));

    tabWidget->setCurrentIndex(3);
    widgetStackRenderers->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
    QgsVectorLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", 0, QApplication::UnicodeUTF8));
    pbnLoadDefaultStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Restore Default Style", 0, QApplication::UnicodeUTF8));
    pbnSaveDefaultStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Save As Default", 0, QApplication::UnicodeUTF8));
    pbnLoadStyle->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Load Style ...", 0, QApplication::UnicodeUTF8));
    pbnSaveStyleAs->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Save Style ...", 0, QApplication::UnicodeUTF8));
    indexGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display name", 0, QApplication::UnicodeUTF8));
    textLabel2->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
    textLabel2->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "This sets the display field for the Identify Results dialog box", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display field", 0, QApplication::UnicodeUTF8));
    displayFieldComboBox->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Use this control to set which field is placed at the top level of the Identify Results dialog box.", 0, QApplication::UnicodeUTF8));
    pbnIndex->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create Spatial Index", 0, QApplication::UnicodeUTF8));
    pbnChangeSpatialRefSys->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Change CRS", 0, QApplication::UnicodeUTF8));
    chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Use scale dependent rendering", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum", 0, QApplication::UnicodeUTF8));
    spinMinimumScale->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Minimum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    spinMaximumScale->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    grpSubset->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Subset", 0, QApplication::UnicodeUTF8));
    pbnQueryBuilder->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("QgsVectorLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
    legendtypelabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Legend type", 0, QApplication::UnicodeUTF8));
    lblTransparencyPercent->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("QgsVectorLayerPropertiesBase", "Symbology", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
    labelCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display labels", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "New column", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setText(QString());
    mAddAttributeButton->setShortcut(QApplication::translate("QgsVectorLayerPropertiesBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
    mDeleteAttributeButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Delete column", 0, QApplication::UnicodeUTF8));
    mDeleteAttributeButton->setText(QString());
    mDeleteAttributeButton->setShortcut(QApplication::translate("QgsVectorLayerPropertiesBase", "Ctrl+X", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Toggle editing mode", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setWhatsThis(QApplication::translate("QgsVectorLayerPropertiesBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setText(QString());
    tabWidget->setTabText(tabWidget->indexOf(tab6), QApplication::translate("QgsVectorLayerPropertiesBase", "Attributes", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsVectorLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
