#ifndef CIRCLEOF5THS_H
#define CIRCLEOF5THS_H

#include <QMainWindow>

namespace Ui {
    class CircleOf5ths;
}

class CircleOf5ths : public QMainWindow
{
    Q_OBJECT

public:
    explicit CircleOf5ths(QWidget *parent = 0);
    ~CircleOf5ths();

private:
    Ui::CircleOf5ths *ui;

};

#endif // CIRCLEOF5THS_H
