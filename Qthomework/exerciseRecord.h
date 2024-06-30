#ifndef EXERCISERECORD_H
#define EXERCISERECORD_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QVBoxLayout>
namespace Ui {
class exerciseRecord;
}

class exerciseRecord : public QWidget
{
    Q_OBJECT

public:
    explicit exerciseRecord(QWidget *parent = nullptr);
    ~exerciseRecord();

private slots:
    void on_Input_clicked();


    void on_Search_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::exerciseRecord *ui;
    QChartView *chartView;
    QLineSeries *series;
    QValueAxis *axisX;
    QValueAxis *axisY;
    QVBoxLayout *layout;
};

#endif // EXERCISERECORD_H
