#include "adminhome.h"
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
