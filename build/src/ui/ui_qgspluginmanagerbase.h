/********************************************************************************
** Form generated from reading ui file 'qgspluginmanagerbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPLUGINMANAGERBASE_H
#define UI_QGSPLUGINMANAGERBASE_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsPluginManagerBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *txtPluginDir;
    QPushButton *btnBrowse;
    Q3ListView *lstPlugins;
    QLabel *textLabel1_2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *btnSelectAll;
    QPushButton *btnClearAll;
    QPushButton *btnOk;
    QPushButton *btnClose;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QgsPluginManagerBase)
    {
    if (QgsPluginManagerBase->objectName().isEmpty())
        QgsPluginManagerBase->setObjectName(QString::fromUtf8("QgsPluginManagerBase"));
    QgsPluginManagerBase->resize(564, 368);
    QgsPluginManagerBase->setModal(true);
    gridLayout = new QGridLayout(QgsPluginManagerBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel1 = new QLabel(QgsPluginManagerBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout->addWidget(textLabel1);

    txtPluginDir = new QLineEdit(QgsPluginManagerBase);
    txtPluginDir->setObjectName(QString::fromUtf8("txtPluginDir"));

    hboxLayout->addWidget(txtPluginDir);

    btnBrowse = new QPushButton(QgsPluginManagerBase);
    btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));
    btnBrowse->setMaximumSize(QSize(60, 32767));

    hboxLayout->addWidget(btnBrowse);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

    lstPlugins = new Q3ListView(QgsPluginManagerBase);
    lstPlugins->addColumn(QApplication::translate("QgsPluginManagerBase", "Name", 0, QApplication::UnicodeUTF8));
    lstPlugins->addColumn(QApplication::translate("QgsPluginManagerBase", "Version", 0, QApplication::UnicodeUTF8));
    lstPlugins->addColumn(QApplication::translate("QgsPluginManagerBase", "Description", 0, QApplication::UnicodeUTF8));
    lstPlugins->addColumn(QApplication::translate("QgsPluginManagerBase", "Library Name", 0, QApplication::UnicodeUTF8));
    lstPlugins->setObjectName(QString::fromUtf8("lstPlugins"));
    QFont font;
    font.setFamily(QString::fromUtf8("Arial"));
    font.setPointSize(10);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    lstPlugins->setFont(font);

    gridLayout->addWidget(lstPlugins, 2, 0, 1, 1);

    textLabel1_2 = new QLabel(QgsPluginManagerBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout->addWidget(textLabel1_2, 1, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem = new QSpacerItem(100, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);

    btnSelectAll = new QPushButton(QgsPluginManagerBase);
    btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));

    hboxLayout1->addWidget(btnSelectAll);

    btnClearAll = new QPushButton(QgsPluginManagerBase);
    btnClearAll->setObjectName(QString::fromUtf8("btnClearAll"));

    hboxLayout1->addWidget(btnClearAll);

    btnOk = new QPushButton(QgsPluginManagerBase);
    btnOk->setObjectName(QString::fromUtf8("btnOk"));

    hboxLayout1->addWidget(btnOk);

    btnClose = new QPushButton(QgsPluginManagerBase);
    btnClose->setObjectName(QString::fromUtf8("btnClose"));

    hboxLayout1->addWidget(btnClose);

    spacerItem1 = new QSpacerItem(100, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);


    gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);

    textLabel1->setBuddy(txtPluginDir);

    retranslateUi(QgsPluginManagerBase);

    QMetaObject::connectSlotsByName(QgsPluginManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPluginManagerBase)
    {
    QgsPluginManagerBase->setWindowTitle(QApplication::translate("QgsPluginManagerBase", "QGIS Plugin Manger", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsPluginManagerBase", "Plugin Directory", 0, QApplication::UnicodeUTF8));
    btnBrowse->setText(QApplication::translate("QgsPluginManagerBase", "...", 0, QApplication::UnicodeUTF8));
    lstPlugins->header()->setLabel(0, QApplication::translate("QgsPluginManagerBase", "Name", 0, QApplication::UnicodeUTF8));
    lstPlugins->header()->setLabel(1, QApplication::translate("QgsPluginManagerBase", "Version", 0, QApplication::UnicodeUTF8));
    lstPlugins->header()->setLabel(2, QApplication::translate("QgsPluginManagerBase", "Description", 0, QApplication::UnicodeUTF8));
    lstPlugins->header()->setLabel(3, QApplication::translate("QgsPluginManagerBase", "Library Name", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsPluginManagerBase", "To load a plugin, click the checkbox next to the plugin and click Ok", 0, QApplication::UnicodeUTF8));
    btnSelectAll->setText(QApplication::translate("QgsPluginManagerBase", "&Select All", 0, QApplication::UnicodeUTF8));
    btnSelectAll->setShortcut(QApplication::translate("QgsPluginManagerBase", "Alt+S", 0, QApplication::UnicodeUTF8));
    btnClearAll->setText(QApplication::translate("QgsPluginManagerBase", "C&lear All", 0, QApplication::UnicodeUTF8));
    btnClearAll->setShortcut(QApplication::translate("QgsPluginManagerBase", "Alt+L", 0, QApplication::UnicodeUTF8));
    btnOk->setText(QApplication::translate("QgsPluginManagerBase", "&Ok", 0, QApplication::UnicodeUTF8));
    btnOk->setShortcut(QApplication::translate("QgsPluginManagerBase", "Alt+O", 0, QApplication::UnicodeUTF8));
    btnClose->setText(QApplication::translate("QgsPluginManagerBase", "&Close", 0, QApplication::UnicodeUTF8));
    btnClose->setShortcut(QApplication::translate("QgsPluginManagerBase", "Alt+C", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPluginManagerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPluginManagerBase: public Ui_QgsPluginManagerBase {};
} // namespace Ui

#endif // UI_QGSPLUGINMANAGERBASE_H
