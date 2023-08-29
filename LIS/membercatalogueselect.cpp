#include "membercatalogueselect.h"
#include "ui_membercatalogueselect.h"

MemberCatalogueSelect::MemberCatalogueSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberCatalogueSelect)
{
    ui->setupUi(this);
}

MemberCatalogueSelect::~MemberCatalogueSelect()
{
    delete ui;
}
