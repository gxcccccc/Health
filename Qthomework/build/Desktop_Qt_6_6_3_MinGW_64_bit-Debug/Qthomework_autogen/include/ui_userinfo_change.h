/********************************************************************************
** Form generated from reading UI file 'userinfo_change.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_CHANGE_H
#define UI_USERINFO_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userinfo_change
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_4;
    QLineEdit *Name;
    QLineEdit *Gender;
    QLineEdit *Age;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *userinfo_change)
    {
        if (userinfo_change->objectName().isEmpty())
            userinfo_change->setObjectName("userinfo_change");
        userinfo_change->resize(575, 416);
        userinfo_change->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame#frame\n"
"{\n"
"    border-radius: 13px;\n"
"	background-image: url(:/gxc/12.jpg);\n"
"}\n"
"#frame_2\n"
"{\n"
"  border-radius: 13px;\n"
"background-color: rgba(100, 102, 102, 120);\n"
"}\n"
"\n"
""));
        frame = new QFrame(userinfo_change);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(240, 0, 321, 331));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 321, 331));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 10, 271, 21));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 900 10pt \"Poor Richard\";\n"
"\n"
"color: rgba(255, 255, 255, 160);\n"
""));
        Name = new QLineEdit(frame_2);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(80, 60, 181, 31));
        Name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Gender = new QLineEdit(frame_2);
        Gender->setObjectName("Gender");
        Gender->setGeometry(QRect(80, 120, 181, 31));
        Gender->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Age = new QLineEdit(frame_2);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(80, 180, 181, 31));
        Age->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 260, 80, 31));
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
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 10, 20, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(userinfo_change);

        QMetaObject::connectSlotsByName(userinfo_change);
    } // setupUi

    void retranslateUi(QDialog *userinfo_change)
    {
        userinfo_change->setWindowTitle(QCoreApplication::translate("userinfo_change", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("userinfo_change", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\346\263\250\346\204\217\357\274\201\345\257\271\347\224\250\346\210\267\344\277\241\346\201\257\347\232\204\346\224\271\345\212\250\345\234\250\351\207\215\345\220\257\345\220\216\347\224\237\346\225\210\357\274\201</span></p></body></html>", nullptr));
        Name->setPlaceholderText(QCoreApplication::translate("userinfo_change", "\345\247\223\345\220\215", nullptr));
        Gender->setPlaceholderText(QCoreApplication::translate("userinfo_change", "\346\200\247\345\210\253", nullptr));
        Age->setPlaceholderText(QCoreApplication::translate("userinfo_change", "\345\271\264\351\276\204", nullptr));
        pushButton->setText(QCoreApplication::translate("userinfo_change", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userinfo_change", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinfo_change: public Ui_userinfo_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_CHANGE_H
