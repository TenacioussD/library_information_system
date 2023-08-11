#include "addbookconfirmation.h"
#include "ui_addbookconfirmation.h"

AddBookConfirmation::AddBookConfirmation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddBookConfirmation)
{
    ui->setupUi(this);
}

AddBookConfirmation::~AddBookConfirmation()
{
    delete ui;
}
