#include "dietRecord.h"
#include "ui_dietRecord.h"

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
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QCategoryAxis>
dietRecord::dietRecord(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dietRecord)
{
    ui->setupUi(this);
    this->setWindowTitle("Diet Record");
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

dietRecord::~dietRecord()
{
    delete ui;
}
void saveExerciseData(const QString &diet,const QString &date,const QString &kaluli)
{
    QFile file("diet.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();  // 输出详细的错误信息
        return;
    }
    QTextStream out(&file);
    out << date<< " " <<diet<<" "<<kaluli<<"\n";
    file.close();
}
void dietRecord::on_Input_clicked()
{
    QString diet = ui->id->text();
    QString date =ui->day->text();
    QString kll=ui->kaluli->text();
    saveExerciseData(diet,date,kll);
    ui->id->clear();
    ui->day->clear();
    ui->kaluli->clear();
    QMessageBox::information(this, "Success", "Exercise data saved successfully.");
}

QStringList searchdietData(const QString &exerciseType)
{
    QFile file("diet.txt");
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

void dietRecord::on_Search_clicked()
{
    QString date = ui->day->text();
    if (date.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter the exercise type to search for.");
        return;
    }

    QStringList results = searchdietData(date);

    if (results.isEmpty()) {
        QMessageBox::information(this, "No Results", "No records found for the given exercise type.");
    }
    else {
        QString resultString = results.join("\n");
        ui->resultTextEdit->setPlainText(resultString);
}
}
QChartView* showChart3()
{
    QFile file("diet.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();
        return nullptr;
    }
    int index=0;
    QLineSeries *series = new QLineSeries();
    QTextStream in(&file);
    QStringList categories;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() >= 3) {
            QString date = fields[0];
            bool ok;
            double calories = fields[2].toDouble(&ok);
            if (ok) {
                series->append(index, calories);
                categories.append(date);
                index++;
            }
        }
    }
    file.close();

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Calorie Intake Over Time");

    QCategoryAxis *axisX = new QCategoryAxis();
    for (int i = 0; i < categories.size(); ++i) {
        axisX->append(categories[i], i);
    }
    axisX->setTitleText("Date");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Calories");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView3 = new QChartView(chart);
    chartView3->setRenderHint(QPainter::Antialiasing);
    return chartView3;
}

void dietRecord::on_pushButton_clicked()
{
    QChartView *chartView = showChart3();
    if (chartView) {
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chartView);
        ui->widget->setLayout(layout);
}
}


void dietRecord::on_pushButton_2_clicked()
{
    this->close();
}

