/********************************************************************************
** Form generated from reading ui file 'qgscomposerlabelwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLABELWIDGETBASE_H
#define UI_QGSCOMPOSERLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_QgsComposerLabelWidgetBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *mTextEdit;
    QPushButton *mFontButton;
    QLabel *mMarginTextLabel;
    QDoubleSpinBox *mMarginDoubleSpinBox;

    void setupUi(QWidget *QgsComposerLabelWidgetBase)
    {
    if (QgsComposerLabelWidgetBase->objectName().isEmpty())
        QgsComposerLabelWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLabelWidgetBase"));
    QgsComposerLabelWidgetBase->resize(217, 274);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerLabelWidgetBase->sizePolicy().hasHeightForWidth());
    QgsComposerLabelWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerLabelWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mTextEdit = new QTextEdit(QgsComposerLabelWidgetBase);
    mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
    mTextEdit->setLineWrapMode(QTextEdit::NoWrap);

    gridLayout->addWidget(mTextEdit, 0, 0, 1, 2);

    mFontButton = new QPushButton(QgsComposerLabelWidgetBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mFontButton, 1, 0, 1, 2);

    mMarginTextLabel = new QLabel(QgsComposerLabelWidgetBase);
    mMarginTextLabel->setObjectName(QString::fromUtf8("mMarginTextLabel"));

    gridLayout->addWidget(mMarginTextLabel, 2, 0, 1, 1);

    mMarginDoubleSpinBox = new QDoubleSpinBox(QgsComposerLabelWidgetBase);
    mMarginDoubleSpinBox->setObjectName(QString::fromUtf8("mMarginDoubleSpinBox"));

    gridLayout->addWidget(mMarginDoubleSpinBox, 2, 1, 1, 1);


    retranslateUi(QgsComposerLabelWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerLabelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLabelWidgetBase)
    {
    QgsComposerLabelWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Label Options", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
    mMarginTextLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Margin (mm):", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerLabelWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLabelWidgetBase: public Ui_QgsComposerLabelWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERLABELWIDGETBASE_H
