/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinfo
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *Change;
    QPushButton *pushButton;
    QLineEdit *height;
    QLineEdit *weight;
    QLineEdit *Name;
    QLineEdit *Gender;
    QLineEdit *Age;

    void setupUi(QWidget *userinfo)
    {
        if (userinfo->objectName().isEmpty())
            userinfo->setObjectName("userinfo");
        userinfo->resize(762, 429);
        userinfo->setStyleSheet(QString::fromUtf8("*\n"
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
        frame = new QFrame(userinfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(250, 10, 321, 351));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 321, 351));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 131, 41));
        label->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 900 28pt \"Poor Richard\";\n"
"\n"
"color: rgba(255, 255, 255, 160);\n"
""));
        Change = new QPushButton(frame_2);
        Change->setObjectName("Change");
        Change->setGeometry(QRect(120, 300, 91, 41));
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
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(289, 20, 21, 20));
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
        height = new QLineEdit(frame_2);
        height->setObjectName("height");
        height->setGeometry(QRect(90, 190, 151, 20));
        height->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        weight = new QLineEdit(frame_2);
        weight->setObjectName("weight");
        weight->setGeometry(QRect(90, 230, 151, 20));
        weight->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Name = new QLineEdit(frame_2);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(90, 70, 151, 20));
        Name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Gender = new QLineEdit(frame_2);
        Gender->setObjectName("Gender");
        Gender->setGeometry(QRect(90, 110, 151, 20));
        Gender->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Age = new QLineEdit(frame_2);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(90, 150, 151, 20));
        Age->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));

        retranslateUi(userinfo);

        QMetaObject::connectSlotsByName(userinfo);
    } // setupUi

    void retranslateUi(QWidget *userinfo)
    {
        userinfo->setWindowTitle(QCoreApplication::translate("userinfo", "Form", nullptr));
        label->setText(QCoreApplication::translate("userinfo", "<html><head/><body><p><span style=\" font-weight:700;\">user info</span></p></body></html>", nullptr));
        Change->setText(QCoreApplication::translate("userinfo", "\344\277\256\346\224\271", nullptr));
        pushButton->setText(QCoreApplication::translate("userinfo", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinfo: public Ui_userinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
