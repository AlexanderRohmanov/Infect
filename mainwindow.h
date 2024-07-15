#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QElapsedTimer>
#include <QLabel>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
     void updateCountLabel(QGraphicsScene *updScene,QGraphicsScene *updSceneChart, QLabel *labelSickCount, QLabel *labelHealthyCount, QLabel *labelRecoveredCount,
int* chartNumber, QTimer* timer, QPushButton* button);

private slots:
    void on_pushButton_clicked();



    void on_pushButton_Distance_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsScene *sceneChart;
    QGraphicsScene *sceneDistance;
    QGraphicsScene *sceneChartDistance;
    QTimer *timer;
    QElapsedTimer *recTimer;
    QTimer *chartTimer;
    QTimer *timer2;
    QElapsedTimer *recTimer2;
    QTimer *chartTimer2;
    int chartNumber;
    int chartNumberDistance;
    void DrawFirstScene(QGraphicsScene *firstScene);
    void DrawSecondScene(QGraphicsScene *secondScene);

};
#endif // MAINWINDOW_H
