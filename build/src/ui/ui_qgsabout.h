/********************************************************************************
** Form generated from reading ui file 'qgsabout.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSABOUT_H
#define UI_QGSABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_QgsAbout
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *Widget2;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *qgisIcon;
    QLabel *TextLabel4;
    QLabel *lblVersion;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QWidget *Widget3;
    QGridLayout *gridLayout2;
    QTextEdit *txtWhatsNew;
    QWidget *tab;
    QGridLayout *gridLayout3;
    QListWidget *listBox1;
    QWidget *TabPage;
    QGridLayout *gridLayout4;
    QTextBrowser *txtBrowserPlugins;
    QWidget *tab_2;
    QGridLayout *gridLayout5;
    QTextBrowser *txtSponsors;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *buttonCancel;

    void setupUi(QDialog *QgsAbout)
    {
    if (QgsAbout->objectName().isEmpty())
        QgsAbout->setObjectName(QString::fromUtf8("QgsAbout"));
    QgsAbout->resize(529, 375);
    QgsAbout->setSizeGripEnabled(true);
    gridLayout = new QGridLayout(QgsAbout);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(QgsAbout);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    Widget2 = new QWidget();
    Widget2->setObjectName(QString::fromUtf8("Widget2"));
    gridLayout1 = new QGridLayout(Widget2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    qgisIcon = new QLabel(Widget2);
    qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));
    qgisIcon->setMaximumSize(QSize(60, 60));
    qgisIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png")));
    qgisIcon->setScaledContents(false);

    hboxLayout->addWidget(qgisIcon);

    TextLabel4 = new QLabel(Widget2);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    TextLabel4->setAlignment(Qt::AlignCenter);

    hboxLayout->addWidget(TextLabel4);


    gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

    lblVersion = new QLabel(Widget2);
    lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
    lblVersion->setAlignment(Qt::AlignCenter);
    lblVersion->setWordWrap(true);

    gridLayout1->addWidget(lblVersion, 1, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 2, 0, 1, 1);

    label = new QLabel(Widget2);
    label->setObjectName(QString::fromUtf8("label"));
    label->setAlignment(Qt::AlignCenter);
    label->setWordWrap(true);

    gridLayout1->addWidget(label, 3, 0, 1, 1);

    label_2 = new QLabel(Widget2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(label_2, 4, 0, 1, 1);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem1, 5, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    btnQgisHome = new QPushButton(Widget2);
    btnQgisHome->setObjectName(QString::fromUtf8("btnQgisHome"));
    btnQgisHome->setFlat(false);

    hboxLayout1->addWidget(btnQgisHome);

    btnQgisUser = new QPushButton(Widget2);
    btnQgisUser->setObjectName(QString::fromUtf8("btnQgisUser"));
    btnQgisUser->setFlat(false);

    hboxLayout1->addWidget(btnQgisUser);


    gridLayout1->addLayout(hboxLayout1, 6, 0, 1, 1);

    tabWidget->addTab(Widget2, QString());
    Widget3 = new QWidget();
    Widget3->setObjectName(QString::fromUtf8("Widget3"));
    gridLayout2 = new QGridLayout(Widget3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    txtWhatsNew = new QTextEdit(Widget3);
    txtWhatsNew->setObjectName(QString::fromUtf8("txtWhatsNew"));
    txtWhatsNew->setFocusPolicy(Qt::NoFocus);
    txtWhatsNew->setAcceptDrops(false);
    txtWhatsNew->setLineWidth(2);
    txtWhatsNew->setReadOnly(true);

    gridLayout2->addWidget(txtWhatsNew, 0, 0, 1, 1);

    tabWidget->addTab(Widget3, QString());
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout3 = new QGridLayout(tab);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    listBox1 = new QListWidget(tab);
    listBox1->setObjectName(QString::fromUtf8("listBox1"));
    listBox1->setAlternatingRowColors(true);

    gridLayout3->addWidget(listBox1, 0, 0, 1, 1);

    tabWidget->addTab(tab, QString());
    TabPage = new QWidget();
    TabPage->setObjectName(QString::fromUtf8("TabPage"));
    gridLayout4 = new QGridLayout(TabPage);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    txtBrowserPlugins = new QTextBrowser(TabPage);
    txtBrowserPlugins->setObjectName(QString::fromUtf8("txtBrowserPlugins"));

    gridLayout4->addWidget(txtBrowserPlugins, 0, 0, 1, 1);

    tabWidget->addTab(TabPage, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout5 = new QGridLayout(tab_2);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    txtSponsors = new QTextBrowser(tab_2);
    txtSponsors->setObjectName(QString::fromUtf8("txtSponsors"));

    gridLayout5->addWidget(txtSponsors, 0, 0, 1, 1);

    tabWidget->addTab(tab_2, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    spacerItem2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem2);

    buttonCancel = new QPushButton(QgsAbout);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout2->addWidget(buttonCancel);


    gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);

    QWidget::setTabOrder(tabWidget, btnQgisUser);
    QWidget::setTabOrder(btnQgisUser, btnQgisHome);
    QWidget::setTabOrder(btnQgisHome, buttonCancel);
    QWidget::setTabOrder(buttonCancel, txtBrowserPlugins);
    QWidget::setTabOrder(txtBrowserPlugins, listBox1);

    retranslateUi(QgsAbout);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsAbout);
    } // setupUi

    void retranslateUi(QDialog *QgsAbout)
    {
    QgsAbout->setWindowTitle(QApplication::translate("QgsAbout", "About Quantum GIS", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("QgsAbout", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:x-large; font-weight:600;\"><span style=\" font-size:x-large;\">Quantum GIS (QGIS)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    lblVersion->setText(QApplication::translate("QgsAbout", "Version", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QgsAbout", "Quantum GIS is licensed under the GNU General Public License", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsAbout", "http://www.gnu.org/licenses", 0, QApplication::UnicodeUTF8));
    btnQgisHome->setText(QApplication::translate("QgsAbout", "QGIS Home Page", 0, QApplication::UnicodeUTF8));
    btnQgisUser->setText(QApplication::translate("QgsAbout", "Join our user mailing list", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(Widget2), QApplication::translate("QgsAbout", "About", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(Widget3), QApplication::translate("QgsAbout", "What's New", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsAbout", "Developers", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(TabPage), QApplication::translate("QgsAbout", "Providers", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsAbout", "Sponsors", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("QgsAbout", "Ok", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    Q_UNUSED(QgsAbout);
    } // retranslateUi

};

namespace Ui {
    class QgsAbout: public Ui_QgsAbout {};
} // namespace Ui

#endif // UI_QGSABOUT_H
