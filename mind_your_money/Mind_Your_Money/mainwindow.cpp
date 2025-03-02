#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include <QSqlDatabase>
#include <QFile>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlError>
#include <QUuid>
#include<QMessageBox>
#include <QDateTime>
#include <QTimer>
#include<string>
#include<QPixmap>


//Global Variables
int loggedInUserID=-1;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    QPixmap pix(":/img/image/S.png");
    if (pix.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        ui->Image->setPixmap(pix.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
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

}

bool MainWindow::openDatabase()
{
    // Add the SQLite database driver
    db = QSqlDatabase::addDatabase("QSQLITE");

    // Set the path to your SQLite database file
    db.setDatabaseName("C:/Users/Hp Victus/Desktop/End Sem Project/EndSemProject-1/mind_your_money/database_Mind_your_Money.db");

    // Attempt to open the database
    if (!db.open()) {
        qDebug() << "Error while connecting to the database: " << db.lastError().text();
        return false;  // Return false if the connection fails
    }

    qDebug() << "Database is connected successfully!";
    return true;
}

MainWindow::~MainWindow()
{
     // Close the database connection when MainWindow is destroyed
    db.close();
    delete ui;
}

void MainWindow::updateDateTime()
{

    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");


    ui->date->setText(currentDateTime);
}


//Navigation buttons:
void MainWindow::on_btnSignup_clicked()
{

    QPixmap pix1(":/img/image/SP.png");
    if (pix1.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        ui->SImage->setPixmap(pix1.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
    if (!openDatabase()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database. Please check the connection settings.");
        return;  // Exit if the database connection fails
    }




    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_btnForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QPixmap Pix(":/img/image/F.png");
    if (Pix.isNull()) {
        qDebug() << "Failed to load image!";
    } else {
        ui->FImage->setPixmap(Pix.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
void MainWindow::on_btnSignUpPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_btnPrevExpenseWelcomeUser_clicked()
{
    //Updating the home page
    ui->stackedWidget->setCurrentIndex(5);
    PieChart();
}

void MainWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btn_BarGraphPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}
//log out button done
void MainWindow::on_btnLogout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //Reseting the values
    ui->txtPasswords->clear();
    ui->txtEmailA->clear();
    loggedInUserID=-1;
}
void MainWindow::on_btnStats_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    displayRemainingBudget();
}

void MainWindow::on_btnReset_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtPhone->clear();
    ui->txtPasswords->clear();
    ui->txtEmailA->clear();
    ui->txtMonthlyBudget->clear();
}

void MainWindow::on_btnEnterExpense_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_btnLHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_btn_ExpenseReportHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_btnSignUpBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_btnPrevForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_btnEPush_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//exit buttons
void MainWindow::on_Exit0_clicked()
{
    QApplication::quit();
}

void MainWindow::on_Exit1_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit2_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit3_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit4_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit5_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit6_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit7_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit8_clicked()
{
    QApplication::quit();
}

void MainWindow::on_Exit9_clicked()
{
    QApplication::quit();
}

void MainWindow::on_Exit10_clicked()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_GraphsLineGraph_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    LineGraph();
}

void MainWindow::on_pushButton_GraphsPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_LineGraphPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_ChangePassword_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_btnChangePassword_clicked()
{
    QString newPassword = ui->txtCPassword->text();
    QString confirmPassword = ui->txtCmPassword->text();

    if (newPassword.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Password fields cannot be empty.");
        return;
    }

    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Invalid Input", "Passwords do not match.");
        return;
    }




    int userId = loggedInUserID;

    if (userId == -1) {
        QMessageBox::critical(this, "Error", "User not found. Please log in again.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("UPDATE Users SET Password = :Password WHERE id = :userId");
    query.bindValue(":Password",confirmPassword);
    query.bindValue(":userId", userId);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Password has been changed successfully.");
        ui->txtCPassword->clear();
        ui->txtCmPassword->clear();
        ui->stackedWidget->setCurrentIndex(0);
    } else {
        QMessageBox::critical(this, "Error", "Failed to update the password. Please try again.");
    }



}

void MainWindow::on_btnNextForgot_clicked()
{
    QString Email = ui->txtFEmail->text();
    QString Phone = ui->txtFPhone->text();

    // Check if fields are empty
    if (Email.isEmpty() || Phone.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter both Email and Phone Number.");
        return;
    }

    // Prepare the SQL query to check if the email and phone exist
    QSqlQuery query(db);
    query.prepare("SELECT id FROM Users WHERE Email = ? AND Phone = ?");
    query.addBindValue(Email);
    query.addBindValue(Phone);

    // Execute the query
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    // Check if a matching record is found
    if (query.next()) {
        int userId = query.value(0).toInt();
        loggedInUserID = userId;
        ui->txtFEmail->clear();
        ui->txtFPhone->clear();
        ui->stackedWidget->setCurrentIndex(4);

    } else {

        QMessageBox::warning(this, "Login Failed", "Invalid Email or Phone Number.");
    }



}
//Expense SignUP: code done
void MainWindow::on_btnSignUpSave_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open. Please check the connection.");
        return;
    }

    if (loggedInUserID == -1) {  // Ensure a user is logged in
        QMessageBox::critical(this, "Error", "No user is currently logged in.");
        return;
    }

    // Read the values from the input fields
    float MonthlyBudget = ui->txtMonthlyBudget->text().toFloat();
    float PFood = ui->txtPFood->text().toFloat();
    float PRent = ui->txtPRent->text().toFloat();
    float PUtilities = ui->txtPUtilities->text().toFloat();
    float PStationery = ui->txtPStationery->text().toFloat();
    float POthers;
    if((PStationery + PRent + PFood + PUtilities)<100)
    {
    POthers = 100 - (PStationery + PRent + PFood + PUtilities);    // Ensure total is 100%
    }
    else{
        POthers=0;
    }
    // Calculate the actual amounts for each category that the user has given
    float UFood = MonthlyBudget * PFood / 100;
    float URent = MonthlyBudget * PRent / 100;
    float UUtilities = (MonthlyBudget * PUtilities) / 100;
    float UStationery = MonthlyBudget * PStationery / 100;
    float UOthers = MonthlyBudget * POthers / 100;

    // Validate the inputs
    if (MonthlyBudget <= 0 || PFood <= 0 || PRent <= 0 || PUtilities <= 0 || PStationery <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Ensure every field is filled.");
        return;
    }

    if ((POthers + PStationery + PRent + PFood + PUtilities) != 100) {
        QMessageBox::warning(this, "Invalid Input", "The total percentage must be 100%");
        return;
    }

    QSqlQuery qry(db);
    qry.prepare(R"(
        INSERT INTO Budget (user_id, MonthlyBudget, Rent, Food, Utilities, Stationery, Others)
        VALUES (:UserID, :MonthlyBudget, :URent, :UFood, :UUtilities, :UStationery, :UOthers)
    )");


    qry.bindValue(":UserID", loggedInUserID);
    qry.bindValue(":MonthlyBudget", MonthlyBudget);
    qry.bindValue(":UFood", UFood);
    qry.bindValue(":URent", URent);
    qry.bindValue(":UUtilities", UUtilities);
    qry.bindValue(":UStationery", UStationery);
    qry.bindValue(":UOthers", UOthers);


    qDebug() << "Prepared query: " << qry.lastQuery();
    qDebug() << "Bound values:";
    qDebug() << "Food: " << UFood;
    qDebug() << "Rent: " << URent;
    qDebug() << "Stationery: " << UStationery;
    qDebug() << "Utilities: " << UUtilities;
    qDebug() << "Others: " << UOthers;
    qDebug() << "MonthlyBudget: " << MonthlyBudget;

    // Execute the query
    if (qry.exec()) {
        QMessageBox::information(this, "Success", "Budget saved successfully!\nPlease Login to enter expenses!");

        ui->stackedWidget->setCurrentIndex(0); // Sending back to login page after signing up

        // Clear the input fields
        ui->txtPFood->clear();
        ui->txtPRent->clear();
        ui->txtPUtilities->clear();

        ui->txtMonthlyBudget->clear();

    } else {
        QMessageBox::critical(this, "Database Error", "Failed to save budget: " + qry.lastError().text());
    }
}

// User Signup code: code done
void MainWindow::on_btnNext_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open. Please check the connection.");
        return;
    }

    QString FirstName = ui->txtFirstName->text();
    QString LastName = ui->txtLastName->text();
    QString Email = ui->txtEmailA->text();
    QString Phone = ui->txtPhone->text();  // Phone as QString
    QString Password = ui->txtPasswords->text();

    // Input validation
    if (FirstName.isEmpty() || LastName.isEmpty() || Email.isEmpty() || Password.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please fill in all required fields.");
        return;
    }

    // Prepare SQL query to insert new user
    QSqlQuery qry(db);
    qry.prepare(R"(
        INSERT INTO Users (FirstName, LastName, Email, Phone, Password)
        VALUES (:FirstName, :LastName, :Email, :Phone, :Password)
    )");

    qry.bindValue(":FirstName", FirstName);
    qry.bindValue(":LastName", LastName);
    qry.bindValue(":Email", Email);
    qry.bindValue(":Phone", Phone.isEmpty() ? QVariant() : Phone); // Handle optional Phone as NULL if empty
    qry.bindValue(":Password", Password); // Consider hashing the password for security

    // Debugging: Log the prepared query and bound values
    qDebug() << "Prepared query: " << qry.lastQuery();
    qDebug() << "Bound values:";
    qDebug() << "FirstName: " << FirstName;
    qDebug() << "LastName: " << LastName;
    qDebug() << "Email: " << Email;
    qDebug() << "Phone: " << Phone;
    qDebug() << "Password: " << Password;

    if (qry.exec()) {
        // Success message
        QMessageBox::information(this, "Success", "User registered successfully!");

        // Clear the input fields
        ui->txtFirstName->clear();
        ui->txtLastName->clear();
        ui->txtEmailA->clear();
        ui->txtPhone->clear();
        ui->txtPasswords->clear();

        // Retrieve the UserID of the newly added user
        QSqlQuery getUserIdQuery(db);
        if (getUserIdQuery.exec("SELECT last_insert_rowid()")) {
            if (getUserIdQuery.next()) {
                int userID = getUserIdQuery.value(0).toInt();
                qDebug() << "New UserID:" << userID;
                loggedInUserID = userID;  // Store the UserID for the logged-in user
            }
        } else {
            qDebug() << "Failed to retrieve UserID:" << getUserIdQuery.lastError().text();
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to register user: " + qry.lastError().text());
    }

    // Navigate to the next page in the UI
    ui->stackedWidget->setCurrentIndex(2);  // Assuming the next page is at index 2
}

void MainWindow::on_btnSaveExpense_clicked()
{
    if (loggedInUserID == -1) {
        QMessageBox::critical(this, "Error", "No user is currently logged in.");
        return;
    }

    QString category = ui->ExpenseName->currentText();
    QString amountText = ui->LineEditAmount->text();

    bool isAmountValid = false;
    float amount = amountText.toFloat(&isAmountValid);

    if (!isAmountValid || amount <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Expense amount must be a valid number greater than 0.");
        return;
    }

    QString currentDate = QDate::currentDate().toString("yyyy-MM-dd");

    // Check if a row for today exists
    QSqlQuery checkQuery(db);
    checkQuery.prepare(R"(
        SELECT Food, Rent, Stationery, Utilities, Others
        FROM Expenses
        WHERE user_id = :UserID AND Date = :CurrentDate
    )");
    checkQuery.bindValue(":UserID", loggedInUserID);
    checkQuery.bindValue(":CurrentDate", currentDate);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to check existing expenses: " + checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next()) {
        // Row exists: Update existing record
        int columnIndex = checkQuery.record().indexOf(category);
        float existingCategoryAmount = checkQuery.value(columnIndex).toFloat();
        float newCategoryAmount = existingCategoryAmount + amount;

        QSqlQuery updateQuery(db);
        updateQuery.prepare(QString(R"(
            UPDATE Expenses
            SET %1 = :NewCategoryAmount
            WHERE user_id = :UserID AND Date = :CurrentDate
        )").arg(category));

        updateQuery.bindValue(":NewCategoryAmount", newCategoryAmount);
        updateQuery.bindValue(":UserID", loggedInUserID);
        updateQuery.bindValue(":CurrentDate", currentDate);

        if (updateQuery.exec()) {
            QMessageBox::information(this, "Success", QString("Expense for '%1' updated successfully!").arg(category));
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update expense: " + updateQuery.lastError().text());
        }

    } else {
        // No entry for today: Insert a new record
        QSqlQuery insertQuery(db);
        insertQuery.prepare(R"(
            INSERT INTO Expenses (user_id, Date, Food, Rent, Stationery, Utilities, Others)
            VALUES (:UserID, :Date, :Food, :Rent, :Stationery, :Utilities, :Others)
        )");

        insertQuery.bindValue(":UserID", loggedInUserID);
        insertQuery.bindValue(":Date", currentDate);
        insertQuery.bindValue(":Food", (category == "Food") ? amount : 0);
        insertQuery.bindValue(":Rent", (category == "Rent") ? amount : 0);
        insertQuery.bindValue(":Stationery", (category == "Stationery") ? amount : 0);
        insertQuery.bindValue(":Utilities", (category == "Utilities") ? amount : 0);
        insertQuery.bindValue(":Others", (category == "Others") ? amount : 0);

        if (insertQuery.exec()) {
            QMessageBox::information(this, "Success", "New expense entry added for today!");
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to save expense: " + insertQuery.lastError().text());
        }
    }

    // Clear input fields
    ui->LineEditAmount->clear();
    ui->ExpenseName->setCurrentIndex(0);
}

//User login button: code done
void MainWindow::on_btnLogin_clicked()
{
    QString Email = ui->txtEmail->text();
    QString Password = ui->txtPassword->text();

    if (Email.isEmpty() || Password.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter both Email and Password.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT id, FirstName, LastName, Password FROM Users WHERE Email = :Email");

    query.bindValue(":Email", Email);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString storedPassword = query.value("Password").toString();
        // Here, compare the entered password with the stored (hashed) password
        if (Password == storedPassword) {  // Replace this with password hash comparison in real scenarios
            loggedInUserID = query.value("id").toInt();  // loggedInUserID is globally defined
            QString firstName = query.value("FirstName").toString();
            QString lastName = query.value("LastName").toString();

            QMessageBox::information(this, "Login Successful", "Welcome, " + firstName + " " + lastName + "!");
            ui->stackedWidget->setCurrentIndex(5);  // Navigate to dashboard
            ui->labelUserName->setText("Welcome "+ firstName);
            // Set the first name to the label
            ui->txtEmail->clear();
            ui->txtPassword->clear();
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
    }

    PieChart();

}

void MainWindow::on_btnGraph_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::displayRemainingBudget()
{
    if (loggedInUserID == -1) {
        QMessageBox::critical(this, "Error", "No user is currently logged in.");
        return;
    }

    QSqlQuery query(db);
    query.prepare(R"(
        SELECT
            B.MonthlyBudget - IFNULL(SUM(E.Total), 0) AS RemainingMonthlyBudget,
            B.Rent - IFNULL(SUM(E.Rent), 0) AS RemainingRent,
            B.Food - IFNULL(SUM(E.Food), 0) AS RemainingFood,
            B.Utilities - IFNULL(SUM(E.Utilities), 0) AS RemainingUtilities,
            B.Stationery - IFNULL(SUM(E.Stationery), 0) AS RemainingStationery,
            B.Others - IFNULL(SUM(E.Others), 0) AS RemainingOthers
        FROM Budget B
        LEFT JOIN Expenses E ON B.user_id = E.user_id
            AND strftime('%Y-%m', E.Date) = strftime('%Y-%m', date('now'))
        WHERE B.user_id = :UserID
    )");

    query.bindValue(":UserID", loggedInUserID);

    if (query.exec() && query.next()) {
        float RemainingMonthlyBudget = query.value("RemainingMonthlyBudget").toFloat();
        float RemainingRent = query.value("RemainingRent").toFloat();
        float RemainingFood = query.value("RemainingFood").toFloat();
        float RemainingUtilities = query.value("RemainingUtilities").toFloat();
        float RemainingStationery = query.value("RemainingStationery").toFloat();
        float RemainingOthers = query.value("RemainingOthers").toFloat();

        // Update UI labels
        ui->RemainingBudget->setText(QString::number(RemainingMonthlyBudget, 'f', 2));
        ui->rent->setText(QString::number(RemainingRent, 'f', 2));
        ui->food->setText(QString::number(RemainingFood, 'f', 2));
        ui->utilities->setText(QString::number(RemainingUtilities, 'f', 2));
        ui->stationery->setText(QString::number(RemainingStationery, 'f', 2));
        ui->others->setText(QString::number(RemainingOthers, 'f', 2));
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to fetch remaining budget: " + query.lastError().text());
    }
}
//Line Graph Code
void MainWindow::LineGraph()
{
    // Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is currently logged in.");
        return;
    }

    // Retrieve the allocated monthly budget from the Budget table
    float initialBudget = 0.0;
    QSqlQuery budgetQuery(db);
    budgetQuery.prepare("SELECT MonthlyBudget FROM Budget WHERE user_id = :UserID");
    budgetQuery.bindValue(":UserID", loggedInUserID);
    if (budgetQuery.exec() && budgetQuery.next()) {
        initialBudget = budgetQuery.value("MonthlyBudget").toFloat();
    } else {
        QMessageBox::critical(this, "Error", "Failed to retrieve monthly budget.");
        return;
    }

    // Prepare the line series
    QLineSeries *series = new QLineSeries();
    series->setName("Remaining Budget");

    // Get current date and determine the first day of the month
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    float remainingBudget = initialBudget;

    // Iterate day by day from the start of the month until today
    QDate iterDate = firstDay;
    while (iterDate <= currentDate) {
        // Query total expenses for the day.
        // This assumes your Expenses table stores expenses per category in columns:
        // Food, Rent, Stationery, Utilities, Others.
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
            SELECT (IFNULL(Food,0) + IFNULL(Rent,0) + IFNULL(Stationery,0) + IFNULL(Utilities,0) + IFNULL(Others,0)) as DailyExpense
            FROM Expenses
            WHERE user_id = :UserID AND Date = :Date
        )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        float dailyExpense = 0.0;
        if (expenseQuery.exec() && expenseQuery.next()) {
            dailyExpense = expenseQuery.value("DailyExpense").toFloat();
        }

        // Subtract daily expense from the remaining budget
        remainingBudget -= dailyExpense;
        if (remainingBudget < 0)
            remainingBudget = 0; // avoid negative budget

        // Use QDateTime for the x-axis; convert iterDate to QDateTime at midnight.
        QDateTime dateTime(iterDate, QTime(0, 0));
        series->append(dateTime.toMSecsSinceEpoch(), remainingBudget);

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Budget Tracking Over the Month");

    // Configure the x-axis as a date/time axis
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(currentDate.day() + 1);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Configure the y-axis
    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Remaining Budget (Rs)");
    axisY->setRange(0, initialBudget);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a ChartView with the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Display the line graph
    QLayout *layout = ui->lineGraphWidget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->lineGraphWidget);
        ui->lineGraphWidget->setLayout(layout);
    }
    // Clear any previous graph widget
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);
}
//Bar Graph Code
void MainWindow::on_pushButton_GraphsBarGraph_clicked()
{
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is logged in.");
        return;
    }

    // Assign categories
    QStringList Categories = {"Food", "Rent", "Stationery", "Utilities", "Others"};

    // Initialize variables
    float food = 0.0f, rent = 0.0f, stationery = 0.0f, utilities = 0.0f, others = 0.0f;
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    QDate iterDate = firstDay;

    // Loop to iterate through each date
    while (iterDate <= currentDate) {
        // Query total expenses of each item
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
        SELECT
            IFNULL(Food, 0) AS FoodExpense,
            IFNULL(Rent, 0) AS RentExpense,
            IFNULL(Stationery, 0) AS StationeryExpense,
            IFNULL(Utilities, 0) AS UtilitiesExpense,
            IFNULL(Others, 0) AS OthersExpense
        FROM Expenses
        WHERE user_id = :UserID AND Date = :Date
    )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        // Sum and entry data
        if (expenseQuery.exec() && expenseQuery.next()) {
            food += expenseQuery.value("FoodExpense").toFloat();
            rent += expenseQuery.value("RentExpense").toFloat();
            stationery += expenseQuery.value("StationeryExpense").toFloat();
            utilities += expenseQuery.value("UtilitiesExpense").toFloat();
            others += expenseQuery.value("OthersExpense").toFloat();
        }

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a bar set that contains the summed data of each category
    QBarSet *barSet = new QBarSet("Expense Breakdown");
    barSet->append(food);
    barSet->append(rent);
    barSet->append(stationery);
    barSet->append(utilities);
    barSet->append(others);

    // Create the bar series and add the bar set to it
    QBarSeries *series = new QBarSeries();
    series->append(barSet);
    series->setLabelsVisible(true);
    series->setLabelsFormat("Rs @value");
    series->setLabelsPosition(QAbstractBarSeries::LabelsCenter);

    // Create the chart, add the series, and configure chart options
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Expense Breakdown for " + QDate::currentDate().toString("yyyy-MM"));
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Configure the X-axis with the category labels
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(Categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Calculate the maximum expense to set the Y-axis range
    float maxExpense = std::max({food, rent, stationery, utilities, others});

    // Add 20% buffer for visibility
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Amount Spent in Rs");
    axisY->setRange(0, 1.2 * maxExpense);
    axisY->setTickCount(5);
    axisY->setMinorTickCount(2);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a chart view, set anti-aliasing, and display the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear any previous chart from the 'bargraph' widget, then add the new chart view
    QLayout *layout = ui->bargraph->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->bargraph);
        ui->bargraph->setLayout(layout);
    }
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);
    ui->stackedWidget->setCurrentIndex(7);
    qDebug() << "Graph updated successfully!";

}
//Pie Chart Code
void MainWindow::PieChart(){
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is logged in.");
        return;
    }

    // Assign categories
    QStringList Categories = {"Food", "Rent", "Stationery", "Utilities", "Others"};

    // Initialize variables
    float food = 0.0f, rent = 0.0f, stationery = 0.0f, utilities = 0.0f, others = 0.0f;
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    QDate iterDate = firstDay;

    // Loop to iterate through each date
    while (iterDate <= currentDate) {
        // Query total expenses of each item
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
        SELECT
            IFNULL(Food, 0) AS FoodExpense,
            IFNULL(Rent, 0) AS RentExpense,
            IFNULL(Stationery, 0) AS StationeryExpense,
            IFNULL(Utilities, 0) AS UtilitiesExpense,
            IFNULL(Others, 0) AS OthersExpense
        FROM Expenses
        WHERE user_id = :UserID AND Date = :Date
    )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        // Sum and entry data
        if (expenseQuery.exec() && expenseQuery.next()) {
            food += expenseQuery.value("FoodExpense").toFloat();
            rent += expenseQuery.value("RentExpense").toFloat();
            stationery += expenseQuery.value("StationeryExpense").toFloat();
            utilities += expenseQuery.value("UtilitiesExpense").toFloat();
            others += expenseQuery.value("OthersExpense").toFloat();
        }

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a pie chart series
    QPieSeries *series = new QPieSeries();
    series->append("Food", food);
    series->append("Rent", rent);
    series->append("Stationery", stationery);
    series->append("Utilities", utilities);
    series->append("Others", others);

    // Create the chart and configure its properties
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Expense Breakdown for " + QDate::currentDate().toString("yyyy-MM"));
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(true);

    // Customize pie slices
    for (QPieSlice *slice : series->slices()) {
        slice->setLabelVisible(true);
    }

    // Assign colors to slices
    series->slices().at(0)->setBrush(Qt::green);    // Food
    series->slices().at(1)->setBrush(Qt::blue);     // Rent
    series->slices().at(2)->setBrush(Qt::yellow);   // Stationery
    series->slices().at(3)->setBrush(Qt::cyan);     // Utilities
    series->slices().at(4)->setBrush(Qt::gray);     // Others

    // Create a chart view and set properties
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear any previous chart from the 'piechart' widget, then add the new chart view
    QLayout *layout = ui->piechart->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->piechart);
        ui->piechart->setLayout(layout);
    }
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);

    qDebug() << "Pie chart updated successfully!";




}



void MainWindow::LineGraphFood()
{
    // Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is currently logged in.");
        return;
    }

    // Retrieve the allocated monthly budget from the Budget table
    float initialFoodBudget = 0.0;
    QSqlQuery budgetQuery(db);
    budgetQuery.prepare("SELECT Food FROM Budget WHERE user_id = :UserID");
    budgetQuery.bindValue(":UserID", loggedInUserID);
    if (budgetQuery.exec() && budgetQuery.next()) {
        initialFoodBudget = budgetQuery.value("Food").toFloat();
    } else {
        QMessageBox::critical(this, "Error", "Failed to retrieve monthly food budget.");
        return;
    }

    // Prepare the line series
    QLineSeries *series = new QLineSeries();
    series->setName("Remaining Food Budget");

    // Get current date and determine the first day of the month
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    float remainingBudget = initialFoodBudget;

    // Iterate day by day from the start of the month until today
    QDate iterDate = firstDay;
    while (iterDate <= currentDate) {
        // Query total expenses for the day.
        // This assumes your Expenses table stores expenses per category in columns:
        // Food, Rent, Stationery, Utilities, Others.
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
            SELECT (IFNULL(Food,0)) as DailyExpense
            FROM Expenses
            WHERE user_id = :UserID AND Date = :Date
        )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        float dailyExpense = 0.0;
        if (expenseQuery.exec() && expenseQuery.next()) {
            dailyExpense = expenseQuery.value("DailyExpense").toFloat();
        }

        // Subtract daily expense from the remaining budget
        remainingBudget -= dailyExpense;
        if (remainingBudget < 0)
            remainingBudget = 0; // avoid negative budget

        // Use QDateTime for the x-axis; convert iterDate to QDateTime at midnight.
        QDateTime dateTime(iterDate, QTime(0, 0));
        series->append(dateTime.toMSecsSinceEpoch(), remainingBudget);

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Budget Tracking Over the Month");

    // Configure the x-axis as a date/time axis
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(currentDate.day() + 1);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Configure the y-axis
    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Remaining Budget (Rs)");
    axisY->setRange(0, initialFoodBudget);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a ChartView with the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Display the line graph
    QLayout *layout = ui->lineGraphWidget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->lineGraphWidget);
        ui->lineGraphWidget->setLayout(layout);
    }
    // Clear any previous graph widget
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);
}

void MainWindow::LineGraphStationery()
{
    // Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is currently logged in.");
        return;
    }

    // Retrieve the allocated monthly budget from the Budget table
    float initialStationeryBudget = 0.0;
    QSqlQuery budgetQuery(db);
    budgetQuery.prepare("SELECT Stationery FROM Budget WHERE user_id = :UserID");
    budgetQuery.bindValue(":UserID", loggedInUserID);
    if (budgetQuery.exec() && budgetQuery.next()) {
        initialStationeryBudget = budgetQuery.value("Stationery").toFloat();
    } else {
        QMessageBox::critical(this, "Error", "Failed to retrieve monthly Stationery budget.");
        return;
    }

    // Prepare the line series
    QLineSeries *series = new QLineSeries();
    series->setName("Remaining Stationery Budget");

    // Get current date and determine the first day of the month
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    float remainingBudget = initialStationeryBudget;

    // Iterate day by day from the start of the month until today
    QDate iterDate = firstDay;
    while (iterDate <= currentDate) {
        // Query total expenses for the day.
        // This assumes your Expenses table stores expenses per category in columns:
        // Food, Rent, Stationery, Utilities, Others.
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
            SELECT (IFNULL(Stationery,0)) as DailyExpense
            FROM Expenses
            WHERE user_id = :UserID AND Date = :Date
        )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        float dailyExpense = 0.0;
        if (expenseQuery.exec() && expenseQuery.next()) {
            dailyExpense = expenseQuery.value("DailyExpense").toFloat();
        }

        // Subtract daily expense from the remaining budget
        remainingBudget -= dailyExpense;
        if (remainingBudget < 0)
            remainingBudget = 0; // avoid negative budget

        // Use QDateTime for the x-axis; convert iterDate to QDateTime at midnight.
        QDateTime dateTime(iterDate, QTime(0, 0));
        series->append(dateTime.toMSecsSinceEpoch(), remainingBudget);

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Budget Tracking Over the Month");

    // Configure the x-axis as a date/time axis
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(currentDate.day() + 1);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Configure the y-axis
    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Remaining Budget (Rs)");
    axisY->setRange(0, initialStationeryBudget);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a ChartView with the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Display the line graph
    QLayout *layout = ui->lineGraphWidget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->lineGraphWidget);
        ui->lineGraphWidget->setLayout(layout);
    }
    // Clear any previous graph widget
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);
}

void MainWindow::LineGraphOthers()
{
    // Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is currently logged in.");
        return;
    }

    // Retrieve the allocated monthly budget from the Budget table
    float initialOthersBudget = 0.0;
    QSqlQuery budgetQuery(db);
    budgetQuery.prepare("SELECT Others FROM Budget WHERE user_id = :UserID");
    budgetQuery.bindValue(":UserID", loggedInUserID);
    if (budgetQuery.exec() && budgetQuery.next()) {
        initialOthersBudget = budgetQuery.value("Others").toFloat();
    } else {
        QMessageBox::critical(this, "Error", "Failed to retrieve monthly budget for \"others\".");
        return;
    }

    ui->stackedWidget->setCurrentIndex(8);

    // Prepare the line series
    QLineSeries *series = new QLineSeries();
    series->setName("Remaining Others Budget");

    // Get current date and determine the first day of the month
    QDate currentDate = QDate::currentDate();
    QDate firstDay = QDate(currentDate.year(), currentDate.month(), 1);
    float remainingBudget = initialOthersBudget;

    // Iterate day by day from the start of the month until today
    QDate iterDate = firstDay;
    while (iterDate <= currentDate) {
        // Query total expenses for the day.
        // This assumes your Expenses table stores expenses per category in columns:
        // Food, Rent, Stationery, Utilities, Others.
        QSqlQuery expenseQuery(db);
        expenseQuery.prepare(R"(
            SELECT (IFNULL(Others,0)) as DailyExpense
            FROM Expenses
            WHERE user_id = :UserID AND Date = :Date
        )");
        expenseQuery.bindValue(":UserID", loggedInUserID);
        expenseQuery.bindValue(":Date", iterDate.toString("yyyy-MM-dd"));

        float dailyExpense = 0.0;
        if (expenseQuery.exec() && expenseQuery.next()) {
            dailyExpense = expenseQuery.value("DailyExpense").toFloat();
        }

        // Subtract daily expense from the remaining budget
        remainingBudget -= dailyExpense;
        if (remainingBudget < 0)
            remainingBudget = 0; // avoid negative budget

        // Use QDateTime for the x-axis; convert iterDate to QDateTime at midnight.
        QDateTime dateTime(iterDate, QTime(0, 0));
        series->append(dateTime.toMSecsSinceEpoch(), remainingBudget);

        // Move to the next day
        iterDate = iterDate.addDays(1);
    }

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Budget Tracking Over the Month");

    // Configure the x-axis as a date/time axis
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(currentDate.day() + 1);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Configure the y-axis
    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Remaining Budget (Rs)");
    axisY->setRange(0, initialOthersBudget);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a ChartView with the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Display the line graph
    QLayout *layout = ui->lineGraphWidget->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->lineGraphWidget);
        ui->lineGraphWidget->setLayout(layout);
    }
    // Clear any previous graph widget
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget())
            widget->deleteLater();
        delete item;
    }
    layout->addWidget(chartView);
}


void MainWindow::on_LineGraphComboBox_currentIndexChanged(int index)
{
    if(index==0){
        LineGraph();
    }
    if(index==1){
        LineGraphFood();
    }
    if(index==2){
        LineGraphStationery();
    }
    if(index==3){
        LineGraphOthers();
    }
}
//View Daily Expense table
void MainWindow::on_btnDailyExpense_clicked()
{

    ui->stackedWidget->setCurrentIndex(11);


    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
        return;
    }

    // Ensure we delete the old model if it exists
    if (ui->tableView->model()) {
        delete ui->tableView->model();
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);
    QString currentMonth = QDate::currentDate().toString("yyyy-MM");
    int userId = loggedInUserID;

    // Debugging: Check if there is data for this month
    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM Expenses WHERE user_id = ? AND strftime('%Y-%m', Date) = ?");
    checkQuery.addBindValue(userId);
    checkQuery.addBindValue(currentMonth);

    if (!checkQuery.exec()) {
        qDebug() << "Error executing count query:" << checkQuery.lastError().text();
        return;
    }

    if (checkQuery.next() && checkQuery.value(0).toInt() == 0) {
        qDebug() << "No expenses found for the current month.";
        return;
    }


    QString queryStr = QString(
                           "SELECT CAST(strftime('%d', Date) AS INTEGER) AS 'Day', Food, Rent, Stationery, Utilities, Others, Total "
                           "FROM Expenses "
                           "WHERE user_id = %1 AND strftime('%Y-%m', Date) = '%2' "
                           "ORDER BY Date ASC"
                           ).arg(userId).arg(currentMonth);

    qDebug() << "Executing query: " << queryStr;

    model->setQuery(queryStr, db);

    if (model->lastError().isValid()) {
        qDebug() << "Query failed: " << model->lastError().text();
        return;
    }


    if (model->rowCount() == 0) {
        qDebug() << "Query executed successfully but no rows returned.";
    }

    // Set model to table
    ui->tableView->setModel(model);

    // Remove row numbers (vertical header)
    ui->tableView->verticalHeader()->setVisible(false);

    // Apply alternating row colors
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setStyleSheet(
        "QTableView { background-color: #f9f9f9; alternate-background-color: #e6e6e6; border: 2px solid #ccc; }"
        "QTableView::item:selected { background-color: #ffcc99; }"
        );

    // Adjust column width
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Center-align headers
    QFont font;
    font.setBold(true);
    font.setPointSize(10);
    ui->tableView->horizontalHeader()->setFont(font);
    ui->tableView->horizontalHeader()->setStyleSheet(
        "QHeaderView::section { background-color: #0078D7; color: white; padding: 6px; }"
        );
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    // Set table properties
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    // Set the title for the month
    ui->labelHeader->setText("Expenses for the month of " + QDate::currentDate().toString("MMMM yyyy"));


}


void MainWindow::on_btn_ExpenseReportHome_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

