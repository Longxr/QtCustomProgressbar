#ifndef RINGSPROGRESSBAR_H
#define RINGSPROGRESSBAR_H

#include <QWidget>

class RingsProgressbar : public QWidget
{
    Q_OBJECT
public:
    explicit RingsProgressbar(QWidget *parent = 0);
    void setRotateDelta(int delta);
    void setPersent(int persent);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *);

private:
    int m_rotateAngle;//旋转角度
    int m_persent; //百分比
};

#endif // RINGSPROGRESSBAR_H
