/********************************************************************************
** Form generated from reading UI file 'goalSetting.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOALSETTING_H
#define UI_GOALSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoalSetting
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *Title;
    QPushButton *Change;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *GoalSetting)
    {
        if (GoalSetting->objectName().isEmpty())
            GoalSetting->setObjectName("GoalSetting");
        GoalSetting->resize(678, 466);
        GoalSetting->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame#frame\n"
"{\n"
"    border-radius: 13px;\n"
"	\n"
"	background-image: url(:/gxc/OIP.jpg);\n"
"}\n"
"#frame_2\n"
"{\n"
"  border-radius: 13px;\n"
"background-color: rgba(100, 102, 102, 120);\n"
"}\n"
"\n"
"\n"
""));
        frame = new QFrame(GoalSetting);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 70, 471, 311));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-1, -1, 481, 321));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        Title = new QLabel(frame_2);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(100, 20, 281, 61));
        Title->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Poor Richard\";\n"
"color: rgba(255, 255, 255, 180);\n"
"\n"
"background:transparent;\n"
""));
        Change = new QPushButton(frame_2);
        Change->setObjectName("Change");
        Change->setGeometry(QRect(210, 250, 80, 31));
        Change->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 90, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 140, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(190, 190, 113, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 20, 21, 20));
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

        retranslateUi(GoalSetting);

        QMetaObject::connectSlotsByName(GoalSetting);
    } // setupUi

    void retranslateUi(QWidget *GoalSetting)
    {
        GoalSetting->setWindowTitle(QCoreApplication::translate("GoalSetting", "Form", nullptr));
        Title->setText(QCoreApplication::translate("GoalSetting", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">goal setting</span></p></body></html>", nullptr));
        Change->setText(QCoreApplication::translate("GoalSetting", "\344\277\256\346\224\271", nullptr));
        pushButton->setText(QCoreApplication::translate("GoalSetting", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoalSetting: public Ui_GoalSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOALSETTING_H
