#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    h_limit=1000;
    v_limit=500;
    scene->setSceneRect(0,0,h_limit,v_limit);
    scene->addRect(scene->sceneRect());

    ui->graphicsView->setScene(scene);

    obj = new bolagraf(50,50,6,2,10,5);
    scene->addItem(obj);
    obj->pos(v_limit);
}

MainWindow::~MainWindow()
{

    delete ui;
}

