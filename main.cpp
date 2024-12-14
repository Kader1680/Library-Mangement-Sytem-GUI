#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>


int add(int a, int b){
    int result = a + b;
    return result;
}



int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // Create main window
    QWidget window;
    window.setWindowTitle("Register Form");
    window.setFixedSize(500, 400); // Set window size
    window.setStyleSheet("background-color: #2b2b2b; color: white;");

    // Layouts
    QVBoxLayout *mainLayout = new QVBoxLayout(&window);
    QFormLayout *formLayout = new QFormLayout();

    // Input Fields
    QLineEdit *firstNameInput = new QLineEdit();
    QLineEdit *lastNameInput = new QLineEdit();
    QLineEdit *emailInput = new QLineEdit();
    QLineEdit *passwordInput = new QLineEdit();

    QFormLayout *formadd = new QFormLayout();

    // Input Fields
    QLineEdit *a = new QLineEdit();
    QLineEdit *b = new QLineEdit();

    a->setPlaceholderText("Enter number");
    b->setPlaceholderText("Enter number");

    // Set placeholders
    firstNameInput->setPlaceholderText("Enter First Name");
    lastNameInput->setPlaceholderText("Enter Last Name");
    emailInput->setPlaceholderText("Enter Email");
    passwordInput->setPlaceholderText("Enter Password");

    // Set placeholder text color
    firstNameInput->setStyleSheet("QLineEdit { color: white; } QLineEdit::placeholder { color: grey; }");
    lastNameInput->setStyleSheet("QLineEdit { color: white; } QLineEdit::placeholder { color: grey; }");
    emailInput->setStyleSheet("QLineEdit { color: white; } QLineEdit::placeholder { color: grey; }");
    passwordInput->setStyleSheet("QLineEdit { color: white; } QLineEdit::placeholder { color: grey; }");

    // Set password input mode
    passwordInput->setEchoMode(QLineEdit::Password);

    // Add fields to form layout
    formLayout->addRow("First Name:", firstNameInput);
    formLayout->addRow("Last Name:", lastNameInput);
    formLayout->addRow("Email:", emailInput);
    formLayout->addRow("Password:", passwordInput);

    // Submit Button
    QPushButton *submitButton = new QPushButton("Submit");
    submitButton->setStyleSheet(
        "background-color: #4caf50; color: white; font-size: 16px; padding: 8px; border-radius: 5px;"
        "border: none;"
        "hover { background-color: #45a049; }"
        );

    // Add a label for the title
    QLabel *brandLabel = new QLabel("My Book");
    QLabel *titleLabel = new QLabel("Register Form");
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 20px; font-weight: bold; margin-bottom: 15px;");

    brandLabel->setAlignment(Qt::AlignCenter);
    brandLabel->setStyleSheet("font-size: 35px; font-weight: bold; margin-bottom: 15px;");

    // Add widgets to the main layout
    mainLayout->addWidget(titleLabel);
    mainLayout->addLayout(formLayout);
    mainLayout->addWidget(submitButton);

    // Display the window
    window.show();

    return app.exec();
}
