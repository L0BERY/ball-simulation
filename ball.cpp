#include "ball.h"
#include <cmath>

ball::ball(QGraphicsEllipseItem* parent)
    : QGraphicsEllipseItem(parent)
{
    setRect(0, 0, 25, 25);
    setBrush(Qt::black);
    setPos(400 - size/2, 300 - size/2);
}

void ball::setSpeed(qreal a, qreal alpha){
    qreal x = cos(alpha * M_PI / 180) * a;
    qreal y = -sin(alpha * M_PI / 180) * a;
    xVelocity = x;
    yVelocity = y;
}

void ball::setSize(qreal n){
    setRect(0, 0, n, n);
    this->size = n;
}

void ball::advance(int step){
    Q_UNUSED(step);
    moveBy(xVelocity, yVelocity);
    if (pos().x() <= 0 || pos().x()+size >= 800) xVelocity = -xVelocity;
    if (pos().y() <= 0 || pos().y()+size >= 600) yVelocity = -yVelocity;
}


