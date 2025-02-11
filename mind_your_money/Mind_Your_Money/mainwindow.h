#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

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
    void on_Logout_clicked();


    void on_btnGraph_clicked();

    void on_btnStats_clicked();

    void on_btnLogout_clicked();

private:
    int currentUserID = -1;
    QSqlDatabase db;  // Define database object as a member
    bool openDatabase();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
