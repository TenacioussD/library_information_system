#include "adminhome.h"
#include "catalogue.h"
#include "ui_adminhome.h"

adminHome::adminHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminHome)
{
    ui->setupUi(this);
}

adminHome::~adminHome()
{
    delete ui;
}



void adminHome::on_catalogue_clicked()
{
    hide();
    cataloguE =new catalogue (this);                 // Opens the catalogue
    cataloguE->show();
}

