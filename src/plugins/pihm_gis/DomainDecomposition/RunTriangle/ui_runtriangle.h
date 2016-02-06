#ifndef UI_RUNTRIANGLE_H
#define UI_RUNTRIANGLE_H

#include "Qt3Support/Q3ButtonGroup"
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <Qt3Support/Q3MimeSourceFactory>
#include "Qt3Support/Q3TextBrowser"

class Ui_runTriangle
{
public:
    Q3ButtonGroup *inputPolyFileGroup;
    QPushButton *polyFileBrowseButton;
    QLineEdit *polyFileLineEdit;
    Q3ButtonGroup *Options;
    QLineEdit *qOptionLineEdit;
    QLineEdit *aOptionLineEdit;
    QLineEdit *otherOptionLineEdit;
    QCheckBox *otherOptionCheckBox;
    QLabel *aOptionLabel;
    QCheckBox *nOptionCheckBox;
    QCheckBox *VOptionsCheckBox;
    QCheckBox *qOptionsCheckBox;
    QLabel *qOptionLabel;
    QCheckBox *aOptionsCheckBox;
    QPushButton *showOptionsButton;
    Q3TextBrowser *MessageLog;
    QPushButton *runButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *runTriangle)
    {
    runTriangle->setObjectName(QString::fromUtf8("runTriangle"));
    runTriangle->resize(QSize(600, 579).expandedTo(runTriangle->minimumSizeHint()));
    inputPolyFileGroup = new Q3ButtonGroup(runTriangle);
    inputPolyFileGroup->setObjectName(QString::fromUtf8("inputPolyFileGroup"));
    inputPolyFileGroup->setGeometry(QRect(11, 283, 578, 100));
    inputPolyFileGroup->setOrientation(Qt::Vertical);
    polyFileBrowseButton = new QPushButton(inputPolyFileGroup);
    polyFileBrowseButton->setObjectName(QString::fromUtf8("polyFileBrowseButton"));
    polyFileBrowseButton->setGeometry(QRect(370, 39, 81, 32));
    polyFileBrowseButton->setAutoDefault(false);
    polyFileLineEdit = new QLineEdit(inputPolyFileGroup);
    polyFileLineEdit->setObjectName(QString::fromUtf8("polyFileLineEdit"));
    polyFileLineEdit->setGeometry(QRect(20, 40, 340, 28));
    Options = new Q3ButtonGroup(runTriangle);
    Options->setObjectName(QString::fromUtf8("Options"));
    Options->setGeometry(QRect(10, 10, 578, 270));
    Options->setOrientation(Qt::Vertical);
    qOptionLineEdit = new QLineEdit(Options);
    qOptionLineEdit->setObjectName(QString::fromUtf8("qOptionLineEdit"));
    qOptionLineEdit->setGeometry(QRect(40, 120, 80, 29));
    aOptionLineEdit = new QLineEdit(Options);
    aOptionLineEdit->setObjectName(QString::fromUtf8("aOptionLineEdit"));
    aOptionLineEdit->setGeometry(QRect(40, 190, 80, 29));
    otherOptionLineEdit = new QLineEdit(Options);
    otherOptionLineEdit->setObjectName(QString::fromUtf8("otherOptionLineEdit"));
    otherOptionLineEdit->setGeometry(QRect(170, 230, 90, 29));
    otherOptionCheckBox = new QCheckBox(Options);
    otherOptionCheckBox->setObjectName(QString::fromUtf8("otherOptionCheckBox"));
    otherOptionCheckBox->setGeometry(QRect(11, 231, 130, 26));
    aOptionLabel = new QLabel(Options);
    aOptionLabel->setObjectName(QString::fromUtf8("aOptionLabel"));
    aOptionLabel->setGeometry(QRect(140, 190, 151, 22));
    nOptionCheckBox = new QCheckBox(Options);
    nOptionCheckBox->setObjectName(QString::fromUtf8("nOptionCheckBox"));
    nOptionCheckBox->setGeometry(QRect(10, 20, 556, 26));
    VOptionsCheckBox = new QCheckBox(Options);
    VOptionsCheckBox->setObjectName(QString::fromUtf8("VOptionsCheckBox"));
    VOptionsCheckBox->setGeometry(QRect(11, 57, 556, 26));
    qOptionsCheckBox = new QCheckBox(Options);
    qOptionsCheckBox->setObjectName(QString::fromUtf8("qOptionsCheckBox"));
    qOptionsCheckBox->setGeometry(QRect(11, 92, 556, 26));
    qOptionLabel = new QLabel(Options);
    qOptionLabel->setObjectName(QString::fromUtf8("qOptionLabel"));
    qOptionLabel->setGeometry(QRect(140, 120, 251, 31));
    aOptionsCheckBox = new QCheckBox(Options);
    aOptionsCheckBox->setObjectName(QString::fromUtf8("aOptionsCheckBox"));
    aOptionsCheckBox->setGeometry(QRect(11, 159, 556, 26));
    showOptionsButton = new QPushButton(Options);
    showOptionsButton->setObjectName(QString::fromUtf8("showOptionsButton"));
    showOptionsButton->setGeometry(QRect(140, 229, 20, 32));
    showOptionsButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(runTriangle);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(12, 438, 571, 131));
    runButton = new QPushButton(runTriangle);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(504, 393, 80, 34));
    runButton->setAutoDefault(false);
    cancelButton = new QPushButton(runTriangle);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(421, 393, 80, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(runTriangle);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(11, 393, 80, 34));
    helpButton->setAutoDefault(false);
    retranslateUi(runTriangle);

    QMetaObject::connectSlotsByName(runTriangle);
    } // setupUi

    void retranslateUi(QDialog *runTriangle)
    {
    runTriangle->setWindowTitle(QApplication::translate("runTriangle", "Run TRIANGLE", 0, QApplication::UnicodeUTF8));
    inputPolyFileGroup->setTitle(QApplication::translate("runTriangle", "Input a Poly File", 0, QApplication::UnicodeUTF8));
    polyFileBrowseButton->setText(QApplication::translate("runTriangle", "Browse...", 0, QApplication::UnicodeUTF8));
    Options->setTitle(QApplication::translate("runTriangle", "Options", 0, QApplication::UnicodeUTF8));
    otherOptionCheckBox->setText(QApplication::translate("runTriangle", "Other options", 0, QApplication::UnicodeUTF8));
    aOptionLabel->setText(QApplication::translate("runTriangle", "Area", 0, QApplication::UnicodeUTF8));
    nOptionCheckBox->setText(QApplication::translate("runTriangle", "-n : Generate a list of triangle neighbours.", 0, QApplication::UnicodeUTF8));
    VOptionsCheckBox->setText(QApplication::translate("runTriangle", "-V : Verbose if checked. Quiet otherwise.", 0, QApplication::UnicodeUTF8));
    qOptionsCheckBox->setText(QApplication::translate("runTriangle", "-q : Quality Mesh generation. A minimum angle may be specified.", 0, QApplication::UnicodeUTF8));
    qOptionLabel->setText(QApplication::translate("runTriangle", "Angle (in Degree)", 0, QApplication::UnicodeUTF8));
    aOptionsCheckBox->setText(QApplication::translate("runTriangle", "-a : Apply a maximum triangle area constraint.", 0, QApplication::UnicodeUTF8));
    showOptionsButton->setText(QApplication::translate("runTriangle", "?", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("runTriangle", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("runTriangle", "Cancel", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("runTriangle", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(runTriangle);
    } // retranslateUi

};

namespace Ui {
    class runTriangle: public Ui_runTriangle {};
} // namespace Ui

#endif // UI_RUNTRIANGLE_H
