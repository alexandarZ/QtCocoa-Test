#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyNotification.h"
#include "MyInputController.h"
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MyNotification notification;
    notification.Display("Qt","Hello world!");
}

void MainWindow::on_pushButton_2_clicked()
{
    MyInputController controller;
    controller.MoveMouse(100,100);
}

void MainWindow::on_pushButton_3_clicked()
{
    QThread::sleep(3);

    MyInputController controller;
    controller.Keyboard(0x00); // A
    controller.Keyboard(0x25); // L
    controller.Keyboard(0x0E); // E
    controller.Keyboard(0x07); // X
}
