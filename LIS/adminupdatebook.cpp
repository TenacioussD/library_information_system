#include "adminupdatebook.h"
#include "ui_adminupdatebook.h"

AdminUpdateBook::AdminUpdateBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminUpdateBook)
{
    ui->setupUi(this);
}

AdminUpdateBook::~AdminUpdateBook()
{
    delete ui;
}
