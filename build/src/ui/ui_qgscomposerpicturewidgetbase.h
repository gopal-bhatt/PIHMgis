/********************************************************************************
** Form generated from reading ui file 'qgscomposerpicturewidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERPICTUREWIDGETBASE_H
#define UI_QGSCOMPOSERPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_QgsComposerPictureWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *mPictureLineEdit;
    QPushButton *mPictureBrowseButton;
    QGridLayout *gridLayout1;
    QLabel *textLabel3;
    QLineEdit *mWidthLineEdit;
    QLabel *textLabel4;
    QLineEdit *mHeightLineEdit;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *QgsComposerPictureWidgetBase)
    {
    if (QgsComposerPictureWidgetBase->objectName().isEmpty())
        QgsComposerPictureWidgetBase->setObjectName(QString::fromUtf8("QgsComposerPictureWidgetBase"));
    QgsComposerPictureWidgetBase->resize(274, 183);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerPictureWidgetBase->sizePolicy().hasHeightForWidth());
    QgsComposerPictureWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerPictureWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    mPictureLineEdit = new QLineEdit(QgsComposerPictureWidgetBase);
    mPictureLineEdit->setObjectName(QString::fromUtf8("mPictureLineEdit"));

    hboxLayout->addWidget(mPictureLineEdit);

    mPictureBrowseButton = new QPushButton(QgsComposerPictureWidgetBase);
    mPictureBrowseButton->setObjectName(QString::fromUtf8("mPictureBrowseButton"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mPictureBrowseButton->sizePolicy().hasHeightForWidth());
    mPictureBrowseButton->setSizePolicy(sizePolicy1);
    mPictureBrowseButton->setMaximumSize(QSize(150, 32767));

    hboxLayout->addWidget(mPictureBrowseButton);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel3 = new QLabel(QgsComposerPictureWidgetBase);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy2);
    textLabel3->setWordWrap(true);

    gridLayout1->addWidget(textLabel3, 0, 0, 1, 1);

    mWidthLineEdit = new QLineEdit(QgsComposerPictureWidgetBase);
    mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

    gridLayout1->addWidget(mWidthLineEdit, 0, 1, 1, 2);

    textLabel4 = new QLabel(QgsComposerPictureWidgetBase);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy2.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy2);
    textLabel4->setWordWrap(true);

    gridLayout1->addWidget(textLabel4, 1, 0, 1, 1);

    mHeightLineEdit = new QLineEdit(QgsComposerPictureWidgetBase);
    mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

    gridLayout1->addWidget(mHeightLineEdit, 1, 1, 1, 2);

    mRotationLabel = new QLabel(QgsComposerPictureWidgetBase);
    mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));
    sizePolicy2.setHeightForWidth(mRotationLabel->sizePolicy().hasHeightForWidth());
    mRotationLabel->setSizePolicy(sizePolicy2);
    mRotationLabel->setWordWrap(true);

    gridLayout1->addWidget(mRotationLabel, 2, 0, 1, 2);

    mRotationSpinBox = new QDoubleSpinBox(QgsComposerPictureWidgetBase);
    mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));

    gridLayout1->addWidget(mRotationSpinBox, 2, 2, 1, 1);


    gridLayout->addLayout(gridLayout1, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    QWidget::setTabOrder(mPictureBrowseButton, mPictureLineEdit);

    retranslateUi(QgsComposerPictureWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerPictureWidgetBase)
    {
    QgsComposerPictureWidgetBase->setWindowTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Picture Options", 0, QApplication::UnicodeUTF8));
    mPictureBrowseButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Width:", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Height:", 0, QApplication::UnicodeUTF8));
    mRotationLabel->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Rotation:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerPictureWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerPictureWidgetBase: public Ui_QgsComposerPictureWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERPICTUREWIDGETBASE_H
