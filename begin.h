#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include<QPushButton>

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
