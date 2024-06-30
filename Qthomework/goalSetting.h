#ifndef GOALSETTING_H
#define GOALSETTING_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <QStringList>

namespace Ui {
class GoalSetting;
}

class GoalSetting : public QWidget
{
    Q_OBJECT

public:
    explicit GoalSetting(QWidget *parent = nullptr);
    ~GoalSetting();

private slots:
    void on_Change_clicked();

    void on_pushButton_clicked();

private:
    Ui::GoalSetting *ui;
};

#endif // GOALSETTING_H
