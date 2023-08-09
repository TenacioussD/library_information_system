#include "admincatalogue.h"
#include "ui_admincatalogue.h"

#include <QMessageBox>

AdminCatalogue::AdminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminCatalogue)
{
    ui->setupUi(this);
}

AdminCatalogue::~AdminCatalogue()
{
    delete ui;
}

void AdminCatalogue::on_pushButton_clicked()       // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

