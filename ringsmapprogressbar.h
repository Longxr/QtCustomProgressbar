#ifndef RINGSMAPPROGRESSBAR_H
#define RINGSMAPPROGRESSBAR_H

#include <QWidget>

class RingsMapProgressbar : public QWidget
{
    Q_OBJECT

public:
    explicit RingsMapProgressbar(QWidget *parent = 0);
    void setPersent(int persent);

protected:
    void paintEvent(QPaintEvent *);

private:
    int m_rotateAngle;//旋转角度
    int m_persent; //百分比
};

#endif // RINGSMAPPROGRESSBAR_H
