/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
    QWidget *page_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtLastName;
    QLabel *label_7;
    QLineEdit *txtEmailA;
    QLabel *label_8;
    QLineEdit *txtPhone;
    QLabel *label_9;
    QLineEdit *txtPasswords;
    QLineEdit *txtMiddle;
    QLineEdit *txtFirstName;
    QLabel *label_14;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnReset;
    QPushButton *btnSave1;
    QPushButton *btnPrev;
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
    QPushButton *btnPrev_2;
    QPushButton *btnNext;
    QWidget *page_6;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_19;
    QPushButton *btnFChange;
    QPushButton *btnHome;
    QWidget *page_3;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnEnter;
    QPushButton *btnGraph;
    QPushButton *btnStats;
    QPushButton *btnEditexp;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLabel *lblDateTime;
    QWidget *page_5;
    QLabel *label_16;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnEPrev;
    QPushButton *btnESave;
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
        stackedWidget->setGeometry(QRect(20, 10, 911, 651));
        QFont font;
        font.setPointSize(20);
        stackedWidget->setFont(font);
        stackedWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 10, 341, 101));
        QFont font1;
        font1.setPointSize(25);
        label->setFont(font1);
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(260, 170, 531, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(260, 290, 521, 55));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSignup = new QPushButton(horizontalLayoutWidget);
        btnSignup->setObjectName("btnSignup");

        horizontalLayout->addWidget(btnSignup);

        btnLogin = new QPushButton(horizontalLayoutWidget);
        btnLogin->setObjectName("btnLogin");

        horizontalLayout->addWidget(btnLogin);

        btnForgot = new QPushButton(horizontalLayoutWidget);
        btnForgot->setObjectName("btnForgot");

        horizontalLayout->addWidget(btnForgot);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(200, 120, 671, 349));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        txtLastName = new QLineEdit(formLayoutWidget_2);
        txtLastName->setObjectName("txtLastName");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        txtEmailA = new QLineEdit(formLayoutWidget_2);
        txtEmailA->setObjectName("txtEmailA");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtEmailA);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_8);

        txtPhone = new QLineEdit(formLayoutWidget_2);
        txtPhone->setObjectName("txtPhone");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtPhone);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_9);

        txtPasswords = new QLineEdit(formLayoutWidget_2);
        txtPasswords->setObjectName("txtPasswords");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, txtPasswords);

        txtMiddle = new QLineEdit(formLayoutWidget_2);
        txtMiddle->setObjectName("txtMiddle");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtMiddle);

        txtFirstName = new QLineEdit(formLayoutWidget_2);
        txtFirstName->setObjectName("txtFirstName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(420, 0, 241, 81));
        label_14->setFont(font1);
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(200, 470, 661, 55));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnReset = new QPushButton(horizontalLayoutWidget_2);
        btnReset->setObjectName("btnReset");

        horizontalLayout_2->addWidget(btnReset);

        btnSave1 = new QPushButton(horizontalLayoutWidget_2);
        btnSave1->setObjectName("btnSave1");

        horizontalLayout_2->addWidget(btnSave1);

        btnPrev = new QPushButton(horizontalLayoutWidget_2);
        btnPrev->setObjectName("btnPrev");

        horizontalLayout_2->addWidget(btnPrev);

        stackedWidget->addWidget(page_2);
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
        label_11->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(370, 10, 321, 81));
        label_13->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(page_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(490, 260, 391, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnPrev_2 = new QPushButton(horizontalLayoutWidget_3);
        btnPrev_2->setObjectName("btnPrev_2");

        horizontalLayout_3->addWidget(btnPrev_2);

        btnNext = new QPushButton(horizontalLayoutWidget_3);
        btnNext->setObjectName("btnNext");

        horizontalLayout_3->addWidget(btnNext);

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

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_5);
        label_21->setObjectName("label_21");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_21);

        lineEdit_2 = new QLineEdit(formLayoutWidget_5);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget_5);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout_5->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_19 = new QLabel(page_6);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(400, 30, 271, 61));
        btnFChange = new QPushButton(page_6);
        btnFChange->setObjectName("btnFChange");
        btnFChange->setGeometry(QRect(700, 310, 83, 29));
        btnFChange->setFont(font2);
        btnHome = new QPushButton(page_6);
        btnHome->setObjectName("btnHome");
        btnHome->setGeometry(QRect(592, 310, 81, 31));
        btnHome->setFont(font2);
        stackedWidget->addWidget(page_6);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, -10, 271, 121));
        label_10->setFont(font1);
        verticalLayoutWidget_2 = new QWidget(page_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(30, 140, 241, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(50);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEnter = new QPushButton(verticalLayoutWidget_2);
        btnEnter->setObjectName("btnEnter");

        verticalLayout_2->addWidget(btnEnter);

        btnGraph = new QPushButton(verticalLayoutWidget_2);
        btnGraph->setObjectName("btnGraph");

        verticalLayout_2->addWidget(btnGraph);

        btnStats = new QPushButton(verticalLayoutWidget_2);
        btnStats->setObjectName("btnStats");

        verticalLayout_2->addWidget(btnStats);

        btnEditexp = new QPushButton(verticalLayoutWidget_2);
        btnEditexp->setObjectName("btnEditexp");

        verticalLayout_2->addWidget(btnEditexp);

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
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));

        horizontalLayout_4->addWidget(label_15);

        lblDateTime = new QLabel(horizontalLayoutWidget_4);
        lblDateTime->setObjectName("lblDateTime");
        QFont font3;
        font3.setPointSize(16);
        lblDateTime->setFont(font3);
        lblDateTime->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:red;\n"
"};"));

        horizontalLayout_4->addWidget(lblDateTime);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_16 = new QLabel(page_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(370, 10, 231, 81));
        label_16->setFont(font1);
        formLayoutWidget_4 = new QWidget(page_5);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(50, 230, 471, 121));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_4);
        label_17->setObjectName("label_17");
        label_17->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName("label_18");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_18);

        comboBox_2 = new QComboBox(formLayoutWidget_4);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        lineEdit = new QLineEdit(formLayoutWidget_4);
        lineEdit->setObjectName("lineEdit");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit);

        horizontalLayoutWidget_5 = new QWidget(page_5);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(50, 370, 471, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(100);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnEPrev = new QPushButton(horizontalLayoutWidget_5);
        btnEPrev->setObjectName("btnEPrev");

        horizontalLayout_5->addWidget(btnEPrev);

        btnESave = new QPushButton(horizontalLayoutWidget_5);
        btnESave->setObjectName("btnESave");

        horizontalLayout_5->addWidget(btnESave);

        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 945, 25));
        menuHome_Page = new QMenu(menubar);
        menuHome_Page->setObjectName("menuHome_Page");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome_Page->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mind Your Money ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnSignup->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnForgot->setText(QCoreApplication::translate("MainWindow", "ForgotPassword", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        txtLastName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: NEPAL", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        txtEmailA->setPlaceholderText(QCoreApplication::translate("MainWindow", "xyz@gmail.com", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        txtPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "98000000000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtPasswords->setPlaceholderText(QCoreApplication::translate("MainWindow", "CANT BE EMPTY", nullptr));
        txtMiddle->setPlaceholderText(QCoreApplication::translate("MainWindow", "BAHADUR", nullptr));
        txtFirstName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: JOHN", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "SignUP Page", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnSave1->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btnPrev->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        txtFEmail->setText(QString());
        txtFEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "XYZ@gmail.com", nullptr));
        txtFPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "9700000000", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Forgot Password", nullptr));
        btnPrev_2->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "New Password", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Change Password", nullptr));
        btnFChange->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        btnHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Welcome User", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "Enter Expense", nullptr));
        btnGraph->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        btnStats->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        btnEditexp->setText(QCoreApplication::translate("MainWindow", "Edit Expense", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        lblDateTime->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Expenditure", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Reason", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Stationary", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Others", nullptr));

        comboBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "RS.", nullptr));
        btnEPrev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnESave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        menuHome_Page->setTitle(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
