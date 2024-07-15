#ifndef SICK_H
#define SICK_H

#include "circle.h"
#include <QElapsedTimer>

class Sick : public Circle
{
    Q_OBJECT
public:
    Sick(QTimer* timer);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
    QPainterPath shape() const override;
    QRectF boundingRect() const override;
    void setSickTime(int sickTime);


private slots:
    void infect();
    void recover();
private:
    QElapsedTimer* recTimer;

    static int sickTime;
};

#endif // SICK_H
