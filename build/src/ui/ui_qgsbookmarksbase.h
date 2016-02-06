/********************************************************************************
** Form generated from reading ui file 'qgsbookmarksbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKSBASE_H
#define UI_QGSBOOKMARKSBASE_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsBookmarksBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    Q3ListView *lstBookmarks;
    QPushButton *btnHelp;
    QPushButton *btnClose;
    QPushButton *btnDelete;
    QPushButton *btnZoomTo;

    void setupUi(QDialog *QgsBookmarksBase)
    {
    if (QgsBookmarksBase->objectName().isEmpty())
        QgsBookmarksBase->setObjectName(QString::fromUtf8("QgsBookmarksBase"));
    QgsBookmarksBase->resize(344, 263);
    gridLayout = new QGridLayout(QgsBookmarksBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(85, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 4, 1, 1, 1);

    lstBookmarks = new Q3ListView(QgsBookmarksBase);
    lstBookmarks->addColumn(QApplication::translate("QgsBookmarksBase", "Name", 0, QApplication::UnicodeUTF8));
    lstBookmarks->addColumn(QApplication::translate("QgsBookmarksBase", "Project", 0, QApplication::UnicodeUTF8));
    lstBookmarks->addColumn(QApplication::translate("QgsBookmarksBase", "Extent", 0, QApplication::UnicodeUTF8));
    lstBookmarks->addColumn(QApplication::translate("QgsBookmarksBase", "Id", 0, QApplication::UnicodeUTF8));
    lstBookmarks->setObjectName(QString::fromUtf8("lstBookmarks"));

    gridLayout->addWidget(lstBookmarks, 0, 0, 5, 1);

    btnHelp = new QPushButton(QgsBookmarksBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));

    gridLayout->addWidget(btnHelp, 3, 1, 1, 1);

    btnClose = new QPushButton(QgsBookmarksBase);
    btnClose->setObjectName(QString::fromUtf8("btnClose"));

    gridLayout->addWidget(btnClose, 2, 1, 1, 1);

    btnDelete = new QPushButton(QgsBookmarksBase);
    btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

    gridLayout->addWidget(btnDelete, 1, 1, 1, 1);

    btnZoomTo = new QPushButton(QgsBookmarksBase);
    btnZoomTo->setObjectName(QString::fromUtf8("btnZoomTo"));

    gridLayout->addWidget(btnZoomTo, 0, 1, 1, 1);

    QWidget::setTabOrder(btnZoomTo, btnDelete);
    QWidget::setTabOrder(btnDelete, btnClose);
    QWidget::setTabOrder(btnClose, btnHelp);

    retranslateUi(QgsBookmarksBase);

    QMetaObject::connectSlotsByName(QgsBookmarksBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBookmarksBase)
    {
    QgsBookmarksBase->setWindowTitle(QApplication::translate("QgsBookmarksBase", "Geospatial Bookmarks", 0, QApplication::UnicodeUTF8));
    lstBookmarks->header()->setLabel(0, QApplication::translate("QgsBookmarksBase", "Name", 0, QApplication::UnicodeUTF8));
    lstBookmarks->header()->setLabel(1, QApplication::translate("QgsBookmarksBase", "Project", 0, QApplication::UnicodeUTF8));
    lstBookmarks->header()->setLabel(2, QApplication::translate("QgsBookmarksBase", "Extent", 0, QApplication::UnicodeUTF8));
    lstBookmarks->header()->setLabel(3, QApplication::translate("QgsBookmarksBase", "Id", 0, QApplication::UnicodeUTF8));
    btnHelp->setToolTip(QApplication::translate("QgsBookmarksBase", "Close the dialog", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsBookmarksBase", "Help", 0, QApplication::UnicodeUTF8));
    btnClose->setToolTip(QApplication::translate("QgsBookmarksBase", "Close the dialog", 0, QApplication::UnicodeUTF8));
    btnClose->setText(QApplication::translate("QgsBookmarksBase", "Close", 0, QApplication::UnicodeUTF8));
    btnDelete->setToolTip(QApplication::translate("QgsBookmarksBase", "Delete the currently selected bookmark", 0, QApplication::UnicodeUTF8));
    btnDelete->setText(QApplication::translate("QgsBookmarksBase", "Delete", 0, QApplication::UnicodeUTF8));
    btnZoomTo->setToolTip(QApplication::translate("QgsBookmarksBase", "Zoom to the currently selected bookmark", 0, QApplication::UnicodeUTF8));
    btnZoomTo->setText(QApplication::translate("QgsBookmarksBase", "Zoom To", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsBookmarksBase);
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarksBase: public Ui_QgsBookmarksBase {};
} // namespace Ui

#endif // UI_QGSBOOKMARKSBASE_H
