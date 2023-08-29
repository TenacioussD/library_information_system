#ifndef CLICKABLEIMAGELABEL_H
#define CLICKABLEIMAGELABEL_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>

class ClickableImageLabel : public QLabel
{
    Q_OBJECT

public:
    explicit ClickableImageLabel(QWidget* parent = nullptr);

signals:
    void clicked(QString title, QString author);

protected:
    void mousePressEvent(QMouseEvent* event) override;
};

#endif // CLICKABLEIMAGELABEL_H
