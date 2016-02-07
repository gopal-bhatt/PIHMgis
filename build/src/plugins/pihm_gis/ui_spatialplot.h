/********************************************************************************
** Form generated from reading ui file 'spatialplot.ui'
**
** Created: Tue Jul 27 23:38:19 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SPATIALPLOT_H
#define UI_SPATIALPLOT_H

#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_spatialPlotDialog
{
public:
    Q3TextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboBoxEleVariable;
    QLabel *label_9;
    QLineEdit *lineEditEleStart;
    QLineEdit *lineEditEleFinish;
    QLineEdit *lineEditEleShape;
    QComboBox *comboBoxEle;
    QLineEdit *lineEditBinsEle;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButtonEleShape;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *lineEditRivFinish;
    QComboBox *comboBoxRivVariable;
    QLineEdit *lineEditRivShape;
    QLineEdit *lineEditRivStart;
    QLabel *label_10;
    QLineEdit *lineEditBinsRiv;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *comboBoxRiv;
    QPushButton *pushButtonRivShape;
    QLineEdit *lineEditFileName;
    QPushButton *pushButtonFileName;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonHelp;
    QPushButton *cancelButton_2;
    QPushButton *pushButtonGenerate;

    void setupUi(QDialog *spatialPlotDialog)
    {
    if (spatialPlotDialog->objectName().isEmpty())
        spatialPlotDialog->setObjectName(QString::fromUtf8("spatialPlotDialog"));
    spatialPlotDialog->resize(555, 471);
    textBrowser = new Q3TextBrowser(spatialPlotDialog);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(19, 344, 521, 116));
    groupBox = new QGroupBox(spatialPlotDialog);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(18, 13, 521, 261));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(168, 7, 191, 17));
    QFont font;
    font.setPointSize(14);
    label->setFont(font);
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 228, 121, 17));
    tabWidget = new QTabWidget(groupBox);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(16, 33, 491, 181));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    label_7 = new QLabel(tab);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(14, 80, 191, 17));
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(14, 9, 121, 17));
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(14, 48, 191, 17));
    comboBoxEleVariable = new QComboBox(tab);
    comboBoxEleVariable->setObjectName(QString::fromUtf8("comboBoxEleVariable"));
    comboBoxEleVariable->setGeometry(QRect(182, 4, 191, 28));
    label_9 = new QLabel(tab);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(14, 116, 121, 17));
    lineEditEleStart = new QLineEdit(tab);
    lineEditEleStart->setObjectName(QString::fromUtf8("lineEditEleStart"));
    lineEditEleStart->setGeometry(QRect(175, 44, 81, 23));
    lineEditEleFinish = new QLineEdit(tab);
    lineEditEleFinish->setObjectName(QString::fromUtf8("lineEditEleFinish"));
    lineEditEleFinish->setGeometry(QRect(175, 75, 81, 23));
    lineEditEleShape = new QLineEdit(tab);
    lineEditEleShape->setObjectName(QString::fromUtf8("lineEditEleShape"));
    lineEditEleShape->setGeometry(QRect(131, 113, 231, 23));
    comboBoxEle = new QComboBox(tab);
    comboBoxEle->setObjectName(QString::fromUtf8("comboBoxEle"));
    comboBoxEle->setGeometry(QRect(361, 40, 111, 28));
    lineEditBinsEle = new QLineEdit(tab);
    lineEditBinsEle->setObjectName(QString::fromUtf8("lineEditBinsEle"));
    lineEditBinsEle->setGeometry(QRect(417, 75, 51, 22));
    label_11 = new QLabel(tab);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(286, 47, 41, 16));
    label_12 = new QLabel(tab);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(285, 77, 131, 16));
    pushButtonEleShape = new QPushButton(tab);
    pushButtonEleShape->setObjectName(QString::fromUtf8("pushButtonEleShape"));
    pushButtonEleShape->setEnabled(true);
    pushButtonEleShape->setGeometry(QRect(375, 110, 98, 32));
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    label_6 = new QLabel(tab_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(14, 47, 181, 17));
    label_8 = new QLabel(tab_2);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(14, 79, 181, 17));
    label_5 = new QLabel(tab_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(14, 9, 121, 17));
    lineEditRivFinish = new QLineEdit(tab_2);
    lineEditRivFinish->setObjectName(QString::fromUtf8("lineEditRivFinish"));
    lineEditRivFinish->setGeometry(QRect(175, 76, 81, 23));
    comboBoxRivVariable = new QComboBox(tab_2);
    comboBoxRivVariable->setObjectName(QString::fromUtf8("comboBoxRivVariable"));
    comboBoxRivVariable->setGeometry(QRect(182, 4, 191, 28));
    lineEditRivShape = new QLineEdit(tab_2);
    lineEditRivShape->setObjectName(QString::fromUtf8("lineEditRivShape"));
    lineEditRivShape->setGeometry(QRect(131, 113, 231, 23));
    lineEditRivStart = new QLineEdit(tab_2);
    lineEditRivStart->setObjectName(QString::fromUtf8("lineEditRivStart"));
    lineEditRivStart->setGeometry(QRect(175, 44, 81, 23));
    label_10 = new QLabel(tab_2);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(14, 116, 121, 17));
    lineEditBinsRiv = new QLineEdit(tab_2);
    lineEditBinsRiv->setObjectName(QString::fromUtf8("lineEditBinsRiv"));
    lineEditBinsRiv->setGeometry(QRect(416, 75, 51, 22));
    label_13 = new QLabel(tab_2);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(285, 77, 131, 16));
    label_14 = new QLabel(tab_2);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(285, 47, 41, 16));
    comboBoxRiv = new QComboBox(tab_2);
    comboBoxRiv->setObjectName(QString::fromUtf8("comboBoxRiv"));
    comboBoxRiv->setGeometry(QRect(361, 40, 111, 28));
    pushButtonRivShape = new QPushButton(tab_2);
    pushButtonRivShape->setObjectName(QString::fromUtf8("pushButtonRivShape"));
    pushButtonRivShape->setGeometry(QRect(375, 110, 98, 32));
    tabWidget->addTab(tab_2, QString());
    lineEditFileName = new QLineEdit(groupBox);
    lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));
    lineEditFileName->setGeometry(QRect(150, 226, 251, 23));
    pushButtonFileName = new QPushButton(groupBox);
    pushButtonFileName->setObjectName(QString::fromUtf8("pushButtonFileName"));
    pushButtonFileName->setGeometry(QRect(413, 223, 98, 32));
    groupBox_2 = new QGroupBox(spatialPlotDialog);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(20, 283, 521, 51));
    pushButtonHelp = new QPushButton(groupBox_2);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(10, 10, 98, 32));
    cancelButton_2 = new QPushButton(groupBox_2);
    cancelButton_2->setObjectName(QString::fromUtf8("cancelButton_2"));
    cancelButton_2->setGeometry(QRect(250, 10, 98, 32));
    pushButtonGenerate = new QPushButton(groupBox_2);
    pushButtonGenerate->setObjectName(QString::fromUtf8("pushButtonGenerate"));
    pushButtonGenerate->setGeometry(QRect(363, 10, 146, 32));
    pushButtonGenerate->setDefault(true);

    retranslateUi(spatialPlotDialog);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(spatialPlotDialog);
    } // setupUi

    void retranslateUi(QDialog *spatialPlotDialog)
    {
    spatialPlotDialog->setWindowTitle(QApplication::translate("spatialPlotDialog", "Spatial Plots", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("spatialPlotDialog", "Select Spatial Feature Type:", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("spatialPlotDialog", "Simulation Output", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("spatialPlotDialog", "Spatial Plot End Time:", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("spatialPlotDialog", "Select Plot Variable:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("spatialPlotDialog", "Spatial Plot Start Time:", 0, QApplication::UnicodeUTF8));
    comboBoxEleVariable->clear();
    comboBoxEleVariable->insertItems(0, QStringList()
     << QApplication::translate("spatialPlotDialog", "Interception Storage", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Saturated State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Unsaturated State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Surface State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Evaporation from Canopy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Transpiration", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Evaporation from Ground/Surf", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Precipitation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Net Precipitation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Infiltration", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Groundwater Recharge", 0, QApplication::UnicodeUTF8)
    );
    label_9->setText(QApplication::translate("spatialPlotDialog", "TIN Shape File:", 0, QApplication::UnicodeUTF8));
    lineEditEleStart->setToolTip(QApplication::translate("spatialPlotDialog", "Start Time", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditEleStart->setText(QApplication::translate("spatialPlotDialog", "0", 0, QApplication::UnicodeUTF8));
    lineEditEleFinish->setToolTip(QApplication::translate("spatialPlotDialog", "End Time", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditEleFinish->setText(QApplication::translate("spatialPlotDialog", "0", 0, QApplication::UnicodeUTF8));
    lineEditEleShape->setToolTip(QApplication::translate("spatialPlotDialog", "Enter Time-Average Interval", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditEleShape->setText(QString());
    comboBoxEle->clear();
    comboBoxEle->insertItems(0, QStringList()
     << QApplication::translate("spatialPlotDialog", "Minute", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Hour", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Days", 0, QApplication::UnicodeUTF8)
    );
    lineEditBinsEle->setText(QApplication::translate("spatialPlotDialog", "1", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("spatialPlotDialog", "Units", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("spatialPlotDialog", "Time Avg. Intervals", 0, QApplication::UnicodeUTF8));
    pushButtonEleShape->setText(QApplication::translate("spatialPlotDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("spatialPlotDialog", "    Element    ", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("spatialPlotDialog", "Spatial Plot Start Time:", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("spatialPlotDialog", "Spatial Plot End Time:", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("spatialPlotDialog", "Select Plot Variable:", 0, QApplication::UnicodeUTF8));
    lineEditRivFinish->setToolTip(QApplication::translate("spatialPlotDialog", "End Time", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditRivFinish->setText(QApplication::translate("spatialPlotDialog", "0", 0, QApplication::UnicodeUTF8));
    comboBoxRivVariable->clear();
    comboBoxRivVariable->insertItems(0, QStringList()
     << QApplication::translate("spatialPlotDialog", "Head", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Inflow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Outflow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Base Flow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Surface Flow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Base Flow Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Base Flow Right", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Surface Flow Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Surface Flow Right", 0, QApplication::UnicodeUTF8)
    );
    lineEditRivShape->setToolTip(QApplication::translate("spatialPlotDialog", "Enter Time-Average Interval", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditRivShape->setText(QString());
    lineEditRivStart->setToolTip(QApplication::translate("spatialPlotDialog", "Start Time", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditRivStart->setText(QApplication::translate("spatialPlotDialog", "0", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("spatialPlotDialog", "River Shape File:", 0, QApplication::UnicodeUTF8));
    lineEditBinsRiv->setText(QApplication::translate("spatialPlotDialog", "1", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("spatialPlotDialog", "Time Avg. Intervals", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("spatialPlotDialog", "Units", 0, QApplication::UnicodeUTF8));
    comboBoxRiv->clear();
    comboBoxRiv->insertItems(0, QStringList()
     << QApplication::translate("spatialPlotDialog", "Minute", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Hour", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("spatialPlotDialog", "Days", 0, QApplication::UnicodeUTF8)
    );
    pushButtonRivShape->setText(QApplication::translate("spatialPlotDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("spatialPlotDialog", "    Stream    ", 0, QApplication::UnicodeUTF8));
    pushButtonFileName->setText(QApplication::translate("spatialPlotDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QString());
    pushButtonHelp->setText(QApplication::translate("spatialPlotDialog", "  Help  ", 0, QApplication::UnicodeUTF8));
    cancelButton_2->setText(QApplication::translate("spatialPlotDialog", "  Close  ", 0, QApplication::UnicodeUTF8));
    pushButtonGenerate->setText(QApplication::translate("spatialPlotDialog", " Generate Shape ", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(spatialPlotDialog);
    } // retranslateUi

};

namespace Ui {
    class spatialPlotDialog: public Ui_spatialPlotDialog {};
} // namespace Ui

#endif // UI_SPATIALPLOT_H
