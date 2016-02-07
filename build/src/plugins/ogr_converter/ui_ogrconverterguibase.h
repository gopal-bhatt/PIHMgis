/********************************************************************************
** Form generated from reading ui file 'ogrconverterguibase.ui'
**
** Created: Tue Jun 22 23:13:23 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_OGRCONVERTERGUIBASE_H
#define UI_OGRCONVERTERGUIBASE_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>

class Ui_OgrConverterGuiBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *srcGroupBox;
    QGridLayout *gridLayout1;
    QLabel *labelSrcFormat;
    QComboBox *comboSrcFormats;
    QSpacerItem *spacerItem;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcDirectory;
    QRadioButton *radioSrcProtocol;
    QLabel *labelSrcDataset;
    QLineEdit *inputSrcDataset;
    QPushButton *buttonSelectSrc;
    QLabel *labelSrcLayer;
    QComboBox *comboSrcLayer;
    QGroupBox *dstGroupBox;
    QGridLayout *gridLayout2;
    QLabel *labelDstFormat;
    QComboBox *comboDstFormats;
    QLabel *labelDstDataset;
    QLineEdit *inputDstDataset;
    QPushButton *buttonSelectDst;
    QLabel *labelDstLayer;
    QLineEdit *inputDstLayer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OgrConverterGuiBase)
    {
    if (OgrConverterGuiBase->objectName().isEmpty())
        OgrConverterGuiBase->setObjectName(QString::fromUtf8("OgrConverterGuiBase"));
    OgrConverterGuiBase->resize(491, 400);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(OgrConverterGuiBase->sizePolicy().hasHeightForWidth());
    OgrConverterGuiBase->setSizePolicy(sizePolicy);
    OgrConverterGuiBase->setMinimumSize(QSize(400, 400));
    OgrConverterGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(OgrConverterGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    srcGroupBox = new QGroupBox(OgrConverterGuiBase);
    srcGroupBox->setObjectName(QString::fromUtf8("srcGroupBox"));
    sizePolicy.setHeightForWidth(srcGroupBox->sizePolicy().hasHeightForWidth());
    srcGroupBox->setSizePolicy(sizePolicy);
    gridLayout1 = new QGridLayout(srcGroupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    labelSrcFormat = new QLabel(srcGroupBox);
    labelSrcFormat->setObjectName(QString::fromUtf8("labelSrcFormat"));
    labelSrcFormat->setMinimumSize(QSize(52, 22));

    gridLayout1->addWidget(labelSrcFormat, 0, 0, 1, 1);

    comboSrcFormats = new QComboBox(srcGroupBox);
    comboSrcFormats->setObjectName(QString::fromUtf8("comboSrcFormats"));
    comboSrcFormats->setMinimumSize(QSize(200, 25));
    comboSrcFormats->setMaxCount(200);

    gridLayout1->addWidget(comboSrcFormats, 0, 1, 1, 5);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 1, 0, 1, 2);

    radioSrcFile = new QRadioButton(srcGroupBox);
    radioSrcFile->setObjectName(QString::fromUtf8("radioSrcFile"));

    gridLayout1->addWidget(radioSrcFile, 1, 2, 1, 1);

    radioSrcDirectory = new QRadioButton(srcGroupBox);
    radioSrcDirectory->setObjectName(QString::fromUtf8("radioSrcDirectory"));

    gridLayout1->addWidget(radioSrcDirectory, 1, 3, 1, 1);

    radioSrcProtocol = new QRadioButton(srcGroupBox);
    radioSrcProtocol->setObjectName(QString::fromUtf8("radioSrcProtocol"));

    gridLayout1->addWidget(radioSrcProtocol, 1, 4, 1, 2);

    labelSrcDataset = new QLabel(srcGroupBox);
    labelSrcDataset->setObjectName(QString::fromUtf8("labelSrcDataset"));

    gridLayout1->addWidget(labelSrcDataset, 2, 0, 1, 1);

    inputSrcDataset = new QLineEdit(srcGroupBox);
    inputSrcDataset->setObjectName(QString::fromUtf8("inputSrcDataset"));
    inputSrcDataset->setMinimumSize(QSize(200, 25));

    gridLayout1->addWidget(inputSrcDataset, 2, 1, 1, 4);

    buttonSelectSrc = new QPushButton(srcGroupBox);
    buttonSelectSrc->setObjectName(QString::fromUtf8("buttonSelectSrc"));

    gridLayout1->addWidget(buttonSelectSrc, 2, 5, 1, 1);

    labelSrcLayer = new QLabel(srcGroupBox);
    labelSrcLayer->setObjectName(QString::fromUtf8("labelSrcLayer"));
    labelSrcLayer->setMinimumSize(QSize(52, 22));

    gridLayout1->addWidget(labelSrcLayer, 3, 0, 1, 1);

    comboSrcLayer = new QComboBox(srcGroupBox);
    comboSrcLayer->setObjectName(QString::fromUtf8("comboSrcLayer"));
    comboSrcLayer->setMinimumSize(QSize(300, 25));

    gridLayout1->addWidget(comboSrcLayer, 3, 1, 1, 5);


    gridLayout->addWidget(srcGroupBox, 0, 0, 1, 1);

    dstGroupBox = new QGroupBox(OgrConverterGuiBase);
    dstGroupBox->setObjectName(QString::fromUtf8("dstGroupBox"));
    sizePolicy.setHeightForWidth(dstGroupBox->sizePolicy().hasHeightForWidth());
    dstGroupBox->setSizePolicy(sizePolicy);
    gridLayout2 = new QGridLayout(dstGroupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    labelDstFormat = new QLabel(dstGroupBox);
    labelDstFormat->setObjectName(QString::fromUtf8("labelDstFormat"));
    labelDstFormat->setMinimumSize(QSize(52, 22));

    gridLayout2->addWidget(labelDstFormat, 0, 0, 1, 1);

    comboDstFormats = new QComboBox(dstGroupBox);
    comboDstFormats->setObjectName(QString::fromUtf8("comboDstFormats"));
    comboDstFormats->setMinimumSize(QSize(300, 25));
    comboDstFormats->setMaxCount(200);

    gridLayout2->addWidget(comboDstFormats, 0, 1, 1, 2);

    labelDstDataset = new QLabel(dstGroupBox);
    labelDstDataset->setObjectName(QString::fromUtf8("labelDstDataset"));

    gridLayout2->addWidget(labelDstDataset, 1, 0, 1, 1);

    inputDstDataset = new QLineEdit(dstGroupBox);
    inputDstDataset->setObjectName(QString::fromUtf8("inputDstDataset"));
    inputDstDataset->setMinimumSize(QSize(200, 25));

    gridLayout2->addWidget(inputDstDataset, 1, 1, 1, 1);

    buttonSelectDst = new QPushButton(dstGroupBox);
    buttonSelectDst->setObjectName(QString::fromUtf8("buttonSelectDst"));

    gridLayout2->addWidget(buttonSelectDst, 1, 2, 1, 1);

    labelDstLayer = new QLabel(dstGroupBox);
    labelDstLayer->setObjectName(QString::fromUtf8("labelDstLayer"));
    labelDstLayer->setMinimumSize(QSize(52, 0));

    gridLayout2->addWidget(labelDstLayer, 2, 0, 1, 1);

    inputDstLayer = new QLineEdit(dstGroupBox);
    inputDstLayer->setObjectName(QString::fromUtf8("inputDstLayer"));
    inputDstLayer->setMinimumSize(QSize(300, 25));

    gridLayout2->addWidget(inputDstLayer, 2, 1, 1, 2);


    gridLayout->addWidget(dstGroupBox, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(OgrConverterGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

    labelSrcFormat->setBuddy(comboSrcFormats);
    labelSrcDataset->setBuddy(inputSrcDataset);
    labelSrcLayer->setBuddy(comboSrcLayer);
    labelDstFormat->setBuddy(comboDstFormats);
    labelDstDataset->setBuddy(inputDstDataset);
    labelDstLayer->setBuddy(inputDstLayer);
    QWidget::setTabOrder(comboSrcFormats, radioSrcFile);
    QWidget::setTabOrder(radioSrcFile, radioSrcDirectory);
    QWidget::setTabOrder(radioSrcDirectory, radioSrcProtocol);
    QWidget::setTabOrder(radioSrcProtocol, inputSrcDataset);
    QWidget::setTabOrder(inputSrcDataset, buttonSelectSrc);
    QWidget::setTabOrder(buttonSelectSrc, comboSrcLayer);
    QWidget::setTabOrder(comboSrcLayer, comboDstFormats);
    QWidget::setTabOrder(comboDstFormats, inputDstDataset);
    QWidget::setTabOrder(inputDstDataset, buttonSelectDst);
    QWidget::setTabOrder(buttonSelectDst, inputDstLayer);
    QWidget::setTabOrder(inputDstLayer, buttonBox);

    retranslateUi(OgrConverterGuiBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), OgrConverterGuiBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), OgrConverterGuiBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(OgrConverterGuiBase);
    } // setupUi

    void retranslateUi(QDialog *OgrConverterGuiBase)
    {
    OgrConverterGuiBase->setWindowTitle(QApplication::translate("OgrConverterGuiBase", "OGR Layer Converter", 0, QApplication::UnicodeUTF8));
    srcGroupBox->setTitle(QApplication::translate("OgrConverterGuiBase", "Source", 0, QApplication::UnicodeUTF8));
    labelSrcFormat->setText(QApplication::translate("OgrConverterGuiBase", "Format", 0, QApplication::UnicodeUTF8));
    radioSrcFile->setText(QApplication::translate("OgrConverterGuiBase", "File", 0, QApplication::UnicodeUTF8));
    radioSrcDirectory->setText(QApplication::translate("OgrConverterGuiBase", "Directory", 0, QApplication::UnicodeUTF8));
    radioSrcProtocol->setText(QApplication::translate("OgrConverterGuiBase", "Remote source", 0, QApplication::UnicodeUTF8));
    labelSrcDataset->setText(QApplication::translate("OgrConverterGuiBase", "Dataset", 0, QApplication::UnicodeUTF8));
    buttonSelectSrc->setText(QApplication::translate("OgrConverterGuiBase", "Browse", 0, QApplication::UnicodeUTF8));
    labelSrcLayer->setText(QApplication::translate("OgrConverterGuiBase", "Layer", 0, QApplication::UnicodeUTF8));
    dstGroupBox->setTitle(QApplication::translate("OgrConverterGuiBase", "Target", 0, QApplication::UnicodeUTF8));
    labelDstFormat->setText(QApplication::translate("OgrConverterGuiBase", "Format", 0, QApplication::UnicodeUTF8));
    labelDstDataset->setText(QApplication::translate("OgrConverterGuiBase", "Dataset", 0, QApplication::UnicodeUTF8));
    buttonSelectDst->setText(QApplication::translate("OgrConverterGuiBase", "Browse", 0, QApplication::UnicodeUTF8));
    labelDstLayer->setText(QApplication::translate("OgrConverterGuiBase", "Layer", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(OgrConverterGuiBase);
    } // retranslateUi

};

namespace Ui {
    class OgrConverterGuiBase: public Ui_OgrConverterGuiBase {};
} // namespace Ui

#endif // UI_OGRCONVERTERGUIBASE_H
