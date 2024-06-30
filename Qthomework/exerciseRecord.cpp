#include "exerciseRecord.h"
#include "ui_exerciseRecord.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include<QString>
#include<QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <QStringList>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QLineSeries>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
exerciseRecord::exerciseRecord(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::exerciseRecord)

{
    ui->setupUi(this);
    this->setWindowTitle("Exercise Record");
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);

    //connect(ui->Search, &QPushButton::clicked, this, &exerciseRecord::on_search_clicked);
}



exerciseRecord::~exerciseRecord()
{
    delete ui;
}

void saveExerciseData(const QString &exerciseType, const QString &count,const QString &date,const QString &kaluli)
{
    QFile file("exercises.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();  // 输出详细的错误信息
        return;
    }
    QTextStream out(&file);
    out << exerciseType << " " << count << " "<<date<<" "<<kaluli<<"\n";
    file.close();
}
void exerciseRecord::on_Input_clicked()
{
    QString exerciseType = ui->id->text();
    QString count = ui->time->text();
    QString date =ui->day->text();
    QString kll=ui->kaluli->text();
    saveExerciseData(exerciseType, count,date,kll);

    ui->id->clear();
    ui->time->clear();
    ui->day->clear();
    ui->kaluli->clear();
    QMessageBox::information(this, "Success", "Exercise data saved successfully.");
}

QStringList searchExerciseData(const QString &exerciseType)
{
    QFile file("exercises.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error opening file: " << file.errorString();  // 输出详细的错误信息
        return QStringList();
    }

    QTextStream in(&file);
    QStringList results;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields[0] == exerciseType) {
            results.append(line);
        }
    }
    file.close();
    return results;
}



void exerciseRecord::on_Search_clicked()
{
    QString exerciseType = ui->id->text();
    if (exerciseType.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter the exercise type to search for.");
        return;
    }

    QStringList results = searchExerciseData(exerciseType);

    if (results.isEmpty()) {
        QMessageBox::information(this, "No Results", "No records found for the given exercise type.");
    }
    else {
        QString resultString = results.join("\n");
        ui->resultsTextEdit->setPlainText(resultString);
    }

}
QChartView* showChart()
{

    QBarSet *set = new QBarSet("exercises");

    QFile file("exercises.txt");


    QTextStream in(&file);
    QStringList categories;
    if(in.atEnd())
    qDebug()<<"abd";
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error opening file: " << file.errorString();  // 输出详细的错误信息
    }
    int a[10000]={};
    int num[10000]={};
    int vis[10000]={};
    while (!in.atEnd()) {

        QString line = in.readLine();
        QStringList fields = line.split(" ");
        qDebug()<<"gxcc"<<fields;
        QString exerciseType = fields[0];
        num[fields[0].toInt()]=fields[1].toInt()+ num[fields[0].toInt()];
    }
    if (!file.seek(0)) {
        qDebug() << "Error resetting file position: " << file.errorString();
        file.close();
        return nullptr;
    }
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        qDebug()<<"cyy"<<fields;
        QString exerciseType = fields[0];
        if(vis[fields[0].toInt()]==0)
        {
            categories.append(fields[0]);
            *set << num[fields[0].toInt()];
            vis[fields[0].toInt()]=1;
        }

    }

    file.close();

    QBarSeries *series = new QBarSeries();
    series->append(set);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("total Different Exercise time ");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 150);  // 根据您的数据调整范围
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView;

}
void exerciseRecord::on_pushButton_clicked()
{
    QChartView *chartView = showChart();
    if (chartView) {
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chartView);
        ui->chartWidget->setLayout(layout);
}
}
QChartView* showChart2()
{
    QPieSeries *series = new QPieSeries();

    QFile file("exercises.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();
        return nullptr;
    }

    QTextStream in(&file);
    int b[10000]={};
    int v[10000]={};
    QString prim;
    QString exerciseType;
    while(!in.atEnd())
    {

        QString line = in.readLine();
        QStringList fields = line.split(" ");
        exerciseType = fields[0];
        v[fields[0].toInt()]=v[fields[0].toInt()]+1;
        qDebug()<<v[fields[0].toInt()];
    }

    if (!file.seek(0)) {
        qDebug() << "Error resetting file position: " << file.errorString();
        file.close();
        return nullptr;
    }

    while(!in.atEnd())
    {
        qDebug()<<"zsqhhx";
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        exerciseType = fields[0];
        b[fields[0].toInt()]=b[fields[0].toInt()]+1;
        qDebug()<<v[fields[0].toInt()];
        if(b[fields[0].toInt()]==v[fields[0].toInt()])
        {
            series->append(exerciseType,b[fields[0].toInt()]);
        }
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Calories Burned by Exercise Type");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    return chartView;
}
void exerciseRecord::on_pushButton_2_clicked()
{
    QChartView *chartView = showChart2();
    if (chartView) {
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chartView);
        ui->chartWidget2->setLayout(layout);
    }
}


void exerciseRecord::on_pushButton_3_clicked()
{
    this->close();
}

