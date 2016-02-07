/********************************************************************************
** Form generated from reading ui file 'qgsgeomtypedialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGEOMTYPEDIALOGBASE_H
#define UI_QGSGEOMTYPEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>

class Ui_QgsGeomTypeDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mFileFormatLabel;
    QComboBox *mFileFormatComboBox;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout1;
    QRadioButton *mPointRadioButton;
    QRadioButton *mLineRadioButton;
    QRadioButton *mPolygonRadioButton;
    QLabel *mAttributeLabel;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QSpacerItem *spacerItem;
    QToolButton *mRemoveAttributeButton;
    QToolButton *mAddAttributeButton;
    QTreeWidget *mAttributeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGeomTypeDialogBase)
    {
    if (QgsGeomTypeDialogBase->objectName().isEmpty())
        QgsGeomTypeDialogBase->setObjectName(QString::fromUtf8("QgsGeomTypeDialogBase"));
    QgsGeomTypeDialogBase->resize(395, 422);
    QgsGeomTypeDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsGeomTypeDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mFileFormatLabel = new QLabel(QgsGeomTypeDialogBase);
    mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));

    gridLayout->addWidget(mFileFormatLabel, 0, 0, 1, 1);

    mFileFormatComboBox = new QComboBox(QgsGeomTypeDialogBase);
    mFileFormatComboBox->setObjectName(QString::fromUtf8("mFileFormatComboBox"));

    gridLayout->addWidget(mFileFormatComboBox, 0, 1, 1, 3);

    buttonGroup1 = new QGroupBox(QgsGeomTypeDialogBase);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    gridLayout1 = new QGridLayout(buttonGroup1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    mPointRadioButton = new QRadioButton(buttonGroup1);
    mPointRadioButton->setObjectName(QString::fromUtf8("mPointRadioButton"));

    gridLayout1->addWidget(mPointRadioButton, 0, 0, 1, 1);

    mLineRadioButton = new QRadioButton(buttonGroup1);
    mLineRadioButton->setObjectName(QString::fromUtf8("mLineRadioButton"));

    gridLayout1->addWidget(mLineRadioButton, 0, 1, 1, 1);

    mPolygonRadioButton = new QRadioButton(buttonGroup1);
    mPolygonRadioButton->setObjectName(QString::fromUtf8("mPolygonRadioButton"));

    gridLayout1->addWidget(mPolygonRadioButton, 0, 2, 1, 1);


    gridLayout->addWidget(buttonGroup1, 1, 0, 1, 4);

    mAttributeLabel = new QLabel(QgsGeomTypeDialogBase);
    mAttributeLabel->setObjectName(QString::fromUtf8("mAttributeLabel"));

    gridLayout->addWidget(mAttributeLabel, 2, 0, 1, 4);

    textLabel1 = new QLabel(QgsGeomTypeDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 3, 0, 1, 1);

    mNameEdit = new QLineEdit(QgsGeomTypeDialogBase);
    mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

    gridLayout->addWidget(mNameEdit, 3, 1, 1, 3);

    textLabel2 = new QLabel(QgsGeomTypeDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 4, 0, 1, 1);

    mTypeBox = new QComboBox(QgsGeomTypeDialogBase);
    mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

    gridLayout->addWidget(mTypeBox, 4, 1, 1, 3);

    spacerItem = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 5, 0, 1, 2);

    mRemoveAttributeButton = new QToolButton(QgsGeomTypeDialogBase);
    mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
    mRemoveAttributeButton->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png")));

    gridLayout->addWidget(mRemoveAttributeButton, 5, 2, 1, 1);

    mAddAttributeButton = new QToolButton(QgsGeomTypeDialogBase);
    mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
    mAddAttributeButton->setIcon(QIcon(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png")));

    gridLayout->addWidget(mAddAttributeButton, 5, 3, 1, 1);

    mAttributeView = new QTreeWidget(QgsGeomTypeDialogBase);
    mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
    mAttributeView->setSizePolicy(sizePolicy);
    mAttributeView->setAlternatingRowColors(true);
    mAttributeView->setRootIsDecorated(false);

    gridLayout->addWidget(mAttributeView, 6, 0, 1, 4);

    buttonBox = new QDialogButtonBox(QgsGeomTypeDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 7, 0, 1, 4);

    mFileFormatLabel->setBuddy(mFileFormatComboBox);
    textLabel1->setBuddy(mNameEdit);
    textLabel2->setBuddy(mTypeBox);
    QWidget::setTabOrder(mFileFormatComboBox, mPointRadioButton);
    QWidget::setTabOrder(mPointRadioButton, mLineRadioButton);
    QWidget::setTabOrder(mLineRadioButton, mPolygonRadioButton);
    QWidget::setTabOrder(mPolygonRadioButton, mNameEdit);
    QWidget::setTabOrder(mNameEdit, mTypeBox);
    QWidget::setTabOrder(mTypeBox, mRemoveAttributeButton);
    QWidget::setTabOrder(mRemoveAttributeButton, mAddAttributeButton);
    QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
    QWidget::setTabOrder(mAttributeView, buttonBox);

    retranslateUi(QgsGeomTypeDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsGeomTypeDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsGeomTypeDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsGeomTypeDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeomTypeDialogBase)
    {
    QgsGeomTypeDialogBase->setWindowTitle(QApplication::translate("QgsGeomTypeDialogBase", "New Vector Layer", 0, QApplication::UnicodeUTF8));
    mFileFormatLabel->setText(QApplication::translate("QgsGeomTypeDialogBase", "File format", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("QgsGeomTypeDialogBase", "Type", 0, QApplication::UnicodeUTF8));
    mPointRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Point", 0, QApplication::UnicodeUTF8));
    mLineRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Line", 0, QApplication::UnicodeUTF8));
    mPolygonRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Polygon", 0, QApplication::UnicodeUTF8));
    mAttributeLabel->setText(QApplication::translate("QgsGeomTypeDialogBase", "Attributes", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGeomTypeDialogBase", "Name", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsGeomTypeDialogBase", "Type", 0, QApplication::UnicodeUTF8));
    mRemoveAttributeButton->setToolTip(QApplication::translate("QgsGeomTypeDialogBase", "Delete selected attribute", 0, QApplication::UnicodeUTF8));
    mRemoveAttributeButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "...", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setToolTip(QApplication::translate("QgsGeomTypeDialogBase", "Add attribute", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "...", 0, QApplication::UnicodeUTF8));
    mAttributeView->headerItem()->setText(0, QApplication::translate("QgsGeomTypeDialogBase", "Name", 0, QApplication::UnicodeUTF8));
    mAttributeView->headerItem()->setText(1, QApplication::translate("QgsGeomTypeDialogBase", "Type", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGeomTypeDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeomTypeDialogBase: public Ui_QgsGeomTypeDialogBase {};
} // namespace Ui

#endif // UI_QGSGEOMTYPEDIALOGBASE_H
