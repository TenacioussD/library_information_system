#include "membercatalogue.h"
#include "ui_membercatalogue.h"

#include <QMessageBox>

MemberCatalogue::MemberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MemberCatalogue)
{
    ui->setupUi(this);
}

MemberCatalogue::~MemberCatalogue()
{
    delete ui;
}

void MemberCatalogue::on_pushButton_clicked()     // Logout button clicked
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {         // If "Yes" application will quit
        QApplication::quit();
    }
}

