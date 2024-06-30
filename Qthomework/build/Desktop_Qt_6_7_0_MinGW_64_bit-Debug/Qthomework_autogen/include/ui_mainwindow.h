/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Welcome;
    QLabel *Sayings;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Welcome = new QLabel(centralwidget);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(260, 10, 291, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\232\266\344\271\246")});
        font.setPointSize(20);
        Welcome->setFont(font);
        Sayings = new QLabel(centralwidget);
        Sayings->setObjectName("Sayings");
        Sayings->setGeometry(QRect(380, 60, 381, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\232\266\344\271\246")});
        font1.setPointSize(12);
        Sayings->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Welcome->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\345\201\245\345\272\267\347\256\241\347\220\206\345\272\224\347\224\250\357\274\201", nullptr));
        Sayings->setText(QCoreApplication::translate("MainWindow", "\345\201\245\345\272\267\345\260\217\345\212\251\346\211\213\346\217\220\351\206\222\346\202\250\357\274\232\345\270\270\346\211\223\345\244\252\346\236\201\346\213\263\357\274\214\347\233\212\345\257\277\345\217\210\345\273\266\345\271\264\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
