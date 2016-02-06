/********************************************************************************
** Form generated from reading ui file 'qgsgpsdevicedialogbase.ui'
**
** Created: Wed Jun 11 19:10:26 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGPSDEVICEDIALOGBASE_H
#define UI_QGSGPSDEVICEDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsGPSDeviceDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *vboxLayout1;
    QListWidget *lbDeviceList;
    QPushButton *pbnNewDevice;
    QPushButton *pbnDeleteDevice;
    QPushButton *pbnUpdateDevice;
    QWidget *layoutWidget_3;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    QLineEdit *leDeviceName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel1_2_5;
    QLabel *textLabel1_2_4;
    QLabel *textLabel1_2;
    QLineEdit *leRteDown;
    QLabel *textLabel1_2_3;
    QLineEdit *leWptUp;
    QLabel *textLabel1_2_5_2;
    QLineEdit *leTrkDown;
    QLineEdit *leRteUp;
    QLineEdit *leWptDown;
    QLineEdit *leTrkUp;
    QLabel *textLabel1_2_2;
    QTextEdit *textEdit;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *pbnClose;

    void setupUi(QDialog *QgsGPSDeviceDialogBase)
    {
    if (QgsGPSDeviceDialogBase->objectName().isEmpty())
        QgsGPSDeviceDialogBase->setObjectName(QString::fromUtf8("QgsGPSDeviceDialogBase"));
    QgsGPSDeviceDialogBase->resize(504, 436);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsGPSDeviceDialogBase->sizePolicy().hasHeightForWidth());
    QgsGPSDeviceDialogBase->setSizePolicy(sizePolicy);
    QgsGPSDeviceDialogBase->setModal(true);
    vboxLayout = new QVBoxLayout(QgsGPSDeviceDialogBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    splitter = new QSplitter(QgsGPSDeviceDialogBase);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    layoutWidget_2 = new QWidget(splitter);
    layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
    vboxLayout1 = new QVBoxLayout(layoutWidget_2);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(0, 0, 0, 0);
    lbDeviceList = new QListWidget(layoutWidget_2);
    lbDeviceList->setObjectName(QString::fromUtf8("lbDeviceList"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lbDeviceList->sizePolicy().hasHeightForWidth());
    lbDeviceList->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(lbDeviceList);

    pbnNewDevice = new QPushButton(layoutWidget_2);
    pbnNewDevice->setObjectName(QString::fromUtf8("pbnNewDevice"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(pbnNewDevice->sizePolicy().hasHeightForWidth());
    pbnNewDevice->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(pbnNewDevice);

    pbnDeleteDevice = new QPushButton(layoutWidget_2);
    pbnDeleteDevice->setObjectName(QString::fromUtf8("pbnDeleteDevice"));
    sizePolicy2.setHeightForWidth(pbnDeleteDevice->sizePolicy().hasHeightForWidth());
    pbnDeleteDevice->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(pbnDeleteDevice);

    pbnUpdateDevice = new QPushButton(layoutWidget_2);
    pbnUpdateDevice->setObjectName(QString::fromUtf8("pbnUpdateDevice"));
    sizePolicy2.setHeightForWidth(pbnUpdateDevice->sizePolicy().hasHeightForWidth());
    pbnUpdateDevice->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(pbnUpdateDevice);

    splitter->addWidget(layoutWidget_2);
    layoutWidget_3 = new QWidget(splitter);
    layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
    vboxLayout2 = new QVBoxLayout(layoutWidget_3);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    vboxLayout2->setContentsMargins(0, 0, 0, 0);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel3 = new QLabel(layoutWidget_3);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy3);

    hboxLayout->addWidget(textLabel3);

    leDeviceName = new QLineEdit(layoutWidget_3);
    leDeviceName->setObjectName(QString::fromUtf8("leDeviceName"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(2);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(leDeviceName->sizePolicy().hasHeightForWidth());
    leDeviceName->setSizePolicy(sizePolicy4);

    hboxLayout->addWidget(leDeviceName);


    vboxLayout2->addLayout(hboxLayout);

    groupBox = new QGroupBox(layoutWidget_3);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    gridLayout = new QGridLayout(groupBox);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1_2_5 = new QLabel(groupBox);
    textLabel1_2_5->setObjectName(QString::fromUtf8("textLabel1_2_5"));

    gridLayout->addWidget(textLabel1_2_5, 4, 0, 1, 1);

    textLabel1_2_4 = new QLabel(groupBox);
    textLabel1_2_4->setObjectName(QString::fromUtf8("textLabel1_2_4"));

    gridLayout->addWidget(textLabel1_2_4, 3, 0, 1, 1);

    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

    leRteDown = new QLineEdit(groupBox);
    leRteDown->setObjectName(QString::fromUtf8("leRteDown"));

    gridLayout->addWidget(leRteDown, 2, 1, 1, 1);

    textLabel1_2_3 = new QLabel(groupBox);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));

    gridLayout->addWidget(textLabel1_2_3, 2, 0, 1, 1);

    leWptUp = new QLineEdit(groupBox);
    leWptUp->setObjectName(QString::fromUtf8("leWptUp"));

    gridLayout->addWidget(leWptUp, 1, 1, 1, 1);

    textLabel1_2_5_2 = new QLabel(groupBox);
    textLabel1_2_5_2->setObjectName(QString::fromUtf8("textLabel1_2_5_2"));

    gridLayout->addWidget(textLabel1_2_5_2, 5, 0, 1, 1);

    leTrkDown = new QLineEdit(groupBox);
    leTrkDown->setObjectName(QString::fromUtf8("leTrkDown"));

    gridLayout->addWidget(leTrkDown, 4, 1, 1, 1);

    leRteUp = new QLineEdit(groupBox);
    leRteUp->setObjectName(QString::fromUtf8("leRteUp"));

    gridLayout->addWidget(leRteUp, 3, 1, 1, 1);

    leWptDown = new QLineEdit(groupBox);
    leWptDown->setObjectName(QString::fromUtf8("leWptDown"));

    gridLayout->addWidget(leWptDown, 0, 1, 1, 1);

    leTrkUp = new QLineEdit(groupBox);
    leTrkUp->setObjectName(QString::fromUtf8("leTrkUp"));

    gridLayout->addWidget(leTrkUp, 5, 1, 1, 1);

    textLabel1_2_2 = new QLabel(groupBox);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout->addWidget(textLabel1_2_2, 1, 0, 1, 1);


    vboxLayout2->addWidget(groupBox);

    textEdit = new QTextEdit(layoutWidget_3);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy1);

    vboxLayout2->addWidget(textEdit);

    splitter->addWidget(layoutWidget_3);

    vboxLayout->addWidget(splitter);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem = new QSpacerItem(381, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);

    pbnClose = new QPushButton(QgsGPSDeviceDialogBase);
    pbnClose->setObjectName(QString::fromUtf8("pbnClose"));
    pbnClose->setDefault(true);

    hboxLayout1->addWidget(pbnClose);


    vboxLayout->addLayout(hboxLayout1);


    retranslateUi(QgsGPSDeviceDialogBase);

    QMetaObject::connectSlotsByName(QgsGPSDeviceDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGPSDeviceDialogBase)
    {
    QgsGPSDeviceDialogBase->setWindowTitle(QApplication::translate("QgsGPSDeviceDialogBase", "GPS Device Editor", 0, QApplication::UnicodeUTF8));
    pbnNewDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "New device", 0, QApplication::UnicodeUTF8));
    pbnDeleteDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Delete device", 0, QApplication::UnicodeUTF8));
    pbnUpdateDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Update device", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Device name:", 0, QApplication::UnicodeUTF8));
    leDeviceName->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "This is the name of the device as it will appear in the lists", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsGPSDeviceDialogBase", "Commands", 0, QApplication::UnicodeUTF8));
    textLabel1_2_5->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Track download:", 0, QApplication::UnicodeUTF8));
    textLabel1_2_4->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Route upload:", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Waypoint download:", 0, QApplication::UnicodeUTF8));
    leRteDown->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to download routes from the device", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Route download:", 0, QApplication::UnicodeUTF8));
    leWptUp->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to upload waypoints to the device", 0, QApplication::UnicodeUTF8));
    textLabel1_2_5_2->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Track upload:", 0, QApplication::UnicodeUTF8));
    leTrkDown->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to download tracks from the device", 0, QApplication::UnicodeUTF8));
    leRteUp->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to upload routes to the device", 0, QApplication::UnicodeUTF8));
    leWptDown->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to download waypoints from the device", 0, QApplication::UnicodeUTF8));
    leTrkUp->setToolTip(QApplication::translate("QgsGPSDeviceDialogBase", "The command that is used to upload tracks to the device", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Waypoint upload:", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsGPSDeviceDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In the download and upload commands there can be special words that will be replaced by QGIS when the commands are used. These words are:<span style=\" font-style:italic;\">%babel</span> - the path to GPSBabel<br /><span style=\" font-style:italic;\">%in</span> - the GPX filename when uploading or the port when downloading<br /><span style=\" font-style:italic;\">%out</span> - the port when uploading or the GPX filename when downloading</p></body></html>", 0, QApplication::UnicodeUTF8));
    pbnClose->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGPSDeviceDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGPSDeviceDialogBase: public Ui_QgsGPSDeviceDialogBase {};
} // namespace Ui

#endif // UI_QGSGPSDEVICEDIALOGBASE_H
