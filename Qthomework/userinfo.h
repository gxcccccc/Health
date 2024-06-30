#ifndef USERINFO_H
#define USERINFO_H

#include <QWidget>
#include "userinfo_change.h"

namespace Ui {
class userinfo;
}

class userinfo : public QWidget
{
    Q_OBJECT

public:
    explicit userinfo(QWidget *parent = nullptr);
    ~userinfo();

private slots:
    void on_Change_clicked();

    void on_pushButton_clicked();

private:
    Ui::userinfo *ui;
    userinfo_change *userinfochange;
};

#endif // USERINFO_H
