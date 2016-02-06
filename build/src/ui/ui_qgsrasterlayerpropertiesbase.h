/********************************************************************************
** Form generated from reading ui file 'qgsrasterlayerpropertiesbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERPROPERTIESBASE_H
#define UI_QGSRASTERLAYERPROPERTIESBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3ListBox>
#include <Qt3Support/Q3TextEdit>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsRasterLayerPropertiesBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabBar;
    QWidget *tabPageSymbology;
    QGridLayout *gridLayout1;
    QGroupBox *bgrpShowAs;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    QSpacerItem *spacerItem;
    QLabel *lblTransparencyPercent;
    QSpacerItem *spacerItem1;
    QLabel *textLabel4;
    QSlider *sliderTransparency;
    QLabel *textLabel2_4_2;
    QCheckBox *cboxInvertColorMap;
    Q3TextEdit *txtSymologyNotes;
    QHBoxLayout *hboxLayout1;
    QRadioButton *rbtnThreeBand;
    QRadioButton *rbtnSingleBand;
    QGroupBox *grpBoxGrayscale;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QComboBox *cboColorMap;
    QLabel *textLabel2_6_2_2;
    QLabel *textLabel2_6_2;
    QComboBox *cboStdDev;
    QComboBox *cboGray;
    QLabel *textLabel2_6;
    QGroupBox *grpBoxRGB;
    QGridLayout *gridLayout4;
    QComboBox *cboBlue;
    QComboBox *cboRed;
    QLabel *textLabel2_4;
    QLabel *textLabel2_5;
    QSpacerItem *spacerItem4;
    QComboBox *cboGreen;
    QLabel *textLabel2_2;
    QLabel *textLabel2;
    QSpacerItem *spacerItem5;
    QLabel *textLabel2_3;
    QLabel *label;
    QComboBox *cboTransparent;
    QWidget *tabPageGeneral;
    QGridLayout *gridLayout5;
    QHBoxLayout *hboxLayout2;
    Q3GroupBox *groupBox10;
    QGridLayout *gridLayout6;
    QSpacerItem *spacerItem6;
    QLabel *pixmapThumbnail;
    Q3GroupBox *groupBox9;
    QGridLayout *gridLayout7;
    QSpacerItem *spacerItem7;
    QLabel *pixmapLegend;
    Q3GroupBox *groupBox8;
    QGridLayout *gridLayout8;
    QSpacerItem *spacerItem8;
    QLabel *pixmapPalette;
    QLabel *lblDisplayName;
    QLineEdit *leDisplayName;
    QLineEdit *leLayerSource;
    QLabel *lblLayerSource;
    QHBoxLayout *hboxLayout3;
    QLabel *lblColumns;
    QLabel *lblRows;
    QLabel *lblNoData;
    QCheckBox *cboxShowDebugInfo;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout9;
    QSpinBox *spinMaximumScale;
    QLabel *textLabel1_2_2_2;
    QSpinBox *spinMinimumScale;
    QLabel *textLabel1_3;
    QGroupBox *grpSRS;
    QGridLayout *gridLayout10;
    QPushButton *pbnChangeSpatialRefSys;
    QLineEdit *leSpatialRefSys;
    QWidget *tabPageMetadata;
    QGridLayout *gridLayout11;
    QTextBrowser *txtbMetadata;
    QWidget *tabPagePyramids;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem9;
    QLabel *textLabel4_2;
    QComboBox *cboResamplingMethod;
    QPushButton *buttonBuildPyramids;
    QWidget *layoutWidget1;
    QVBoxLayout *vboxLayout;
    QLabel *textLabel5;
    Q3ListBox *lbxPyramidResolutions;
    Q3TextEdit *textEdit5;
    QWidget *tabPageHistogram;
    QGridLayout *gridLayout12;
    QLabel *pixHistogram;
    QGroupBox *grpHistCharType;
    QGridLayout *gridLayout13;
    QRadioButton *radHistTypeLine;
    QRadioButton *radHistTypeBar;
    QGridLayout *gridLayout14;
    Q3ListBox *lstHistogramLabels;
    QGroupBox *groupBox;
    QGridLayout *gridLayout15;
    QLabel *textLabel1_2;
    QCheckBox *chkHistIgnoreOutOfRange;
    QCheckBox *chkHistAllowApproximation;
    QSpinBox *spinHistBinCount;
    QPushButton *pbnHistRefresh;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRasterLayerPropertiesBase)
    {
    if (QgsRasterLayerPropertiesBase->objectName().isEmpty())
        QgsRasterLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsRasterLayerPropertiesBase"));
    QgsRasterLayerPropertiesBase->resize(651, 641);
    QgsRasterLayerPropertiesBase->setWindowIcon(QIcon());
    QgsRasterLayerPropertiesBase->setSizeGripEnabled(true);
    QgsRasterLayerPropertiesBase->setModal(true);
    gridLayout = new QGridLayout(QgsRasterLayerPropertiesBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabBar = new QTabWidget(QgsRasterLayerPropertiesBase);
    tabBar->setObjectName(QString::fromUtf8("tabBar"));
    tabPageSymbology = new QWidget();
    tabPageSymbology->setObjectName(QString::fromUtf8("tabPageSymbology"));
    gridLayout1 = new QGridLayout(tabPageSymbology);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    bgrpShowAs = new QGroupBox(tabPageSymbology);
    bgrpShowAs->setObjectName(QString::fromUtf8("bgrpShowAs"));
    gridLayout2 = new QGridLayout(bgrpShowAs);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel3 = new QLabel(bgrpShowAs);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    hboxLayout->addWidget(textLabel3);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    lblTransparencyPercent = new QLabel(bgrpShowAs);
    lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));

    hboxLayout->addWidget(lblTransparencyPercent);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    textLabel4 = new QLabel(bgrpShowAs);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

    hboxLayout->addWidget(textLabel4);


    gridLayout2->addLayout(hboxLayout, 4, 0, 1, 1);

    sliderTransparency = new QSlider(bgrpShowAs);
    sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(sliderTransparency->sizePolicy().hasHeightForWidth());
    sliderTransparency->setSizePolicy(sizePolicy);
    sliderTransparency->setMaximum(255);
    sliderTransparency->setOrientation(Qt::Horizontal);
    sliderTransparency->setTickInterval(25);

    gridLayout2->addWidget(sliderTransparency, 3, 0, 1, 1);

    textLabel2_4_2 = new QLabel(bgrpShowAs);
    textLabel2_4_2->setObjectName(QString::fromUtf8("textLabel2_4_2"));

    gridLayout2->addWidget(textLabel2_4_2, 2, 0, 1, 1);

    cboxInvertColorMap = new QCheckBox(bgrpShowAs);
    cboxInvertColorMap->setObjectName(QString::fromUtf8("cboxInvertColorMap"));

    gridLayout2->addWidget(cboxInvertColorMap, 1, 0, 1, 1);

    txtSymologyNotes = new Q3TextEdit(bgrpShowAs);
    txtSymologyNotes->setObjectName(QString::fromUtf8("txtSymologyNotes"));
    txtSymologyNotes->setEnabled(true);
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(txtSymologyNotes->sizePolicy().hasHeightForWidth());
    txtSymologyNotes->setSizePolicy(sizePolicy1);
    txtSymologyNotes->setWordWrap(Q3TextEdit::WidgetWidth);

    gridLayout2->addWidget(txtSymologyNotes, 0, 1, 5, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(11);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    rbtnThreeBand = new QRadioButton(bgrpShowAs);
    rbtnThreeBand->setObjectName(QString::fromUtf8("rbtnThreeBand"));

    hboxLayout1->addWidget(rbtnThreeBand);

    rbtnSingleBand = new QRadioButton(bgrpShowAs);
    rbtnSingleBand->setObjectName(QString::fromUtf8("rbtnSingleBand"));

    hboxLayout1->addWidget(rbtnSingleBand);


    gridLayout2->addLayout(hboxLayout1, 0, 0, 1, 1);


    gridLayout1->addWidget(bgrpShowAs, 0, 0, 1, 2);

    grpBoxGrayscale = new QGroupBox(tabPageSymbology);
    grpBoxGrayscale->setObjectName(QString::fromUtf8("grpBoxGrayscale"));
    gridLayout3 = new QGridLayout(grpBoxGrayscale);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    spacerItem2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem2, 3, 1, 1, 1);

    spacerItem3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem3, 3, 0, 1, 1);

    cboColorMap = new QComboBox(grpBoxGrayscale);
    cboColorMap->setObjectName(QString::fromUtf8("cboColorMap"));

    gridLayout3->addWidget(cboColorMap, 2, 1, 1, 1);

    textLabel2_6_2_2 = new QLabel(grpBoxGrayscale);
    textLabel2_6_2_2->setObjectName(QString::fromUtf8("textLabel2_6_2_2"));

    gridLayout3->addWidget(textLabel2_6_2_2, 2, 0, 1, 1);

    textLabel2_6_2 = new QLabel(grpBoxGrayscale);
    textLabel2_6_2->setObjectName(QString::fromUtf8("textLabel2_6_2"));

    gridLayout3->addWidget(textLabel2_6_2, 1, 0, 1, 1);

    cboStdDev = new QComboBox(grpBoxGrayscale);
    cboStdDev->setObjectName(QString::fromUtf8("cboStdDev"));

    gridLayout3->addWidget(cboStdDev, 1, 1, 1, 1);

    cboGray = new QComboBox(grpBoxGrayscale);
    cboGray->setObjectName(QString::fromUtf8("cboGray"));

    gridLayout3->addWidget(cboGray, 0, 1, 1, 1);

    textLabel2_6 = new QLabel(grpBoxGrayscale);
    textLabel2_6->setObjectName(QString::fromUtf8("textLabel2_6"));

    gridLayout3->addWidget(textLabel2_6, 0, 0, 1, 1);


    gridLayout1->addWidget(grpBoxGrayscale, 1, 1, 1, 1);

    grpBoxRGB = new QGroupBox(tabPageSymbology);
    grpBoxRGB->setObjectName(QString::fromUtf8("grpBoxRGB"));
    gridLayout4 = new QGridLayout(grpBoxRGB);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    cboBlue = new QComboBox(grpBoxRGB);
    cboBlue->setObjectName(QString::fromUtf8("cboBlue"));

    gridLayout4->addWidget(cboBlue, 3, 1, 1, 1);

    cboRed = new QComboBox(grpBoxRGB);
    cboRed->setObjectName(QString::fromUtf8("cboRed"));

    gridLayout4->addWidget(cboRed, 1, 1, 1, 1);

    textLabel2_4 = new QLabel(grpBoxRGB);
    textLabel2_4->setObjectName(QString::fromUtf8("textLabel2_4"));

    gridLayout4->addWidget(textLabel2_4, 0, 0, 1, 1);

    textLabel2_5 = new QLabel(grpBoxRGB);
    textLabel2_5->setObjectName(QString::fromUtf8("textLabel2_5"));

    gridLayout4->addWidget(textLabel2_5, 0, 1, 1, 1);

    spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem4, 5, 1, 1, 1);

    cboGreen = new QComboBox(grpBoxRGB);
    cboGreen->setObjectName(QString::fromUtf8("cboGreen"));

    gridLayout4->addWidget(cboGreen, 2, 1, 1, 1);

    textLabel2_2 = new QLabel(grpBoxRGB);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout4->addWidget(textLabel2_2, 2, 0, 1, 1);

    textLabel2 = new QLabel(grpBoxRGB);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout4->addWidget(textLabel2, 1, 0, 1, 1);

    spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem5, 5, 0, 1, 1);

    textLabel2_3 = new QLabel(grpBoxRGB);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

    gridLayout4->addWidget(textLabel2_3, 3, 0, 1, 1);

    label = new QLabel(grpBoxRGB);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout4->addWidget(label, 4, 0, 1, 1);

    cboTransparent = new QComboBox(grpBoxRGB);
    cboTransparent->setObjectName(QString::fromUtf8("cboTransparent"));

    gridLayout4->addWidget(cboTransparent, 4, 1, 1, 1);


    gridLayout1->addWidget(grpBoxRGB, 1, 0, 1, 1);

    tabBar->addTab(tabPageSymbology, QString());
    tabPageGeneral = new QWidget();
    tabPageGeneral->setObjectName(QString::fromUtf8("tabPageGeneral"));
    gridLayout5 = new QGridLayout(tabPageGeneral);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(11);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    groupBox10 = new Q3GroupBox(tabPageGeneral);
    groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
    groupBox10->setOrientation(Qt::Vertical);
    groupBox10->setColumnLayout(0, Qt::Vertical);
    groupBox10->layout()->setSpacing(6);
    groupBox10->layout()->setMargin(11);
    gridLayout6 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox10->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout6);
    gridLayout6->setAlignment(Qt::AlignTop);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    spacerItem6 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem6, 0, 0, 1, 1);

    pixmapThumbnail = new QLabel(groupBox10);
    pixmapThumbnail->setObjectName(QString::fromUtf8("pixmapThumbnail"));
    pixmapThumbnail->setMinimumSize(QSize(120, 120));
    pixmapThumbnail->setFrameShape(QFrame::StyledPanel);
    pixmapThumbnail->setScaledContents(true);

    gridLayout6->addWidget(pixmapThumbnail, 1, 0, 1, 1);


    hboxLayout2->addWidget(groupBox10);

    groupBox9 = new Q3GroupBox(tabPageGeneral);
    groupBox9->setObjectName(QString::fromUtf8("groupBox9"));
    groupBox9->setOrientation(Qt::Vertical);
    groupBox9->setColumnLayout(0, Qt::Vertical);
    groupBox9->layout()->setSpacing(6);
    groupBox9->layout()->setMargin(11);
    gridLayout7 = new QGridLayout();
    QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(groupBox9->layout());
    if (boxlayout1)
        boxlayout1->addLayout(gridLayout7);
    gridLayout7->setAlignment(Qt::AlignTop);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    spacerItem7 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout7->addItem(spacerItem7, 0, 0, 1, 1);

    pixmapLegend = new QLabel(groupBox9);
    pixmapLegend->setObjectName(QString::fromUtf8("pixmapLegend"));
    pixmapLegend->setMinimumSize(QSize(120, 120));
    pixmapLegend->setFrameShape(QFrame::Box);
    pixmapLegend->setScaledContents(true);

    gridLayout7->addWidget(pixmapLegend, 1, 0, 1, 1);


    hboxLayout2->addWidget(groupBox9);

    groupBox8 = new Q3GroupBox(tabPageGeneral);
    groupBox8->setObjectName(QString::fromUtf8("groupBox8"));
    groupBox8->setOrientation(Qt::Vertical);
    groupBox8->setColumnLayout(0, Qt::Vertical);
    groupBox8->layout()->setSpacing(6);
    groupBox8->layout()->setMargin(11);
    gridLayout8 = new QGridLayout();
    QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(groupBox8->layout());
    if (boxlayout2)
        boxlayout2->addLayout(gridLayout8);
    gridLayout8->setAlignment(Qt::AlignTop);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    spacerItem8 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout8->addItem(spacerItem8, 0, 0, 1, 1);

    pixmapPalette = new QLabel(groupBox8);
    pixmapPalette->setObjectName(QString::fromUtf8("pixmapPalette"));
    pixmapPalette->setMinimumSize(QSize(120, 120));
    pixmapPalette->setFrameShape(QFrame::Box);
    pixmapPalette->setScaledContents(true);

    gridLayout8->addWidget(pixmapPalette, 1, 0, 1, 1);


    hboxLayout2->addWidget(groupBox8);


    gridLayout5->addLayout(hboxLayout2, 5, 0, 1, 3);

    lblDisplayName = new QLabel(tabPageGeneral);
    lblDisplayName->setObjectName(QString::fromUtf8("lblDisplayName"));

    gridLayout5->addWidget(lblDisplayName, 0, 0, 1, 1);

    leDisplayName = new QLineEdit(tabPageGeneral);
    leDisplayName->setObjectName(QString::fromUtf8("leDisplayName"));

    gridLayout5->addWidget(leDisplayName, 0, 1, 1, 2);

    leLayerSource = new QLineEdit(tabPageGeneral);
    leLayerSource->setObjectName(QString::fromUtf8("leLayerSource"));
    leLayerSource->setEnabled(false);

    gridLayout5->addWidget(leLayerSource, 1, 1, 1, 2);

    lblLayerSource = new QLabel(tabPageGeneral);
    lblLayerSource->setObjectName(QString::fromUtf8("lblLayerSource"));

    gridLayout5->addWidget(lblLayerSource, 1, 0, 1, 1);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(11);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    lblColumns = new QLabel(tabPageGeneral);
    lblColumns->setObjectName(QString::fromUtf8("lblColumns"));

    hboxLayout3->addWidget(lblColumns);

    lblRows = new QLabel(tabPageGeneral);
    lblRows->setObjectName(QString::fromUtf8("lblRows"));

    hboxLayout3->addWidget(lblRows);

    lblNoData = new QLabel(tabPageGeneral);
    lblNoData->setObjectName(QString::fromUtf8("lblNoData"));

    hboxLayout3->addWidget(lblNoData);


    gridLayout5->addLayout(hboxLayout3, 2, 2, 1, 1);

    cboxShowDebugInfo = new QCheckBox(tabPageGeneral);
    cboxShowDebugInfo->setObjectName(QString::fromUtf8("cboxShowDebugInfo"));

    gridLayout5->addWidget(cboxShowDebugInfo, 2, 0, 1, 2);

    chkUseScaleDependentRendering = new QGroupBox(tabPageGeneral);
    chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
    chkUseScaleDependentRendering->setCheckable(true);
    gridLayout9 = new QGridLayout(chkUseScaleDependentRendering);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(11);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    spinMaximumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMaximumScale->setObjectName(QString::fromUtf8("spinMaximumScale"));
    spinMaximumScale->setMaximum(100000000);
    spinMaximumScale->setMinimum(1);

    gridLayout9->addWidget(spinMaximumScale, 0, 3, 1, 1);

    textLabel1_2_2_2 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));

    gridLayout9->addWidget(textLabel1_2_2_2, 0, 2, 1, 1);

    spinMinimumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMinimumScale->setObjectName(QString::fromUtf8("spinMinimumScale"));
    spinMinimumScale->setMaximum(100000000);
    spinMinimumScale->setMinimum(1);

    gridLayout9->addWidget(spinMinimumScale, 0, 1, 1, 1);

    textLabel1_3 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout9->addWidget(textLabel1_3, 0, 0, 1, 1);


    gridLayout5->addWidget(chkUseScaleDependentRendering, 3, 0, 1, 3);

    grpSRS = new QGroupBox(tabPageGeneral);
    grpSRS->setObjectName(QString::fromUtf8("grpSRS"));
    gridLayout10 = new QGridLayout(grpSRS);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(11);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    pbnChangeSpatialRefSys = new QPushButton(grpSRS);
    pbnChangeSpatialRefSys->setObjectName(QString::fromUtf8("pbnChangeSpatialRefSys"));

    gridLayout10->addWidget(pbnChangeSpatialRefSys, 0, 1, 1, 1);

    leSpatialRefSys = new QLineEdit(grpSRS);
    leSpatialRefSys->setObjectName(QString::fromUtf8("leSpatialRefSys"));
    leSpatialRefSys->setReadOnly(true);

    gridLayout10->addWidget(leSpatialRefSys, 0, 0, 1, 1);


    gridLayout5->addWidget(grpSRS, 4, 0, 1, 3);

    tabBar->addTab(tabPageGeneral, QString());
    tabPageMetadata = new QWidget();
    tabPageMetadata->setObjectName(QString::fromUtf8("tabPageMetadata"));
    gridLayout11 = new QGridLayout(tabPageMetadata);
    gridLayout11->setSpacing(6);
    gridLayout11->setMargin(11);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    txtbMetadata = new QTextBrowser(tabPageMetadata);
    txtbMetadata->setObjectName(QString::fromUtf8("txtbMetadata"));
    txtbMetadata->setAutoFormatting(QTextEdit::AutoAll);

    gridLayout11->addWidget(txtbMetadata, 0, 0, 1, 1);

    tabBar->addTab(tabPageMetadata, QString());
    tabPagePyramids = new QWidget();
    tabPagePyramids->setObjectName(QString::fromUtf8("tabPagePyramids"));
    layoutWidget = new QWidget(tabPagePyramids);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(9, 490, 592, 51));
    hboxLayout4 = new QHBoxLayout(layoutWidget);
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(11);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    hboxLayout4->setContentsMargins(0, 0, 0, 0);
    spacerItem9 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout4->addItem(spacerItem9);

    textLabel4_2 = new QLabel(layoutWidget);
    textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

    hboxLayout4->addWidget(textLabel4_2);

    cboResamplingMethod = new QComboBox(layoutWidget);
    cboResamplingMethod->setObjectName(QString::fromUtf8("cboResamplingMethod"));

    hboxLayout4->addWidget(cboResamplingMethod);

    buttonBuildPyramids = new QPushButton(layoutWidget);
    buttonBuildPyramids->setObjectName(QString::fromUtf8("buttonBuildPyramids"));

    hboxLayout4->addWidget(buttonBuildPyramids);

    layoutWidget1 = new QWidget(tabPagePyramids);
    layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
    layoutWidget1->setGeometry(QRect(481, 9, 144, 471));
    vboxLayout = new QVBoxLayout(layoutWidget1);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    textLabel5 = new QLabel(layoutWidget1);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
    textLabel5->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(textLabel5);

    lbxPyramidResolutions = new Q3ListBox(layoutWidget1);
    lbxPyramidResolutions->setObjectName(QString::fromUtf8("lbxPyramidResolutions"));
    sizePolicy2.setHeightForWidth(lbxPyramidResolutions->sizePolicy().hasHeightForWidth());
    lbxPyramidResolutions->setSizePolicy(sizePolicy2);
    lbxPyramidResolutions->setMaximumSize(QSize(150, 32767));
    lbxPyramidResolutions->setSelectionMode(Q3ListBox::Multi);

    vboxLayout->addWidget(lbxPyramidResolutions);

    textEdit5 = new Q3TextEdit(tabPagePyramids);
    textEdit5->setObjectName(QString::fromUtf8("textEdit5"));
    textEdit5->setGeometry(QRect(9, 9, 466, 475));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(5);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textEdit5->sizePolicy().hasHeightForWidth());
    textEdit5->setSizePolicy(sizePolicy3);
    textEdit5->setWordWrap(Q3TextEdit::WidgetWidth);
    tabBar->addTab(tabPagePyramids, QString());
    tabPageHistogram = new QWidget();
    tabPageHistogram->setObjectName(QString::fromUtf8("tabPageHistogram"));
    gridLayout12 = new QGridLayout(tabPageHistogram);
    gridLayout12->setSpacing(6);
    gridLayout12->setMargin(11);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    pixHistogram = new QLabel(tabPageHistogram);
    pixHistogram->setObjectName(QString::fromUtf8("pixHistogram"));
    sizePolicy.setHeightForWidth(pixHistogram->sizePolicy().hasHeightForWidth());
    pixHistogram->setSizePolicy(sizePolicy);
    pixHistogram->setMinimumSize(QSize(200, 200));
    pixHistogram->setFrameShape(QFrame::Box);
    pixHistogram->setScaledContents(true);
    pixHistogram->setMargin(0);

    gridLayout12->addWidget(pixHistogram, 0, 0, 1, 1);

    grpHistCharType = new QGroupBox(tabPageHistogram);
    grpHistCharType->setObjectName(QString::fromUtf8("grpHistCharType"));
    gridLayout13 = new QGridLayout(grpHistCharType);
    gridLayout13->setSpacing(6);
    gridLayout13->setMargin(11);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    radHistTypeLine = new QRadioButton(grpHistCharType);
    radHistTypeLine->setObjectName(QString::fromUtf8("radHistTypeLine"));
    radHistTypeLine->setChecked(true);

    gridLayout13->addWidget(radHistTypeLine, 0, 1, 1, 1);

    radHistTypeBar = new QRadioButton(grpHistCharType);
    radHistTypeBar->setObjectName(QString::fromUtf8("radHistTypeBar"));

    gridLayout13->addWidget(radHistTypeBar, 0, 0, 1, 1);


    gridLayout12->addWidget(grpHistCharType, 1, 0, 1, 1);

    gridLayout14 = new QGridLayout();
    gridLayout14->setSpacing(6);
    gridLayout14->setMargin(11);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    lstHistogramLabels = new Q3ListBox(tabPageHistogram);
    lstHistogramLabels->setObjectName(QString::fromUtf8("lstHistogramLabels"));
    lstHistogramLabels->setMaximumSize(QSize(32767, 32767));
    lstHistogramLabels->setSelectionMode(Q3ListBox::Multi);

    gridLayout14->addWidget(lstHistogramLabels, 0, 0, 2, 1);

    groupBox = new QGroupBox(tabPageHistogram);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout15 = new QGridLayout(groupBox);
    gridLayout15->setSpacing(6);
    gridLayout15->setMargin(11);
    gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout15->addWidget(textLabel1_2, 0, 0, 1, 1);

    chkHistIgnoreOutOfRange = new QCheckBox(groupBox);
    chkHistIgnoreOutOfRange->setObjectName(QString::fromUtf8("chkHistIgnoreOutOfRange"));

    gridLayout15->addWidget(chkHistIgnoreOutOfRange, 1, 0, 1, 2);

    chkHistAllowApproximation = new QCheckBox(groupBox);
    chkHistAllowApproximation->setObjectName(QString::fromUtf8("chkHistAllowApproximation"));
    chkHistAllowApproximation->setChecked(true);

    gridLayout15->addWidget(chkHistAllowApproximation, 2, 0, 1, 2);

    spinHistBinCount = new QSpinBox(groupBox);
    spinHistBinCount->setObjectName(QString::fromUtf8("spinHistBinCount"));
    spinHistBinCount->setMaximum(1024);
    spinHistBinCount->setMinimum(8);
    spinHistBinCount->setSingleStep(8);
    spinHistBinCount->setValue(64);

    gridLayout15->addWidget(spinHistBinCount, 0, 1, 1, 1);


    gridLayout14->addWidget(groupBox, 0, 1, 1, 1);

    pbnHistRefresh = new QPushButton(tabPageHistogram);
    pbnHistRefresh->setObjectName(QString::fromUtf8("pbnHistRefresh"));

    gridLayout14->addWidget(pbnHistRefresh, 1, 1, 1, 1);


    gridLayout12->addLayout(gridLayout14, 2, 0, 1, 1);

    tabBar->addTab(tabPageHistogram, QString());

    gridLayout->addWidget(tabBar, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsRasterLayerPropertiesBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    textLabel2_4_2->setBuddy(sliderTransparency);
    textLabel2_6_2_2->setBuddy(cboColorMap);
    textLabel2_6_2->setBuddy(cboStdDev);
    textLabel2_6->setBuddy(cboGray);
    textLabel2_2->setBuddy(cboGreen);
    textLabel2->setBuddy(cboRed);
    textLabel2_3->setBuddy(cboBlue);
    lblDisplayName->setBuddy(leDisplayName);
    lblLayerSource->setBuddy(leLayerSource);
    textLabel1_2_2_2->setBuddy(spinMaximumScale);
    textLabel1_3->setBuddy(spinMinimumScale);
    textLabel4_2->setBuddy(cboResamplingMethod);
    QWidget::setTabOrder(tabBar, rbtnThreeBand);
    QWidget::setTabOrder(rbtnThreeBand, rbtnSingleBand);
    QWidget::setTabOrder(rbtnSingleBand, cboxInvertColorMap);
    QWidget::setTabOrder(cboxInvertColorMap, sliderTransparency);
    QWidget::setTabOrder(sliderTransparency, cboRed);
    QWidget::setTabOrder(cboRed, cboGreen);
    QWidget::setTabOrder(cboGreen, cboBlue);
    QWidget::setTabOrder(cboBlue, cboGray);
    QWidget::setTabOrder(cboGray, cboStdDev);
    QWidget::setTabOrder(cboStdDev, cboColorMap);
    QWidget::setTabOrder(cboColorMap, leDisplayName);
    QWidget::setTabOrder(leDisplayName, leLayerSource);
    QWidget::setTabOrder(leLayerSource, cboxShowDebugInfo);
    QWidget::setTabOrder(cboxShowDebugInfo, spinMinimumScale);
    QWidget::setTabOrder(spinMinimumScale, spinMaximumScale);
    QWidget::setTabOrder(spinMaximumScale, leSpatialRefSys);
    QWidget::setTabOrder(leSpatialRefSys, pbnChangeSpatialRefSys);
    QWidget::setTabOrder(pbnChangeSpatialRefSys, cboResamplingMethod);
    QWidget::setTabOrder(cboResamplingMethod, buttonBuildPyramids);
    QWidget::setTabOrder(buttonBuildPyramids, radHistTypeBar);
    QWidget::setTabOrder(radHistTypeBar, radHistTypeLine);
    QWidget::setTabOrder(radHistTypeLine, spinHistBinCount);
    QWidget::setTabOrder(spinHistBinCount, chkHistIgnoreOutOfRange);
    QWidget::setTabOrder(chkHistIgnoreOutOfRange, chkHistAllowApproximation);
    QWidget::setTabOrder(chkHistAllowApproximation, pbnHistRefresh);

    retranslateUi(QgsRasterLayerPropertiesBase);
    QObject::connect(rbtnThreeBand, SIGNAL(toggled(bool)), grpBoxGrayscale, SLOT(setDisabled(bool)));
    QObject::connect(rbtnThreeBand, SIGNAL(toggled(bool)), grpBoxRGB, SLOT(setEnabled(bool)));
    QObject::connect(rbtnSingleBand, SIGNAL(toggled(bool)), grpBoxRGB, SLOT(setDisabled(bool)));
    QObject::connect(rbtnSingleBand, SIGNAL(toggled(bool)), grpBoxGrayscale, SLOT(setEnabled(bool)));

    tabBar->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsRasterLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerPropertiesBase)
    {
    QgsRasterLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Raster Layer Properties", 0, QApplication::UnicodeUTF8));
    bgrpShowAs->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Display", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "None", 0, QApplication::UnicodeUTF8));
    lblTransparencyPercent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "0%", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<p align=\"right\">Full</p>", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    cboxInvertColorMap->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Invert Color Map", 0, QApplication::UnicodeUTF8));
    txtSymologyNotes->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\"font-size:9pt;font-family:Sans Serif\">\n"
"<p style=\"margin-top:14px\" dir=\"ltr\"><span style=\"font-weight:600\">Notes</span></p>\n"
"</body></html>\n"
"", 0, QApplication::UnicodeUTF8));
    rbtnThreeBand->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Color Image", 0, QApplication::UnicodeUTF8));
    rbtnSingleBand->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Grayscale Image", 0, QApplication::UnicodeUTF8));
    grpBoxGrayscale->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Grayscale Image", 0, QApplication::UnicodeUTF8));
    textLabel2_6_2_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Color Map", 0, QApplication::UnicodeUTF8));
    textLabel2_6_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Std Deviations", 0, QApplication::UnicodeUTF8));
    textLabel2_6->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Gray", 0, QApplication::UnicodeUTF8));
    grpBoxRGB->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Color Image", 0, QApplication::UnicodeUTF8));
    textLabel2_4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Color", 0, QApplication::UnicodeUTF8));
    textLabel2_5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Band", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<b><font color=\"#00ff00\">Green</font></b>", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<b><font color=\"#ff0000\">Red</font></b>", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<b><font color=\"#0000ff\">Blue</font></b>", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparent", 0, QApplication::UnicodeUTF8));
    tabBar->setTabText(tabBar->indexOf(tabPageSymbology), QApplication::translate("QgsRasterLayerPropertiesBase", "Symbology", 0, QApplication::UnicodeUTF8));
    groupBox10->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Thumbnail", 0, QApplication::UnicodeUTF8));
    groupBox9->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Legend:", 0, QApplication::UnicodeUTF8));
    groupBox8->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Palette:", 0, QApplication::UnicodeUTF8));
    lblDisplayName->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Display Name:", 0, QApplication::UnicodeUTF8));
    lblLayerSource->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer Source:", 0, QApplication::UnicodeUTF8));
    lblColumns->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Columns:", 0, QApplication::UnicodeUTF8));
    lblRows->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Rows:", 0, QApplication::UnicodeUTF8));
    lblNoData->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "No Data:", 0, QApplication::UnicodeUTF8));
    cboxShowDebugInfo->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "DebugInfo", 0, QApplication::UnicodeUTF8));
    chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Scale Dependent Visibility", 0, QApplication::UnicodeUTF8));
    spinMaximumScale->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Maximum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Maximum 1:", 0, QApplication::UnicodeUTF8));
    spinMinimumScale->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Minimum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Minimum 1:", 0, QApplication::UnicodeUTF8));
    grpSRS->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Spatial Reference System", 0, QApplication::UnicodeUTF8));
    pbnChangeSpatialRefSys->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Change", 0, QApplication::UnicodeUTF8));
    tabBar->setTabText(tabBar->indexOf(tabPageGeneral), QApplication::translate("QgsRasterLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
    tabBar->setTabText(tabBar->indexOf(tabPageMetadata), QApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
    textLabel4_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling Method", 0, QApplication::UnicodeUTF8));
    cboResamplingMethod->clear();
    cboResamplingMethod->insertItems(0, QStringList()
     << QApplication::translate("QgsRasterLayerPropertiesBase", "Average", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsRasterLayerPropertiesBase", "Nearest Neighbour", 0, QApplication::UnicodeUTF8)
    );
    buttonBuildPyramids->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Build Pyramids", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramid Resolutions", 0, QApplication::UnicodeUTF8));
    textEdit5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\"font-size:9pt;font-family:Sans Serif\">\n"
"<p style=\"margin-top:18px\" dir=\"ltr\"><span style=\"font-size:14pt;font-weight:600\">Description</span></p>\n"
"<p dir=\"ltr\">Large resolution raster layers can slow navigation in QGIS. By creating lower resolution copies of the data (pyramids) performance can be considerably improved as QGIS selects the most suitable resolution to use depending on the level of zoom. You must have write access in the directory where the original data is stored to build pyramids. </p>\n"
"<p dir=\"ltr\"><span style=\"color:#ff0000\">Please note that building pyramids may alter the original data file and once created they cannot be removed.</span></p>\n"
"<p dir=\"ltr\"><span style=\"color:#ff0000\">Please note that building pyramids could corrupt your image - always make a backup of your data first!</span></p>\n"
"</body></html>\n"
"", 0, QApplication::UnicodeUTF8));
    tabBar->setTabText(tabBar->indexOf(tabPagePyramids), QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", 0, QApplication::UnicodeUTF8));
    grpHistCharType->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Chart Type", 0, QApplication::UnicodeUTF8));
    radHistTypeLine->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Line Graph", 0, QApplication::UnicodeUTF8));
    radHistTypeBar->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Bar Chart", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Column Count:", 0, QApplication::UnicodeUTF8));
    chkHistIgnoreOutOfRange->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Out Of Range OK?", 0, QApplication::UnicodeUTF8));
    chkHistAllowApproximation->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Allow Approximation", 0, QApplication::UnicodeUTF8));
    pbnHistRefresh->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Refresh", 0, QApplication::UnicodeUTF8));
    tabBar->setTabText(tabBar->indexOf(tabPageHistogram), QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsRasterLayerPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerPropertiesBase: public Ui_QgsRasterLayerPropertiesBase {};
} // namespace Ui

#endif // UI_QGSRASTERLAYERPROPERTIESBASE_H
