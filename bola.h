#ifndef BOLA_H
#define BOLA_H


class bola
{
public:
    bola(float px_ = 20, float py_ = 20, float vx_ = 2, float vy_ = 5, float rad_ = 5);
    ~bola();
    float getRad() const;

    float getPx() const;
    void setPx(float newPx);

    float getPy() const;
    void setPy(float newPy);

    float getVx() const;
    void setVx(float newVx);

    float getVy() const;
    void setVy(float newVy);

    float getAx() const;
    void setAx(float newAx);

    float getAy() const;
    void setAy(float newAy);

    void mover(float dt);

private:
    float px;
    float py;
    float vx;
    float vy;
    float ax;
    float ay;
    const float rad;
};

#endif // BOLA_H
