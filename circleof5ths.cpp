#include "circleof5ths.h"
#include "ui_circleof5ths.h"

#include <QtSvg/QGraphicsSvgItem>
#include <QGraphicsScene>


CircleOf5ths::CircleOf5ths(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CircleOf5ths)
{
    ui->setupUi(this);

    QGraphicsSvgItem *item_ptr = new QGraphicsSvgItem (":/keymaster/artwork/circle_of_5ths_500x500.svg");
    QGraphicsScene *scene = new QGraphicsScene (0, 0, 500, 500);
    scene->addItem(item_ptr);
    ui->circleOf5thsGraphicsView->setScene(scene);


}


CircleOf5ths::~CircleOf5ths()
{
    delete ui;
}
