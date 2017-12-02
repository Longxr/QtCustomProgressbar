#include "ringsmapprogressbar.h"
#include <QPainter>

RingsMapProgressbar::RingsMapProgressbar(QWidget *parent) : QWidget(parent),
    m_rotateAngle(0),
    m_persent(0)
{

}

void RingsMapProgressbar::setPersent(int persent)
{
    if(persent != m_persent)
    {
        m_persent = persent;
        update();
    }
}


void RingsMapProgressbar::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    m_rotateAngle = 360*m_persent/100;

    int side = qMin(width(), height());
    QRectF outRect(0, 0, side, side);
    QRectF inRect(20, 20, side-40, side-40);
    QString valueStr = QString("%1%").arg(QString::number(m_persent));

    //画底圆
    p.setPen(Qt::NoPen);
    QPixmap backMap = QPixmap(":/resource/progress_back.png");
    p.drawPixmap(outRect, backMap, outRect);
    //画内弧
    QPixmap frontMap = QPixmap(":/resource/progress_front.png");
    p.setBrush(QBrush(frontMap));
    p.drawPie(outRect, (90-m_rotateAngle)*16, m_rotateAngle*16);
    //画文字
    QFont f = QFont("Microsoft YaHei", 15, QFont::Bold);
    p.setFont(f);
    p.setPen(QColor("#DDDDDD"));
    p.drawText(inRect, Qt::AlignCenter, valueStr);
}

