#include "mainwindow.h"

#include <QApplication>
#include <QScrollArea>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QScrollArea scrollArea;
    MainWindow w;



    w.show();
    return a.exec();
}
