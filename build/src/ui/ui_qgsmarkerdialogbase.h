/********************************************************************************
** Form generated from reading ui file 'qgsmarkerdialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMARKERDIALOGBASE_H
#define UI_QGSMARKERDIALOGBASE_H

#include <Qt3Support/Q3IconView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsMarkerDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mDirectoryLabel;
    QPushButton *mBrowseDirectoriesButton;
    QLineEdit *mDirectoryEdit;
    QSpacerItem *spacerItem;
    QPushButton *mOkButton;
    QPushButton *mCancelButton;
    QSpacerItem *spacerItem1;
    Q3IconView *mIconView;

    void setupUi(QDialog *QgsMarkerDialogBase)
    {
    if (QgsMarkerDialogBase->objectName().isEmpty())
        QgsMarkerDialogBase->setObjectName(QString::fromUtf8("QgsMarkerDialogBase"));
    QgsMarkerDialogBase->resize(440, 346);
    gridLayout = new QGridLayout(QgsMarkerDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mDirectoryLabel = new QLabel(QgsMarkerDialogBase);
    mDirectoryLabel->setObjectName(QString::fromUtf8("mDirectoryLabel"));

    gridLayout->addWidget(mDirectoryLabel, 0, 0, 1, 1);

    mBrowseDirectoriesButton = new QPushButton(QgsMarkerDialogBase);
    mBrowseDirectoriesButton->setObjectName(QString::fromUtf8("mBrowseDirectoriesButton"));
    mBrowseDirectoriesButton->setFocusPolicy(Qt::NoFocus);

    gridLayout->addWidget(mBrowseDirectoriesButton, 0, 4, 1, 1);

    mDirectoryEdit = new QLineEdit(QgsMarkerDialogBase);
    mDirectoryEdit->setObjectName(QString::fromUtf8("mDirectoryEdit"));
    mDirectoryEdit->setFocusPolicy(Qt::NoFocus);

    gridLayout->addWidget(mDirectoryEdit, 0, 1, 1, 3);

    spacerItem = new QSpacerItem(100, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    mOkButton = new QPushButton(QgsMarkerDialogBase);
    mOkButton->setObjectName(QString::fromUtf8("mOkButton"));
    mOkButton->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(mOkButton, 2, 1, 1, 1);

    mCancelButton = new QPushButton(QgsMarkerDialogBase);
    mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));
    mCancelButton->setFocusPolicy(Qt::StrongFocus);

    gridLayout->addWidget(mCancelButton, 2, 2, 1, 1);

    spacerItem1 = new QSpacerItem(120, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 2, 3, 1, 2);

    mIconView = new Q3IconView(QgsMarkerDialogBase);
    mIconView->setObjectName(QString::fromUtf8("mIconView"));
    mIconView->setFocusPolicy(Qt::NoFocus);

    gridLayout->addWidget(mIconView, 1, 0, 1, 5);

    QWidget::setTabOrder(mDirectoryEdit, mIconView);

    retranslateUi(QgsMarkerDialogBase);

    QMetaObject::connectSlotsByName(QgsMarkerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMarkerDialogBase)
    {
    QgsMarkerDialogBase->setWindowTitle(QApplication::translate("QgsMarkerDialogBase", "Choose a marker symbol", 0, QApplication::UnicodeUTF8));
    mDirectoryLabel->setText(QApplication::translate("QgsMarkerDialogBase", "Directory", 0, QApplication::UnicodeUTF8));
    mBrowseDirectoriesButton->setText(QApplication::translate("QgsMarkerDialogBase", "...", 0, QApplication::UnicodeUTF8));
    mOkButton->setText(QApplication::translate("QgsMarkerDialogBase", "Ok", 0, QApplication::UnicodeUTF8));
    mCancelButton->setText(QApplication::translate("QgsMarkerDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    mIconView->clear();

    Q3IconViewItem *__item = new Q3IconViewItem(mIconView);
    __item->setText(QApplication::translate("QgsMarkerDialogBase", "New Item", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsMarkerDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMarkerDialogBase: public Ui_QgsMarkerDialogBase {};
} // namespace Ui

#endif // UI_QGSMARKERDIALOGBASE_H
