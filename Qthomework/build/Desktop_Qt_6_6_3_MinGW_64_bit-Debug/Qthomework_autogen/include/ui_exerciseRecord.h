/********************************************************************************
** Form generated from reading UI file 'exerciseRecord.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISERECORD_H
#define UI_EXERCISERECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exerciseRecord
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLineEdit *id;
    QLineEdit *time;
    QLineEdit *kaluli;
    QLineEdit *day;
    QWidget *chartWidget;
    QPushButton *Input;
    QPushButton *Search;
    QWidget *chartWidget2;
    QTextEdit *resultsTextEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *Title;
    QPushButton *pushButton_3;

    void setupUi(QWidget *exerciseRecord)
    {
        if (exerciseRecord->objectName().isEmpty())
            exerciseRecord->setObjectName("exerciseRecord");
        exerciseRecord->resize(1060, 593);
        exerciseRecord->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QFrame#frame\n"
"{\n"
"    border-radius: 13px;\n"
"	\n"
"	background-image: url(:/gxc/1433.jpg);\n"
"}\n"
"#frame_2\n"
"{\n"
"  border-radius: 13px;\n"
"background-color: rgba(100, 102, 102, 120);\n"
"}\n"
"\n"
""));
        frame = new QFrame(exerciseRecord);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 941, 611));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 971, 871));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        id = new QLineEdit(frame_2);
        id->setObjectName("id");
        id->setGeometry(QRect(60, 139, 171, 31));
        id->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        time = new QLineEdit(frame_2);
        time->setObjectName("time");
        time->setGeometry(QRect(260, 139, 171, 31));
        time->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        kaluli = new QLineEdit(frame_2);
        kaluli->setObjectName("kaluli");
        kaluli->setGeometry(QRect(470, 139, 171, 31));
        kaluli->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        day = new QLineEdit(frame_2);
        day->setObjectName("day");
        day->setGeometry(QRect(680, 139, 171, 31));
        day->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        chartWidget = new QWidget(frame_2);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setGeometry(QRect(50, 260, 351, 251));
        chartWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(182, 182, 182, 100);\n"
"border-radius :15px;"));
        Input = new QPushButton(frame_2);
        Input->setObjectName("Input");
        Input->setGeometry(QRect(170, 540, 80, 31));
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
        Search->setGeometry(QRect(310, 540, 80, 31));
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
        chartWidget2 = new QWidget(frame_2);
        chartWidget2->setObjectName("chartWidget2");
        chartWidget2->setGeometry(QRect(530, 270, 391, 251));
        chartWidget2->setStyleSheet(QString::fromUtf8("background-color: rgba(182, 182, 182, 100);\n"
"border-radius :15px;"));
        resultsTextEdit = new QTextEdit(frame_2);
        resultsTextEdit->setObjectName("resultsTextEdit");
        resultsTextEdit->setGeometry(QRect(400, 200, 141, 41));
        resultsTextEdit->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 600 10pt \"\346\233\264\347\272\261\351\273\221\344\275\223 UI SC SemiBold\";\n"
"border:none;\n"
"border-bottom:1px solid rgba(255, 255, 255,200)\n"
""));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(680, 540, 81, 31));
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
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 540, 81, 31));
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
        Title = new QLabel(frame_2);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(290, 30, 391, 71));
        Title->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Poor Richard\";\n"
"color: rgba(140, 140, 140, 110);\n"
"\n"
"background:transparent;\n"
""));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(850, 20, 21, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(exerciseRecord);

        QMetaObject::connectSlotsByName(exerciseRecord);
    } // setupUi

    void retranslateUi(QWidget *exerciseRecord)
    {
        exerciseRecord->setWindowTitle(QCoreApplication::translate("exerciseRecord", "Form", nullptr));
        id->setPlaceholderText(QCoreApplication::translate("exerciseRecord", "\350\277\220\345\212\250\347\261\273\345\236\213", nullptr));
        time->setPlaceholderText(QCoreApplication::translate("exerciseRecord", "\350\277\220\345\212\250\346\227\266\351\225\277", nullptr));
        kaluli->setPlaceholderText(QCoreApplication::translate("exerciseRecord", "\346\266\210\350\200\227\345\215\241\350\267\257\351\207\214\346\225\260", nullptr));
        day->setPlaceholderText(QCoreApplication::translate("exerciseRecord", "\346\227\245\346\234\237", nullptr));
        Input->setText(QCoreApplication::translate("exerciseRecord", "\345\275\225\345\205\245", nullptr));
        Search->setText(QCoreApplication::translate("exerciseRecord", "\346\237\245\350\257\242", nullptr));
        resultsTextEdit->setPlaceholderText(QCoreApplication::translate("exerciseRecord", "\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        pushButton_2->setText(QCoreApplication::translate("exerciseRecord", "\345\217\257\350\247\206\345\214\2262", nullptr));
        pushButton->setText(QCoreApplication::translate("exerciseRecord", "\345\217\257\350\247\206\345\214\226", nullptr));
        Title->setText(QCoreApplication::translate("exerciseRecord", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; color:#d7d7d7;\">Exercise record</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("exerciseRecord", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exerciseRecord: public Ui_exerciseRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISERECORD_H
