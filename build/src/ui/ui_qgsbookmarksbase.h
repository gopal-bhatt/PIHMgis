/********************************************************************************
** Form generated from reading ui file 'qgsbookmarksbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKSBASE_H
#define UI_QGSBOOKMARKSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QTreeWidget>

class Ui_QgsBookmarksBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *lstBookmarks;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBookmarksBase)
    {
    if (QgsBookmarksBase->objectName().isEmpty())
        QgsBookmarksBase->setObjectName(QString::fromUtf8("QgsBookmarksBase"));
    QgsBookmarksBase->resize(440, 370);
    gridLayout = new QGridLayout(QgsBookmarksBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    lstBookmarks = new QTreeWidget(QgsBookmarksBase);
    lstBookmarks->setObjectName(QString::fromUtf8("lstBookmarks"));
    lstBookmarks->setRootIsDecorated(false);
    lstBookmarks->setSortingEnabled(true);
    lstBookmarks->setColumnCount(4);

    gridLayout->addWidget(lstBookmarks, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsBookmarksBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::NoButton);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    QWidget::setTabOrder(lstBookmarks, buttonBox);

    retranslateUi(QgsBookmarksBase);
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsBookmarksBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsBookmarksBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBookmarksBase)
    {
    QgsBookmarksBase->setWindowTitle(QApplication::translate("QgsBookmarksBase", "Geospatial Bookmarks", 0, QApplication::UnicodeUTF8));
    lstBookmarks->headerItem()->setText(0, QApplication::translate("QgsBookmarksBase", "Name", 0, QApplication::UnicodeUTF8));
    lstBookmarks->headerItem()->setText(1, QApplication::translate("QgsBookmarksBase", "Project", 0, QApplication::UnicodeUTF8));
    lstBookmarks->headerItem()->setText(2, QApplication::translate("QgsBookmarksBase", "Extent", 0, QApplication::UnicodeUTF8));
    lstBookmarks->headerItem()->setText(3, QApplication::translate("QgsBookmarksBase", "Id", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsBookmarksBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarksBase: public Ui_QgsBookmarksBase {};
} // namespace Ui

#endif // UI_QGSBOOKMARKSBASE_H
