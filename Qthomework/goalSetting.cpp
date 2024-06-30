#include "goalSetting.h"
#include "ui_goalSetting.h"

GoalSetting::GoalSetting(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GoalSetting)
{
    ui->setupUi(this);
    this->setWindowTitle("Goal Setting");
    QString tmp;
    QFile file("goal.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    tmp=in.readLine();
    ui->lineEdit->setText(tmp);
    tmp=in.readLine();
    ui->lineEdit_2->setText(tmp);
    tmp=in.readLine();
    ui->lineEdit_3->setText(tmp);
    file.close();
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

GoalSetting::~GoalSetting()
{
    delete ui;
}

void GoalSetting::on_Change_clicked()
{
    QString g1=ui->lineEdit->text();
    QString g2=ui->lineEdit_2->text();
    QString g3=ui->lineEdit_3->text();
    QFile file("goal.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
    QTextStream out(&file);
    out<<g1<<"\n"<<g2<<"\n"<<g3<<"\n";
    file.close();

}


void GoalSetting::on_pushButton_clicked()
{
    this->close();
}

