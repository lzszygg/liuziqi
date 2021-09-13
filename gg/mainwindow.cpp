#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
#include<QPushButton>
#include<QMenuBar>
#include<QMenu>
#include<QMessageBox>
#include<QPainter>
#include<QPaintEvent>
#include<QStatusBar>
#include<QLabel>

#define PICTURE "://picture/background2.jfif"

//const int boundary=40;  //棋盘距离边缘的距离
//const int chessboard_size=21;  //棋盘线条数
//const int square_length=40;  //棋盘格子大小
//const int mouseOk=30; //鼠标的有效点击距离
//const int flag_length=11; //落子标记边长
//const int r=17; //棋子半径
//const int ai_time=700;  //模拟ai思考时间
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
      page.show();
=======
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
    this->setFixedSize(1280,880);
    this->setWindowIcon(QIcon("://picture/logo.jpeg"));
    ui->pushButton->setText("返回主页");
    ui->pushButton->setGeometry(1080,50,120,50);
    ui->pushButton_2->setText("人机对战");
    ui->pushButton_2->setGeometry(1080,150,120,50);
    ui->pushButton_3->setText("双人对战");
    ui->pushButton_3->setGeometry(1080,250,120,50);
    ui->pushButton_4->setText("ai对战");
    ui->pushButton_4->setGeometry(1080,350,120,50);

    QMenuBar *menubar=menuBar();  //设置菜单栏
    QMenu *menu_1=menubar->addMenu("六子棋"); //设置菜单
    QAction *action_0=menu_1->addAction("欢迎");
    menu_1->addSeparator();
    QAction *action_1=menu_1->addAction("游戏简介");

    QStatusBar *zhuangtai=statusBar();
    QLabel *label=new QLabel(this);
    label->setText("愉快地对决吧^_^");
    zhuangtai->addWidget(label);








    page.show();
      void (begin::*jkl)()=&begin::mysignal;
      connect(&page,jkl,this,&MainWindow::changewin);
}
void MainWindow::changewin()
{
    this->show();  //游戏界面显示
    page.hide();   //子窗口隐藏
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
}

MainWindow::~MainWindow()
{
    delete ui;
}
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)

void MainWindow::on_pushButton_clicked()
{
    this->hide();  //游戏界面显示
    page.show();   //子窗口隐藏

}
void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); // 抗锯齿,防止图像走样
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(PICTURE));  //背景图片


}
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 383d266 (添加了游戏类)
>>>>>>> e8f8e70 (添加了游戏类)
>>>>>>> 6f1b7fc (添加了游戏类)
