#ifndef CLICKABLEIMAGELABEL_H
#define CLICKABLEIMAGELABEL_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>

class ClickableImageLabel : public QLabel
{
    Q_OBJECT

public:
    explicit ClickableImageLabel(const QString& title, const QString& author, QWidget* parent = nullptr);

signals:
    void clicked(QString title, QString author);

protected:
    void mousePressEvent(QMouseEvent* event) override;

private:
    QString title;
    QString author;
};

#endif // CLICKABLEIMAGELABEL_H
