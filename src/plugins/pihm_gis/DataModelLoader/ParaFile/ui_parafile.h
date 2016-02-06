/********************************************************************************
** Form generated from reading ui file 'parafile.ui'
**
** Created: Mon Jun 16 08:00:00 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PARAFILE_H
#define UI_PARAFILE_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_paraFile
{
public:
    Q3ButtonGroup *outputButtonGroup;
    QLabel *outputFileLabel;
    QPushButton *paraFileButton;
    QLineEdit *paraFileLineEdit;
    QTabWidget *tabWidget2;
    QWidget *tab;
    Q3GroupBox *groupBox1;
    QCheckBox *debugCheckBox;
    QCheckBox *verboseCheckBox;
    QCheckBox *checkBoxFillSurf;
    QCheckBox *checkBoxFillSub;
    Q3GroupBox *mcGroupBox2;
    QLabel *textLabel1_2;
    QLabel *textLabel1_4;
    QLabel *textLabel1_3;
    QLabel *textLabel1;
    QComboBox *smComboBox;
    QComboBox *rmComboBox;
    QComboBox *imComboBox;
    QComboBox *umComboBox;
    QWidget *TabPage;
    Q3GroupBox *groupBox1_2_2_2;
    QLabel *textLabel1_5_3;
    QLabel *textLabel1_3_2_2;
    QLabel *textLabel1_2_2_2;
    QLabel *textLabel1_4_2_2;
    QLineEdit *ATlineEdit;
    QLineEdit *MSlineEdit;
    QLineEdit *ISlineEdit;
    QLineEdit *RTlineEdit;
    QLabel *textLabel1_4_2_3;
    QLineEdit *ETSlineEdit;
    Q3GroupBox *groupBox1_3_2;
    QLabel *textLabel3_3;
    QLabel *textLabel1_5_2_2;
    QLabel *textLabel3_2_2;
    QLineEdit *CTlineEdit;
    QComboBox *GScomboBox;
    QLabel *textLabel2_2;
    Q3ButtonGroup *buttonGroup2;
    QRadioButton *ITradioButton;
    QRadioButton *DDradioButton;
    QLineEdit *KDlineEdit;
    QWidget *tab1;
    Q3GroupBox *groupBox1_3;
    QLabel *textLabel3;
    QLabel *textLabel1_5_2;
    QLabel *textLabel3_2_3_2;
    QLabel *textLabel3_4;
    QLabel *textLabel3_2_3;
    QLabel *textLabel3_2;
    QLineEdit *STlineEdit;
    QLineEdit *ETlineEdit;
    QComboBox *SScomboBox;
    QLineEdit *a_lineEdit;
    QLineEdit *b_lineEdit;
    QLineEdit *lineEdit1;
    QCheckBox *checkBox6;
    QCheckBox *checkBox1;
    QLineEdit *lineEdit6;
    QCheckBox *checkBox11;
    QLineEdit *lineEdit11;
    QCheckBox *checkBox16;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QCheckBox *checkBox4;
    QCheckBox *checkBox5;
    QCheckBox *checkBox7;
    QCheckBox *checkBox8;
    QCheckBox *checkBox9;
    QCheckBox *checkBox10;
    QCheckBox *checkBox12;
    QCheckBox *checkBox13;
    QCheckBox *checkBox14;
    QCheckBox *checkBox15;
    QCheckBox *checkBox17;
    QCheckBox *checkBox18;
    QCheckBox *checkBox19;
    QCheckBox *checkBox20;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit4;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit7;
    QLineEdit *lineEdit8;
    Q3TextBrowser *MessageLog;
    QPushButton *cancelButton;
    QPushButton *helpButton;
    QPushButton *okButton;

    void setupUi(QDialog *paraFile)
    {
    if (paraFile->objectName().isEmpty())
        paraFile->setObjectName(QString::fromUtf8("paraFile"));
    paraFile->resize(600, 679);
    outputButtonGroup = new Q3ButtonGroup(paraFile);
    outputButtonGroup->setObjectName(QString::fromUtf8("outputButtonGroup"));
    outputButtonGroup->setGeometry(QRect(8, 378, 578, 100));
    outputButtonGroup->setOrientation(Qt::Vertical);
    outputFileLabel = new QLabel(outputButtonGroup);
    outputFileLabel->setObjectName(QString::fromUtf8("outputFileLabel"));
    outputFileLabel->setGeometry(QRect(22, 45, 123, 32));
    outputFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    paraFileButton = new QPushButton(outputButtonGroup);
    paraFileButton->setObjectName(QString::fromUtf8("paraFileButton"));
    paraFileButton->setGeometry(QRect(490, 45, 81, 32));
    paraFileButton->setAutoDefault(false);
    paraFileLineEdit = new QLineEdit(outputButtonGroup);
    paraFileLineEdit->setObjectName(QString::fromUtf8("paraFileLineEdit"));
    paraFileLineEdit->setGeometry(QRect(159, 46, 325, 29));
    tabWidget2 = new QTabWidget(paraFile);
    tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
    tabWidget2->setGeometry(QRect(7, 10, 581, 370));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    groupBox1 = new Q3GroupBox(tab);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setGeometry(QRect(13, 20, 551, 101));
    debugCheckBox = new QCheckBox(groupBox1);
    debugCheckBox->setObjectName(QString::fromUtf8("debugCheckBox"));
    debugCheckBox->setGeometry(QRect(50, 50, 90, 41));
    debugCheckBox->setChecked(false);
    verboseCheckBox = new QCheckBox(groupBox1);
    verboseCheckBox->setObjectName(QString::fromUtf8("verboseCheckBox"));
    verboseCheckBox->setGeometry(QRect(50, 10, 90, 41));
    verboseCheckBox->setChecked(false);
    checkBoxFillSurf = new QCheckBox(groupBox1);
    checkBoxFillSurf->setObjectName(QString::fromUtf8("checkBoxFillSurf"));
    checkBoxFillSurf->setGeometry(QRect(200, 20, 131, 21));
    checkBoxFillSurf->setChecked(true);
    checkBoxFillSub = new QCheckBox(groupBox1);
    checkBoxFillSub->setObjectName(QString::fromUtf8("checkBoxFillSub"));
    checkBoxFillSub->setGeometry(QRect(200, 60, 151, 21));
    checkBoxFillSub->setChecked(true);
    mcGroupBox2 = new Q3GroupBox(tab);
    mcGroupBox2->setObjectName(QString::fromUtf8("mcGroupBox2"));
    mcGroupBox2->setGeometry(QRect(13, 130, 551, 191));
    mcGroupBox2->setAcceptDrops(false);
    textLabel1_2 = new QLabel(mcGroupBox2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(320, 50, 104, 41));
    textLabel1_4 = new QLabel(mcGroupBox2);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    textLabel1_4->setGeometry(QRect(320, 120, 84, 41));
    textLabel1_4->setMidLineWidth(0);
    textLabel1_3 = new QLabel(mcGroupBox2);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setGeometry(QRect(10, 120, 137, 41));
    textLabel1 = new QLabel(mcGroupBox2);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(10, 50, 137, 41));
    textLabel1->setAcceptDrops(false);
    smComboBox = new QComboBox(mcGroupBox2);
    smComboBox->setObjectName(QString::fromUtf8("smComboBox"));
    smComboBox->setGeometry(QRect(440, 55, 100, 31));
    rmComboBox = new QComboBox(mcGroupBox2);
    rmComboBox->setObjectName(QString::fromUtf8("rmComboBox"));
    rmComboBox->setGeometry(QRect(160, 125, 100, 31));
    imComboBox = new QComboBox(mcGroupBox2);
    imComboBox->setObjectName(QString::fromUtf8("imComboBox"));
    imComboBox->setGeometry(QRect(440, 125, 100, 31));
    umComboBox = new QComboBox(mcGroupBox2);
    umComboBox->setObjectName(QString::fromUtf8("umComboBox"));
    umComboBox->setGeometry(QRect(160, 55, 100, 31));
    tabWidget2->addTab(tab, QString());
    TabPage = new QWidget();
    TabPage->setObjectName(QString::fromUtf8("TabPage"));
    groupBox1_2_2_2 = new Q3GroupBox(TabPage);
    groupBox1_2_2_2->setObjectName(QString::fromUtf8("groupBox1_2_2_2"));
    groupBox1_2_2_2->setGeometry(QRect(12, 181, 551, 140));
    textLabel1_5_3 = new QLabel(groupBox1_2_2_2);
    textLabel1_5_3->setObjectName(QString::fromUtf8("textLabel1_5_3"));
    textLabel1_5_3->setGeometry(QRect(14, 30, 143, 41));
    textLabel1_3_2_2 = new QLabel(groupBox1_2_2_2);
    textLabel1_3_2_2->setObjectName(QString::fromUtf8("textLabel1_3_2_2"));
    textLabel1_3_2_2->setGeometry(QRect(17, 95, 137, 41));
    textLabel1_2_2_2 = new QLabel(groupBox1_2_2_2);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    textLabel1_2_2_2->setGeometry(QRect(320, 22, 104, 41));
    textLabel1_4_2_2 = new QLabel(groupBox1_2_2_2);
    textLabel1_4_2_2->setObjectName(QString::fromUtf8("textLabel1_4_2_2"));
    textLabel1_4_2_2->setGeometry(QRect(320, 60, 112, 41));
    ATlineEdit = new QLineEdit(groupBox1_2_2_2);
    ATlineEdit->setObjectName(QString::fromUtf8("ATlineEdit"));
    ATlineEdit->setGeometry(QRect(170, 35, 80, 31));
    MSlineEdit = new QLineEdit(groupBox1_2_2_2);
    MSlineEdit->setObjectName(QString::fromUtf8("MSlineEdit"));
    MSlineEdit->setGeometry(QRect(460, 69, 80, 25));
    ISlineEdit = new QLineEdit(groupBox1_2_2_2);
    ISlineEdit->setObjectName(QString::fromUtf8("ISlineEdit"));
    ISlineEdit->setGeometry(QRect(460, 30, 80, 25));
    RTlineEdit = new QLineEdit(groupBox1_2_2_2);
    RTlineEdit->setObjectName(QString::fromUtf8("RTlineEdit"));
    RTlineEdit->setGeometry(QRect(170, 98, 80, 31));
    textLabel1_4_2_3 = new QLabel(groupBox1_2_2_2);
    textLabel1_4_2_3->setObjectName(QString::fromUtf8("textLabel1_4_2_3"));
    textLabel1_4_2_3->setGeometry(QRect(320, 99, 112, 41));
    ETSlineEdit = new QLineEdit(groupBox1_2_2_2);
    ETSlineEdit->setObjectName(QString::fromUtf8("ETSlineEdit"));
    ETSlineEdit->setGeometry(QRect(460, 107, 80, 25));
    groupBox1_3_2 = new Q3GroupBox(TabPage);
    groupBox1_3_2->setObjectName(QString::fromUtf8("groupBox1_3_2"));
    groupBox1_3_2->setGeometry(QRect(12, 11, 551, 160));
    textLabel3_3 = new QLabel(groupBox1_3_2);
    textLabel3_3->setObjectName(QString::fromUtf8("textLabel3_3"));
    textLabel3_3->setGeometry(QRect(20, 60, 130, 31));
    textLabel1_5_2_2 = new QLabel(groupBox1_3_2);
    textLabel1_5_2_2->setObjectName(QString::fromUtf8("textLabel1_5_2_2"));
    textLabel1_5_2_2->setGeometry(QRect(20, 110, 120, 41));
    textLabel3_2_2 = new QLabel(groupBox1_3_2);
    textLabel3_2_2->setObjectName(QString::fromUtf8("textLabel3_2_2"));
    textLabel3_2_2->setGeometry(QRect(310, 60, 176, 31));
    CTlineEdit = new QLineEdit(groupBox1_3_2);
    CTlineEdit->setObjectName(QString::fromUtf8("CTlineEdit"));
    CTlineEdit->setGeometry(QRect(500, 59, 40, 31));
    GScomboBox = new QComboBox(groupBox1_3_2);
    GScomboBox->setObjectName(QString::fromUtf8("GScomboBox"));
    GScomboBox->setGeometry(QRect(150, 115, 100, 31));
    textLabel2_2 = new QLabel(groupBox1_3_2);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
    textLabel2_2->setGeometry(QRect(20, 13, 130, 31));
    buttonGroup2 = new Q3ButtonGroup(groupBox1_3_2);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(120, 6, 331, 50));
    ITradioButton = new QRadioButton(buttonGroup2);
    ITradioButton->setObjectName(QString::fromUtf8("ITradioButton"));
    ITradioButton->setGeometry(QRect(230, 3, 90, 41));
    ITradioButton->setChecked(true);
    DDradioButton = new QRadioButton(buttonGroup2);
    DDradioButton->setObjectName(QString::fromUtf8("DDradioButton"));
    DDradioButton->setGeometry(QRect(35, 2, 130, 41));
    KDlineEdit = new QLineEdit(groupBox1_3_2);
    KDlineEdit->setObjectName(QString::fromUtf8("KDlineEdit"));
    KDlineEdit->setGeometry(QRect(160, 59, 40, 31));
    tabWidget2->addTab(TabPage, QString());
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    groupBox1_3 = new Q3GroupBox(tab1);
    groupBox1_3->setObjectName(QString::fromUtf8("groupBox1_3"));
    groupBox1_3->setGeometry(QRect(12, 11, 551, 321));
    textLabel3 = new QLabel(groupBox1_3);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    textLabel3->setGeometry(QRect(20, 21, 130, 31));
    textLabel1_5_2 = new QLabel(groupBox1_3);
    textLabel1_5_2->setObjectName(QString::fromUtf8("textLabel1_5_2"));
    textLabel1_5_2->setGeometry(QRect(20, 65, 110, 41));
    textLabel3_2_3_2 = new QLabel(groupBox1_3);
    textLabel3_2_3_2->setObjectName(QString::fromUtf8("textLabel3_2_3_2"));
    textLabel3_2_3_2->setGeometry(QRect(370, 71, 30, 31));
    textLabel3_4 = new QLabel(groupBox1_3);
    textLabel3_4->setObjectName(QString::fromUtf8("textLabel3_4"));
    textLabel3_4->setGeometry(QRect(450, 78, 101, 31));
    QFont font;
    font.setPointSize(10);
    textLabel3_4->setFont(font);
    textLabel3_2_3 = new QLabel(groupBox1_3);
    textLabel3_2_3->setObjectName(QString::fromUtf8("textLabel3_2_3"));
    textLabel3_2_3->setGeometry(QRect(280, 71, 30, 31));
    textLabel3_2 = new QLabel(groupBox1_3);
    textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));
    textLabel3_2->setGeometry(QRect(320, 21, 120, 31));
    STlineEdit = new QLineEdit(groupBox1_3);
    STlineEdit->setObjectName(QString::fromUtf8("STlineEdit"));
    STlineEdit->setGeometry(QRect(140, 20, 90, 31));
    ETlineEdit = new QLineEdit(groupBox1_3);
    ETlineEdit->setObjectName(QString::fromUtf8("ETlineEdit"));
    ETlineEdit->setGeometry(QRect(440, 20, 90, 31));
    SScomboBox = new QComboBox(groupBox1_3);
    SScomboBox->setObjectName(QString::fromUtf8("SScomboBox"));
    SScomboBox->setGeometry(QRect(140, 70, 120, 31));
    a_lineEdit = new QLineEdit(groupBox1_3);
    a_lineEdit->setObjectName(QString::fromUtf8("a_lineEdit"));
    a_lineEdit->setGeometry(QRect(310, 70, 40, 31));
    b_lineEdit = new QLineEdit(groupBox1_3);
    b_lineEdit->setObjectName(QString::fromUtf8("b_lineEdit"));
    b_lineEdit->setGeometry(QRect(400, 70, 40, 31));
    lineEdit1 = new QLineEdit(groupBox1_3);
    lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
    lineEdit1->setGeometry(QRect(100, 130, 31, 22));
    checkBox6 = new QCheckBox(groupBox1_3);
    checkBox6->setObjectName(QString::fromUtf8("checkBox6"));
    checkBox6->setGeometry(QRect(150, 130, 86, 21));
    checkBox6->setLayoutDirection(Qt::RightToLeft);
    checkBox6->setChecked(true);
    checkBox1 = new QCheckBox(groupBox1_3);
    checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
    checkBox1->setGeometry(QRect(10, 130, 86, 21));
    checkBox1->setLayoutDirection(Qt::RightToLeft);
    checkBox1->setChecked(true);
    lineEdit6 = new QLineEdit(groupBox1_3);
    lineEdit6->setObjectName(QString::fromUtf8("lineEdit6"));
    lineEdit6->setGeometry(QRect(240, 130, 31, 22));
    checkBox11 = new QCheckBox(groupBox1_3);
    checkBox11->setObjectName(QString::fromUtf8("checkBox11"));
    checkBox11->setGeometry(QRect(290, 130, 86, 21));
    checkBox11->setLayoutDirection(Qt::RightToLeft);
    checkBox11->setChecked(true);
    lineEdit11 = new QLineEdit(groupBox1_3);
    lineEdit11->setObjectName(QString::fromUtf8("lineEdit11"));
    lineEdit11->setGeometry(QRect(380, 130, 31, 22));
    checkBox16 = new QCheckBox(groupBox1_3);
    checkBox16->setObjectName(QString::fromUtf8("checkBox16"));
    checkBox16->setGeometry(QRect(420, 130, 86, 21));
    checkBox16->setLayoutDirection(Qt::RightToLeft);
    checkBox16->setChecked(true);
    checkBox2 = new QCheckBox(groupBox1_3);
    checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
    checkBox2->setGeometry(QRect(10, 170, 86, 21));
    checkBox2->setLayoutDirection(Qt::RightToLeft);
    checkBox2->setChecked(true);
    checkBox3 = new QCheckBox(groupBox1_3);
    checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
    checkBox3->setGeometry(QRect(10, 210, 86, 21));
    checkBox3->setLayoutDirection(Qt::RightToLeft);
    checkBox3->setChecked(true);
    checkBox4 = new QCheckBox(groupBox1_3);
    checkBox4->setObjectName(QString::fromUtf8("checkBox4"));
    checkBox4->setGeometry(QRect(10, 250, 86, 21));
    checkBox4->setLayoutDirection(Qt::RightToLeft);
    checkBox4->setChecked(true);
    checkBox5 = new QCheckBox(groupBox1_3);
    checkBox5->setObjectName(QString::fromUtf8("checkBox5"));
    checkBox5->setGeometry(QRect(10, 290, 86, 21));
    checkBox5->setLayoutDirection(Qt::RightToLeft);
    checkBox5->setChecked(true);
    checkBox7 = new QCheckBox(groupBox1_3);
    checkBox7->setObjectName(QString::fromUtf8("checkBox7"));
    checkBox7->setGeometry(QRect(150, 170, 86, 21));
    checkBox7->setLayoutDirection(Qt::RightToLeft);
    checkBox7->setChecked(true);
    checkBox8 = new QCheckBox(groupBox1_3);
    checkBox8->setObjectName(QString::fromUtf8("checkBox8"));
    checkBox8->setGeometry(QRect(150, 210, 86, 21));
    checkBox8->setLayoutDirection(Qt::RightToLeft);
    checkBox8->setChecked(true);
    checkBox9 = new QCheckBox(groupBox1_3);
    checkBox9->setObjectName(QString::fromUtf8("checkBox9"));
    checkBox9->setGeometry(QRect(150, 250, 86, 21));
    checkBox9->setLayoutDirection(Qt::RightToLeft);
    checkBox9->setChecked(true);
    checkBox10 = new QCheckBox(groupBox1_3);
    checkBox10->setObjectName(QString::fromUtf8("checkBox10"));
    checkBox10->setGeometry(QRect(150, 290, 86, 21));
    checkBox10->setLayoutDirection(Qt::RightToLeft);
    checkBox10->setChecked(true);
    checkBox12 = new QCheckBox(groupBox1_3);
    checkBox12->setObjectName(QString::fromUtf8("checkBox12"));
    checkBox12->setGeometry(QRect(290, 170, 86, 21));
    checkBox12->setLayoutDirection(Qt::RightToLeft);
    checkBox12->setChecked(true);
    checkBox13 = new QCheckBox(groupBox1_3);
    checkBox13->setObjectName(QString::fromUtf8("checkBox13"));
    checkBox13->setGeometry(QRect(290, 210, 86, 21));
    checkBox13->setLayoutDirection(Qt::RightToLeft);
    checkBox13->setChecked(true);
    checkBox14 = new QCheckBox(groupBox1_3);
    checkBox14->setObjectName(QString::fromUtf8("checkBox14"));
    checkBox14->setGeometry(QRect(290, 250, 86, 21));
    checkBox14->setLayoutDirection(Qt::RightToLeft);
    checkBox14->setChecked(true);
    checkBox15 = new QCheckBox(groupBox1_3);
    checkBox15->setObjectName(QString::fromUtf8("checkBox15"));
    checkBox15->setGeometry(QRect(290, 290, 86, 21));
    checkBox15->setLayoutDirection(Qt::RightToLeft);
    checkBox15->setChecked(true);
    checkBox17 = new QCheckBox(groupBox1_3);
    checkBox17->setObjectName(QString::fromUtf8("checkBox17"));
    checkBox17->setGeometry(QRect(420, 170, 86, 21));
    checkBox17->setLayoutDirection(Qt::RightToLeft);
    checkBox17->setChecked(true);
    checkBox18 = new QCheckBox(groupBox1_3);
    checkBox18->setObjectName(QString::fromUtf8("checkBox18"));
    checkBox18->setGeometry(QRect(420, 210, 86, 21));
    checkBox18->setLayoutDirection(Qt::RightToLeft);
    checkBox18->setChecked(true);
    checkBox19 = new QCheckBox(groupBox1_3);
    checkBox19->setObjectName(QString::fromUtf8("checkBox19"));
    checkBox19->setGeometry(QRect(420, 250, 86, 21));
    checkBox19->setLayoutDirection(Qt::RightToLeft);
    checkBox19->setChecked(true);
    checkBox20 = new QCheckBox(groupBox1_3);
    checkBox20->setObjectName(QString::fromUtf8("checkBox20"));
    checkBox20->setGeometry(QRect(420, 290, 86, 21));
    checkBox20->setLayoutDirection(Qt::RightToLeft);
    checkBox20->setChecked(true);
    lineEdit2 = new QLineEdit(groupBox1_3);
    lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
    lineEdit2->setGeometry(QRect(100, 170, 31, 22));
    lineEdit3 = new QLineEdit(groupBox1_3);
    lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
    lineEdit3->setGeometry(QRect(100, 210, 31, 22));
    lineEdit4 = new QLineEdit(groupBox1_3);
    lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
    lineEdit4->setGeometry(QRect(100, 250, 31, 22));
    lineEdit5 = new QLineEdit(groupBox1_3);
    lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));
    lineEdit5->setGeometry(QRect(100, 290, 31, 22));
    lineEdit7 = new QLineEdit(groupBox1_3);
    lineEdit7->setObjectName(QString::fromUtf8("lineEdit7"));
    lineEdit7->setGeometry(QRect(240, 170, 31, 22));
    lineEdit8 = new QLineEdit(groupBox1_3);
    lineEdit8->setObjectName(QString::fromUtf8("lineEdit8"));
    lineEdit8->setGeometry(QRect(240, 210, 31, 22));
    tabWidget2->addTab(tab1, QString());
    MessageLog = new Q3TextBrowser(paraFile);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(13, 537, 571, 131));
    cancelButton = new QPushButton(paraFile);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(415, 488, 80, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(paraFile);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 488, 80, 34));
    helpButton->setAutoDefault(false);
    okButton = new QPushButton(paraFile);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(501, 488, 80, 34));
    okButton->setAutoDefault(false);

    retranslateUi(paraFile);

    tabWidget2->setCurrentIndex(2);


    QMetaObject::connectSlotsByName(paraFile);
    } // setupUi

    void retranslateUi(QDialog *paraFile)
    {
    paraFile->setWindowTitle(QApplication::translate("paraFile", "Parameter File Generation", 0, QApplication::UnicodeUTF8));
    outputButtonGroup->setTitle(QApplication::translate("paraFile", "Output", 0, QApplication::UnicodeUTF8));
    outputFileLabel->setText(QApplication::translate("paraFile", "Output Para File", 0, QApplication::UnicodeUTF8));
    paraFileButton->setText(QApplication::translate("paraFile", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QString());
    debugCheckBox->setText(QApplication::translate("paraFile", "Debug", 0, QApplication::UnicodeUTF8));
    verboseCheckBox->setText(QApplication::translate("paraFile", "Verbose", 0, QApplication::UnicodeUTF8));
    checkBoxFillSurf->setText(QApplication::translate("paraFile", "Fill Surface Sinks", 0, QApplication::UnicodeUTF8));
    checkBoxFillSub->setText(QApplication::translate("paraFile", "Fill Subsurface Sinks", 0, QApplication::UnicodeUTF8));
    mcGroupBox2->setTitle(QApplication::translate("paraFile", "Hydrologic Processes ", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("paraFile", "Surface Mode", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("paraFile", "Input Mode", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("paraFile", "River Mode", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("paraFile", "Unsaturated Mode", 0, QApplication::UnicodeUTF8));
    smComboBox->clear();
    smComboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", "Diffusive", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Kinematic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Full", 0, QApplication::UnicodeUTF8)
    );
    rmComboBox->clear();
    rmComboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", "Diffusive", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Kinematic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Full", 0, QApplication::UnicodeUTF8)
    );
    imComboBox->clear();
    imComboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", ".init File", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", ".att File", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Relax", 0, QApplication::UnicodeUTF8)
    );
    umComboBox->clear();
    umComboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", "Shallow", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Deep", 0, QApplication::UnicodeUTF8)
    );
    tabWidget2->setTabText(tabWidget2->indexOf(tab), QApplication::translate("paraFile", "Model Controls", 0, QApplication::UnicodeUTF8));
    groupBox1_2_2_2->setTitle(QApplication::translate("paraFile", "Hydrologic Processes ", 0, QApplication::UnicodeUTF8));
    textLabel1_5_3->setText(QApplication::translate("paraFile", "Absolute Tolerance", 0, QApplication::UnicodeUTF8));
    textLabel1_3_2_2->setText(QApplication::translate("paraFile", "Relative Tolerance", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("paraFile", "Initial Step", 0, QApplication::UnicodeUTF8));
    textLabel1_4_2_2->setText(QApplication::translate("paraFile", "Maximum Step", 0, QApplication::UnicodeUTF8));
    ATlineEdit->setText(QApplication::translate("paraFile", "1E-4", 0, QApplication::UnicodeUTF8));
    MSlineEdit->setText(QApplication::translate("paraFile", "1", 0, QApplication::UnicodeUTF8));
    ISlineEdit->setText(QApplication::translate("paraFile", "1E-5", 0, QApplication::UnicodeUTF8));
    RTlineEdit->setText(QApplication::translate("paraFile", "1E-3", 0, QApplication::UnicodeUTF8));
    textLabel1_4_2_3->setText(QApplication::translate("paraFile", "ET Stepsize", 0, QApplication::UnicodeUTF8));
    ETSlineEdit->setText(QApplication::translate("paraFile", "1", 0, QApplication::UnicodeUTF8));
    groupBox1_3_2->setTitle(QString());
    textLabel3_3->setText(QApplication::translate("paraFile", "Krylov Dimension", 0, QApplication::UnicodeUTF8));
    textLabel1_5_2_2->setText(QApplication::translate("paraFile", "Grahm-Schmidt", 0, QApplication::UnicodeUTF8));
    textLabel3_2_2->setText(QApplication::translate("paraFile", "Convergence Threshold", 0, QApplication::UnicodeUTF8));
    CTlineEdit->setText(QApplication::translate("paraFile", "0", 0, QApplication::UnicodeUTF8));
    GScomboBox->clear();
    GScomboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", "Modified", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Classical", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_2->setText(QApplication::translate("paraFile", "Solver Type", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QString());
    ITradioButton->setText(QApplication::translate("paraFile", "Iterative", 0, QApplication::UnicodeUTF8));
    DDradioButton->setText(QApplication::translate("paraFile", "Direct Dense", 0, QApplication::UnicodeUTF8));
    KDlineEdit->setText(QApplication::translate("paraFile", "0", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(TabPage), QApplication::translate("paraFile", "Solver Options", 0, QApplication::UnicodeUTF8));
    groupBox1_3->setTitle(QString());
    textLabel3->setText(QApplication::translate("paraFile", "Start Time (min)", 0, QApplication::UnicodeUTF8));
    textLabel1_5_2->setText(QApplication::translate("paraFile", "Step Size", 0, QApplication::UnicodeUTF8));
    textLabel3_2_3_2->setText(QApplication::translate("paraFile", "b =", 0, QApplication::UnicodeUTF8));
    textLabel3_4->setText(QApplication::translate("paraFile", "(Step Size = b.a^i )", 0, QApplication::UnicodeUTF8));
    textLabel3_2_3->setText(QApplication::translate("paraFile", "a =", 0, QApplication::UnicodeUTF8));
    textLabel3_2->setText(QApplication::translate("paraFile", "End Time (min)", 0, QApplication::UnicodeUTF8));
    STlineEdit->setText(QApplication::translate("paraFile", "0", 0, QApplication::UnicodeUTF8));
    ETlineEdit->setText(QApplication::translate("paraFile", "1440", 0, QApplication::UnicodeUTF8));
    SScomboBox->clear();
    SScomboBox->insertItems(0, QStringList()
     << QApplication::translate("paraFile", "Constant", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("paraFile", "Exponential", 0, QApplication::UnicodeUTF8)
    );
    a_lineEdit->setText(QApplication::translate("paraFile", "1.0", 0, QApplication::UnicodeUTF8));
    b_lineEdit->setText(QApplication::translate("paraFile", "1", 0, QApplication::UnicodeUTF8));
    lineEdit1->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    checkBox6->setText(QApplication::translate("paraFile", "..IS. Depth", 0, QApplication::UnicodeUTF8));
    checkBox1->setText(QApplication::translate("paraFile", "GW. Depth", 0, QApplication::UnicodeUTF8));
    lineEdit6->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    checkBox11->setText(QApplication::translate("paraFile", ".........Riv0", 0, QApplication::UnicodeUTF8));
    lineEdit11->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    checkBox16->setText(QApplication::translate("paraFile", ".........Riv5", 0, QApplication::UnicodeUTF8));
    checkBox2->setText(QApplication::translate("paraFile", "SW. Depth", 0, QApplication::UnicodeUTF8));
    checkBox3->setText(QApplication::translate("paraFile", "SN. Depth", 0, QApplication::UnicodeUTF8));
    checkBox4->setText(QApplication::translate("paraFile", "Riv. Depth", 0, QApplication::UnicodeUTF8));
    checkBox5->setText(QApplication::translate("paraFile", "..Recharge", 0, QApplication::UnicodeUTF8));
    checkBox7->setText(QApplication::translate("paraFile", "US. Depth", 0, QApplication::UnicodeUTF8));
    checkBox8->setText(QApplication::translate("paraFile", "..........ET0", 0, QApplication::UnicodeUTF8));
    checkBox9->setText(QApplication::translate("paraFile", "..........ET1", 0, QApplication::UnicodeUTF8));
    checkBox10->setText(QApplication::translate("paraFile", "..........ET2", 0, QApplication::UnicodeUTF8));
    checkBox12->setText(QApplication::translate("paraFile", ".........Riv1", 0, QApplication::UnicodeUTF8));
    checkBox13->setText(QApplication::translate("paraFile", ".........Riv2", 0, QApplication::UnicodeUTF8));
    checkBox14->setText(QApplication::translate("paraFile", ".........Riv3", 0, QApplication::UnicodeUTF8));
    checkBox15->setText(QApplication::translate("paraFile", ".........Riv4", 0, QApplication::UnicodeUTF8));
    checkBox17->setText(QApplication::translate("paraFile", ".........Riv6", 0, QApplication::UnicodeUTF8));
    checkBox18->setText(QApplication::translate("paraFile", ".........Riv7", 0, QApplication::UnicodeUTF8));
    checkBox19->setText(QApplication::translate("paraFile", ".........Riv8", 0, QApplication::UnicodeUTF8));
    checkBox20->setText(QApplication::translate("paraFile", ".........Riv9", 0, QApplication::UnicodeUTF8));
    lineEdit2->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    lineEdit3->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    lineEdit4->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    lineEdit5->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    lineEdit7->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    lineEdit8->setText(QApplication::translate("paraFile", "60", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab1), QApplication::translate("paraFile", "Output Parameters", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("paraFile", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("paraFile", "Help", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("paraFile", "Run!", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(paraFile);
    } // retranslateUi

};

namespace Ui {
    class paraFile: public Ui_paraFile {};
} // namespace Ui

#endif // UI_PARAFILE_H
