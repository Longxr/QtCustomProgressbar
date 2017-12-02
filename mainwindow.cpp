#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_timer = new QTimer(this);
    m_persent = 0;
    connect(m_timer, SIGNAL(timeout()), this, SLOT(updateProgressbar()));

    m_timer->start(100);
    ui->bar4->startAnimation();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressbar()
{
    if(m_persent >= 100){
        m_persent = 0;
    }
    else{
        m_persent += 5;
    }

    ui->bar1->setValue(m_persent);
    ui->bar2->setPersent(m_persent);
    ui->bar3->setPersent(m_persent);
}
