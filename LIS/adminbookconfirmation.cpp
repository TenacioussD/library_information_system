#include "adminbookconfirmation.h"
#include "ui_adminbookconfirmation.h"

AdminBookConfirmation::AdminBookConfirmation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminBookConfirmation)
{
    ui->setupUi(this);
}

AdminBookConfirmation::~AdminBookConfirmation()
{
    delete ui;
}
