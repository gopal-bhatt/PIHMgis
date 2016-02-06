/********************************************************************************
** Form generated from reading ui file 'qgscomposerbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERBASE_H
#define UI_QGSCOMPOSERBASE_H

#include <Qt3Support/Q3Frame>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

class Ui_QgsComposerBase
{
public:
    QAction *mActionOpenTemplate;
    QAction *mActionSaveTemplateAs;
    QAction *mActionPrint;
    QAction *mActionZoomAll;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionAddNewMap;
    QAction *mActionAddNewLabel;
    QAction *mActionAddNewVectLegend;
    QAction *mActionSelectMoveItem;
    QAction *mActionExportAsImage;
    QAction *mActionExportAsSVG;
    QAction *mActionAddNewScalebar;
    QAction *mActionRefreshView;
    QAction *mActionAddImage;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *mSplitter;
    Q3Frame *mViewFrame;
    QTabWidget *mOptionsTabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    Q3Frame *mCompositionOptionsFrame;
    QLabel *textLabel1;
    QComboBox *mCompositionNameComboBox;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    Q3Frame *mItemOptionsFrame;
    QPushButton *closePButton;
    QPushButton *helpPButton;
    QSpacerItem *spacerItem;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsComposerBase)
    {
    if (QgsComposerBase->objectName().isEmpty())
        QgsComposerBase->setObjectName(QString::fromUtf8("QgsComposerBase"));
    QgsComposerBase->resize(800, 609);
    mActionOpenTemplate = new QAction(QgsComposerBase);
    mActionOpenTemplate->setObjectName(QString::fromUtf8("mActionOpenTemplate"));
    mActionOpenTemplate->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionFileOpen.png")));
    mActionSaveTemplateAs = new QAction(QgsComposerBase);
    mActionSaveTemplateAs->setObjectName(QString::fromUtf8("mActionSaveTemplateAs"));
    mActionSaveTemplateAs->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionFileSaveAs.png")));
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
    mActionAddNewVectLegend = new QAction(QgsComposerBase);
    mActionAddNewVectLegend->setObjectName(QString::fromUtf8("mActionAddNewVectLegend"));
    mActionAddNewVectLegend->setIcon(QIcon(QString::fromUtf8("../themes/default/mActionAddLegend.png")));
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
    centralwidget = new QWidget(QgsComposerBase);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    gridLayout = new QGridLayout(centralwidget);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mSplitter = new QSplitter(centralwidget);
    mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(mSplitter->sizePolicy().hasHeightForWidth());
    mSplitter->setSizePolicy(sizePolicy);
    mSplitter->setFocusPolicy(Qt::ClickFocus);
    mSplitter->setLineWidth(1);
    mSplitter->setMidLineWidth(0);
    mSplitter->setOrientation(Qt::Horizontal);
    mViewFrame = new Q3Frame(mSplitter);
    mViewFrame->setObjectName(QString::fromUtf8("mViewFrame"));
    sizePolicy.setHeightForWidth(mViewFrame->sizePolicy().hasHeightForWidth());
    mViewFrame->setSizePolicy(sizePolicy);
    mViewFrame->setMinimumSize(QSize(10, 10));
    mViewFrame->setFocusPolicy(Qt::ClickFocus);
    mViewFrame->setFrameShape(QFrame::StyledPanel);
    mViewFrame->setFrameShadow(QFrame::Raised);
    mViewFrame->setLineWidth(1);
    mSplitter->addWidget(mViewFrame);
    mOptionsTabWidget = new QTabWidget(mSplitter);
    mOptionsTabWidget->setObjectName(QString::fromUtf8("mOptionsTabWidget"));
    sizePolicy.setHeightForWidth(mOptionsTabWidget->sizePolicy().hasHeightForWidth());
    mOptionsTabWidget->setSizePolicy(sizePolicy);
    mOptionsTabWidget->setMinimumSize(QSize(150, 10));
    mOptionsTabWidget->setMaximumSize(QSize(300, 32767));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout1 = new QGridLayout(tab);
#ifndef Q_OS_MAC
    gridLayout1->setSpacing(6);
#endif
    gridLayout1->setMargin(8);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    mCompositionOptionsFrame = new Q3Frame(tab);
    mCompositionOptionsFrame->setObjectName(QString::fromUtf8("mCompositionOptionsFrame"));
    sizePolicy.setHeightForWidth(mCompositionOptionsFrame->sizePolicy().hasHeightForWidth());
    mCompositionOptionsFrame->setSizePolicy(sizePolicy);
    mCompositionOptionsFrame->setFrameShape(QFrame::StyledPanel);
    mCompositionOptionsFrame->setFrameShadow(QFrame::Plain);
    mCompositionOptionsFrame->setLineWidth(0);

    gridLayout1->addWidget(mCompositionOptionsFrame, 1, 0, 1, 2);

    textLabel1 = new QLabel(tab);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

    mCompositionNameComboBox = new QComboBox(tab);
    mCompositionNameComboBox->setObjectName(QString::fromUtf8("mCompositionNameComboBox"));
    mCompositionNameComboBox->setEnabled(false);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mCompositionNameComboBox->sizePolicy().hasHeightForWidth());
    mCompositionNameComboBox->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(mCompositionNameComboBox, 0, 1, 1, 1);

    mOptionsTabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout2 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
    gridLayout2->setSpacing(6);
#endif
    gridLayout2->setMargin(8);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    mItemOptionsFrame = new Q3Frame(tab_2);
    mItemOptionsFrame->setObjectName(QString::fromUtf8("mItemOptionsFrame"));
    sizePolicy.setHeightForWidth(mItemOptionsFrame->sizePolicy().hasHeightForWidth());
    mItemOptionsFrame->setSizePolicy(sizePolicy);
    mItemOptionsFrame->setFrameShape(QFrame::StyledPanel);
    mItemOptionsFrame->setFrameShadow(QFrame::Plain);
    mItemOptionsFrame->setLineWidth(0);

    gridLayout2->addWidget(mItemOptionsFrame, 0, 0, 1, 1);

    mOptionsTabWidget->addTab(tab_2, QString());
    mSplitter->addWidget(mOptionsTabWidget);

    gridLayout->addWidget(mSplitter, 0, 0, 1, 3);

    closePButton = new QPushButton(centralwidget);
    closePButton->setObjectName(QString::fromUtf8("closePButton"));

    gridLayout->addWidget(closePButton, 1, 2, 1, 1);

    helpPButton = new QPushButton(centralwidget);
    helpPButton->setObjectName(QString::fromUtf8("helpPButton"));

    gridLayout->addWidget(helpPButton, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 1, 1, 1);

    QgsComposerBase->setCentralWidget(centralwidget);
    toolBar = new QToolBar(QgsComposerBase);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setOrientation(Qt::Horizontal);
    QgsComposerBase->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBar);
    QWidget::setTabOrder(mViewFrame, mOptionsTabWidget);
    QWidget::setTabOrder(mOptionsTabWidget, mCompositionNameComboBox);
    QWidget::setTabOrder(mCompositionNameComboBox, mSplitter);

    toolBar->addAction(mActionOpenTemplate);
    toolBar->addAction(mActionSaveTemplateAs);
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
    toolBar->addAction(mActionAddNewVectLegend);
    toolBar->addAction(mActionAddNewScalebar);
    toolBar->addAction(mActionSelectMoveItem);

    retranslateUi(QgsComposerBase);

    QMetaObject::connectSlotsByName(QgsComposerBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsComposerBase)
    {
    QgsComposerBase->setWindowTitle(QApplication::translate("QgsComposerBase", "MainWindow", 0, QApplication::UnicodeUTF8));
    mActionOpenTemplate->setText(QApplication::translate("QgsComposerBase", "&Open Template ...", 0, QApplication::UnicodeUTF8));
    mActionSaveTemplateAs->setText(QApplication::translate("QgsComposerBase", "Save Template &As...", 0, QApplication::UnicodeUTF8));
    mActionPrint->setText(QApplication::translate("QgsComposerBase", "&Print...", 0, QApplication::UnicodeUTF8));
    mActionZoomAll->setText(QApplication::translate("QgsComposerBase", "Zoom All", 0, QApplication::UnicodeUTF8));
    mActionZoomIn->setText(QApplication::translate("QgsComposerBase", "Zoom In", 0, QApplication::UnicodeUTF8));
    mActionZoomOut->setText(QApplication::translate("QgsComposerBase", "Zoom Out", 0, QApplication::UnicodeUTF8));
    mActionAddNewMap->setText(QApplication::translate("QgsComposerBase", "Add new map", 0, QApplication::UnicodeUTF8));
    mActionAddNewLabel->setText(QApplication::translate("QgsComposerBase", "Add new label", 0, QApplication::UnicodeUTF8));
    mActionAddNewVectLegend->setText(QApplication::translate("QgsComposerBase", "Add new vect legend", 0, QApplication::UnicodeUTF8));
    mActionSelectMoveItem->setText(QApplication::translate("QgsComposerBase", "Select/Move item", 0, QApplication::UnicodeUTF8));
    mActionExportAsImage->setText(QApplication::translate("QgsComposerBase", "Export as image", 0, QApplication::UnicodeUTF8));
    mActionExportAsSVG->setText(QApplication::translate("QgsComposerBase", "Export as SVG", 0, QApplication::UnicodeUTF8));
    mActionAddNewScalebar->setText(QApplication::translate("QgsComposerBase", "Add new scalebar", 0, QApplication::UnicodeUTF8));
    mActionRefreshView->setText(QApplication::translate("QgsComposerBase", "Refresh view", 0, QApplication::UnicodeUTF8));
    mActionAddImage->setText(QApplication::translate("QgsComposerBase", "Add Image", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerBase", "Composition", 0, QApplication::UnicodeUTF8));
    mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab), QApplication::translate("QgsComposerBase", "General", 0, QApplication::UnicodeUTF8));
    mOptionsTabWidget->setTabText(mOptionsTabWidget->indexOf(tab_2), QApplication::translate("QgsComposerBase", "Item", 0, QApplication::UnicodeUTF8));
    closePButton->setText(QApplication::translate("QgsComposerBase", "Close", 0, QApplication::UnicodeUTF8));
    helpPButton->setText(QApplication::translate("QgsComposerBase", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerBase: public Ui_QgsComposerBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERBASE_H
