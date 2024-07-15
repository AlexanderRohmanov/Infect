#include "patientschart.h"
#include <QTimer>
#include <QtMath>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>

PatientsChart::PatientsChart(int sickCount, int healthyCount, int recoveredCount) : sickCount(sickCount), healthyCount(healthyCount), recoveredCount(recoveredCount)
{

}

void PatientsChart::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    int count = sickCount + healthyCount + recoveredCount;
    int ySize = scene()->height() / count;
    //qDebug() << sickCount*ySize;
    painter->setPen(QPen(QColor(152, 80, 29), 4));
    painter->drawLine(0,0,0,sickCount*ySize);
    painter->setPen(QPen(QColor(89, 171, 151),4));
    painter->drawLine(0,sickCount*ySize,0,sickCount*ySize+healthyCount*ySize);
    painter->setPen(QPen(QColor(186, 141, 199),4));
    painter->drawLine(0,sickCount*ySize+healthyCount*ySize,0,sickCount*ySize+healthyCount*ySize+recoveredCount*ySize);


}

QPainterPath PatientsChart::shape() const{
    QPainterPath path;
    path.addRect(0,0, 2, scene()->height());

}
QRectF PatientsChart::boundingRect() const {
    return QRectF(0,0,2,scene()->height());
}
