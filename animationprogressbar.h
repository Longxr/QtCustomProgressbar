#ifndef ANIMATIONPROGRESSBAR_H
#define ANIMATIONPROGRESSBAR_H

#include <QWidget>
#include <QPropertyAnimation>

class AnimationProgressbar : public QWidget
{
    Q_OBJECT

public:
    AnimationProgressbar(QWidget *parent = 0);

    void startAnimation();

protected:
    void paintEvent(QPaintEvent*);

private:
    QList<QPixmap> m_animalist;
    QPropertyAnimation *m_animation;
    int m_animaindex;
    int m_animaTotal;
    int m_persent;

private slots:
    void slot_valuechange(QVariant var);
};

#endif // ANIMATIONPROGRESSBAR_H
