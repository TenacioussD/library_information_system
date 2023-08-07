#include "catalogue.h"
#include "ui_catalogue.h"

catalogue::catalogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::catalogue)
{
    ui->setupUi(this);
}

catalogue::~catalogue()
{
    delete ui;
}
