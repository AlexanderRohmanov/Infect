#include "circle.h"

#include <QTimer>
#include <QtMath>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>


int Circle::count = 0;

Circle::Circle(QTimer *timer) : speed(1), movingDirection(rand() % (180 - (-180) + 1) - 180), radius(5), timer(timer)
{

    count++;
    num = count;

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

}

Circle::~Circle() {
    count--;
}
void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    QPixmap img(":/images/images/default.png");
    //img.scaledToHeight(30,Qt::SmoothTransformation);
    img = img.scaled(2*radius, 2*radius, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter->drawPixmap(QRect(2,2,2*radius,2*radius),img);

}

QPainterPath Circle::shape() const{
    QPainterPath path;
    path.addEllipse(0,0,2*radius,2*radius);

    return path;
}
QRectF Circle::boundingRect() const {
    return QRectF(0,0,2*radius+2,2*radius+2);
}

int Circle::getNum() const {
    return num;
}

int Circle::getSpeed() const {
    return speed;
}

qreal Circle::getRadius() const {
    return radius;
}

QTimer *Circle::getTimer() const
{
    return timer;
}

int Circle::getCount() const
{
    return count;
}



void Circle::setSpeed(qreal speed)
{
    this->speed = speed;
}

void Circle::setMovingDirection(qreal direct)
{
    this->movingDirection = direct;
}

qreal Circle::getMovingDirection()
{
    return movingDirection;
}

void Circle::move()
{
    if (x() >= (scene()->width())/2-2*radius || x()<- (scene()->width())/2) {
        //movingDirection= ((int)(movingDirection) + (2*(90-((int)movingDirection % 90))))%360;
        //qreal dX = scene()->width())/2 -
        //this->setPos()
        movingDirection = 180-movingDirection;
        if (movingDirection > 180 || movingDirection < -180) movingDirection = movingDirection-360;

    }
    if (y() == (scene()->height())/2 -2*radius || y() > (scene()->height())/2-2*radius || y()<-(scene()->height())/2) {
        movingDirection= -movingDirection;
    }

    setPos(x()+qCos(qDegreesToRadians(movingDirection))*(speed), y()+qSin(qDegreesToRadians(movingDirection))*(speed));

}

void Circle::collideWithCircle()
{
    QList<QGraphicsItem*> list = collidingItems();

    for (int i = 0; i < list.size(); i++) {
        if (dynamic_cast<Circle*>(list[i]) != nullptr) {


            Circle *targetCicrle = dynamic_cast<Circle  *>(list[i]); // после проверки привожу элемент к типу Circle

            // в случае перекрытия окружностей - перемещаем их вдоль прямой, соединяющей их центры

            qreal circleDist = sqrt((x()-targetCicrle->x())*(x()-targetCicrle->x()) + (y()-targetCicrle->y())*(y()-targetCicrle->y())); // расстояние между центрами окружностей
            qreal overlap = 0.5f * (2*radius - circleDist); //величиная перекрытия (коэф. 0.5 т.к каждая окружность будет преодалевать расстояние перекрытия)

            qreal dx = overlap * (this->x() - targetCicrle->x()) / circleDist;
            qreal dy = overlap * (this->y() - targetCicrle->y()) / circleDist;

            this->setPos(x() + dx, y() + dy);

            qreal targetDx = overlap * (this->x() - targetCicrle->x()) / circleDist;
            qreal targetDy = overlap * (this->y() - targetCicrle->y()) / circleDist;

            targetCicrle->setPos(targetCicrle->x() - targetDx, targetCicrle->y() - targetDy);

            // изменение направления движения окружностей в случае столкновения с другой окружностью

            qreal middle;

            if (list[i]->x() == this->x()) {
                middle = 90.0;
                //qDebug() << "!!!" << endl;
            }
            else middle = qRadiansToDegrees(atan((targetCicrle->y()-this->y())/(targetCicrle->x()-this->x())));

            if (middle == 0) middle = 180;


            qreal dD = this->movingDirection - middle;

            this->movingDirection = (int)(-(middle/fabs(middle))*180 - dD + middle) % 360;
            if (fabs(this->movingDirection) > 180) this->movingDirection = -((int)movingDirection % 180); // оставляю измерения угла в предедах [-180 ; 180]
            //qDebug() << "moving: " << movingDirection;
        }


    }
}
