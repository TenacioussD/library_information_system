#include "addnewbook.h"
#include "ui_addnewbook.h"

AddNewBook::AddNewBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNewBook)
{
    ui->setupUi(this);
}

AddNewBook::~AddNewBook()
{
    delete ui;
}
