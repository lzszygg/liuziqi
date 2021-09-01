#include "mainwindow.h"
#include <QApplication>
#include<begin.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("六子棋");



    return a.exec();
}
