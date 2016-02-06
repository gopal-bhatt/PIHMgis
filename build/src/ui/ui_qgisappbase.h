/********************************************************************************
** Form generated from reading ui file 'qgisappbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGISAPPBASE_H
#define UI_QGISAPPBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

class Ui_QgisAppBase
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *canvasLegendSplit;
    QSplitter *legendOverviewSplit;
    QToolBox *toolBox;
    QWidget *legendPage;
    QFrame *overviewFrame;
    QTabWidget *tabWidget;
    QWidget *Map_View;

    void setupUi(QMainWindow *QgisAppBase)
    {
    if (QgisAppBase->objectName().isEmpty())
        QgisAppBase->setObjectName(QString::fromUtf8("QgisAppBase"));
    QgisAppBase->resize(604, 391);
    centralWidget = new QWidget(QgisAppBase);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
    centralWidget->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(centralWidget);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    canvasLegendSplit = new QSplitter(centralWidget);
    canvasLegendSplit->setObjectName(QString::fromUtf8("canvasLegendSplit"));
    sizePolicy.setHeightForWidth(canvasLegendSplit->sizePolicy().hasHeightForWidth());
    canvasLegendSplit->setSizePolicy(sizePolicy);
    canvasLegendSplit->setFrameShape(QFrame::NoFrame);
    canvasLegendSplit->setFrameShadow(QFrame::Plain);
    canvasLegendSplit->setLineWidth(1);
    canvasLegendSplit->setOrientation(Qt::Horizontal);
    legendOverviewSplit = new QSplitter(canvasLegendSplit);
    legendOverviewSplit->setObjectName(QString::fromUtf8("legendOverviewSplit"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(legendOverviewSplit->sizePolicy().hasHeightForWidth());
    legendOverviewSplit->setSizePolicy(sizePolicy1);
    legendOverviewSplit->setMinimumSize(QSize(0, 0));
    legendOverviewSplit->setOrientation(Qt::Vertical);
    toolBox = new QToolBox(legendOverviewSplit);
    toolBox->setObjectName(QString::fromUtf8("toolBox"));
    QFont font;
    font.setFamily(QString::fromUtf8("Lucida Grande"));
    font.setPointSize(10);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    toolBox->setFont(font);
    toolBox->setFrameShape(QFrame::NoFrame);
    toolBox->setFrameShadow(QFrame::Raised);
    legendPage = new QWidget();
    legendPage->setObjectName(QString::fromUtf8("legendPage"));
    legendPage->setGeometry(QRect(0, 0, 386, 244));
    toolBox->addItem(legendPage, QApplication::translate("QgisAppBase", "Legend", 0, QApplication::UnicodeUTF8));
    legendOverviewSplit->addWidget(toolBox);
    overviewFrame = new QFrame(legendOverviewSplit);
    overviewFrame->setObjectName(QString::fromUtf8("overviewFrame"));
    overviewFrame->setFrameShape(QFrame::StyledPanel);
    overviewFrame->setFrameShadow(QFrame::Raised);
    legendOverviewSplit->addWidget(overviewFrame);
    canvasLegendSplit->addWidget(legendOverviewSplit);
    tabWidget = new QTabWidget(canvasLegendSplit);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Arial"));
    font1.setPointSize(10);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    tabWidget->setFont(font1);
    tabWidget->setTabPosition(QTabWidget::East);
    tabWidget->setTabShape(QTabWidget::Rounded);
    Map_View = new QWidget();
    Map_View->setObjectName(QString::fromUtf8("Map_View"));
    tabWidget->addTab(Map_View, QString());
    canvasLegendSplit->addWidget(tabWidget);

    gridLayout->addWidget(canvasLegendSplit, 0, 0, 1, 1);

    QgisAppBase->setCentralWidget(centralWidget);

    retranslateUi(QgisAppBase);

    toolBox->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgisAppBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgisAppBase)
    {
    QgisAppBase->setWindowTitle(QApplication::translate("QgisAppBase", "MainWindow", 0, QApplication::UnicodeUTF8));
    toolBox->setItemText(toolBox->indexOf(legendPage), QApplication::translate("QgisAppBase", "Legend", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(Map_View), QApplication::translate("QgisAppBase", "Map View", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgisAppBase);
    } // retranslateUi

};

namespace Ui {
    class QgisAppBase: public Ui_QgisAppBase {};
} // namespace Ui

#endif // UI_QGISAPPBASE_H
