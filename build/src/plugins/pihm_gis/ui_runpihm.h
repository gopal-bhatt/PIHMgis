/********************************************************************************
** Form generated from reading ui file 'runpihm.ui'
**
** Created: Fri Jun 19 02:00:51 2009
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RUNPIHM_H
#define UI_RUNPIHM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

class Ui_runPIHM
{
public:
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *cancelButton;
    QPushButton *runButton;
    QPushButton *helpButton;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *hboxLayout;
    QPushButton *browseButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEditFile;

    void setupUi(QDialog *runPIHM)
    {
    if (runPIHM->objectName().isEmpty())
        runPIHM->setObjectName(QString::fromUtf8("runPIHM"));
    runPIHM->resize(555, 347);
    progressBar = new QProgressBar(runPIHM);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    progressBar->setGeometry(QRect(125, 177, 216, 25));
    progressBar->setValue(0);
    progressBar->setOrientation(Qt::Horizontal);
    textBrowser = new QTextBrowser(runPIHM);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(7, 220, 538, 111));
    layoutWidget = new QWidget(runPIHM);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 170, 531, 40));
    gridLayout = new QGridLayout(layoutWidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 0, 0, 0);
    cancelButton = new QPushButton(layoutWidget);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    gridLayout->addWidget(cancelButton, 0, 3, 1, 1);

    runButton = new QPushButton(layoutWidget);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setDefault(true);

    gridLayout->addWidget(runButton, 0, 2, 1, 1);

    helpButton = new QPushButton(layoutWidget);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));

    gridLayout->addWidget(helpButton, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 1, 1, 1);

    groupBox = new QGroupBox(runPIHM);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 10, 535, 141));
    layoutWidget1 = new QWidget(groupBox);
    layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
    layoutWidget1->setGeometry(QRect(434, 30, 81, 40));
    hboxLayout = new QHBoxLayout(layoutWidget1);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    browseButton = new QPushButton(layoutWidget1);
    browseButton->setObjectName(QString::fromUtf8("browseButton"));

    hboxLayout->addWidget(browseButton);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(16, 40, 102, 17));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(16, 90, 102, 17));
    lineEdit = new QLineEdit(groupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(132, 38, 291, 23));
    lineEdit->setFocusPolicy(Qt::StrongFocus);
    lineEdit->setCursorPosition(0);
    lineEditFile = new QLineEdit(groupBox);
    lineEditFile->setObjectName(QString::fromUtf8("lineEditFile"));
    lineEditFile->setGeometry(QRect(132, 90, 151, 23));

    retranslateUi(runPIHM);
    QObject::connect(cancelButton, SIGNAL(clicked()), runPIHM, SLOT(reject()));

    QMetaObject::connectSlotsByName(runPIHM);
    } // setupUi

    void retranslateUi(QDialog *runPIHM)
    {
    runPIHM->setWindowTitle(QApplication::translate("runPIHM", "PIHM", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("runPIHM", "Close", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("runPIHM", " RUN ", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("runPIHM", "Help", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    browseButton->setText(QApplication::translate("runPIHM", "Browse...", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("runPIHM", "Select Input Folder", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("runPIHM", "Input File ID", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(runPIHM);
    } // retranslateUi

};

namespace Ui {
    class runPIHM: public Ui_runPIHM {};
} // namespace Ui

#endif // UI_RUNPIHM_H
