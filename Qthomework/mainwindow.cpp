#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "userinfo.h"
#include "goalSetting.h"
#include "exerciseRecord.h"
#include "dietRecord.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    userInfoWindow(new userinfo),
    goalSettingWindow(new GoalSetting),
    exerciseRecordWindow(new exerciseRecord),
    dietRecordWindow(new dietRecord)
{
    ui->setupUi(this);
     this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userInfoButton_clicked()
{
    userInfoWindow->show();
    userInfoWindow->activateWindow();
}

void MainWindow::on_goalSettingButton_clicked()
{
    goalSettingWindow->show();
    goalSettingWindow->activateWindow();
}

void MainWindow::on_exerciseRecordButton_clicked()
{
    exerciseRecordWindow->show();
    exerciseRecordWindow->activateWindow();
}

void MainWindow::on_dietRecordButton_clicked()
{
    dietRecordWindow->show();
    dietRecordWindow->activateWindow();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

