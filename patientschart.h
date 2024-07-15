#ifndef PATIENTSCHART_H
#define PATIENTSCHART_H

#include <QObject>
#include <QColor>
#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QTimer>

class PatientsChart : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    PatientsChart(int sickCount, int healthyCount, int recoveredCount);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) ;
    QPainterPath shape() const override;
    QRectF boundingRect() const override;

private:
    int sickCount;
    int healthyCount;
    int recoveredCount;
};

#endif // PATIENTSCHART_H
