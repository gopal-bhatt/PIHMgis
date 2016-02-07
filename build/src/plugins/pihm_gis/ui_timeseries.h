/********************************************************************************
** Form generated from reading ui file 'timeseries.ui'
**
** Created: Tue Jul 27 23:38:19 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TIMESERIES_H
#define UI_TIMESERIES_H

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

class Ui_timeSeriesDialog
{
public:
    Q3TextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *comboBoxEleFeature;
    QLabel *label_2;
    QComboBox *comboBoxEleVariable;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lineEditEleID;
    QLineEdit *lineEditEleTime;
    QComboBox *comboBox;
    QWidget *tab_2;
    QLabel *label_6;
    QComboBox *comboBoxRivFeature;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEditRivID;
    QLineEdit *lineEditRivTime;
    QComboBox *comboBoxRivVariable;
    QComboBox *comboBox_2;
    QLineEdit *lineEditFileName;
    QLabel *label_4;
    QPushButton *pushButtonBrowse;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonSavePlot;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonPlot;

    void setupUi(QDialog *timeSeriesDialog)
    {
    if (timeSeriesDialog->objectName().isEmpty())
        timeSeriesDialog->setObjectName(QString::fromUtf8("timeSeriesDialog"));
    timeSeriesDialog->resize(559, 470);
    textBrowser = new Q3TextBrowser(timeSeriesDialog);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(15, 341, 531, 118));
    groupBox = new QGroupBox(timeSeriesDialog);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(13, 12, 531, 267));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(160, 8, 221, 17));
    QFont font;
    font.setPointSize(14);
    label->setFont(font);
    tabWidget = new QTabWidget(groupBox);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(20, 34, 491, 181));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    comboBoxEleFeature = new QComboBox(tab);
    comboBoxEleFeature->setObjectName(QString::fromUtf8("comboBoxEleFeature"));
    comboBoxEleFeature->setGeometry(QRect(190, 59, 151, 27));
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(18, 65, 141, 19));
    comboBoxEleVariable = new QComboBox(tab);
    comboBoxEleVariable->setObjectName(QString::fromUtf8("comboBoxEleVariable"));
    comboBoxEleVariable->setGeometry(QRect(190, 14, 230, 27));
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(18, 20, 121, 17));
    label_7 = new QLabel(tab);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(18, 113, 181, 17));
    lineEditEleID = new QLineEdit(tab);
    lineEditEleID->setObjectName(QString::fromUtf8("lineEditEleID"));
    lineEditEleID->setGeometry(QRect(360, 62, 105, 23));
    lineEditEleTime = new QLineEdit(tab);
    lineEditEleTime->setObjectName(QString::fromUtf8("lineEditEleTime"));
    lineEditEleTime->setGeometry(QRect(360, 110, 81, 23));
    comboBox = new QComboBox(tab);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(190, 107, 111, 27));
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    label_6 = new QLabel(tab_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(18, 65, 151, 17));
    comboBoxRivFeature = new QComboBox(tab_2);
    comboBoxRivFeature->setObjectName(QString::fromUtf8("comboBoxRivFeature"));
    comboBoxRivFeature->setGeometry(QRect(190, 61, 151, 27));
    label_5 = new QLabel(tab_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(18, 20, 121, 17));
    label_8 = new QLabel(tab_2);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(18, 113, 121, 17));
    lineEditRivID = new QLineEdit(tab_2);
    lineEditRivID->setObjectName(QString::fromUtf8("lineEditRivID"));
    lineEditRivID->setGeometry(QRect(360, 64, 105, 23));
    lineEditRivTime = new QLineEdit(tab_2);
    lineEditRivTime->setObjectName(QString::fromUtf8("lineEditRivTime"));
    lineEditRivTime->setGeometry(QRect(360, 111, 81, 23));
    comboBoxRivVariable = new QComboBox(tab_2);
    comboBoxRivVariable->setObjectName(QString::fromUtf8("comboBoxRivVariable"));
    comboBoxRivVariable->setGeometry(QRect(190, 15, 230, 27));
    comboBox_2 = new QComboBox(tab_2);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setGeometry(QRect(190, 107, 111, 27));
    tabWidget->addTab(tab_2, QString());
    lineEditFileName = new QLineEdit(groupBox);
    lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));
    lineEditFileName->setGeometry(QRect(152, 229, 251, 23));
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 232, 121, 17));
    pushButtonBrowse = new QPushButton(groupBox);
    pushButtonBrowse->setObjectName(QString::fromUtf8("pushButtonBrowse"));
    pushButtonBrowse->setGeometry(QRect(416, 226, 98, 32));
    groupBox_2 = new QGroupBox(timeSeriesDialog);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(13, 288, 531, 45));
    pushButtonHelp = new QPushButton(groupBox_2);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(16, 7, 98, 32));
    pushButtonSavePlot = new QPushButton(groupBox_2);
    pushButtonSavePlot->setObjectName(QString::fromUtf8("pushButtonSavePlot"));
    pushButtonSavePlot->setEnabled(false);
    pushButtonSavePlot->setGeometry(QRect(120, 7, 98, 32));
    pushButtonClose = new QPushButton(groupBox_2);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(310, 7, 98, 32));
    pushButtonPlot = new QPushButton(groupBox_2);
    pushButtonPlot->setObjectName(QString::fromUtf8("pushButtonPlot"));
    pushButtonPlot->setGeometry(QRect(420, 7, 98, 32));
    pushButtonPlot->setDefault(true);

    retranslateUi(timeSeriesDialog);

    tabWidget->setCurrentIndex(0);
    comboBox->setCurrentIndex(1);
    comboBox_2->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(timeSeriesDialog);
    } // setupUi

    void retranslateUi(QDialog *timeSeriesDialog)
    {
    timeSeriesDialog->setWindowTitle(QApplication::translate("timeSeriesDialog", "Time Series Plots", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("timeSeriesDialog", "Select Time Series Feature Type", 0, QApplication::UnicodeUTF8));
    comboBoxEleFeature->clear();
    comboBoxEleFeature->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Element IDs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Average All", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Average Element IDs", 0, QApplication::UnicodeUTF8)
    );
    label_2->setText(QApplication::translate("timeSeriesDialog", "Select Features by .....", 0, QApplication::UnicodeUTF8));
    comboBoxEleVariable->clear();
    comboBoxEleVariable->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Interception Storage", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Saturated State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Unsaturated State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Surface State", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Evaporation from Canopy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Tranpiration", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Evaporation from Surf/Soil", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Precipitation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Net Precipitation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Infiltration", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Groundwater Recharge", 0, QApplication::UnicodeUTF8)
    );
    label_3->setText(QApplication::translate("timeSeriesDialog", "Select Plot Variable:", 0, QApplication::UnicodeUTF8));
    label_7->setToolTip(QApplication::translate("timeSeriesDialog", "Default is the same as Model Output Interval Selected. However user can specify multiple of the default time step.", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("timeSeriesDialog", "Time Step of Plot", 0, QApplication::UnicodeUTF8));
    lineEditEleID->setToolTip(QApplication::translate("timeSeriesDialog", "Enter Feature ID", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditEleID->setText(QApplication::translate("timeSeriesDialog", "1 2", 0, QApplication::UnicodeUTF8));
    lineEditEleTime->setToolTip(QApplication::translate("timeSeriesDialog", "Enter Time-Average Interval", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditEleTime->setText(QApplication::translate("timeSeriesDialog", "1", 0, QApplication::UnicodeUTF8));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Minutes", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Hours", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Days", 0, QApplication::UnicodeUTF8)
    );
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("timeSeriesDialog", "    Element    ", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("timeSeriesDialog", "Select Features by .....", 0, QApplication::UnicodeUTF8));
    comboBoxRivFeature->clear();
    comboBoxRivFeature->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Reach IDs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Average All", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Average Reach IDs", 0, QApplication::UnicodeUTF8)
    );
    label_5->setText(QApplication::translate("timeSeriesDialog", "Select Plot Variable:", 0, QApplication::UnicodeUTF8));
    label_8->setToolTip(QApplication::translate("timeSeriesDialog", "Default is the same as Model Output Interval Selected. However user can specify multiple of the default time step.", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("timeSeriesDialog", "Time Step of Plot", 0, QApplication::UnicodeUTF8));
    lineEditRivID->setToolTip(QApplication::translate("timeSeriesDialog", "Enter Feature ID", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditRivID->setText(QApplication::translate("timeSeriesDialog", "1 2", 0, QApplication::UnicodeUTF8));
    lineEditRivTime->setToolTip(QApplication::translate("timeSeriesDialog", "Enter Time-Average Interval", "Enter Feature ID", QApplication::UnicodeUTF8));
    lineEditRivTime->setText(QApplication::translate("timeSeriesDialog", "1", 0, QApplication::UnicodeUTF8));
    comboBoxRivVariable->clear();
    comboBoxRivVariable->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Head", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Inflow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Outflow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Base Flow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Surface Flow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Base Flow Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Base Flow Right", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Surface Flow Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Surface Flow Right", 0, QApplication::UnicodeUTF8)
    );
    comboBox_2->clear();
    comboBox_2->insertItems(0, QStringList()
     << QApplication::translate("timeSeriesDialog", "Minutes", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Hours", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("timeSeriesDialog", "Days", 0, QApplication::UnicodeUTF8)
    );
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("timeSeriesDialog", "    Stream    ", 0, QApplication::UnicodeUTF8));
    label_4->setToolTip(QApplication::translate("timeSeriesDialog", "The Simulation Folder contains the model simulation results from which plots are generated. Note, there may be multiple simulation folders (eg. Simul00, Simul01, Simul02 etc).", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("timeSeriesDialog", "Simulation Output", 0, QApplication::UnicodeUTF8));
    pushButtonBrowse->setText(QApplication::translate("timeSeriesDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QString());
    pushButtonHelp->setText(QApplication::translate("timeSeriesDialog", "Help", 0, QApplication::UnicodeUTF8));
    pushButtonSavePlot->setText(QApplication::translate("timeSeriesDialog", "Save Plot", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("timeSeriesDialog", "Close", 0, QApplication::UnicodeUTF8));
    pushButtonPlot->setText(QApplication::translate("timeSeriesDialog", "  New Plot  ", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(timeSeriesDialog);
    } // retranslateUi

};

namespace Ui {
    class timeSeriesDialog: public Ui_timeSeriesDialog {};
} // namespace Ui

#endif // UI_TIMESERIES_H
