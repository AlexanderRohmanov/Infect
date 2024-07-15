#include "healthy.h"
#include "sick.h"

#include <QTimer>
#include <QtMath>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>


Healthy::Healthy(QTimer* timer): Circle(timer) {
    connect(timer,SIGNAL(timeout()),this,SLOT(collideWithCircle()));
}




void Healthy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    QPixmap img(":/images/images/healthy.png");
    //img.scaledToHeight(30,Qt::SmoothTransformation);
    img = img.scaled(2*getRadius(), 2*getRadius(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter->drawPixmap(QRect(2,2,2*getRadius(),2*getRadius()),img);

}

QPainterPath Healthy::shape() const{
    return Circle::shape();
}
QRectF Healthy::boundingRect() const {
    return Circle::boundingRect();
}


