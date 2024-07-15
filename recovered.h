#ifndef RECOVERED_H
#define RECOVERED_H

#include "circle.h"

class Recovered : public Circle
{
public:
    Recovered(QTimer* timer);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
    QPainterPath shape() const override;
    QRectF boundingRect() const override;
};

#endif // RECOVERED_H
