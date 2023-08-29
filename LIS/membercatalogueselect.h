#ifndef MEMBERCATALOGUESELECT_H
#define MEMBERCATALOGUESELECT_H

#include <QDialog>

namespace Ui {
class MemberCatalogueSelect;
}

class MemberCatalogueSelect : public QDialog
{
    Q_OBJECT

public:
    explicit MemberCatalogueSelect(QWidget *parent = nullptr);
    ~MemberCatalogueSelect();
    //define this function to recieve title and author from MEmberCatalogue class
    void setTitleAndAuthor(const QString& title, const QString& author);


private:
    Ui::MemberCatalogueSelect *ui;
    QString selectedTitle;
    QString selectedAuthor;
};

#endif // MEMBERCATALOGUESELECT_H
