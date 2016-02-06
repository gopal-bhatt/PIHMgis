/********************************************************************************
** Form generated from reading ui file 'qgscomposerpicturebase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERPICTUREBASE_H
#define UI_QGSCOMPOSERPICTUREBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_QgsComposerPictureBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel2;
    QPushButton *mPictureBrowseButton;
    QSpacerItem *spacerItem;
    QLineEdit *mPictureLineEdit;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QCheckBox *mFrameCheckBox;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QLineEdit *mAngleLineEdit;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel3;
    QLineEdit *mWidthLineEdit;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel4;
    QLineEdit *mHeightLineEdit;
    QSpacerItem *spacerItem5;

    void setupUi(QWidget *QgsComposerPictureBase)
    {
    if (QgsComposerPictureBase->objectName().isEmpty())
        QgsComposerPictureBase->setObjectName(QString::fromUtf8("QgsComposerPictureBase"));
    QgsComposerPictureBase->resize(225, 419);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerPictureBase->sizePolicy().hasHeightForWidth());
    QgsComposerPictureBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerPictureBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel2 = new QLabel(QgsComposerPictureBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    hboxLayout->addWidget(textLabel2);

    mPictureBrowseButton = new QPushButton(QgsComposerPictureBase);
    mPictureBrowseButton->setObjectName(QString::fromUtf8("mPictureBrowseButton"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mPictureBrowseButton->sizePolicy().hasHeightForWidth());
    mPictureBrowseButton->setSizePolicy(sizePolicy1);
    mPictureBrowseButton->setMaximumSize(QSize(50, 32767));

    hboxLayout->addWidget(mPictureBrowseButton);

    spacerItem = new QSpacerItem(47, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

    mPictureLineEdit = new QLineEdit(QgsComposerPictureBase);
    mPictureLineEdit->setObjectName(QString::fromUtf8("mPictureLineEdit"));

    gridLayout->addWidget(mPictureLineEdit, 1, 0, 1, 1);

    spacerItem1 = new QSpacerItem(22, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 6, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    mFrameCheckBox = new QCheckBox(QgsComposerPictureBase);
    mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

    hboxLayout1->addWidget(mFrameCheckBox);

    spacerItem2 = new QSpacerItem(115, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem2);


    gridLayout->addLayout(hboxLayout1, 5, 0, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel1 = new QLabel(QgsComposerPictureBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout2->addWidget(textLabel1);

    mAngleLineEdit = new QLineEdit(QgsComposerPictureBase);
    mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));
    sizePolicy1.setHeightForWidth(mAngleLineEdit->sizePolicy().hasHeightForWidth());
    mAngleLineEdit->setSizePolicy(sizePolicy1);
    mAngleLineEdit->setMaximumSize(QSize(80, 32767));

    hboxLayout2->addWidget(mAngleLineEdit);

    spacerItem3 = new QSpacerItem(57, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem3);


    gridLayout->addLayout(hboxLayout2, 4, 0, 1, 1);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    textLabel3 = new QLabel(QgsComposerPictureBase);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    hboxLayout3->addWidget(textLabel3);

    mWidthLineEdit = new QLineEdit(QgsComposerPictureBase);
    mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));
    sizePolicy1.setHeightForWidth(mWidthLineEdit->sizePolicy().hasHeightForWidth());
    mWidthLineEdit->setSizePolicy(sizePolicy1);
    mWidthLineEdit->setMaximumSize(QSize(80, 32767));

    hboxLayout3->addWidget(mWidthLineEdit);

    spacerItem4 = new QSpacerItem(63, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem4);


    gridLayout->addLayout(hboxLayout3, 2, 0, 1, 1);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    textLabel4 = new QLabel(QgsComposerPictureBase);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

    hboxLayout4->addWidget(textLabel4);

    mHeightLineEdit = new QLineEdit(QgsComposerPictureBase);
    mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));
    mHeightLineEdit->setEnabled(false);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mHeightLineEdit->sizePolicy().hasHeightForWidth());
    mHeightLineEdit->setSizePolicy(sizePolicy2);
    mHeightLineEdit->setMaximumSize(QSize(80, 32767));

    hboxLayout4->addWidget(mHeightLineEdit);

    spacerItem5 = new QSpacerItem(61, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout4->addItem(spacerItem5);


    gridLayout->addLayout(hboxLayout4, 3, 0, 1, 1);

    textLabel2->setBuddy(mPictureBrowseButton);
    textLabel1->setBuddy(mAngleLineEdit);
    textLabel3->setBuddy(mWidthLineEdit);
    textLabel4->setBuddy(mHeightLineEdit);
    QWidget::setTabOrder(mPictureBrowseButton, mPictureLineEdit);
    QWidget::setTabOrder(mPictureLineEdit, mWidthLineEdit);
    QWidget::setTabOrder(mWidthLineEdit, mHeightLineEdit);
    QWidget::setTabOrder(mHeightLineEdit, mAngleLineEdit);
    QWidget::setTabOrder(mAngleLineEdit, mFrameCheckBox);

    retranslateUi(QgsComposerPictureBase);

    QMetaObject::connectSlotsByName(QgsComposerPictureBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerPictureBase)
    {
    QgsComposerPictureBase->setWindowTitle(QApplication::translate("QgsComposerPictureBase", "Picture Options", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsComposerPictureBase", "Picture", 0, QApplication::UnicodeUTF8));
    mPictureBrowseButton->setText(QApplication::translate("QgsComposerPictureBase", "...", 0, QApplication::UnicodeUTF8));
    mFrameCheckBox->setText(QApplication::translate("QgsComposerPictureBase", "Frame", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerPictureBase", "Angle", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsComposerPictureBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsComposerPictureBase", "Height", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerPictureBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerPictureBase: public Ui_QgsComposerPictureBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERPICTUREBASE_H
