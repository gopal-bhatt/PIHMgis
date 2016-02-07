/********************************************************************************
** Form generated from reading ui file 'qgscomposerbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERBASE_H
#define UI_QGSCOMPOSERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsComposerBase
{
public:
    QAction *mActionPrint;
    QAction *mActionZoomAll;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionAddNewMap;
    QAction *mActionAddNewLabel;
    QAction *mActionAddNewLegend;
    QAction *mActionSelectMoveItem;
    QAction *mActionExportAsImage;
    QAction *mActionExportAsSVG;
    QAction *mActionAddNewScalebar;
    QAction *mActionRefreshView;
    QAction *mActionAddImage;
    QAction *mActionMoveItemContent;
    QAction *mActionGroupItems;
    QAction *mActionUngroupItems;
    QAction *mActionRaiseItems;
    QAction *mActionLowerItems;
    QAction *mActionMoveItemsToTop;
    QAction *mActionMoveItemsToBottom;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *mSplitter;
    QFrame *mViewFrame;
    QTabWidget *mOptionsTabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QFrame *mCompositionOptionsFrame;
    QComboBox *mCompositionNameComboBox;
    QLabel *textLabel1;
    QWidget *tab_2;
    QGridLayout *gridLayout1;
    QStackedWidget *mItemStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *hboxLayout;
    QPushButton *helpPButton;
    QSpacerItem *spacerItem;
    QPushButton *closePButton;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsComposerBase)
    {
    if (QgsComposerBase->objectName().isEmpty())
        QgsComposerBase->setObjectName(QString::fromUtf8("QgsComposerBase"));
    QgsComposerBase->resize(710, 609);
    QgsComposerBase->setMouseTracking(true);
    mActionPrint = new QAction(QgsComposerBase);
    mActionPrint->setObjectName(QString::fromUtf8("mActionPrint"));
    mActionPrint->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionFilePrint.png")));
    mActionZoomAll = new QAction(QgsComposerBase);
    mActionZoomAll->setObjectName(QString::fromUtf8("mActionZoomAll"));
    mActionZoomAll->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionZoomFullExtent.png")));
    mActionZoomIn = new QAction(QgsComposerBase);
    mActionZoomIn->setObjectName(QString::fromUtf8("mActionZoomIn"));
    mActionZoomIn->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionZoomIn.png")));
    mActionZoomOut = new QAction(QgsComposerBase);
    mActionZoomOut->setObjectName(QString::fromUtf8("mActionZoomOut"));
    mActionZoomOut->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionZoomOut.png")));
    mActionAddNewMap = new QAction(QgsComposerBase);
    mActionAddNewMap->setObjectName(QString::fromUtf8("mActionAddNewMap"));
    mActionAddNewMap->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionAddRasterLayer.png")));
    mActionAddNewLabel = new QAction(QgsComposerBase);
    mActionAddNewLabel->setObjectName(QString::fromUtf8("mActionAddNewLabel"));
    mActionAddNewLabel->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionLabel.png")));
    mActionAddNewLegend = new QAction(QgsComposerBase);
    mActionAddNewLegend->setObjectName(QString::fromUtf8("mActionAddNewLegend"));
    mActionAddNewLegend->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionAddLegend.png")));
    mActionSelectMoveItem = new QAction(QgsComposerBase);
    mActionSelectMoveItem->setObjectName(QString::fromUtf8("mActionSelectMoveItem"));
    mActionSelectMoveItem->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionPan.png")));
    mActionExportAsImage = new QAction(QgsComposerBase);
    mActionExportAsImage->setObjectName(QString::fromUtf8("mActionExportAsImage"));
    mActionExportAsImage->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionExportMapServer.png")));
    mActionExportAsSVG = new QAction(QgsComposerBase);
    mActionExportAsSVG->setObjectName(QString::fromUtf8("mActionExportAsSVG"));
    mActionExportAsSVG->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionSaveAsSVG.png")));
    mActionAddNewScalebar = new QAction(QgsComposerBase);
    mActionAddNewScalebar->setObjectName(QString::fromUtf8("mActionAddNewScalebar"));
    mActionAddNewScalebar->setIcon(QIcon(QString::fromUtf8("../../plugins/scale_bar/icon.xpm")));
    mActionRefreshView = new QAction(QgsComposerBase);
    mActionRefreshView->setObjectName(QString::fromUtf8("mActionRefreshView"));
    mActionRefreshView->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionDraw.png")));
    mActionAddImage = new QAction(QgsComposerBase);
    mActionAddImage->setObjectName(QString::fromUtf8("mActionAddImage"));
    mActionAddImage->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionSaveMapAsImage.png")));
    mActionMoveItemContent = new QAction(QgsComposerBase);
    mActionMoveItemContent->setObjectName(QString::fromUtf8("mActionMoveItemContent"));
    mActionGroupItems = new QAction(QgsComposerBase);
    mActionGroupItems->setObjectName(QString::fromUtf8("mActionGroupItems"));
    mActionUngroupItems = new QAction(QgsComposerBase);
    mActionUngroupItems->setObjectName(QString::fromUtf8("mActionUngroupItems"));
    mActionRaiseItems = new QAction(QgsComposerBase);
    mActionRaiseItems->setObjectName(QString::fromUtf8("mActionRaiseItems"));
    mActionLowerItems = new QAction(QgsComposerBase);
    mActionLowerItems->setObjectName(QString::fromUtf8("mActionLowerItems"));
    mActionMoveItemsToTop = new QAction(QgsComposerBase);
    mActionMoveItemsToTop->setObjectName(QString::fromUtf8("mActionMoveItemsToTop"));
    mActionMoveItemsToBottom = new QAction(QgsComposerBase);
    mActionMoveItemsToBottom->setObjectName(QString::fromUtf8("mActionMoveItemsToBottom"));
    centralwidget = new QWidget(QgsComposerBase);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setMouseTracking(true);
    vboxLayout = new QVBoxLayout(centralwidget);
    vboxLayout->setSpacing(6);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(9, 9, 9, 9);
    mSplitter = new QSplitter(centralwidget);
    mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
    mSplitter->setMouseTracking(true);
    mSplitter->setOrientation(Qt::Horizontal);
    mViewFrame = new QFrame(mSplitter);
    mViewFrame->setObjectName(QString::fromUtf8("mViewFrame"));
    mViewFrame->setMouseTracking(true);
    mViewFrame->setFrameShape(QFrame::StyledPanel);
    mViewFrame->setFrameShadow(QFrame::Raised);
    mSplitter->addWidget(mViewFrame);
    mOptionsTabWidget = new QTabWidget(mSplitter);
    mOptionsTabWidget->setObjectName(QString::fromUtf8("mOptionsTabWidget"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(mOptionsTabWidget->sizePolicy().hasHeightForWidth());
    mOptionsTabWidget->setSizePolicy(sizePolicy);
    mOptionsTabWidget->setMinimumSize(QSize(150, 10));
    mOptionsTabWidget->setMaximumSize(QSize(32767, 32767));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout = new QGridLayout(tab);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    mCompositionOptionsFrame = new QFrame(tab);
    mCompositionOptionsFrame->setObjectName(QString::fromUtf8("mCompositionOptionsFrame"));
    mCompositionOptionsFrame->setFrameShape(QFrame::StyledPanel);
    mCompositionOptionsFrame->setFrameShadow(QFrame::Raised);

    gridLayout->addWidget(mCompositionOptionsFrame, 1, 0, 1, 2);

    mCompositionNameComboBox = new QComboBox(tab);
    mCompositionNameComboBox->setObjectName(QString::fromUtf8("mCompositionNameComboBox"));
    mCompositionNameComboBox->setEnabled(false);
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mCompositionNameComboBox->sizePolicy().hasHeightForWidth());
    mCompositionNameComboBox->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mCompositionNameComboBox, 0, 1, 1, 1);

    textLabel1 = new QLabel(tab);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy2);

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    mOptionsTabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout1 = new QGridLayout(tab_2);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    mItemStackedWidget = new QStackedWidget(tab_2);
    mItemStackedWidget->setObjectName(QString::fromUtf8("mItemStackedWidget"));
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    mItemStackedWidget->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    mItemStackedWidget->addWidget(page_2);

    gridLayout1->addWidget(mItemStackedWidget, 0, 0, 1, 1);

    mOptionsTabWidget->addTab(tab_2, QString());
    mSplitter->addWidget(mOptionsTabWidget);

    vboxLayout->addWidget(mSplitter);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    helpPButton = new QPushButton(centralwidget);
    helpPButton->setObjectName(QString::fromUtf8("helpPButton"));

    hboxLayout->addWidget(helpPButton);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    closePButton = new QPushButton(centralwidget);
    closePButton->setObjectName(QString::fromUtf8("closePButton"));

    hboxLayout->addWidget(closePButton);


    vboxLayout->addLayout(hboxLayout);

    QgsComposerBase->setCentralWidget(centralwidget);
    toolBar = new QToolBar(QgsComposerBase);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setOrientation(Qt::Horizontal);
    QgsComposerBase->addToolBar(Qt::TopToolBarArea, toolBar);
    QWidget::setTabOrder(mOptionsTabWidget, mCompositionNameComboBox);
    QWidget::setTabOrder(mCompositionNameComboBox, mSplitter);

    toolBar->addAction(mActionExportAsImage);
    toolBar->addAction(mActionExportAsSVG);
    toolBar->addAction(mActionPrint);
    toolBar->addSeparator();
    toolBar->addAction(mActionZoomAll);
    toolBar->addAction(mActionZoomIn);
    toolBar->addAction(mActionZoomOut);
    toolBar->addAction(mActionRefreshView);
    toolBar->addSeparator();
    toolBar->addAction(mActionAddNewMap);
    toolBar->addAction(mActionAddImage);
    toolBar->addAction(mActionAddNewLabel);
    toolBar->addAction(mActionAddNewLegend);
    toolBar->addAction(mActionAddNewScalebar);
    toolBar->addAction(mActionSelectMoveItem);
    toolBar->addAction(mActionMoveItemContent);
    toolBar->addAction(mActionGroupItems);
    toolBar->addAction(mActionUngroupItems);
    toolBar->addAction(mActionRaiseItems);
    toolBar->addAction(mActionLowerItems);
    toolBar->addAction(mActionMoveItemsToTop);
    toolBar->addAction(mActionMoveItemsToBottom);

    retranslateUi(QgsComposerBase);

    mOptionsTabWidget->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(QgsComposerBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsComposerBase)
    {
    QgsComposerBase->setWindowTitle(QApplication::translate("QgsComposerBase", "MainWindow", 0, QApplication::UnicodeUTF8));
    mActionPrint->setText(QApplication::translate("QgsComposerBase", "&Print...", 0, QApplication::UnicodeUTF8));
    mActionZoomAll->setText(QApplication::translate("QgsComposerBase", "Zoom Full", 0, QApplication::UnicodeUTF8));
    mActionZoomIn->setText(QApplication::translate("QgsComposerBase", "Zoom In", 0, QApplication::UnicodeUTF8));
    mActionZoomOut->setText(QApplication::translate("QgsComposerBase", "Zoom Out", 0, QApplication::UnicodeUTF8));
    mActionAddNewMap->setText(QApplication::translate("QgsComposerBase", "Add Map", 0, QApplication::UnicodeUTF8));
    mActionAddNewMap->setToolTip(QApplication::translate("QgsComposerBase", "Add new map", 0, QApplication::UnicodeUTF8));
    mActionAddNewLabel->setText(QApplication::translate("QgsComposerBase", "Add Label", 0, QApplication::UnicodeUTF8));
    mActionAddNewLabel->setToolTip(QApplication::translate("QgsComposerBase", "Add new label", 0, QApplication::UnicodeUTF8));
    mActionAddNewLegend->setText(QApplication::translate("QgsComposerBase", "Add Vector Legend", 0, QApplication::UnicodeUTF8));
    mActionAddNewLegend->setToolTip(QApplication::translate("QgsComposerBase", "Add new vect legend", 0, QApplication::UnicodeUTF8));
    mActionSelectMoveItem->setText(QApplication::translate("QgsComposerBase", "Move Item", 0, QApplication::UnicodeUTF8));
    mActionSelectMoveItem->setToolTip(QApplication::translate("QgsComposerBase", "Select/Move item", 0, QApplication::UnicodeUTF8));
    mActionExportAsImage->setText(QApplication::translate("QgsComposerBase", "Export as Image...", 0, QApplication::UnicodeUTF8));
    mActionExportAsSVG->setText(QApplication::translate("QgsComposerBase", "Export as SVG...", 0, QApplication::UnicodeUTF8));
    mActionAddNewScalebar->setText(QApplication::translate("QgsComposerBase", "Add Scalebar", 0, QApplication::UnicodeUTF8));
    mActionAddNewScalebar->setToolTip(QApplication::translate("QgsComposerBase", "Add new scalebar", 0, QApplication::UnicodeUTF8));
    mActionRefreshView->setText(QApplication::translate("QgsComposerBase", "Refresh", 0, QApplication::UnicodeUTF8));
    mActionRefreshView->setToolTip(QApplication::translate("QgsComposerBase", "Refresh view", 0, QApplication::UnicodeUTF8));
    mActionAddImage->setText(QApplication::translate("QgsComposerBase", "Add Image", 0, QApplication::UnicodeUTF8));
    mActionMoveItemContent->setText(QApplication::translate("QgsComposerBase", "Move Content", 0, QApplication::UnicodeUTF8));
    mActionMoveItemContent->setToolTip(QApplication::translate("QgsComposerBase", "Move item content", 0, QApplication::UnicodeUTF8));
    mActionGroupItems->setText(QApplication::translate("QgsComposerBase", "Group", 0, QApplication::UnicodeUTF8));
    mActionGroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Group items", 0, QApplication::UnicodeUTF8));
    mActionUngroupItems->setText(QApplication::translate("QgsComposerBase", "Ungroup", 0, QApplication::UnicodeUTF8));
    mActionUngroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Ungroup items", 0, QApplication::UnicodeUTF8));
    mActionRaiseItems->setText(QApplication::translate("QgsComposerBase", "Raise", 0, QApplication::UnicodeUTF8));
    mActionRaiseItems->setToolTip(QApplication::translate("QgsComposerBase", "Raise selected items", 0, QApplication::UnicodeUTF8));
    mActionLowerItems->setText(QApplication::translate("QgsComposerBase", "Lower", 0, QApplication::UnicodeUTF8));
    mActionLowerItems->setToolTip(QApplication::translate("QgsComposerBase", "Lower selected items", 0, QApplication::UnicodeUTF8));
    mActionMoveItemsToTop->setText(QApplication::translate("QgsComposerBase", "Bring to Front", 0, QApplication::UnicodeUTF8));
    mActionMoveItemsToTop->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to top", 0, QApplication::UnicodeUTF8));
    mActionMoveItemsToBottom->setText(QApplication::translate("QgsComposerBase", "Send to Back", 0, QApplication::UnicodeUTF8));
    mActionMoveItemsToBottom->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to bottom", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerBase", "Composition", 0, QApplication::UnicodeUTF8));
    mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab), QApplication::translate("QgsComposerBase", "General", 0, QApplication::UnicodeUTF8));
    mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab_2), QApplication::translate("QgsComposerBase", "Item", 0, QApplication::UnicodeUTF8));
    helpPButton->setText(QApplication::translate("QgsComposerBase", "Help", 0, QApplication::UnicodeUTF8));
    closePButton->setText(QApplication::translate("QgsComposerBase", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerBase: public Ui_QgsComposerBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERBASE_H
