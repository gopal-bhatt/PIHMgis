/********************************************************************************
** Form generated from reading ui file 'qgsgpsdevicedialogbase.ui'
**
** Created: Tue Jun 22 23:12:05 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGPSDEVICEDIALOGBASE_H
#define UI_QGSGPSDEVICEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsGPSDeviceDialogBase
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *vboxLayout;
    QListWidget *lbDeviceList;
    QPushButton *pbnNewDevice;
    QPushButton *pbnDeleteDevice;
    QPushButton *pbnUpdateDevice;
    QWidget *layoutWidget_3;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    QLineEdit *leDeviceName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
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
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGPSDeviceDialogBase)
    {
    if (QgsGPSDeviceDialogBase->objectName().isEmpty())
        QgsGPSDeviceDialogBase->setObjectName(QString::fromUtf8("QgsGPSDeviceDialogBase"));
    QgsGPSDeviceDialogBase->resize(504, 436);
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsGPSDeviceDialogBase->sizePolicy().hasHeightForWidth());
    QgsGPSDeviceDialogBase->setSizePolicy(sizePolicy);
    QgsGPSDeviceDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsGPSDeviceDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    splitter = new QSplitter(QgsGPSDeviceDialogBase);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    layoutWidget_2 = new QWidget(splitter);
    layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
    vboxLayout = new QVBoxLayout(layoutWidget_2);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    lbDeviceList = new QListWidget(layoutWidget_2);
    lbDeviceList->setObjectName(QString::fromUtf8("lbDeviceList"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lbDeviceList->sizePolicy().hasHeightForWidth());
    lbDeviceList->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(lbDeviceList);

    pbnNewDevice = new QPushButton(layoutWidget_2);
    pbnNewDevice->setObjectName(QString::fromUtf8("pbnNewDevice"));
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(pbnNewDevice->sizePolicy().hasHeightForWidth());
    pbnNewDevice->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(pbnNewDevice);

    pbnDeleteDevice = new QPushButton(layoutWidget_2);
    pbnDeleteDevice->setObjectName(QString::fromUtf8("pbnDeleteDevice"));
    sizePolicy2.setHeightForWidth(pbnDeleteDevice->sizePolicy().hasHeightForWidth());
    pbnDeleteDevice->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(pbnDeleteDevice);

    pbnUpdateDevice = new QPushButton(layoutWidget_2);
    pbnUpdateDevice->setObjectName(QString::fromUtf8("pbnUpdateDevice"));
    sizePolicy2.setHeightForWidth(pbnUpdateDevice->sizePolicy().hasHeightForWidth());
    pbnUpdateDevice->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(pbnUpdateDevice);

    splitter->addWidget(layoutWidget_2);
    layoutWidget_3 = new QWidget(splitter);
    layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
    vboxLayout1 = new QVBoxLayout(layoutWidget_3);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(11);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(0, 0, 0, 0);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    textLabel3 = new QLabel(layoutWidget_3);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy3);

    hboxLayout->addWidget(textLabel3);

    leDeviceName = new QLineEdit(layoutWidget_3);
    leDeviceName->setObjectName(QString::fromUtf8("leDeviceName"));
    QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(2);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(leDeviceName->sizePolicy().hasHeightForWidth());
    leDeviceName->setSizePolicy(sizePolicy4);

    hboxLayout->addWidget(leDeviceName);


    vboxLayout1->addLayout(hboxLayout);

    groupBox = new QGroupBox(layoutWidget_3);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    textLabel1_2_5 = new QLabel(groupBox);
    textLabel1_2_5->setObjectName(QString::fromUtf8("textLabel1_2_5"));

    gridLayout1->addWidget(textLabel1_2_5, 4, 0, 1, 1);

    textLabel1_2_4 = new QLabel(groupBox);
    textLabel1_2_4->setObjectName(QString::fromUtf8("textLabel1_2_4"));

    gridLayout1->addWidget(textLabel1_2_4, 3, 0, 1, 1);

    textLabel1_2 = new QLabel(groupBox);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout1->addWidget(textLabel1_2, 0, 0, 1, 1);

    leRteDown = new QLineEdit(groupBox);
    leRteDown->setObjectName(QString::fromUtf8("leRteDown"));

    gridLayout1->addWidget(leRteDown, 2, 1, 1, 1);

    textLabel1_2_3 = new QLabel(groupBox);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));

    gridLayout1->addWidget(textLabel1_2_3, 2, 0, 1, 1);

    leWptUp = new QLineEdit(groupBox);
    leWptUp->setObjectName(QString::fromUtf8("leWptUp"));

    gridLayout1->addWidget(leWptUp, 1, 1, 1, 1);

    textLabel1_2_5_2 = new QLabel(groupBox);
    textLabel1_2_5_2->setObjectName(QString::fromUtf8("textLabel1_2_5_2"));

    gridLayout1->addWidget(textLabel1_2_5_2, 5, 0, 1, 1);

    leTrkDown = new QLineEdit(groupBox);
    leTrkDown->setObjectName(QString::fromUtf8("leTrkDown"));

    gridLayout1->addWidget(leTrkDown, 4, 1, 1, 1);

    leRteUp = new QLineEdit(groupBox);
    leRteUp->setObjectName(QString::fromUtf8("leRteUp"));

    gridLayout1->addWidget(leRteUp, 3, 1, 1, 1);

    leWptDown = new QLineEdit(groupBox);
    leWptDown->setObjectName(QString::fromUtf8("leWptDown"));

    gridLayout1->addWidget(leWptDown, 0, 1, 1, 1);

    leTrkUp = new QLineEdit(groupBox);
    leTrkUp->setObjectName(QString::fromUtf8("leTrkUp"));

    gridLayout1->addWidget(leTrkUp, 5, 1, 1, 1);

    textLabel1_2_2 = new QLabel(groupBox);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));

    gridLayout1->addWidget(textLabel1_2_2, 1, 0, 1, 1);


    vboxLayout1->addWidget(groupBox);

    textEdit = new QTextEdit(layoutWidget_3);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textEdit);

    splitter->addWidget(layoutWidget_3);

    gridLayout->addWidget(splitter, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsGPSDeviceDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Close);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


    retranslateUi(QgsGPSDeviceDialogBase);
    QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QgsGPSDeviceDialogBase, SLOT(accept()));

    QMetaObject::connectSlotsByName(QgsGPSDeviceDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGPSDeviceDialogBase)
    {
    QgsGPSDeviceDialogBase->setWindowTitle(QApplication::translate("QgsGPSDeviceDialogBase", "GPS Device Editor", 0, QApplication::UnicodeUTF8));
    pbnNewDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "New device", 0, QApplication::UnicodeUTF8));
    pbnDeleteDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Delete device", 0, QApplication::UnicodeUTF8));
    pbnUpdateDevice->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Update device", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsGPSDeviceDialogBase", "Device name", 0, QApplication::UnicodeUTF8));
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
    textEdit->setHtml(QApplication::translate("QgsGPSDeviceDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\">In the download and upload commands there can be special words that will be replaced by QGIS when the commands are used. These words are:<span style=\" font-style:italic;\">%babel</span> - the path to GPSBabel<br /><span style=\" font-style:italic;\">%in</span> - the GPX filename when uploading or the port when downloading<br /><span style=\" font-style:italic;\">%out</span> - the port when uploading or the GPX filename when downloading</p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGPSDeviceDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGPSDeviceDialogBase: public Ui_QgsGPSDeviceDialogBase {};
} // namespace Ui

#endif // UI_QGSGPSDEVICEDIALOGBASE_H
