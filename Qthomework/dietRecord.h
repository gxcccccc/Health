#ifndef DIETRECORD_H
#define DIETRECORD_H

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
class dietRecord;
}

class dietRecord : public QWidget
{
    Q_OBJECT

public:
    explicit dietRecord(QWidget *parent = nullptr);
    ~dietRecord();

private slots:
    void on_Input_clicked();

    void on_Search_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::dietRecord *ui;
};

#endif // DIETRECORD_H
