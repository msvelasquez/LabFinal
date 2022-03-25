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

    for(int u = 0;u<7;u++){
    obj = new bolagraf(150+(u*7),150-(u*7),6,2,10,1);
    scene->addItem(obj);
    obj->pos(v_limit);
    }

    movimiento = new QTimer(this);
    movimiento->stop();
    connect(movimiento,SIGNAL(timeout()),this,SLOT(actualizar()));
    movimiento->start(5);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::bordercollision(bolagraf *b)
{
    if(b->getesfera()->getPx() < b->getesfera()->getRad()){
    b->getesfera()->setVx(b->getesfera()->getVx()*-1);
    b->getesfera()->setPx(b->getesfera()->getRad());
    }
    if(b->getesfera()->getPx() > h_limit-b->getesfera()->getRad()){
    b->getesfera()->setVx(b->getesfera()->getVx()*-1);
    b->getesfera()->setPx(h_limit-b->getesfera()->getRad());
}
    if(b->getesfera()->getPy() < b->getesfera()->getRad()){
    b->getesfera()->setVy(b->getesfera()->getVy()*-1);
    b->getesfera()->setPy(b->getesfera()->getRad());
    }
    if(b->getesfera()->getPy() > v_limit-b->getesfera()->getRad()){
    b->getesfera()->setVy(b->getesfera()->getVy()*-1);
    b->getesfera()->setPy(v_limit-b->getesfera()->getRad());
    }
}

void MainWindow::actualizar()
{
    obj->actualizar(v_limit);
    bordercollision(obj);
}

