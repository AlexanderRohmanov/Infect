#ifndef HEALTHY_H
#define HEALTHY_H

#include "circle.h"

class Healthy : public Circle
{
    Q_OBJECT
public:
    Healthy(QTimer* timer);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
    QPainterPath shape() const override;
    QRectF boundingRect() const override;

};

#endif // HEALTHY_H
