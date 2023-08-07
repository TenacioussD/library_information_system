#include "memberhome.h"
#include "ui_memberhome.h"

memberHome::memberHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberHome)
{
    ui->setupUi(this);
}

memberHome::~memberHome()
{
    delete ui;
}
