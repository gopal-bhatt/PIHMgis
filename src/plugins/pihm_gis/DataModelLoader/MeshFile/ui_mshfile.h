#ifndef UI_MSHFILE_H
#define UI_MSHFILE_H

#include "Qt3Support/Q3ButtonGroup"
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <Qt3Support/Q3MimeSourceFactory>
#include "Qt3Support/Q3TextBrowser"

class Ui_MshFileGeneration
{
public:
    Q3ButtonGroup *shapeFileGroup;
    QLabel *nodeFileLabel;
    QLabel *eleFileLabel;
    QLabel *neighFileLabel;
    QLabel *nodeFileLabel_2;
    QLabel *neighFileLabel_2;
    QPushButton *eleFileButton;
    QPushButton *nodeFileButton;
    QPushButton *neighFileButton;
    QPushButton *sElevFileButton;
    QPushButton *bElevFileButton;
    QLineEdit *eleFileLineEdit;
    QLineEdit *nodeFileLineEdit;
    QLineEdit *neighFileLineEdit;
    QLineEdit *sElevFileLineEdit;
    QLineEdit *bElevFileLineEdit;
    Q3TextBrowser *MessageLog;
    Q3ButtonGroup *shapeFileNameGroup;
    QLabel *mshFileLabel;
    QPushButton *mshFileButton;
    QLineEdit *mshFileLineEdit;
    QPushButton *runButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *MshFileGeneration)
    {
    MshFileGeneration->setObjectName(QString::fromUtf8("MshFileGeneration"));
    MshFileGeneration->resize(QSize(600, 541).expandedTo(MshFileGeneration->minimumSizeHint()));
    shapeFileGroup = new Q3ButtonGroup(MshFileGeneration);
    shapeFileGroup->setObjectName(QString::fromUtf8("shapeFileGroup"));
    shapeFileGroup->setGeometry(QRect(13, 8, 572, 280));
    shapeFileGroup->setOrientation(Qt::Vertical);
    nodeFileLabel = new QLabel(shapeFileGroup);
    nodeFileLabel->setObjectName(QString::fromUtf8("nodeFileLabel"));
    nodeFileLabel->setGeometry(QRect(27, 80, 72, 38));
    nodeFileLabel->setFrameShape(QFrame::NoFrame);
    nodeFileLabel->setFrameShadow(QFrame::Plain);
    nodeFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    eleFileLabel = new QLabel(shapeFileGroup);
    eleFileLabel->setObjectName(QString::fromUtf8("eleFileLabel"));
    eleFileLabel->setGeometry(QRect(24, 28, 94, 38));
    eleFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    neighFileLabel = new QLabel(shapeFileGroup);
    neighFileLabel->setObjectName(QString::fromUtf8("neighFileLabel"));
    neighFileLabel->setGeometry(QRect(20, 130, 100, 38));
    neighFileLabel->setFrameShape(QFrame::NoFrame);
    neighFileLabel->setFrameShadow(QFrame::Plain);
    neighFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    nodeFileLabel_2 = new QLabel(shapeFileGroup);
    nodeFileLabel_2->setObjectName(QString::fromUtf8("nodeFileLabel_2"));
    nodeFileLabel_2->setGeometry(QRect(16, 174, 131, 38));
    nodeFileLabel_2->setFrameShape(QFrame::NoFrame);
    nodeFileLabel_2->setFrameShadow(QFrame::Plain);
    nodeFileLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    neighFileLabel_2 = new QLabel(shapeFileGroup);
    neighFileLabel_2->setObjectName(QString::fromUtf8("neighFileLabel_2"));
    neighFileLabel_2->setGeometry(QRect(16, 225, 134, 38));
    neighFileLabel_2->setFrameShape(QFrame::NoFrame);
    neighFileLabel_2->setFrameShadow(QFrame::Plain);
    neighFileLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    eleFileButton = new QPushButton(shapeFileGroup);
    eleFileButton->setObjectName(QString::fromUtf8("eleFileButton"));
    eleFileButton->setGeometry(QRect(473, 31, 87, 32));
    eleFileButton->setAutoDefault(false);
    nodeFileButton = new QPushButton(shapeFileGroup);
    nodeFileButton->setObjectName(QString::fromUtf8("nodeFileButton"));
    nodeFileButton->setGeometry(QRect(473, 83, 87, 32));
    nodeFileButton->setAutoDefault(false);
    neighFileButton = new QPushButton(shapeFileGroup);
    neighFileButton->setObjectName(QString::fromUtf8("neighFileButton"));
    neighFileButton->setGeometry(QRect(473, 133, 87, 32));
    neighFileButton->setAutoDefault(false);
    sElevFileButton = new QPushButton(shapeFileGroup);
    sElevFileButton->setObjectName(QString::fromUtf8("sElevFileButton"));
    sElevFileButton->setGeometry(QRect(474, 181, 87, 32));
    sElevFileButton->setAutoDefault(false);
    bElevFileButton = new QPushButton(shapeFileGroup);
    bElevFileButton->setObjectName(QString::fromUtf8("bElevFileButton"));
    bElevFileButton->setGeometry(QRect(474, 229, 87, 32));
    bElevFileButton->setAutoDefault(false);
    eleFileLineEdit = new QLineEdit(shapeFileGroup);
    eleFileLineEdit->setObjectName(QString::fromUtf8("eleFileLineEdit"));
    eleFileLineEdit->setGeometry(QRect(162, 32, 294, 29));
    nodeFileLineEdit = new QLineEdit(shapeFileGroup);
    nodeFileLineEdit->setObjectName(QString::fromUtf8("nodeFileLineEdit"));
    nodeFileLineEdit->setGeometry(QRect(162, 84, 294, 29));
    neighFileLineEdit = new QLineEdit(shapeFileGroup);
    neighFileLineEdit->setObjectName(QString::fromUtf8("neighFileLineEdit"));
    neighFileLineEdit->setGeometry(QRect(162, 134, 294, 29));
    sElevFileLineEdit = new QLineEdit(shapeFileGroup);
    sElevFileLineEdit->setObjectName(QString::fromUtf8("sElevFileLineEdit"));
    sElevFileLineEdit->setGeometry(QRect(162, 181, 294, 29));
    bElevFileLineEdit = new QLineEdit(shapeFileGroup);
    bElevFileLineEdit->setObjectName(QString::fromUtf8("bElevFileLineEdit"));
    bElevFileLineEdit->setGeometry(QRect(162, 231, 294, 29));
    MessageLog = new Q3TextBrowser(MshFileGeneration);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(13, 403, 570, 130));
    shapeFileNameGroup = new Q3ButtonGroup(MshFileGeneration);
    shapeFileNameGroup->setObjectName(QString::fromUtf8("shapeFileNameGroup"));
    shapeFileNameGroup->setGeometry(QRect(13, 293, 572, 60));
    shapeFileNameGroup->setOrientation(Qt::Vertical);
    mshFileLabel = new QLabel(shapeFileNameGroup);
    mshFileLabel->setObjectName(QString::fromUtf8("mshFileLabel"));
    mshFileLabel->setGeometry(QRect(9, 11, 135, 38));
    mshFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    mshFileButton = new QPushButton(shapeFileNameGroup);
    mshFileButton->setObjectName(QString::fromUtf8("mshFileButton"));
    mshFileButton->setGeometry(QRect(472, 14, 87, 32));
    mshFileButton->setAutoDefault(false);
    mshFileLineEdit = new QLineEdit(shapeFileNameGroup);
    mshFileLineEdit->setObjectName(QString::fromUtf8("mshFileLineEdit"));
    mshFileLineEdit->setGeometry(QRect(161, 15, 294, 29));
    runButton = new QPushButton(MshFileGeneration);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(503, 361, 80, 34));
    runButton->setAutoDefault(false);
    cancelButton = new QPushButton(MshFileGeneration);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(415, 361, 80, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(MshFileGeneration);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(13, 361, 80, 34));
    helpButton->setAutoDefault(false);
    retranslateUi(MshFileGeneration);

    QMetaObject::connectSlotsByName(MshFileGeneration);
    } // setupUi

    void retranslateUi(QDialog *MshFileGeneration)
    {
    MshFileGeneration->setWindowTitle(QApplication::translate("MshFileGeneration", "Mesh File Generation", 0, QApplication::UnicodeUTF8));
    shapeFileGroup->setTitle(QApplication::translate("MshFileGeneration", "Input Files", 0, QApplication::UnicodeUTF8));
    nodeFileLabel->setText(QApplication::translate("MshFileGeneration", "Node File", 0, QApplication::UnicodeUTF8));
    eleFileLabel->setText(QApplication::translate("MshFileGeneration", "Element File", 0, QApplication::UnicodeUTF8));
    neighFileLabel->setText(QApplication::translate("MshFileGeneration", "Neighbor File", 0, QApplication::UnicodeUTF8));
    nodeFileLabel_2->setText(QApplication::translate("MshFileGeneration", "Surface Elevation", 0, QApplication::UnicodeUTF8));
    neighFileLabel_2->setText(QApplication::translate("MshFileGeneration", "Bedrock Elevation", 0, QApplication::UnicodeUTF8));
    eleFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    nodeFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    neighFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    sElevFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    bElevFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    shapeFileNameGroup->setTitle(QApplication::translate("MshFileGeneration", "", 0, QApplication::UnicodeUTF8));
    mshFileLabel->setText(QApplication::translate("MshFileGeneration", "Output Mesh File", 0, QApplication::UnicodeUTF8));
    mshFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("MshFileGeneration", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("MshFileGeneration", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("MshFileGeneration", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MshFileGeneration);
    } // retranslateUi

};

namespace Ui {
    class MshFileGeneration: public Ui_MshFileGeneration {};
} // namespace Ui

#endif // UI_MSHFILE_H
