#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSvg/QGraphicsSvgItem>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int current_key;

private:
    Ui::MainWindow *ui;
    QGraphicsSvgItem *combined_item;
    QGraphicsScene   *combined_scene;
    QGraphicsScene   *signatures_scene;
    QGraphicsSvgItem *signatures_item;
    QGraphicsScene   *majortext_scene;
    QGraphicsSvgItem *majortext_item;
    QGraphicsScene   *minortext_scene;
    QGraphicsSvgItem *minortext_item;
    QGraphicsScene   *numbers_scene;
    QGraphicsSvgItem *numbers_item;

private slots:
    void on_actionExit_triggered();
    void on_exit_button_clicked();
    void on_next_key_button_clicked();
    void on_actionDisplay_Circle_of_5ths_4ths_triggered();
    void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
