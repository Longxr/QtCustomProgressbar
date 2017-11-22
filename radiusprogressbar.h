#ifndef RADIUSPROGRESSBAR_H
#define RADIUSPROGRESSBAR_H

#include <QProgressBar>

class RadiusProgressBar : public QProgressBar
{
    Q_OBJECT
public:
    explicit RadiusProgressBar(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;
};

#endif // RADIUSPROGRESSBAR_H
