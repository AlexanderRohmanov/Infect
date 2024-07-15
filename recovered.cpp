#include "recovered.h"


Recovered::Recovered(QTimer* timer): Circle(timer) {
    connect(this->getTimer(),SIGNAL(timeout()),this,SLOT(collideWithCircle()));
}

void Recovered::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    QPixmap img(":/images/images/recovered.png");
    //img.scaledToHeight(30,Qt::SmoothTransformation);
    img = img.scaled(2*getRadius(), 2*getRadius(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter->drawPixmap(QRect(2,2,2*getRadius(),2*getRadius()),img);

}

QPainterPath Recovered::shape() const{
    return Circle::shape();
}
QRectF Recovered::boundingRect() const {
    return Circle::boundingRect();
}
