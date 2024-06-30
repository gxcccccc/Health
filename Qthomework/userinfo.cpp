#include "userinfo.h"
#include "ui_userinfo.h"
#include "userinfo_change.h"
#include<QFile>
#include<QTextStream>

userinfo::userinfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::userinfo)
{
    ui->setupUi(this);
    this->setWindowTitle("Userinfo");
    QString tmp;
    QFile file("userinfo.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    tmp=in.readLine();
    ui->Name->setText(tmp);
    tmp=in.readLine();
    ui->Gender->setText(tmp);
    tmp=in.readLine();
    ui->Age->setText(tmp);
    tmp=in.readLine();
    ui->height->setText(tmp);
    tmp=in.readLine();
    ui->weight->setText(tmp);
    file.close();
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

userinfo::~userinfo()
{
    delete ui;
}


void userinfo::on_Change_clicked()
{
    QString g1=ui->Name->text();
    QString g2=ui->Gender->text();
    QString g3=ui->Age->text();
    QString g4=ui->height->text();
    QString g5=ui->weight->text();
    QFile file("userinfo.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
    QTextStream out(&file);
    out<<g1<<"\n"<<g2<<"\n"<<g3<<"\n"<<g4<<"\n"<<g5;
    file.close();
}


void userinfo::on_pushButton_clicked()
{
    this->close();
}

