#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include <QSqlDatabase>
#include <QFile>
#include <QSqlQuery>
#include <QSqlError>
#include <QUuid>
#include<QMessageBox>
#include <QDateTime>
#include <QTimer>
#include<string>


//Global Variables
int loggedInUserID=-1;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (!openDatabase()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database. Please check the connection settings.");
        return;  // Exit if the database connection fails
    }

    // Create a QTimer to update the date and time
    QTimer *timer = new QTimer(this);

    // Connect the timer's timeout signal to the updateDateTime slot
    connect(timer, &QTimer::timeout, this, &MainWindow::updateDateTime);

    // Start the timer with an interval of 1 second
    timer->start(1000);

    // Set the initial date and time
    updateDateTime();



    //Connecting buttons
    connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::on_btnLogin_clicked);
    connect(ui->btnForgot, &QPushButton::clicked, this, &MainWindow::on_btnForgot_clicked);
    connect(ui->btnSignup, &QPushButton::clicked, this, &MainWindow::on_btnSignup_clicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::on_btnReset_clicked);
    connect(ui->btnEnterExpense, &QPushButton::clicked, this, &MainWindow::on_btnEnterExpense_clicked);
    connect(ui->btnHome, &QPushButton::clicked, this, &MainWindow::on_btnHome_clicked);
    connect(ui->btnSaveExpense, &QPushButton::clicked, this, &MainWindow::on_btnSaveExpense_clicked);
    connect(ui->btnSignUpSave, &QPushButton::clicked, this, &MainWindow::on_btnSignUpSave_clicked);
    connect(ui->btnSignUpPrev, &QPushButton::clicked, this, &MainWindow::on_btnSignUpPrev_clicked);
    connect(ui->btnPrevExpenseWelcomeUser, &QPushButton::clicked, this, &MainWindow::on_btnPrevExpenseWelcomeUser_clicked);
    connect(ui->btnLogout,&QPushButton::clicked, this,&MainWindow:: on_btnLogout_clicked);
    connect(ui->btnGraph,&QPushButton::clicked, this,&MainWindow:: on_btnGraph_clicked);
    connect(ui->btnStats,&QPushButton::clicked, this,&MainWindow:: on_btnStats_clicked);
     connect(ui->btnPrevGraphToWelcome,&QPushButton::clicked, this,&MainWindow:: on_btnPrevGraphToWelcome_clicked);


}
bool MainWindow::openDatabase()
{
    // Add the SQLite database driver
    db = QSqlDatabase::addDatabase("QSQLITE");

    // Set the path to your SQLite database file
    db.setDatabaseName("C:/Users/Hp Victus/Desktop/End sem project/mind_your_money/database_Mind_your_Money.db");

    // Attempt to open the database
    if (!db.open()) {
        qDebug() << "Error while connecting to the database: " << db.lastError().text();
        return false;  // Return false if the connection fails
    }

    qDebug() << "Database is connected successfully!";
    return true;  // Return true if the connection is successful
}

MainWindow::~MainWindow()
{
    db.close();  // Close the database connection when MainWindow is destroyed
    delete ui;
}
void MainWindow::updateDateTime()
{
    // Get the current date and time
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    // Display it in the QLabel (assuming QLabel is named lblDateTime in your UI)
    ui->date->setText(currentDateTime);
}

//Login
void MainWindow::on_btnLogin_clicked()
{

        QString Email = ui->txtEmail->text();
        QString Password = ui->txtPassword->text();

        if (Email.isEmpty() || Password.isEmpty()) {
            QMessageBox::warning(this, "Login Error", "Please enter both Email and Password.");
            return;
        }

        QSqlQuery query(db);
        query.prepare("SELECT UserID, FirstName, LastName FROM User WHERE Email = :Email AND Password = :Password");
        query.bindValue(":Email", Email);
        query.bindValue(":Password", Password);

        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
            return;
        }

        if (query.next()) {
            loggedInUserID = query.value("UserID").toInt();  // loggedInUserID is globally defined
            QString firstName = query.value("FirstName").toString();
            QString lastName = query.value("LastName").toString();

            QMessageBox::information(this, "Login Successful", "Welcome, " + firstName + " " + lastName + "!");
            ui->stackedWidget->setCurrentIndex(4);  // Navigate to dashboard
            ui->labelUserName->setText(firstName);  // Set the first name to the label
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
        }

    }

//Navigation buttons:
void MainWindow::on_btnSignup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_btnForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_btnSignUpPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
void MainWindow::on_btnPrevExpenseWelcomeUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btnLogout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //more code to do here
}

//Code for Bar Graph
void MainWindow::on_btnGraph_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

    // Step 1: Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is logged in.");
        return;
    }

    // Step 2: Define fixed categories and initialize their amounts to zero
    QMap<QString, float> expenseMap;
    QStringList categories = {"Food", "Rent", "Utilities", "Stationary"};  // Fixed categories
    for (const QString &category : categories) {
        expenseMap[category] = 0.0;  // Initialize all to zero
    }

    // Step 3: Query the database to sum expenses per category
    QSqlQuery query(db);
    query.prepare("SELECT Category, SUM(Amount) FROM Expenses WHERE UserID = :UserID GROUP BY Category");
    query.bindValue(":UserID", loggedInUserID);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to retrieve expenses: " + query.lastError().text());
        return;
    }

    // Step 4: Store summed amounts in expenseMap
    while (query.next()) {
        QString category = query.value(0).toString();
        float totalAmount = query.value(1).toFloat();

        if (expenseMap.contains(category)) {  // Update only if category exists
            expenseMap[category] = totalAmount;
        }
    }

    // Step 5: Create a Bar Set for the Chart
    QBarSet *barSet = new QBarSet("Expenses");
    for (const QString &category : categories) {
        *barSet << expenseMap[category];  // Insert summed values
    }

    // Step 6: Create and Configure the Bar Chart
    QBarSeries *series = new QBarSeries();
    series->append(barSet);

    // Enable labels on the bars
    series->setLabelsVisible(true); // Show labels
    series->setLabelsFormat("Rs @value"); // Format labels to show the amount with "Rs"
    series->setLabelsPosition(QAbstractBarSeries::LabelsCenter); // Position labels at the center of the bars

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Expense Breakdown");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Step 7: Configure the X-axis (Fixed Categories)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Step 8: Configure the Y-axis (Expense Amounts)
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Amount Spent in Rs");
    chart->addAxis(axisY, Qt::AlignLeft);
    qreal maxExpense = *std::max_element(expenseMap.begin(), expenseMap.end());
    qreal minExpense = 0; // Start from zero
    axisY->setRange(minExpense, maxExpense + (maxExpense * 0.2)); // Add extra space for labels
    axisY->setTickCount(5);  // Adjust number of grid lines
    axisY->setMinorTickCount(2);
    series->attachAxis(axisY);

    // Step 9: Display the Chart in UI
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Step 10: Clear previous chart and add new one
    QLayout *layout = ui->bargraph->layout(); // Get the existing layout

    if (!layout) {  // If there's no layout, create one
        layout = new QVBoxLayout(ui->bargraph);
        ui->bargraph->setLayout(layout);
    }

    // Remove any previous widgets inside the frame
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }


    ui->bargraph->layout()->addWidget(chartView);
}

//Code For monthly report
void MainWindow::on_btnStats_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_btnReset_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtPhone->clear();
    ui->txtMiddle->clear();
    ui->txtPasswords->clear();
    ui->txtEmailA->clear();
    ui->txtMonthlyBudget->clear();


}

void MainWindow::on_btnPrevGraphToWelcome_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_btnEnterExpense_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

// Save Expense
void MainWindow::on_btnSaveExpense_clicked()
{
    if (loggedInUserID == -1) {  // Ensure a user is logged in
        QMessageBox::critical(this, "Error", "No user is currently logged in.");
        return;
    }

    QString category = ui->ExpenseName->currentText();
    float amount = ui->LineEditAmount->text().toFloat();

    if (amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Expense amount must be greater than 0.");
        return;
    }

    QSqlQuery qry(db);
    qry.prepare(R"(
        INSERT INTO Expenses (UserID, Category, Amount)
        VALUES (:UserID, :Category, :Amount)
    )");
    qry.bindValue(":UserID", loggedInUserID);
    qry.bindValue(":Category", category);
    qry.bindValue(":Amount", amount);

    if (qry.exec()) {
        QMessageBox::information(this, "Success", "Expense saved successfully!");
        qDebug() << "Expense saved successfully!";
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to save expense: " + qry.lastError().text());
        qDebug() << "Error saving expense:" << qry.lastError().text();
    }

    // Clear the input fields
    ui->LineEditAmount->clear();
    ui->ExpenseName->setCurrentIndex(0);
}

//Button SignUP
void MainWindow::on_btnSignUpSave_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open. Please check the connection.");
        return;
    }

    QString FirstName = ui->txtFirstName->text();
    QString MiddleName = ui->txtMiddle->text();
    QString LastName = ui->txtLastName->text();
    QString Email = ui->txtEmailA->text();
    QString Phone = ui->txtPhone->text();  // Phone as QString
    QString Password = ui->txtPasswords->text();
    float MonthlyBudget = ui->txtMonthlyBudget->text().toFloat();

    if (FirstName.isEmpty() || LastName.isEmpty() || Email.isEmpty() || Password.isEmpty() || MonthlyBudget <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please fill in all required fields and ensure Monthly Budget is greater than 0.");
        return;
    }

    // Prepare the query
    QSqlQuery qry(db);
    qry.prepare(R"(
        INSERT INTO User (FirstName, MiddleName, LastName, Email, Phone, Password, MonthlyBudget)
        VALUES (:FirstName, :MiddleName, :LastName, :Email, :Phone, :Password, :MonthlyBudget)
    )");

    // Bind values to the placeholders
    qry.bindValue(":FirstName", FirstName);
    qry.bindValue(":MiddleName", MiddleName.isEmpty() ? QVariant() : MiddleName); // Handle optional MiddleName as NULL if empty
    qry.bindValue(":LastName", LastName);
    qry.bindValue(":Email", Email);
    qry.bindValue(":Phone", Phone.isEmpty() ? QVariant() : Phone); // Handle optional Phone as NULL if empty
    qry.bindValue(":Password", Password);
    qry.bindValue(":MonthlyBudget", MonthlyBudget);

    // Debugging: Log the prepared query and bound values
    qDebug() << "Prepared query: " << qry.lastQuery();
    qDebug() << "Bound values:";
    qDebug() << "FirstName: " << FirstName;
    qDebug() << "MiddleName: " << MiddleName;
    qDebug() << "LastName: " << LastName;
    qDebug() << "Email: " << Email;
    qDebug() << "Phone: " << Phone;
    qDebug() << "Password: " << Password;
    qDebug() << "MonthlyBudget: " << MonthlyBudget;

    // Execute the query
    if (qry.exec()) {
        QMessageBox::information(this, "Success", "User registered successfully!");
        // Clear the input fields
        ui->txtFirstName->clear();
        ui->txtMiddle->clear();
        ui->txtLastName->clear();
        ui->txtEmailA->clear();
        ui->txtPhone->clear();
        ui->txtPasswords->clear();
        ui->txtMonthlyBudget->clear();

        // Retrieve the UserID of the newly added user
        QSqlQuery getUserIdQuery(db);
        if (getUserIdQuery.exec("SELECT last_insert_rowid()")) {
            if (getUserIdQuery.next()) {
                int userID = getUserIdQuery.value(0).toInt();
                qDebug() << "New UserID:" << userID;
            }
        } else {
            qDebug() << "Failed to retrieve UserID:" << getUserIdQuery.lastError().text();
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to register user: " + qry.lastError().text());
    }
}









void MainWindow::on_btnChangePassword_clicked()
{

}


void MainWindow::on_btnNextForgot_clicked()
{
    QString Email = ui->txtFEmail->text();
    QString Phone = ui->txtFPhone->text();


    if (Email.isEmpty() || Phone.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter both Email and Phone Number.");
        return;
    }

    // Prepare the SQL query to check credentials
    QSqlQuery query(db);
    query.prepare("SELECT UserID, FirstName, LastName FROM User WHERE Email = :Email AND Phone = :Phone");
    query.bindValue(":Email", Email);
    query.bindValue(":Phone", Phone);

    // Execute the query
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    // If a matching record is found, login the user
    if (query.next()) {
        loggedInUserID = query.value("UserID").toInt();  // Store logged-in user's ID
        QString firstName = query.value("FirstName").toString();
        QString lastName = query.value("LastName").toString();

        // Display a welcome message
        QMessageBox::information(this, "Change your password", "Welcome, " + firstName + " " + lastName + "!");

        // Navigate to the next page (Assuming index 4 is the Dashboard/Home)
        ui->stackedWidget->setCurrentIndex(3);

        // Set user's name on the dashboard (if applicable)
        ui->labelUserName->setText(firstName);
    }
    else {
        QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
    }
}


void MainWindow::on_btnPrevForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_btnEPush_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}




