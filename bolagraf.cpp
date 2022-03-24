#include "bolagraf.h"

bolagraf::bolagraf(float px_, float py_, float vx_, float vy_, float rad_, float escala_)
{
    esfera = new bola(px_,py_,vx_,vy_,rad_);
    escala = escala_;
}

bolagraf::~bolagraf()
{

}

QRectF bolagraf::boundingRect() const
{
    return QRectF(-1*escala*esfera->getRad(),-1*escala*esfera->getRad(),2*escala*esfera->getRad(),2*escala*esfera->getRad());
}

void bolagraf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkCyan);
    painter->drawEllipse(boundingRect());
}

void bolagraf::pos(int v_lim)
{
    setPos(esfera->getPx()*escala,v_lim-(esfera->getPy()*escala));
}
