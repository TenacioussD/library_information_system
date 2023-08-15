#include "memberoverdue.h"
#include "ui_memberoverdue.h"

MemberOverdue::MemberOverdue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberOverdue)
{
    ui->setupUi(this);
}

MemberOverdue::~MemberOverdue()
{
    delete ui;
}

void MemberOverdue::on_back_clicked()
{

}

