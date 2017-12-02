#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "ringsmapprogressbar.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void updateProgressbar();

private:
    Ui::MainWindow *ui;
    QTimer *m_timer;
    int m_persent;

    RingsMapProgressbar *m_progressbar2;
};

#endif // MAINWINDOW_H
