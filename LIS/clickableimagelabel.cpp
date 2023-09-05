#include "clickableimagelabel.h"

ClickableImageLabel::ClickableImageLabel(const QString& title, const QString& author, QWidget* parent) : QLabel(parent), title(title), author(author) {}

void ClickableImageLabel::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit clicked(title, author);
    }
    QLabel::mousePressEvent(event);
}
