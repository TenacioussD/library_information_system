#include "adminmembership.h"
#include "ui_adminmembership.h"

AdminMembership::AdminMembership(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMembership)
{
    ui->setupUi(this);
}

AdminMembership::~AdminMembership()
{
    delete ui;
}
