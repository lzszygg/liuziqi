#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
<<<<<<< HEAD
    ui->setupUi(this);
=======
<<<<<<< HEAD
    ui->setupUi(this);
=======
    //ui->setupUi(this);
    page.show();

>>>>>>> 1b956ca (第二次上传，添加了一个页面)
>>>>>>> 9ffc591 (第二次上传，添加了页面)
}

MainWindow::~MainWindow()
{
    delete ui;
}
