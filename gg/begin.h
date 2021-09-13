#ifndef MAINPAGE_H
#define MAINPAGE_H
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD

#include <QWidget>
#include<QPushButton>

=======
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
#include <QWidget>
#include<QPushButton>



<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
class begin : public QWidget
{
    Q_OBJECT
public:
    explicit begin(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);  //绘图
    QPushButton *button1;  //按钮
    QPushButton *button2;

private:


signals:
    void mysignal();  //自定义信号
public slots:
     void sendslot();  //发出信号
};

#endif // MAINPAGE_H
