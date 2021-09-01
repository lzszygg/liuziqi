#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"begin.h"
#include <QMainWindow>
#include<QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
QPushButton back;
void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
    begin page;


private slots:
    void changewin();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
