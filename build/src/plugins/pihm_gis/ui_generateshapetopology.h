/********************************************************************************
** Form generated from reading ui file 'generateshapetopology.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_GENERATESHAPETOPOLOGY_H
#define UI_GENERATESHAPETOPOLOGY_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_GenerateShapeTopology
{
public:
    Q3ButtonGroup *constrainingLayerButtonGroup;
    QLabel *constrainingLayerLabel;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputBrowseButton;
    Q3ButtonGroup *outputButtonGroup;
    QLabel *outputFileLabel;
    QLineEdit *outputFileLineEdit;
    QPushButton *outputBrowseButton;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *helpButton;
    Q3TextBrowser *MessageLog;

    void setupUi(QDialog *GenerateShapeTopology)
    {
    if (GenerateShapeTopology->objectName().isEmpty())
        GenerateShapeTopology->setObjectName(QString::fromUtf8("GenerateShapeTopology"));
    GenerateShapeTopology->resize(600, 433);
    constrainingLayerButtonGroup = new Q3ButtonGroup(GenerateShapeTopology);
    constrainingLayerButtonGroup->setObjectName(QString::fromUtf8("constrainingLayerButtonGroup"));
    constrainingLayerButtonGroup->setGeometry(QRect(11, 1, 578, 100));
    constrainingLayerLabel = new QLabel(constrainingLayerButtonGroup);
    constrainingLayerLabel->setObjectName(QString::fromUtf8("constrainingLayerLabel"));
    constrainingLayerLabel->setGeometry(QRect(20, 42, 110, 32));
    constrainingLayerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    inputFileLineEdit = new QLineEdit(constrainingLayerButtonGroup);
    inputFileLineEdit->setObjectName(QString::fromUtf8("inputFileLineEdit"));
    inputFileLineEdit->setGeometry(QRect(140, 43, 325, 29));
    inputBrowseButton = new QPushButton(constrainingLayerButtonGroup);
    inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));
    inputBrowseButton->setGeometry(QRect(470, 42, 98, 32));
    inputBrowseButton->setFocusPolicy(Qt::TabFocus);
    inputBrowseButton->setAutoDefault(false);
    outputButtonGroup = new Q3ButtonGroup(GenerateShapeTopology);
    outputButtonGroup->setObjectName(QString::fromUtf8("outputButtonGroup"));
    outputButtonGroup->setGeometry(QRect(11, 108, 578, 100));
    outputFileLabel = new QLabel(outputButtonGroup);
    outputFileLabel->setObjectName(QString::fromUtf8("outputFileLabel"));
    outputFileLabel->setGeometry(QRect(20, 45, 120, 32));
    outputFileLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    outputFileLineEdit = new QLineEdit(outputButtonGroup);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(140, 46, 325, 29));
    outputBrowseButton = new QPushButton(outputButtonGroup);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(470, 45, 98, 32));
    outputBrowseButton->setAutoDefault(false);
    cancelButton = new QPushButton(GenerateShapeTopology);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(380, 228, 98, 34));
    cancelButton->setAutoDefault(false);
    okButton = new QPushButton(GenerateShapeTopology);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(495, 228, 98, 34));
    okButton->setAutoDefault(false);
    helpButton = new QPushButton(GenerateShapeTopology);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(7, 228, 98, 34));
    helpButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(GenerateShapeTopology);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(15, 280, 570, 140));
    QWidget::setTabOrder(inputFileLineEdit, inputBrowseButton);
    QWidget::setTabOrder(inputBrowseButton, outputFileLineEdit);
    QWidget::setTabOrder(outputFileLineEdit, outputBrowseButton);
    QWidget::setTabOrder(outputBrowseButton, cancelButton);
    QWidget::setTabOrder(cancelButton, okButton);

    retranslateUi(GenerateShapeTopology);

    QMetaObject::connectSlotsByName(GenerateShapeTopology);
    } // setupUi

    void retranslateUi(QDialog *GenerateShapeTopology)
    {
    GenerateShapeTopology->setWindowTitle(QApplication::translate("GenerateShapeTopology", "Generate Shape Topology", 0, QApplication::UnicodeUTF8));
    constrainingLayerButtonGroup->setTitle(QApplication::translate("GenerateShapeTopology", "Input", 0, QApplication::UnicodeUTF8));
    constrainingLayerLabel->setText(QApplication::translate("GenerateShapeTopology", "Input Feature", 0, QApplication::UnicodeUTF8));
    inputBrowseButton->setText(QApplication::translate("GenerateShapeTopology", "Browse", 0, QApplication::UnicodeUTF8));
    outputButtonGroup->setTitle(QApplication::translate("GenerateShapeTopology", "Output", 0, QApplication::UnicodeUTF8));
    outputFileLabel->setText(QApplication::translate("GenerateShapeTopology", "Output Poly File", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("GenerateShapeTopology", "Browse", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("GenerateShapeTopology", "Close", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("GenerateShapeTopology", "Run!", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("GenerateShapeTopology", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GenerateShapeTopology);
    } // retranslateUi

};

namespace Ui {
    class GenerateShapeTopology: public Ui_GenerateShapeTopology {};
} // namespace Ui

#endif // UI_GENERATESHAPETOPOLOGY_H
