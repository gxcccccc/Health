#ifndef USERINFO_CHANGE_H
#define USERINFO_CHANGE_H

#include <QDialog>

namespace Ui {
class userinfo_change;
}

class userinfo_change : public QDialog
{
    Q_OBJECT

public:
    explicit userinfo_change(QWidget *parent = nullptr);
    ~userinfo_change();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::userinfo_change *ui;
};

#endif // USERINFO_CHANGE_H
