#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "aboutbox.h"
#include "ui_aboutbox.h"

#include "circleof5ths.h"
#include "ui_circleof5ths.h"

#include <QtSvg/QGraphicsSvgItem>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene   *combined_scene = new QGraphicsScene (0, 0, 400, 100);
    combined_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    combined_item->setPos(0,-1400);
    combined_scene->addItem(combined_item);
    ui->combined_gv->setScene(combined_scene);

    QGraphicsScene   *signatures_scene = new QGraphicsScene (0, 0, 100, 100);
    QGraphicsSvgItem *signatures_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    signatures_item->setPos(0,-1400);
    signatures_scene->addItem(signatures_item);
    ui->signatures_gv->setScene(signatures_scene);

    QGraphicsScene   *majortext_scene = new QGraphicsScene (0, 0, 100, 100);
    QGraphicsSvgItem *majortext_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    majortext_item->setPos(-100,-1400);
    majortext_scene->addItem(majortext_item);
    ui->majortext_gv->setScene(majortext_scene);

    QGraphicsScene   *minortext_scene = new QGraphicsScene (0, 0, 100, 100);
    QGraphicsSvgItem *minortext_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    minortext_item->setPos(-200,-1400);
    minortext_scene->addItem(minortext_item);
    ui->minortext_gv->setScene(minortext_scene);

    QGraphicsScene   *numbers_scene = new QGraphicsScene (0, 0, 100, 100);
    QGraphicsSvgItem *numbers_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    numbers_item->setPos(-300,-1400);
    numbers_scene->addItem(numbers_item);
    ui->numbers_gv->setScene(numbers_scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    static AboutBox about_box;
    about_box.show();
}

void MainWindow::on_actionDisplay_Circle_of_5ths_4ths_triggered()
{
    static CircleOf5ths circle_of_5ths;
    circle_of_5ths.show();
}

void MainWindow::on_next_key_button_clicked()
{
    combined_item->setPos(0, -1300);
}

void MainWindow::on_exit_button_clicked()
{
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
