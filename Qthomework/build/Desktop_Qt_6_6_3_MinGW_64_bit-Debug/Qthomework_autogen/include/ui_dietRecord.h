/********************************************************************************
** Form generated from reading UI file 'dietRecord.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIETRECORD_H
#define UI_DIETRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dietRecord
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QTextEdit *resultTextEdit;
    QLabel *Title;
    QLineEdit *kaluli;
    QLineEdit *id;
    QLineEdit *day;
    QPushButton *Input;
    QPushButton *Search;
    QPushButton *pushButton;
    QWidget *widget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *dietRecord)
    {
        if (dietRecord->objectName().isEmpty())
            dietRecord->setObjectName("dietRecord");
        dietRecord->resize(1032, 581);
        dietRecord->setMinimumSize(QSize(0, 0));
        dietRecord->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame#frame\n"
"{\n"
"    border-radius: 13px;\n"
"	\n"
"	background-image: url(:/gxc/526.jpg);\n"
"}\n"
"#frame_2\n"
"{\n"
"  border-radius: 13px;\n"
"background-color: rgba(100, 102, 102, 120);\n"
"}\n"
"\n"
""));
        frame = new QFrame(dietRecord);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1021, 611));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 1021, 701));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        resultTextEdit = new QTextEdit(frame_2);
        resultTextEdit->setObjectName("resultTextEdit");
        resultTextEdit->setGeometry(QRect(410, 170, 141, 51));
        resultTextEdit->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Title = new QLabel(frame_2);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(330, 20, 291, 61));
        Title->setStyleSheet(QString::fromUtf8("\n"
"font: 32pt \"Poor Richard\";\n"
"color: rgba(140, 140, 140, 110);\n"
"\n"
"background:transparent;\n"
""));
        kaluli = new QLineEdit(frame_2);
        kaluli->setObjectName("kaluli");
        kaluli->setGeometry(QRect(690, 120, 171, 20));
        kaluli->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        id = new QLineEdit(frame_2);
        id->setObjectName("id");
        id->setGeometry(QRect(400, 120, 171, 20));
        id->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        day = new QLineEdit(frame_2);
        day->setObjectName("day");
        day->setGeometry(QRect(120, 110, 151, 31));
        day->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        Input = new QPushButton(frame_2);
        Input->setObjectName("Input");
        Input->setGeometry(QRect(150, 540, 80, 31));
        Input->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Search = new QPushButton(frame_2);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(430, 540, 91, 31));
        Search->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton->setGeometry(QRect(740, 540, 81, 31));
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
        widget = new QWidget(frame_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 230, 721, 301));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(182, 182, 182, 100);\n"
"border-radius:12px;"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(970, 10, 20, 20));
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

        retranslateUi(dietRecord);

        QMetaObject::connectSlotsByName(dietRecord);
    } // setupUi

    void retranslateUi(QWidget *dietRecord)
    {
        dietRecord->setWindowTitle(QCoreApplication::translate("dietRecord", "Form", nullptr));
        resultTextEdit->setPlaceholderText(QCoreApplication::translate("dietRecord", "\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        Title->setText(QCoreApplication::translate("dietRecord", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; color:#ededed;\">Diet Record</span></p></body></html>", nullptr));
        kaluli->setPlaceholderText(QCoreApplication::translate("dietRecord", "\345\215\241\350\267\257\351\207\214", nullptr));
        id->setPlaceholderText(QCoreApplication::translate("dietRecord", "\344\270\273\351\243\237\347\247\215\347\261\273", nullptr));
        day->setPlaceholderText(QCoreApplication::translate("dietRecord", "\346\227\245\346\234\237", nullptr));
        Input->setText(QCoreApplication::translate("dietRecord", "\345\275\225\345\205\245", nullptr));
        Search->setText(QCoreApplication::translate("dietRecord", "\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("dietRecord", "\345\217\257\350\247\206\345\214\226", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dietRecord", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dietRecord: public Ui_dietRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIETRECORD_H
