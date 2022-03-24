#include "bola.h"
#include <QDebug>

bola::bola(float px_, float py_, float vx_, float vy_, float rad_):
    px(px_),py(py_),vx(vx_),vy(vy_),rad(rad_)
{
    qDebug()<<px<<"\t"<<py<<"\t"<<vx<<"\t"<<vy<<"\t"<<rad;
}

float bola::getRad() const
{
    return rad;
}

float bola::getPx() const
{
    return px;
}

void bola::setPx(float newPx)
{
    px = newPx;
}

float bola::getPy() const
{
    return py;
}

void bola::setPy(float newPy)
{
    py = newPy;
}

float bola::getVx() const
{
    return vx;
}

void bola::setVx(float newVx)
{
    vx = newVx;
}

float bola::getVy() const
{
    return vy;
}

void bola::setVy(float newVy)
{
    vy = newVy;
}

float bola::getAx() const
{
    return ax;
}

void bola::setAx(float newAx)
{
    ax = newAx;
}

float bola::getAy() const
{
    return ay;
}

void bola::setAy(float newAy)
{
    ay = newAy;
}
