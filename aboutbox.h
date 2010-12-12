#ifndef ABOUTBOX_H
#define ABOUTBOX_H

#include <QMainWindow>

namespace Ui {
    class AboutBox;
}

class AboutBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit AboutBox(QWidget *parent = 0);
    ~AboutBox();

private:
    Ui::AboutBox *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // ABOUTBOX_H
