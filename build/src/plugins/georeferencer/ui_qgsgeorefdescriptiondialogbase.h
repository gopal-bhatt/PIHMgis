/********************************************************************************
** Form generated from reading ui file 'qgsgeorefdescriptiondialogbase.ui'
**
** Created: Tue Jun 22 23:12:33 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H
#define UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

class Ui_QgsGeorefDescriptionDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *QgsGeorefDescriptionDialogBase)
    {
    if (QgsGeorefDescriptionDialogBase->objectName().isEmpty())
        QgsGeorefDescriptionDialogBase->setObjectName(QString::fromUtf8("QgsGeorefDescriptionDialogBase"));
    QgsGeorefDescriptionDialogBase->resize(416, 268);
    QgsGeorefDescriptionDialogBase->setWindowIcon(QIcon(QString::fromUtf8(":/icon.png")));
    QgsGeorefDescriptionDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsGeorefDescriptionDialogBase);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonBox = new QDialogButtonBox(QgsGeorefDescriptionDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

    textEdit = new QTextEdit(QgsGeorefDescriptionDialogBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setReadOnly(true);

    gridLayout->addWidget(textEdit, 0, 1, 1, 1);

    label = new QLabel(QgsGeorefDescriptionDialogBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/georef.png")));
    label->setScaledContents(true);

    gridLayout->addWidget(label, 0, 0, 1, 1);


    retranslateUi(QgsGeorefDescriptionDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsGeorefDescriptionDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsGeorefDescriptionDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsGeorefDescriptionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefDescriptionDialogBase)
    {
    QgsGeorefDescriptionDialogBase->setWindowTitle(QApplication::translate("QgsGeorefDescriptionDialogBase", "Description georeferencer", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsGeorefDescriptionDialogBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Description</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This plugin can generate world files for rasters. You select points on the raster and give their world coordinates, and the plugin will compute the world file parameters. The more coordinates you can provide the better the result will be.</p></body></html>", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    Q_UNUSED(QgsGeorefDescriptionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefDescriptionDialogBase: public Ui_QgsGeorefDescriptionDialogBase {};
} // namespace Ui

#endif // UI_QGSGEOREFDESCRIPTIONDIALOGBASE_H
