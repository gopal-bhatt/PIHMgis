/********************************************************************************
** Form generated from reading ui file 'qgsidwinterpolatordialogbase.ui'
**
** Created: Tue Jun 22 23:11:24 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSIDWINTERPOLATORDIALOGBASE_H
#define UI_QGSIDWINTERPOLATORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

class Ui_QgsIDWInterpolatorDialogBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *hboxLayout;
    QLabel *mPLabel;
    QDoubleSpinBox *mPSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsIDWInterpolatorDialogBase)
    {
    if (QgsIDWInterpolatorDialogBase->objectName().isEmpty())
        QgsIDWInterpolatorDialogBase->setObjectName(QString::fromUtf8("QgsIDWInterpolatorDialogBase"));
    QgsIDWInterpolatorDialogBase->resize(362, 267);
    gridLayout = new QGridLayout(QgsIDWInterpolatorDialogBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textBrowser = new QTextBrowser(QgsIDWInterpolatorDialogBase);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

    gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    mPLabel = new QLabel(QgsIDWInterpolatorDialogBase);
    mPLabel->setObjectName(QString::fromUtf8("mPLabel"));

    hboxLayout->addWidget(mPLabel);

    mPSpinBox = new QDoubleSpinBox(QgsIDWInterpolatorDialogBase);
    mPSpinBox->setObjectName(QString::fromUtf8("mPSpinBox"));
    mPSpinBox->setValue(2);

    hboxLayout->addWidget(mPSpinBox);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsIDWInterpolatorDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(QgsIDWInterpolatorDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsIDWInterpolatorDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsIDWInterpolatorDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsIDWInterpolatorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIDWInterpolatorDialogBase)
    {
    QgsIDWInterpolatorDialogBase->setWindowTitle(QApplication::translate("QgsIDWInterpolatorDialogBase", "Dialog", 0, QApplication::UnicodeUTF8));
    textBrowser->setHtml(QApplication::translate("QgsIDWInterpolatorDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Inverse Distance Weighting</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><span style=\" font-weight:400;\">The only parameter for the IDW interpolation method is the coefficient that describes the decrease of weights with distance.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    mPLabel->setText(QApplication::translate("QgsIDWInterpolatorDialogBase", "Distance coefficient P:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsIDWInterpolatorDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsIDWInterpolatorDialogBase: public Ui_QgsIDWInterpolatorDialogBase {};
} // namespace Ui

#endif // UI_QGSIDWINTERPOLATORDIALOGBASE_H
