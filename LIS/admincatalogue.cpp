#include "admincatalogue.h"
#include "ui_admincatalogue.h"
#include "adminhome.h"

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


void AdminCatalogue::on_back_clicked()                          // Back to home
{
    hide();
    adminhome =new class AdminHome;                            // Opens admin home
    adminhome->show();
}


void AdminCatalogue::on_logout_clicked()                      // Logout button
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {                    // If "Yes" application will quit
        QApplication::quit();
    }
}

