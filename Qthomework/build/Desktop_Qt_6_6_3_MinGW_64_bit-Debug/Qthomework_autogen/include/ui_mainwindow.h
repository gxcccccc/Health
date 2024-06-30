/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *Welcome;
    QPushButton *userInfoButton;
    QPushButton *goalSettingButton;
    QPushButton *exerciseRecordButton;
    QPushButton *dietRecordButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background-color: rgba(255, 255, 255,0);\n"
"}\n"
"\n"
"\n"
"QFrame#frame\n"
"{\n"
"\n"
"border-image: url(:/gxc/112.jpg);\n"
"border-radius: 24px;\n"
"}\n"
"\n"
"QLable#Welcome\n"
"{\n"
"  background:transparent;\n"
"	font: 300 28pt \"\347\255\211\347\272\277 Light\";\n"
"	color: rgba(255, 255, 255, 200);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(130, 90, 601, 341));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(130, 90, 601, 341));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(149, 149, 149, 120);\n"
"border-radius:24px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        Welcome = new QLabel(frame_2);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(90, 60, 421, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poor Richard")});
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        Welcome->setFont(font);
        Welcome->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Poor Richard\";\n"
"color: rgba(140, 140, 140, 110);\n"
"\n"
"background:transparent;\n"
""));
        userInfoButton = new QPushButton(frame_2);
        userInfoButton->setObjectName("userInfoButton");
        userInfoButton->setGeometry(QRect(80, 230, 71, 41));
        userInfoButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"	\n"
"	\n"
"	color: rgba(30, 30, 30, 170);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	padding-top: 3px;\n"
"}"));
        goalSettingButton = new QPushButton(frame_2);
        goalSettingButton->setObjectName("goalSettingButton");
        goalSettingButton->setGeometry(QRect(200, 230, 71, 41));
        goalSettingButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"	\n"
"	\n"
"	color: rgba(30, 30, 30, 170);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	padding-top: 3px;\n"
"}"));
        exerciseRecordButton = new QPushButton(frame_2);
        exerciseRecordButton->setObjectName("exerciseRecordButton");
        exerciseRecordButton->setGeometry(QRect(320, 230, 71, 41));
        exerciseRecordButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"	\n"
"	\n"
"	color: rgba(30, 30, 30, 170);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	padding-top: 3px;\n"
"}"));
        dietRecordButton = new QPushButton(frame_2);
        dietRecordButton->setObjectName("dietRecordButton");
        dietRecordButton->setGeometry(QRect(440, 230, 71, 41));
        dietRecordButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"	\n"
"	\n"
"	color: rgba(30, 30, 30, 170);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	padding-top: 3px;\n"
"}"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 20, 21, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 100);\n"
"	\n"
"	\n"
"	color: rgba(30, 30, 30, 170);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    border-radius:6px;\n"
"	background-color: rgba(255, 255, 255, 180);\n"
"	\n"
"	\n"
"	color: rgba(10, 10, 10, 190);\n"
"	\n"
"	font: 600 10pt \"\347\255\211\350\267\235\346\233\264\347\272\261\351\273\221\344\275\223 SC SemiBold\";\n"
"	padding-top: 3px;\n"
"}"));
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
        Welcome->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; color:#ffffff;\">Health   manager</span></p></body></html>", nullptr));
        userInfoButton->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        goalSettingButton->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\350\256\276\345\256\232", nullptr));
        exerciseRecordButton->setText(QCoreApplication::translate("MainWindow", "\351\224\273\347\202\274\350\256\260\345\275\225", nullptr));
        dietRecordButton->setText(QCoreApplication::translate("MainWindow", "\351\245\256\351\243\237\350\256\260\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
