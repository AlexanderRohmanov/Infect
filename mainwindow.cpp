#include "circle.h"
#include "healthy.h"
#include "sick.h"
#include "recovered.h"
#include "patientschart.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtMath>
#include <QTimer>
#include <QPainter>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QScrollArea>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    //первая модель распространения
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(Qt::white);
    scene->setSceneRect(-220,-125,440,250);

    ui->graphicsViewDefault->setScene(scene);
    ui->graphicsViewDefault->setSceneRect(-221,-126,442,252);


    timer = new QTimer;
    chartTimer = new QTimer;

    connect(chartTimer,&QTimer::timeout,this,[this]() { updateCountLabel(scene, sceneChart, ui->labelSickCount, ui->labelHealthyCount, ui->labelRecoveredCount,
&chartNumber, timer, ui->pushButton);});

    DrawFirstScene(scene);

    QGraphicsView view(scene);
    chartNumber = 0;
    sceneChart = new QGraphicsScene();

    sceneChart->setSceneRect(-165,-50,330,100);

    ui->graphicsViewChart->setScene(sceneChart);
    ui->graphicsViewChart->setSceneRect(-165,-40,330,70);
    //вторая модель распространения

    sceneDistance = new QGraphicsScene();
    sceneDistance->setBackgroundBrush(Qt::white);

    sceneDistance->setSceneRect(-220,-125,440,250);
    ui->graphicsViewDistance->setScene(sceneDistance);
    ui->graphicsViewDistance->setSceneRect(-221,-126,442,252);

    timer2 = new QTimer;
    chartTimer2 = new QTimer;

    connect(chartTimer2,&QTimer::timeout,this,[this]() { updateCountLabel(sceneDistance, sceneChartDistance, ui->labelSickCount_2, ui->labelHealthyCount_2, ui->labelRecoveredCount_2, &chartNumberDistance,
timer2, ui->pushButton_Distance);});
    DrawSecondScene(sceneDistance);

    //QGraphicsView view2(sceneDistance);
    chartNumberDistance = 0;
    sceneChartDistance = new QGraphicsScene();
    sceneChartDistance->setSceneRect(-165,-50,330,100);

    ui->graphicsViewChart_Distance->setScene(sceneChartDistance);
    ui->graphicsViewChart_Distance->setSceneRect(-165,-40,330,70);



}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::updateCountLabel(QGraphicsScene *updScene,QGraphicsScene *updSceneChart, QLabel* labelSickCount, QLabel *labelHealthyCount, QLabel *labelRecoveredCount,
int *chartNumber, QTimer* timer, QPushButton* button)
{
    int countSick = 0;
    int countHealthy = 0;
    int countRecovered = 0;
    for (QGraphicsItem *item : updScene->items()) {
        if (dynamic_cast<Sick*>(item)) {
            countSick++;
        }
        else if (dynamic_cast<Healthy*>(item)) {
            countHealthy++;
        }
        else if (dynamic_cast<Recovered*>(item)) {
            countRecovered++;
        }
    }
    labelSickCount->setText(QString::number(countSick));
    labelHealthyCount->setText(QString::number(countHealthy));
    labelRecoveredCount->setText(QString::number(countRecovered));

    PatientsChart* chartStrip = new PatientsChart(countSick,countHealthy,countRecovered);
    chartStrip->setPos(-updSceneChart->width()/2+(*chartNumber)*4,-45);
    updSceneChart->addItem(chartStrip);
    (*chartNumber)++;

    if(chartStrip->x()>updSceneChart->width()/2) {
        timer->stop();
        button->setEnabled(true);
        button->setText("RESTART");

    }
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->pushButton->text()== "RESTART") {
        scene->clear();
        sceneChart->clear();
        chartNumber = 0;
        DrawFirstScene(scene);
    }
    Sick *scircle = new Sick(timer);
    scircle->setSickTime(15000);
    scircle->setPos(40, 50);
    scene->addItem(scircle);


    if (!(timer->isActive())) {
        timer->start(1000/60);
        chartTimer->start(400);
    }
    ui->pushButton->setEnabled(false);

}

void MainWindow::on_pushButton_Distance_clicked()
{
    if (ui->pushButton->text()== "RESTART") {
        sceneDistance->clear();
        sceneChartDistance->clear();
        chartNumberDistance = 0;
        DrawSecondScene(sceneDistance);
    }
    Sick *scircle = new Sick(timer2);
    scircle->setSickTime(15000);
    scircle->setPos(40, 50);
    sceneDistance->addItem(scircle);


    if (!(timer2->isActive())) {
        timer2->start(1000/60);
        chartTimer2->start(400);
    }
    ui->pushButton_Distance->setEnabled(false);
}

void MainWindow::DrawFirstScene(QGraphicsScene *firstScene) {
    int Xhigh = firstScene->width()/2;
    int Xlow = -firstScene->width()/2;
    int Yhigh = firstScene->height()/2;
    int Ylow = -firstScene->height()/2;

    for (int i = 0; i < 40 ; i++) {
        Healthy *circle = new Healthy(this->timer);
        circle->setPos(rand() % ((Xhigh-20)-Xlow) + Xlow, rand() % ((Yhigh-20)-Ylow) + Ylow );
        //
        firstScene->addItem(circle);
    }


}

void MainWindow::DrawSecondScene(QGraphicsScene *secondScene)
{
    int Xhigh = secondScene->width()/2;
    int Xlow = -secondScene->width()/2;
    int Yhigh = secondScene->height()/2;
    int Ylow = -secondScene->height()/2;

    for (int i = 0; i < 15 ; i++) {
        Healthy *hcircle = new Healthy(this->timer2);
        hcircle->setPos(rand() % ((Xhigh-30)-Xlow) + Xlow, rand() % ((Yhigh-20)-Ylow) + Ylow );
        //
        secondScene->addItem(hcircle);
    }
    for (int i = 0; i < 25 ; i++) {
        Healthy *hcircle = new Healthy(this->timer2);
        hcircle->setPos(rand() % ((Xhigh-30)-Xlow) + Xlow, rand() % ((Yhigh-20)-Ylow) + Ylow );
        hcircle->setSpeed(0);
        //
        secondScene->addItem(hcircle);
    }


}



