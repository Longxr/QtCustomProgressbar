#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->rings->setFrontColor(QColor(255, 107, 107));
    ui->rings->setBackColor(QColor(97, 117, 118));
}

MainWindow::~MainWindow()
{
    delete ui;
}
