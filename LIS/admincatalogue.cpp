#include "admincatalogue.h"
#include "ui_admincatalogue.h"


AdminCatalogue::AdminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminCatalogue)
{
    ui->setupUi(this);
}

AdminCatalogue::~AdminCatalogue()
{
    delete ui;
}
