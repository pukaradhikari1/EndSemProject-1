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
    // connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::on_btnLogin_clicked);
    // connect(ui->btnForgot, &QPushButton::clicked, this, &MainWindow::on_btnForgot_clicked);
    // connect(ui->btnSignup, &QPushButton::clicked, this, &MainWindow::on_btnSignup_clicked);
    // connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::on_btnReset_clicked);
    // connect(ui->btnEnterExpense, &QPushButton::clicked, this, &MainWindow::on_btnEnterExpense_clicked);
    // connect(ui->btnHome, &QPushButton::clicked, this, &MainWindow::on_btnHome_clicked);
    // connect(ui->btnSaveExpense, &QPushButton::clicked, this, &MainWindow::on_btnSaveExpense_clicked);
    // connect(ui->btnSignUpSave, &QPushButton::clicked, this, &MainWindow::on_btnSignUpSave_clicked);
    // connect(ui->btnSignUpPrev, &QPushButton::clicked, this, &MainWindow::on_btnSignUpPrev_clicked);
    // connect(ui->btnPrevExpenseWelcomeUser, &QPushButton::clicked, this, &MainWindow::on_btnPrevExpenseWelcomeUser_clicked);
    // connect(ui->btnLogout,&QPushButton::clicked, this,&MainWindow:: on_btnLogout_clicked);
    // connect(ui->btnGraph,&QPushButton::clicked, this,&MainWindow:: on_btnGraph_clicked);
    // connect(ui->btnStats,&QPushButton::clicked, this,&MainWindow:: on_btnStats_clicked);
    //  connect(ui->btnPrevGraphToWelcome,&QPushButton::clicked, this,&MainWindow:: on_btnPrevGraphToWelcome_clicked);


}
bool MainWindow::openDatabase()
{
    // Add the SQLite database driver
    db = QSqlDatabase::addDatabase("QSQLITE");

    // Set the path to your SQLite database file
    db.setDatabaseName("C:/Users/Sakar/Documents/GitHub/EndSemProject-1/mind_your_money/database_Mind_your_Money.db");


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
    db.close();  // Close the database connection when MainWindow is destroyed
    delete ui;
}
void MainWindow::updateDateTime()
{
    // Get the current date and time
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    // Display it in the Qlabel The label name is date
    ui->date->setText(currentDateTime);
}


//Navigation buttons:
void MainWindow::on_btnSignup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_btnForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_btnSignUpPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
void MainWindow::on_btnPrevExpenseWelcomeUser_clicked()
{
    //Updating the home page
    displayRemainingBudget();
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_btnPrevGraphToWelcome_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
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


//Code For monthly report
void MainWindow::on_btnStats_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
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

void MainWindow::on_btnChangePassword_clicked()
{
   QString Password=ui->txtCPassword->text();
    QString CmPassword=ui->txtCmPassword->text();
   if(Password==CmPassword)
    {
        QSqlQuery query(db);
       query.prepare("SELECT UserID, Password FROM User WHERE Password = :Password");
       query.bindValue(":Password", Password);
       //QMessageBox::information(this, "successfully changed password ");

   }
   else
   {
       QMessageBox::warning(this, "Invalid Input", "Password doesnt match");
   }

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

    // Prepare the query to insert the data into the Budget table
    QSqlQuery qry(db);
    qry.prepare(R"(
        INSERT INTO Budget (user_id, MonthlyBudget, Rent, Food, Utilities, Stationery, Others)
        VALUES (:UserID, :MonthlyBudget, :URent, :UFood, :UUtilities, :UStationery, :UOthers)
    )");

    // Bind values to the placeholders
    qry.bindValue(":UserID", loggedInUserID);
    qry.bindValue(":MonthlyBudget", MonthlyBudget);
    qry.bindValue(":UFood", UFood);
    qry.bindValue(":URent", URent);
    qry.bindValue(":UUtilities", UUtilities);
    qry.bindValue(":UStationery", UStationery);
    qry.bindValue(":UOthers", UOthers);

    // Debugging: Log the prepared query and bound values
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
//Save Expense button.
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
            ui->labelUserName->setText(firstName);
            // Set the first name to the label
            displayRemainingBudget();
            ui->txtEmail->clear();
            ui->txtPassword->clear();
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
    }

}



//Bar Graph: code done
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


void MainWindow::on_btn_LineGraph_clicked()
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

    ui->stackedWidget->setCurrentIndex(8);

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

    // Assuming you have a widget or layout named "lineGraphWidget" in your UI for displaying the line graph.
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


void MainWindow::on_Exit11_clicked()
{
    QApplication::quit();
}


void MainWindow::on_Exit10_clicked()
{
    QApplication::quit();
}


void MainWindow::on_pushButton_GraphsBarGraph_clicked()
{
    // Switch to the chart page (assumed to be index 7 in the stacked widget)
    ui->stackedWidget->setCurrentIndex(7);

    // Ensure a user is logged in
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "No user is logged in.");
        return;
    }

    // Define the categories and initialize their amounts
    QStringList categories = {"Food", "Rent", "Utilities", "Stationery", "Other"};
    QMap<QString, float> expenseMap;
    for (const QString &category : categories) {
        expenseMap[category] = 0.0;
    }


    // Get the current month in "yyyy-MM" format
    QString currentMonth = QDate::currentDate().toString("yyyy-MM");

    // Build the SQL query to sum each expense column for the current month for the logged-in user.
    // We use a single-row query that sums each column individually.
    QSqlQuery query(db);
    QString sql = QString(
        "SELECT "
        "SUM(Food) as sumFood, "
        "SUM(Rent) as sumRent, "
        "SUM(Utilities) as sumUtilities, "
        "SUM(Stationery) as sumStationery, "
        "SUM(Others) as sumOthers "
        "FROM Expenses "
        "WHERE user_id = :UserID AND strftime('%%Y-%%m', Date) = :CurrentMonth"
        );
    query.prepare(sql);
    query.bindValue(":UserID", loggedInUserID);
    query.bindValue(":CurrentMonth", currentMonth);

    if (!query.exec()) {
        qDebug() << "SQL Query Failed: " << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to retrieve expenses: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        expenseMap["Food"] = query.value("sumFood").toFloat();
        expenseMap["Rent"] = query.value("sumRent").toFloat();
        expenseMap["Utilities"] = query.value("sumUtilities").toFloat();
        expenseMap["Stationery"] = query.value("sumStationery").toFloat();
        expenseMap["Other"] = query.value("sumOthers").toFloat();
    }

    // Create a bar set for the chart and populate it with the summed expenses in the order of uiCategories.
    QBarSet *barSet = new QBarSet("Expenses");
    for (const QString &category : categories) {
        *barSet << expenseMap[category];
    }
    barSet->setLabelFont(QFont("Arial", 10, QFont::Bold));

    // Create the bar series and add the bar set to it.
    QBarSeries *series = new QBarSeries();
    series->append(barSet);
    series->setLabelsVisible(true);
    series->setLabelsFormat("Rs @value");
    series->setLabelsPosition(QAbstractBarSeries::LabelsCenter);

    // Create the chart, add the series, and configure chart options.
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Expense Breakdown for " + currentMonth);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Configure the X-axis with the category labels.
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Calculate the maximum expense to set the Y-axis range.
    float maxExpense = 0.0f;
    for (float value : expenseMap)
        if (value > maxExpense)
            maxExpense = value;
    // Add 20% buffer for visibility.
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Amount Spent in Rs");
    axisY->setRange(0, maxExpense + (maxExpense * 0.2));
    axisY->setTickCount(5);
    axisY->setMinorTickCount(2);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create a chart view, set anti-aliasing, and display the chart.
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear any previous chart from the 'bargraph' widget, then add the new chart view.
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

    qDebug() << "Graph updated successfully!";
}


void MainWindow::on_pushButton_GraphsLineGraph_clicked()
{
    ui->btn_LineGraph->clicked(1);
}


void MainWindow::on_pushButton_GraphsPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_LineGraphPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

