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

    current_key = 0;
    int key = current_key;

    combined_scene = new QGraphicsScene (0, 0, 400, 100);
    combined_item  = new QGraphicsSvgItem (":/keymaster/artwork/ALL_KEYS.svg");
    combined_item->setPos(0,-1*100*key);
    combined_scene->addItem(combined_item);
    ui->combined_gv->setScene(combined_scene);
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
    current_key++;
    if( current_key > 14 ) current_key=0;

    int key = current_key;

    combined_item->setPos(0,-1*100*key);
}

void MainWindow::on_exit_button_clicked()
{
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
