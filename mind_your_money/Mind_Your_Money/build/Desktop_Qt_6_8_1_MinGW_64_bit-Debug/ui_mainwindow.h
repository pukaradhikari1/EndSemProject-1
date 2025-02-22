/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtEmail;
    QLabel *label_3;
    QLineEdit *txtPassword;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSignup;
    QPushButton *btnLogin;
    QPushButton *btnForgot;
    QPushButton *Exit0;
    QWidget *page_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *txtFirstName;
    QLabel *label_6;
    QLineEdit *txtLastName;
    QLabel *label_7;
    QLineEdit *txtEmailA;
    QLabel *label_8;
    QLineEdit *txtPhone;
    QLabel *label_9;
    QLineEdit *txtPasswords;
    QLabel *label_14;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnSignUpPrev;
    QPushButton *btnReset;
    QPushButton *btnNext;
    QPushButton *Exit1;
    QWidget *page_9;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLabel *MonthlyBudget_2;
    QLineEdit *txtMonthlyBudget;
    QLabel *label_5;
    QLineEdit *txtPFood;
    QLabel *label_22;
    QLineEdit *txtPRent;
    QLabel *label_24;
    QLineEdit *txtPUtilities;
    QLineEdit *txtPStationery;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnHomepage;
    QPushButton *btnSignUpSave;
    QPushButton *Exit2;
    QWidget *page_4;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLineEdit *txtFEmail;
    QLineEdit *txtFPhone;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnPrevForgot;
    QPushButton *btnNextForgot;
    QPushButton *Exit3;
    QWidget *page_6;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *txtCPassword;
    QLineEdit *txtCmPassword;
    QLabel *label_19;
    QPushButton *btnChangePassword;
    QPushButton *btnHome;
    QPushButton *Exit4;
    QWidget *page_3;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnEnterExpense;
    QPushButton *btnGraph;
    QPushButton *btnStats;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLabel *date;
    QLabel *labelUserName;
    QPushButton *btnLogout;
    QLabel *name;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Category;
    QLabel *label_27;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *LFood;
    QLabel *Food;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *LRent;
    QLabel *Rent;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_30;
    QLabel *Utilities;
    QLabel *label_28;
    QLabel *RemainingBudget;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_32;
    QLabel *Stationery;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_31;
    QLabel *Others;
    QPushButton *Exit5;
    QWidget *page_5;
    QLabel *label_16;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *ExpenseName;
    QLineEdit *LineEditAmount;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnPrevExpenseWelcomeUser;
    QPushButton *btnSaveExpense;
    QPushButton *Exit6;
    QWidget *page_7;
    QFrame *bargraph;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPrevGraphToWelcome;
    QPushButton *Exit7;
    QPushButton *btn_LineGraph;
    QWidget *page_8;
    QLabel *label_23;
    QPushButton *btnEPush;
    QPushButton *Exit8;
    QWidget *page_10;
    QLabel *label_29;
    QPushButton *Exit9;
    QWidget *lineGraphWidget;
    QHBoxLayout *horizontalLayout_14;
    QMenuBar *menubar;
    QMenu *menuHome_Page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(945, 707);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 941, 651));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        stackedWidget->setFont(font);
        stackedWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 931, 71));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        label->setFont(font1);
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(200, 160, 611, 113));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setFont(font);
        txtPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(209, 280, 601, 55));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSignup = new QPushButton(horizontalLayoutWidget);
        btnSignup->setObjectName("btnSignup");
        btnSignup->setFont(font);

        horizontalLayout->addWidget(btnSignup);

        btnLogin = new QPushButton(horizontalLayoutWidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setFont(font);

        horizontalLayout->addWidget(btnLogin);

        btnForgot = new QPushButton(horizontalLayoutWidget);
        btnForgot->setObjectName("btnForgot");
        btnForgot->setFont(font);

        horizontalLayout->addWidget(btnForgot);

        Exit0 = new QPushButton(page);
        Exit0->setObjectName("Exit0");
        Exit0->setGeometry(QRect(900, 0, 41, 24));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        Exit0->setFont(font2);
        Exit0->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(200, 120, 671, 301));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_4->setFont(font3);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        txtFirstName = new QLineEdit(formLayoutWidget_2);
        txtFirstName->setObjectName("txtFirstName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        txtLastName = new QLineEdit(formLayoutWidget_2);
        txtLastName->setObjectName("txtLastName");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtLastName);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font3);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        txtEmailA = new QLineEdit(formLayoutWidget_2);
        txtEmailA->setObjectName("txtEmailA");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtEmailA);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        txtPhone = new QLineEdit(formLayoutWidget_2);
        txtPhone->setObjectName("txtPhone");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtPhone);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font3);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        txtPasswords = new QLineEdit(formLayoutWidget_2);
        txtPasswords->setObjectName("txtPasswords");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtPasswords);

        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 0, 931, 71));
        label_14->setFont(font1);
        horizontalLayoutWidget_10 = new QWidget(page_2);
        horizontalLayoutWidget_10->setObjectName("horizontalLayoutWidget_10");
        horizontalLayoutWidget_10->setGeometry(QRect(200, 430, 661, 61));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        btnSignUpPrev = new QPushButton(horizontalLayoutWidget_10);
        btnSignUpPrev->setObjectName("btnSignUpPrev");
        btnSignUpPrev->setFont(font);

        horizontalLayout_11->addWidget(btnSignUpPrev);

        btnReset = new QPushButton(horizontalLayoutWidget_10);
        btnReset->setObjectName("btnReset");
        btnReset->setFont(font);

        horizontalLayout_11->addWidget(btnReset);

        btnNext = new QPushButton(horizontalLayoutWidget_10);
        btnNext->setObjectName("btnNext");

        horizontalLayout_11->addWidget(btnNext);

        Exit1 = new QPushButton(page_2);
        Exit1->setObjectName("Exit1");
        Exit1->setGeometry(QRect(900, 0, 41, 24));
        Exit1->setFont(font2);
        Exit1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        formLayoutWidget_6 = new QWidget(page_9);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(140, 130, 651, 290));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        MonthlyBudget_2 = new QLabel(formLayoutWidget_6);
        MonthlyBudget_2->setObjectName("MonthlyBudget_2");
        MonthlyBudget_2->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, MonthlyBudget_2);

        txtMonthlyBudget = new QLineEdit(formLayoutWidget_6);
        txtMonthlyBudget->setObjectName("txtMonthlyBudget");

        formLayout_6->setWidget(0, QFormLayout::FieldRole, txtMonthlyBudget);

        label_5 = new QLabel(formLayoutWidget_6);
        label_5->setObjectName("label_5");

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_5);

        txtPFood = new QLineEdit(formLayoutWidget_6);
        txtPFood->setObjectName("txtPFood");

        formLayout_6->setWidget(1, QFormLayout::FieldRole, txtPFood);

        label_22 = new QLabel(formLayoutWidget_6);
        label_22->setObjectName("label_22");

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_22);

        txtPRent = new QLineEdit(formLayoutWidget_6);
        txtPRent->setObjectName("txtPRent");

        formLayout_6->setWidget(2, QFormLayout::FieldRole, txtPRent);

        label_24 = new QLabel(formLayoutWidget_6);
        label_24->setObjectName("label_24");

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_24);

        txtPUtilities = new QLineEdit(formLayoutWidget_6);
        txtPUtilities->setObjectName("txtPUtilities");

        formLayout_6->setWidget(3, QFormLayout::FieldRole, txtPUtilities);

        txtPStationery = new QLineEdit(formLayoutWidget_6);
        txtPStationery->setObjectName("txtPStationery");

        formLayout_6->setWidget(4, QFormLayout::FieldRole, txtPStationery);

        label_25 = new QLabel(formLayoutWidget_6);
        label_25->setObjectName("label_25");

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(page_9);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(10, 0, 931, 71));
        label_26->setFont(font1);
        horizontalLayoutWidget_12 = new QWidget(page_9);
        horizontalLayoutWidget_12->setObjectName("horizontalLayoutWidget_12");
        horizontalLayoutWidget_12->setGeometry(QRect(360, 440, 431, 61));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        btnHomepage = new QPushButton(horizontalLayoutWidget_12);
        btnHomepage->setObjectName("btnHomepage");

        horizontalLayout_13->addWidget(btnHomepage);

        btnSignUpSave = new QPushButton(horizontalLayoutWidget_12);
        btnSignUpSave->setObjectName("btnSignUpSave");
        btnSignUpSave->setFont(font);

        horizontalLayout_13->addWidget(btnSignUpSave);

        Exit2 = new QPushButton(page_9);
        Exit2->setObjectName("Exit2");
        Exit2->setGeometry(QRect(900, 0, 41, 24));
        Exit2->setFont(font2);
        Exit2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_9);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        formLayoutWidget_3 = new QWidget(page_4);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(130, 140, 771, 113));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        txtFEmail = new QLineEdit(formLayoutWidget_3);
        txtFEmail->setObjectName("txtFEmail");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtFEmail);

        txtFPhone = new QLineEdit(formLayoutWidget_3);
        txtFPhone->setObjectName("txtFPhone");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtFPhone);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName("label_11");
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        label_11->setFont(font4);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font4);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 0, 931, 71));
        label_13->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(page_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(490, 260, 391, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnPrevForgot = new QPushButton(horizontalLayoutWidget_3);
        btnPrevForgot->setObjectName("btnPrevForgot");
        btnPrevForgot->setFont(font);

        horizontalLayout_3->addWidget(btnPrevForgot);

        btnNextForgot = new QPushButton(horizontalLayoutWidget_3);
        btnNextForgot->setObjectName("btnNextForgot");
        btnNextForgot->setFont(font);

        horizontalLayout_3->addWidget(btnNextForgot);

        Exit3 = new QPushButton(page_4);
        Exit3->setObjectName("Exit3");
        Exit3->setGeometry(QRect(900, 0, 41, 24));
        Exit3->setFont(font2);
        Exit3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        formLayoutWidget_5 = new QWidget(page_6);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(190, 160, 611, 121));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(formLayoutWidget_5);
        label_20->setObjectName("label_20");
        label_20->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_5);
        label_21->setObjectName("label_21");
        label_21->setFont(font);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_21);

        txtCPassword = new QLineEdit(formLayoutWidget_5);
        txtCPassword->setObjectName("txtCPassword");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, txtCPassword);

        txtCmPassword = new QLineEdit(formLayoutWidget_5);
        txtCmPassword->setObjectName("txtCmPassword");

        formLayout_5->setWidget(1, QFormLayout::FieldRole, txtCmPassword);

        label_19 = new QLabel(page_6);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 0, 931, 71));
        label_19->setFont(font);
        btnChangePassword = new QPushButton(page_6);
        btnChangePassword->setObjectName("btnChangePassword");
        btnChangePassword->setGeometry(QRect(690, 310, 121, 41));
        btnChangePassword->setFont(font);
        btnHome = new QPushButton(page_6);
        btnHome->setObjectName("btnHome");
        btnHome->setGeometry(QRect(562, 310, 111, 41));
        btnHome->setFont(font);
        Exit4 = new QPushButton(page_6);
        Exit4->setObjectName("Exit4");
        Exit4->setGeometry(QRect(900, 0, 41, 24));
        Exit4->setFont(font2);
        Exit4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_6);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 0, 181, 51));
        QFont font5;
        font5.setPointSize(24);
        font5.setBold(true);
        label_10->setFont(font5);
        verticalLayoutWidget_2 = new QWidget(page_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 160, 255, 460));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(50);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEnterExpense = new QPushButton(verticalLayoutWidget_2);
        btnEnterExpense->setObjectName("btnEnterExpense");
        btnEnterExpense->setFont(font);

        verticalLayout_2->addWidget(btnEnterExpense);

        btnGraph = new QPushButton(verticalLayoutWidget_2);
        btnGraph->setObjectName("btnGraph");
        btnGraph->setFont(font);

        verticalLayout_2->addWidget(btnGraph);

        btnStats = new QPushButton(verticalLayoutWidget_2);
        btnStats->setObjectName("btnStats");
        btnStats->setFont(font);

        verticalLayout_2->addWidget(btnStats);

        horizontalLayoutWidget_4 = new QWidget(page_3);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(540, 40, 321, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(80, 16777215));
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));

        horizontalLayout_4->addWidget(label_15);

        date = new QLabel(horizontalLayoutWidget_4);
        date->setObjectName("date");
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        date->setFont(font6);
        date->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));

        horizontalLayout_4->addWidget(date);

        labelUserName = new QLabel(page_3);
        labelUserName->setObjectName("labelUserName");
        labelUserName->setGeometry(QRect(170, 0, 171, 51));
        labelUserName->setFont(font);
        btnLogout = new QPushButton(page_3);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(720, 580, 191, 41));
        btnLogout->setFont(font4);
        name = new QLabel(page_3);
        name->setObjectName("name");
        name->setGeometry(QRect(300, 310, 151, 41));
        horizontalLayoutWidget_2 = new QWidget(page_3);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(470, 230, 392, 46));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setSpacing(50);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Category = new QLabel(horizontalLayoutWidget_2);
        Category->setObjectName("Category");

        horizontalLayout_6->addWidget(Category);

        label_27 = new QLabel(horizontalLayoutWidget_2);
        label_27->setObjectName("label_27");

        horizontalLayout_6->addWidget(label_27);

        horizontalLayoutWidget_6 = new QWidget(page_3);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(470, 290, 381, 46));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setSpacing(60);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        LFood = new QLabel(horizontalLayoutWidget_6);
        LFood->setObjectName("LFood");

        horizontalLayout_7->addWidget(LFood);

        Food = new QLabel(horizontalLayoutWidget_6);
        Food->setObjectName("Food");

        horizontalLayout_7->addWidget(Food);

        horizontalLayoutWidget_7 = new QWidget(page_3);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(470, 360, 381, 46));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_8->setSpacing(60);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        LRent = new QLabel(horizontalLayoutWidget_7);
        LRent->setObjectName("LRent");

        horizontalLayout_8->addWidget(LRent);

        Rent = new QLabel(horizontalLayoutWidget_7);
        Rent->setObjectName("Rent");

        horizontalLayout_8->addWidget(Rent);

        horizontalLayoutWidget_9 = new QWidget(page_3);
        horizontalLayoutWidget_9->setObjectName("horizontalLayoutWidget_9");
        horizontalLayoutWidget_9->setGeometry(QRect(470, 420, 381, 46));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_10->setSpacing(60);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(horizontalLayoutWidget_9);
        label_30->setObjectName("label_30");

        horizontalLayout_10->addWidget(label_30);

        Utilities = new QLabel(horizontalLayoutWidget_9);
        Utilities->setObjectName("Utilities");

        horizontalLayout_10->addWidget(Utilities);

        label_28 = new QLabel(page_3);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(470, 90, 431, 61));
        RemainingBudget = new QLabel(page_3);
        RemainingBudget->setObjectName("RemainingBudget");
        RemainingBudget->setGeometry(QRect(590, 160, 221, 51));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(false);
        RemainingBudget->setFont(font7);
        RemainingBudget->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));
        horizontalLayoutWidget_11 = new QWidget(page_3);
        horizontalLayoutWidget_11->setObjectName("horizontalLayoutWidget_11");
        horizontalLayoutWidget_11->setGeometry(QRect(470, 480, 381, 46));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_12->setSpacing(60);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(horizontalLayoutWidget_11);
        label_32->setObjectName("label_32");

        horizontalLayout_12->addWidget(label_32);

        Stationery = new QLabel(horizontalLayoutWidget_11);
        Stationery->setObjectName("Stationery");

        horizontalLayout_12->addWidget(Stationery);

        horizontalLayoutWidget_8 = new QWidget(page_3);
        horizontalLayoutWidget_8->setObjectName("horizontalLayoutWidget_8");
        horizontalLayoutWidget_8->setGeometry(QRect(470, 530, 371, 46));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_9->setSpacing(60);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(horizontalLayoutWidget_8);
        label_31->setObjectName("label_31");

        horizontalLayout_9->addWidget(label_31);

        Others = new QLabel(horizontalLayoutWidget_8);
        Others->setObjectName("Others");

        horizontalLayout_9->addWidget(Others);

        Exit5 = new QPushButton(page_3);
        Exit5->setObjectName("Exit5");
        Exit5->setGeometry(QRect(900, 0, 41, 24));
        Exit5->setFont(font2);
        Exit5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_16 = new QLabel(page_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 0, 931, 71));
        label_16->setFont(font1);
        formLayoutWidget_4 = new QWidget(page_5);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(240, 150, 461, 131));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_4);
        label_17->setObjectName("label_17");
        label_17->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_18);

        ExpenseName = new QComboBox(formLayoutWidget_4);
        ExpenseName->addItem(QString());
        ExpenseName->addItem(QString());
        ExpenseName->addItem(QString());
        ExpenseName->addItem(QString());
        ExpenseName->addItem(QString());
        ExpenseName->setObjectName("ExpenseName");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, ExpenseName);

        LineEditAmount = new QLineEdit(formLayoutWidget_4);
        LineEditAmount->setObjectName("LineEditAmount");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, LineEditAmount);

        horizontalLayoutWidget_5 = new QWidget(page_5);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(240, 280, 461, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(100);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnPrevExpenseWelcomeUser = new QPushButton(horizontalLayoutWidget_5);
        btnPrevExpenseWelcomeUser->setObjectName("btnPrevExpenseWelcomeUser");
        btnPrevExpenseWelcomeUser->setFont(font);

        horizontalLayout_5->addWidget(btnPrevExpenseWelcomeUser);

        btnSaveExpense = new QPushButton(horizontalLayoutWidget_5);
        btnSaveExpense->setObjectName("btnSaveExpense");
        btnSaveExpense->setFont(font);

        horizontalLayout_5->addWidget(btnSaveExpense);

        Exit6 = new QPushButton(page_5);
        Exit6->setObjectName("Exit6");
        Exit6->setGeometry(QRect(900, 0, 41, 24));
        Exit6->setFont(font2);
        Exit6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        bargraph = new QFrame(page_7);
        bargraph->setObjectName("bargraph");
        bargraph->setGeometry(QRect(80, 20, 781, 571));
        horizontalLayout_2 = new QHBoxLayout(bargraph);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnPrevGraphToWelcome = new QPushButton(page_7);
        btnPrevGraphToWelcome->setObjectName("btnPrevGraphToWelcome");
        btnPrevGraphToWelcome->setGeometry(QRect(10, 620, 93, 29));
        btnPrevGraphToWelcome->setFont(font4);
        Exit7 = new QPushButton(page_7);
        Exit7->setObjectName("Exit7");
        Exit7->setGeometry(QRect(900, 0, 41, 24));
        Exit7->setFont(font2);
        Exit7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        btn_LineGraph = new QPushButton(page_7);
        btn_LineGraph->setObjectName("btn_LineGraph");
        btn_LineGraph->setGeometry(QRect(830, 620, 93, 29));
        QFont font8;
        font8.setPointSize(9);
        font8.setBold(true);
        btn_LineGraph->setFont(font8);
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_23 = new QLabel(page_8);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 0, 931, 71));
        btnEPush = new QPushButton(page_8);
        btnEPush->setObjectName("btnEPush");
        btnEPush->setGeometry(QRect(10, 590, 101, 51));
        Exit8 = new QPushButton(page_8);
        Exit8->setObjectName("Exit8");
        Exit8->setGeometry(QRect(900, 0, 41, 24));
        Exit8->setFont(font2);
        Exit8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        stackedWidget->addWidget(page_8);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_29 = new QLabel(page_10);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(10, 0, 931, 61));
        Exit9 = new QPushButton(page_10);
        Exit9->setObjectName("Exit9");
        Exit9->setGeometry(QRect(900, 0, 41, 24));
        Exit9->setFont(font2);
        Exit9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:black;\n"
"	background-color:red;\n"
"}"));
        lineGraphWidget = new QWidget(page_10);
        lineGraphWidget->setObjectName("lineGraphWidget");
        lineGraphWidget->setGeometry(QRect(40, 80, 881, 541));
        horizontalLayout_14 = new QHBoxLayout(lineGraphWidget);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        stackedWidget->addWidget(page_10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 945, 21));
        menuHome_Page = new QMenu(menubar);
        menuHome_Page->setObjectName("menuHome_Page");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome_Page->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Mind Your Money </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnSignup->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnForgot->setText(QCoreApplication::translate("MainWindow", "ForgotPassword", nullptr));
        Exit0->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        txtFirstName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: JOHN", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        txtLastName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: NEPAL", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email ", nullptr));
        txtEmailA->setPlaceholderText(QCoreApplication::translate("MainWindow", "xyz@gmail.com", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        txtPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "98000000000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtPasswords->setPlaceholderText(QCoreApplication::translate("MainWindow", "CANT BE EMPTY", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Sign Up Here!!</span></p></body></html>", nullptr));
        btnSignUpPrev->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        Exit1->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        MonthlyBudget_2->setText(QCoreApplication::translate("MainWindow", "Monthly Budget", nullptr));
        txtMonthlyBudget->setPlaceholderText(QCoreApplication::translate("MainWindow", "CANT BE EMPTY", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Food", nullptr));
        txtPFood->setPlaceholderText(QCoreApplication::translate("MainWindow", "In Percentage", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Rent", nullptr));
        txtPRent->setPlaceholderText(QCoreApplication::translate("MainWindow", "In Percentage", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        txtPUtilities->setPlaceholderText(QCoreApplication::translate("MainWindow", "In Percentage", nullptr));
        txtPStationery->setPlaceholderText(QCoreApplication::translate("MainWindow", "In Percentage", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Stationery", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Sign Up Here!!</span></p></body></html>", nullptr));
        btnHomepage->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        btnSignUpSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        Exit2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        txtFEmail->setText(QString());
        txtFEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "XYZ@gmail.com", nullptr));
        txtFPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "9700000000", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Reset Your Password</span></p></body></html>", nullptr));
        btnPrevForgot->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnNextForgot->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        Exit3->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "New Password", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Change Password</span></p></body></html>", nullptr));
        btnChangePassword->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        btnHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Exit4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Welcome,", nullptr));
        btnEnterExpense->setText(QCoreApplication::translate("MainWindow", "Enter Expense", nullptr));
        btnGraph->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        btnStats->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        date->setText(QString());
        labelUserName->setText(QString());
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        name->setText(QString());
        Category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Amount Left", nullptr));
        LFood->setText(QCoreApplication::translate("MainWindow", "Food", nullptr));
        Food->setText(QString());
        LRent->setText(QCoreApplication::translate("MainWindow", "Rent", nullptr));
        Rent->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        Utilities->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "Budget Amount Remaining", nullptr));
        RemainingBudget->setText(QString());
        label_32->setText(QCoreApplication::translate("MainWindow", "Stationery", nullptr));
        Stationery->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "Others", nullptr));
        Others->setText(QString());
        Exit5->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Expenditure</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        ExpenseName->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        ExpenseName->setItemText(1, QCoreApplication::translate("MainWindow", "Rent", nullptr));
        ExpenseName->setItemText(2, QCoreApplication::translate("MainWindow", "Stationery", nullptr));
        ExpenseName->setItemText(3, QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        ExpenseName->setItemText(4, QCoreApplication::translate("MainWindow", "Others", nullptr));

        ExpenseName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        LineEditAmount->setPlaceholderText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        btnPrevExpenseWelcomeUser->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnSaveExpense->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        Exit6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btnPrevGraphToWelcome->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Exit7->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_LineGraph->setText(QCoreApplication::translate("MainWindow", "Line Graph", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Expense Report</span></p></body></html>", nullptr));
        btnEPush->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        Exit8->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Line Graph</span></p></body></html>", nullptr));
        Exit9->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        menuHome_Page->setTitle(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
