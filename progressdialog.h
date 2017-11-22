#ifndef PROGRESSDIALOG_H
#define PROGRESSDIALOG_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class ProgressDialog;
}

class ProgressDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProgressDialog(QWidget *parent = 0);
    ~ProgressDialog();

    QLabel *m_status;
    void setTitle(QString title);
    void setValue(int percent);
    void setProgressText(QString text);


signals:
    void cancled();

private:
    Ui::ProgressDialog *ui;

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private slots:
    void on_cancleButton_clicked();
};

#endif // PROGRESSDIALOG_H
