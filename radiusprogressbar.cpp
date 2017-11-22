#include "radiusprogressbar.h"
#include <QPainter>

RadiusProgressBar::RadiusProgressBar(QWidget *parent) : QProgressBar(parent)
{
    setValue(minimum());
}

void RadiusProgressBar::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QRect rect = this->rect();
    QPixmap buttomMap = QPixmap(":/resource/icon/progressbar _buttom.png");
    QPixmap fillMap = QPixmap(":/resource/icon/progressbar.png");

    const double k = (double)(value() - minimum()) / (maximum()-minimum());
    int x = (int)(rect.width() * k);

    QRect fillRect = rect.adjusted(0, 0, x-rect.width(), 0);

//    QRectF target(10.0, 20.0, 80.0, 60.0);
//      QRectF source(0.0, 0.0, 70.0, 40.0);


    p.drawPixmap(rect, buttomMap);

    p.drawPixmap(fillRect, fillMap, fillRect);

}
