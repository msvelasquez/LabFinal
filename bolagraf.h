#ifndef BOLAGRAF_H
#define BOLAGRAF_H

#include <QPainter>
#include <QGraphicsItem>
#include "bola.h"
#define DT 0.1

class bolagraf : public QGraphicsItem
{
public:
    bolagraf(float px_ = 20, float py_ = 20, float vx_ = 2, float vy_ = 5, float rad_ = 5, float escala_ = 1);
    ~bolagraf();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void pos(int v_lim);
    void actualizar(int v_lim);
    bola* getesfera();
private:
    bola *esfera;
    float escala;
};

#endif // BOLAGRAF_H
