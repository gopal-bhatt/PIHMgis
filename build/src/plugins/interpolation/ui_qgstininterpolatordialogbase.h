/********************************************************************************
** Form generated from reading ui file 'qgstininterpolatordialogbase.ui'
**
** Created: Tue Jun 22 23:11:24 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSTININTERPOLATORDIALOGBASE_H
#define UI_QGSTININTERPOLATORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

class Ui_QgsTINInterpolatorDialogBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *mDescriptionTextBrowser;
    QHBoxLayout *hboxLayout;
    QLabel *mInterpolationMethodLabel;
    QComboBox *mInterpolationComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsTINInterpolatorDialogBase)
    {
    if (QgsTINInterpolatorDialogBase->objectName().isEmpty())
        QgsTINInterpolatorDialogBase->setObjectName(QString::fromUtf8("QgsTINInterpolatorDialogBase"));
    QgsTINInterpolatorDialogBase->resize(400, 198);
    gridLayout = new QGridLayout(QgsTINInterpolatorDialogBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mDescriptionTextBrowser = new QTextBrowser(QgsTINInterpolatorDialogBase);
    mDescriptionTextBrowser->setObjectName(QString::fromUtf8("mDescriptionTextBrowser"));

    gridLayout->addWidget(mDescriptionTextBrowser, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    mInterpolationMethodLabel = new QLabel(QgsTINInterpolatorDialogBase);
    mInterpolationMethodLabel->setObjectName(QString::fromUtf8("mInterpolationMethodLabel"));

    hboxLayout->addWidget(mInterpolationMethodLabel);

    mInterpolationComboBox = new QComboBox(QgsTINInterpolatorDialogBase);
    mInterpolationComboBox->setObjectName(QString::fromUtf8("mInterpolationComboBox"));

    hboxLayout->addWidget(mInterpolationComboBox);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsTINInterpolatorDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(QgsTINInterpolatorDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsTINInterpolatorDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsTINInterpolatorDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsTINInterpolatorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsTINInterpolatorDialogBase)
    {
    QgsTINInterpolatorDialogBase->setWindowTitle(QApplication::translate("QgsTINInterpolatorDialogBase", "Triangle based interpolation", 0, QApplication::UnicodeUTF8));
    mDescriptionTextBrowser->setHtml(QApplication::translate("QgsTINInterpolatorDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This interpolator provides different methods for interpolation in a triangular irregular network (TIN).</p></body></html>", 0, QApplication::UnicodeUTF8));
    mInterpolationMethodLabel->setText(QApplication::translate("QgsTINInterpolatorDialogBase", "Interpolation method:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsTINInterpolatorDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsTINInterpolatorDialogBase: public Ui_QgsTINInterpolatorDialogBase {};
} // namespace Ui

#endif // UI_QGSTININTERPOLATORDIALOGBASE_H
