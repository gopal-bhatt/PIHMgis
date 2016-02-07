/********************************************************************************
** Form generated from reading ui file 'qgspluginmanagerbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPLUGINMANAGERBASE_H
#define UI_QGSPLUGINMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>

class Ui_QgsPluginManagerBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QListView *vwPlugins;
    QLabel *lblFilter;
    QLineEdit *leFilter;
    QLabel *textLabel1;
    QLabel *lblPluginDir;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPluginManagerBase)
    {
    if (QgsPluginManagerBase->objectName().isEmpty())
        QgsPluginManagerBase->setObjectName(QString::fromUtf8("QgsPluginManagerBase"));
    QgsPluginManagerBase->resize(551, 377);
    QgsPluginManagerBase->setMouseTracking(false);
    QgsPluginManagerBase->setModal(true);
    gridLayout = new QGridLayout(QgsPluginManagerBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1_2 = new QLabel(QgsPluginManagerBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout->addWidget(textLabel1_2, 0, 0, 1, 3);

    vwPlugins = new QListView(QgsPluginManagerBase);
    vwPlugins->setObjectName(QString::fromUtf8("vwPlugins"));
    vwPlugins->setSelectionMode(QAbstractItemView::SingleSelection);
    vwPlugins->setSelectionBehavior(QAbstractItemView::SelectItems);
    vwPlugins->setWordWrap(true);

    gridLayout->addWidget(vwPlugins, 1, 0, 1, 3);

    lblFilter = new QLabel(QgsPluginManagerBase);
    lblFilter->setObjectName(QString::fromUtf8("lblFilter"));

    gridLayout->addWidget(lblFilter, 2, 0, 1, 1);

    leFilter = new QLineEdit(QgsPluginManagerBase);
    leFilter->setObjectName(QString::fromUtf8("leFilter"));

    gridLayout->addWidget(leFilter, 2, 1, 1, 2);

    textLabel1 = new QLabel(QgsPluginManagerBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 3, 0, 1, 2);

    lblPluginDir = new QLabel(QgsPluginManagerBase);
    lblPluginDir->setObjectName(QString::fromUtf8("lblPluginDir"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lblPluginDir->sizePolicy().hasHeightForWidth());
    lblPluginDir->setSizePolicy(sizePolicy);
    lblPluginDir->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    lblPluginDir->setWordWrap(true);

    gridLayout->addWidget(lblPluginDir, 3, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsPluginManagerBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 4, 0, 1, 3);

    lblFilter->setBuddy(leFilter);
    QWidget::setTabOrder(vwPlugins, leFilter);
    QWidget::setTabOrder(leFilter, buttonBox);

    retranslateUi(QgsPluginManagerBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsPluginManagerBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsPluginManagerBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsPluginManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPluginManagerBase)
    {
    QgsPluginManagerBase->setWindowTitle(QApplication::translate("QgsPluginManagerBase", "QGIS Plugin Manager", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsPluginManagerBase", "To enable / disable a plugin, click its checkbox or description", 0, QApplication::UnicodeUTF8));
    lblFilter->setText(QApplication::translate("QgsPluginManagerBase", "&Filter", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsPluginManagerBase", "Plugin Directory:", 0, QApplication::UnicodeUTF8));
    lblPluginDir->setText(QApplication::translate("QgsPluginManagerBase", "Directory", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPluginManagerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPluginManagerBase: public Ui_QgsPluginManagerBase {};
} // namespace Ui

#endif // UI_QGSPLUGINMANAGERBASE_H
