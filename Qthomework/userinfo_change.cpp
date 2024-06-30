#include "userinfo_change.h"
#include "ui_userinfo_change.h"
#include<QFile>
#include<QTextStream>

userinfo_change::userinfo_change(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userinfo_change)
{
    ui->setupUi(this);
    this->setWindowTitle("Change user information");
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

userinfo_change::~userinfo_change()
{
    delete ui;
}

void userinfo_change::on_pushButton_clicked()
{
    QString name=ui->Name->text();
    QString gender=ui->Gender->text();
    QString age=ui->Age->text();
    QFile file("userinfo.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
    QTextStream out(&file);
    out<<name<<"\n"<<gender<<"\n"<<age<<"\n";
    file.close();
}


void userinfo_change::on_pushButton_2_clicked()
{
    this->close();
}

