#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

//header files for graph
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
//-----------------------------
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    int loggedInUserID;  // Store the logged-in user's ID


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateDateTime();
    void on_btnLogin_clicked();
    void on_btnSignup_clicked();
    void on_btnForgot_clicked();
    void on_btnHome_clicked();
    void on_btnReset_clicked();
    void on_btnEnterExpense_clicked();
    void on_btnSignUpSave_clicked();
    void on_btnSignUpPrev_clicked();
    void on_btnPrevExpenseWelcomeUser_clicked();
    void on_btnSaveExpense_clicked();


    void on_btnGraph_clicked();

    void on_btnStats_clicked();

    void on_btnLogout_clicked();


    void on_btnChangePassword_clicked();

    void on_btnNextForgot_clicked();

    void on_btnPrevForgot_clicked();

    void on_pushButton_clicked();

    void on_btnEPush_clicked();

    void on_btnPrevGraphToWelcome_clicked();


    void on_btnNext_clicked();


    void on_Exit0_clicked();
    void on_Exit1_clicked();
    void on_Exit2_clicked();
    void on_Exit3_clicked();
    void on_Exit4_clicked();
    void on_Exit5_clicked();
    void on_Exit6_clicked();
    void on_Exit7_clicked();
    void on_Exit8_clicked();

    void on_btnHomepage_clicked();

private:
    int currentUserID = -1;
    QSqlDatabase db;  // Define database object as a member
    bool openDatabase();
    void displayRemainingBudget();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
