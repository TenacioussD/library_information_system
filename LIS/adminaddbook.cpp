#include "adminaddbook.h"
#include "ui_adminaddbook.h"

AdminAddBook::AdminAddBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminAddBook)
{
    ui->setupUi(this);
}

AdminAddBook::~AdminAddBook()
{
    delete ui;
}
