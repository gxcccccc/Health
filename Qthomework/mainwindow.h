#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userinfo.h"
#include "goalsetting.h"
#include "exerciseRecord.h"
#include "dietRecord.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_userInfoButton_clicked();

    void on_goalSettingButton_clicked();

    void on_exerciseRecordButton_clicked();

    void on_dietRecordButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    userinfo *userInfoWindow;
    GoalSetting *goalSettingWindow;
    exerciseRecord *exerciseRecordWindow;
    dietRecord *dietRecordWindow;
};
#endif // MAINWINDOW_H
