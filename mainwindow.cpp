#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsItem>
#include "map.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Map* map = new Map();
    ui->graphicsView->setScene(map);

    map->render();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionUndo_triggered()
{

}
