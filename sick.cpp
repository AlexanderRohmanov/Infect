#include "sick.h"
#include "healthy.h"
#include "recovered.h"
#include <QTimer>
#include <QtMath>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QDateTime>

int Sick::sickTime = 10000;

Sick::Sick(QTimer* timer): Circle(timer){
    recTimer = new QElapsedTimer;
    recTimer->start();
    connect(timer,SIGNAL(timeout()),this,SLOT(infect()));
    connect(timer,SIGNAL(timeout()),this,SLOT(collideWithCircle()));
    connect(timer, SIGNAL(timeout()),this,SLOT(recover()));
}

void Sick::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    QPixmap img(":/images/images/sick.png");
    //img.scaledToHeight(30,Qt::SmoothTransformation);
    img = img.scaled(2*getRadius(), 2*getRadius(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter->drawPixmap(QRect(2,2,2*getRadius(),2*getRadius()),img);

}

QPainterPath Sick::shape() const{
    return Circle::shape();
}
QRectF Sick::boundingRect() const {
    return Circle::boundingRect();
}

void Sick::setSickTime(int sickTime)
{
    this->sickTime = sickTime;
}





void Sick::infect()
{
    QList<QGraphicsItem*> list = collidingItems();
    for (int i = 0; i < list.size(); i++) {
        if (typeid(*(list[i])) == typeid(Healthy)){
            Healthy *target = dynamic_cast<Healthy*>(list[i]);
            Sick *sick = new Sick(getTimer());
            sick->setPos(list[i]->x(), list[i]->y());
            sick->setMovingDirection(target->getMovingDirection());
            sick->setSpeed(target->getSpeed());
            scene()->removeItem(list[i]);
            delete list[i];
            scene()->addItem(sick);

            //qDebug() << "!!!" << endl;
        }
    }
}

void Sick::recover() {
    if (recTimer->elapsed() > sickTime) {
    Recovered *recovered = new Recovered(getTimer());
    recovered->setPos(this->x(),this->y());
    recovered->setMovingDirection(this->getMovingDirection());
    recovered->setSpeed(this->getSpeed());
    scene()->addItem(recovered);
    scene()->removeItem(this);
    delete this;
    }

}


