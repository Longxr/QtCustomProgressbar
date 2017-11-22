#include "progressdialog.h"
#include "ui_progressdialog.h"
#include <QPainter>

ProgressDialog::ProgressDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgressDialog)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_TranslucentBackground, true);
        setWindowFlags(Qt::Window | Qt::FramelessWindowHint
                       | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint
                       | Qt::WindowMaximizeButtonHint);

    ui->progressBar->setValue(0);
}

ProgressDialog::~ProgressDialog()
{
    delete ui;
}

void ProgressDialog::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void ProgressDialog::setValue(int percent)
{
    ui->progressBar->setValue(percent);
}

void ProgressDialog::setTitle(QString title)
{
    ui->titleName->setText(title);
}

void ProgressDialog::setProgressText(QString text)
{
    ui->progressLabel->setText(text);
}

void ProgressDialog::on_cancleButton_clicked()
{
    ui->progressBar->setValue(0);
    emit cancled();
}
