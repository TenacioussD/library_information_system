#include "clickableimagelabel.h"

ClickableImageLabel::ClickableImageLabel(QWidget* parent) : QLabel(parent) {}

void ClickableImageLabel::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit clicked();
    }
}
