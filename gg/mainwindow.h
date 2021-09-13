#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"begin.h"
#include <QMainWindow>
<<<<<<< HEAD
#include<QPushButton>
=======
<<<<<<< HEAD
#include<QPushButton>
=======
<<<<<<< HEAD
=======
#include<QPushButton>
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
<<<<<<< HEAD
QPushButton back;
void paintEvent(QPaintEvent *event);
=======
<<<<<<< HEAD
QPushButton back;
void paintEvent(QPaintEvent *event);
=======
<<<<<<< HEAD
=======
QPushButton back;
void paintEvent(QPaintEvent *event);
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)

private:
    Ui::MainWindow *ui;
    begin page;
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)


private slots:
    void changewin();
    void on_pushButton_clicked();
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
};

#endif // MAINWINDOW_H
