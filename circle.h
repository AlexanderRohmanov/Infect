#ifndef CIRCLE_H
#define CIRCLE_H

#include <QColor>
#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QTimer>

class Circle : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
     Circle(QTimer *timer);
    ~Circle();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
    QPainterPath shape() const override;
    QRectF boundingRect() const override;
    int getNum() const;
    void setSpeed(qreal speed);
    void setMovingDirection(qreal direct);
    qreal getMovingDirection();
    qreal getRadius() const;
    QTimer *getTimer() const;
    int getCount() const;
    int getSpeed() const;

private slots:
    void move();
    void collideWithCircle();

    //protected:
    //    void advance(int step);
    //

private:
    static int count;
    int num;
    qreal speed;
    qreal radius;
    qreal movingDirection;
    QTimer *timer;
};


#endif // CIRCLE_H
