#include "membercatalogueselect.h"
#include "ui_membercatalogueselect.h"

#include <QString>

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

void MemberCatalogueSelect::setTitleAndAuthor(const QString& title, const QString& author)
{
    selectedTitle = title;
    selectedAuthor = author;
}
