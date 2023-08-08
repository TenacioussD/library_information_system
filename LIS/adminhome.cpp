#include "adminhome.h"
#include "ui_adminhome.h"

AdminHome::AdminHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminHome)
{
    ui->setupUi(this);
}

AdminHome::~AdminHome()
{
    delete ui;
}
