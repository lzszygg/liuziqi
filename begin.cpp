#include "begin.h"
#include<QPainter>
#include<QIcon>
#include<QPaintEvent>
#include<QSound>
#include<QBitmap>
#define BACK "://picture/background.jpeg"
#define BUTTON_PLAY ":/ne/sound/button.wav"   //按钮提示音

begin::begin(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("六子棋");
    this->setWindowIcon(QIcon("://picture/logo.jpeg")); //设置应用图标
    this->setFixedSize(1280,880);
    button1=new QPushButton(this);
    button1->move(QPoint(450,600));  //按钮移动
    button1->setFlat(true);     //透明效果
    button1->setFixedSize(400,70);  //设定按钮尺寸
    button1->setFont(QFont("黑体",20,700));
    button1->setText("进入游戏");

    button2=new QPushButton(this);
    button2->move(QPoint(450,670));
    button2->setFlat(true);
    button2->setFixedSize(400,70);  //设定按钮尺寸
    button2->setFont(QFont("黑体",20,700));
    button2->setText("退出");

    connect(button1,&QPushButton::clicked,this,&begin::sendslot);  //连接信号
    connect(button2,&QPushButton::clicked,this,&begin::close);

}
void begin::paintEvent(QPaintEvent *event)
{
    if(button1->underMouse())
    {
        button1->setFlat(false);
    }
    else
    {
        button1->setFlat(true);
    }
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); // 抗锯齿,防止图像走样
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(BACK));  //背景图片
    painter.drawPixmap(450,100,500,300,QBitmap("://picture/1630139607218.png"));

}
void begin::sendslot()
{
    QSound::play(BUTTON_PLAY);
    emit mysignal();   //发出信号，等待主窗口接收
}
