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
    QWidget *page_10;
    QLabel *label_29;
    QPushButton *Exit9;
    QWidget *lineGraphWidget;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnLHome;
    QWidget *page_8;
    QLabel *label_23;
    QPushButton *btn_ExpenseReportHome;
    QLabel *RemainingBudget;
    QLabel *label_28;
    QWidget *horizontalLayoutWidget_25;
    QHBoxLayout *horizontalLayout_39;
    QLabel *Category_4;
    QLabel *label_135;
    QWidget *horizontalLayoutWidget_26;
    QHBoxLayout *horizontalLayout_40;
    QLabel *Category_9;
    QLabel *food;
    QWidget *horizontalLayoutWidget_27;
    QHBoxLayout *horizontalLayout_41;
    QLabel *Category_8;
    QLabel *rent;
    QWidget *horizontalLayoutWidget_28;
    QHBoxLayout *horizontalLayout_42;
    QLabel *Category_7;
    QLabel *utilities;
    QWidget *horizontalLayoutWidget_29;
    QHBoxLayout *horizontalLayout_43;
    QLabel *Category_10;
    QLabel *stationery;
    QWidget *horizontalLayoutWidget_30;
    QHBoxLayout *horizontalLayout_44;
    QLabel *Category_11;
    QLabel *others;
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
        label->setGeometry(QRect(40, 40, 931, 71));
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
        formLayoutWidget_2->setGeometry(QRect(200, 120, 671, 350));
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
        horizontalLayoutWidget_10->setGeometry(QRect(200, 430, 661, 67));
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
        formLayoutWidget_6->setGeometry(QRect(140, 130, 651, 301));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        MonthlyBudget_2 = new QLabel(formLayoutWidget_6);
        MonthlyBudget_2->setObjectName("MonthlyBudget_2");
        MonthlyBudget_2->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, MonthlyBudget_2);

        txtMonthlyBudget = new QLineEdit(formLayoutWidget_6);
        txtMonthlyBudget->setObjectName("txtMonthlyBudget");
        txtMonthlyBudget->setFont(font);

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
        horizontalLayoutWidget_12->setGeometry(QRect(360, 440, 431, 67));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_13->setSpacing(50);
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
        formLayoutWidget_3->setGeometry(QRect(130, 140, 771, 137));
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
        label_11->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 0, 931, 71));
        label_13->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(page_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(470, 300, 391, 61));
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
        formLayoutWidget_5->setGeometry(QRect(190, 160, 611, 137));
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
        label_10->setGeometry(QRect(40, 30, 181, 51));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        label_10->setFont(font4);
        verticalLayoutWidget_2 = new QWidget(page_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(50, 150, 255, 460));
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
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        label_15->setFont(font5);
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
        labelUserName->setGeometry(QRect(250, 20, 171, 51));
        labelUserName->setFont(font);
        btnLogout = new QPushButton(page_3);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(730, 560, 191, 41));
        btnLogout->setFont(font5);
        name = new QLabel(page_3);
        name->setObjectName("name");
        name->setGeometry(QRect(300, 310, 151, 41));
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
        formLayoutWidget_4->setGeometry(QRect(240, 150, 461, 137));
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
        btnPrevGraphToWelcome->setGeometry(QRect(10, 600, 93, 29));
        btnPrevGraphToWelcome->setFont(font5);
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
        btn_LineGraph->setGeometry(QRect(792, 600, 131, 29));
        btn_LineGraph->setFont(font5);
        stackedWidget->addWidget(page_7);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_29 = new QLabel(page_10);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(0, -10, 931, 81));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        label_29->setFont(font7);
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
        lineGraphWidget->setGeometry(QRect(30, 60, 881, 541));
        horizontalLayout_14 = new QHBoxLayout(lineGraphWidget);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        btnLHome = new QPushButton(page_10);
        btnLHome->setObjectName("btnLHome");
        btnLHome->setGeometry(QRect(30, 610, 83, 29));
        btnLHome->setFont(font5);
        stackedWidget->addWidget(page_10);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_23 = new QLabel(page_8);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(290, 0, 381, 121));
        QFont font8;
        font8.setPointSize(30);
        font8.setBold(true);
        label_23->setFont(font8);
        btn_ExpenseReportHome = new QPushButton(page_8);
        btn_ExpenseReportHome->setObjectName("btn_ExpenseReportHome");
        btn_ExpenseReportHome->setGeometry(QRect(790, 570, 111, 41));
        RemainingBudget = new QLabel(page_8);
        RemainingBudget->setObjectName("RemainingBudget");
        RemainingBudget->setGeometry(QRect(360, 180, 261, 51));
        RemainingBudget->setFont(font1);
        RemainingBudget->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));
        label_28 = new QLabel(page_8);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(270, 110, 431, 61));
        label_28->setFont(font);
        horizontalLayoutWidget_25 = new QWidget(page_8);
        horizontalLayoutWidget_25->setObjectName("horizontalLayoutWidget_25");
        horizontalLayoutWidget_25->setGeometry(QRect(290, 240, 411, 61));
        horizontalLayout_39 = new QHBoxLayout(horizontalLayoutWidget_25);
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        horizontalLayout_39->setContentsMargins(0, 0, 0, 0);
        Category_4 = new QLabel(horizontalLayoutWidget_25);
        Category_4->setObjectName("Category_4");

        horizontalLayout_39->addWidget(Category_4);

        label_135 = new QLabel(horizontalLayoutWidget_25);
        label_135->setObjectName("label_135");

        horizontalLayout_39->addWidget(label_135);

        horizontalLayoutWidget_26 = new QWidget(page_8);
        horizontalLayoutWidget_26->setObjectName("horizontalLayoutWidget_26");
        horizontalLayoutWidget_26->setGeometry(QRect(290, 310, 401, 58));
        horizontalLayout_40 = new QHBoxLayout(horizontalLayoutWidget_26);
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        horizontalLayout_40->setContentsMargins(0, 0, 0, 0);
        Category_9 = new QLabel(horizontalLayoutWidget_26);
        Category_9->setObjectName("Category_9");

        horizontalLayout_40->addWidget(Category_9);

        food = new QLabel(horizontalLayoutWidget_26);
        food->setObjectName("food");

        horizontalLayout_40->addWidget(food);

        horizontalLayoutWidget_27 = new QWidget(page_8);
        horizontalLayoutWidget_27->setObjectName("horizontalLayoutWidget_27");
        horizontalLayoutWidget_27->setGeometry(QRect(290, 370, 401, 58));
        horizontalLayout_41 = new QHBoxLayout(horizontalLayoutWidget_27);
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        horizontalLayout_41->setContentsMargins(0, 0, 0, 0);
        Category_8 = new QLabel(horizontalLayoutWidget_27);
        Category_8->setObjectName("Category_8");

        horizontalLayout_41->addWidget(Category_8);

        rent = new QLabel(horizontalLayoutWidget_27);
        rent->setObjectName("rent");

        horizontalLayout_41->addWidget(rent);

        horizontalLayoutWidget_28 = new QWidget(page_8);
        horizontalLayoutWidget_28->setObjectName("horizontalLayoutWidget_28");
        horizontalLayoutWidget_28->setGeometry(QRect(290, 430, 401, 58));
        horizontalLayout_42 = new QHBoxLayout(horizontalLayoutWidget_28);
        horizontalLayout_42->setObjectName("horizontalLayout_42");
        horizontalLayout_42->setContentsMargins(0, 0, 0, 0);
        Category_7 = new QLabel(horizontalLayoutWidget_28);
        Category_7->setObjectName("Category_7");

        horizontalLayout_42->addWidget(Category_7);

        utilities = new QLabel(horizontalLayoutWidget_28);
        utilities->setObjectName("utilities");

        horizontalLayout_42->addWidget(utilities);

        horizontalLayoutWidget_29 = new QWidget(page_8);
        horizontalLayoutWidget_29->setObjectName("horizontalLayoutWidget_29");
        horizontalLayoutWidget_29->setGeometry(QRect(290, 480, 401, 58));
        horizontalLayout_43 = new QHBoxLayout(horizontalLayoutWidget_29);
        horizontalLayout_43->setObjectName("horizontalLayout_43");
        horizontalLayout_43->setContentsMargins(0, 0, 0, 0);
        Category_10 = new QLabel(horizontalLayoutWidget_29);
        Category_10->setObjectName("Category_10");

        horizontalLayout_43->addWidget(Category_10);

        stationery = new QLabel(horizontalLayoutWidget_29);
        stationery->setObjectName("stationery");

        horizontalLayout_43->addWidget(stationery);

        horizontalLayoutWidget_30 = new QWidget(page_8);
        horizontalLayoutWidget_30->setObjectName("horizontalLayoutWidget_30");
        horizontalLayoutWidget_30->setGeometry(QRect(290, 540, 401, 58));
        horizontalLayout_44 = new QHBoxLayout(horizontalLayoutWidget_30);
        horizontalLayout_44->setObjectName("horizontalLayout_44");
        horizontalLayout_44->setContentsMargins(0, 0, 0, 0);
        Category_11 = new QLabel(horizontalLayoutWidget_30);
        Category_11->setObjectName("Category_11");

        horizontalLayout_44->addWidget(Category_11);

        others = new QLabel(horizontalLayoutWidget_30);
        others->setObjectName("others");

        horizontalLayout_44->addWidget(others);

        stackedWidget->addWidget(page_8);
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

        stackedWidget->setCurrentIndex(9);


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
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Line Graph</span></p></body></html>", nullptr));
        Exit9->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btnLHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Expense Report", nullptr));
        btn_ExpenseReportHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        RemainingBudget->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Budget Amount Remaining", nullptr));
        Category_4->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        label_135->setText(QCoreApplication::translate("MainWindow", "Amount Left", nullptr));
        Category_9->setText(QCoreApplication::translate("MainWindow", "Food", nullptr));
        food->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        Category_8->setText(QCoreApplication::translate("MainWindow", "Rent", nullptr));
        rent->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        Category_7->setText(QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        utilities->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        Category_10->setText(QCoreApplication::translate("MainWindow", "Stationery", nullptr));
        stationery->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        Category_11->setText(QCoreApplication::translate("MainWindow", "Others", nullptr));
        others->setText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        menuHome_Page->setTitle(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
