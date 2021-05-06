/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button2;
    QPushButton *Divide;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Button5;
    QPushButton *Button1;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QLineEdit *Display;
    QPushButton *Equals;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(309, 377);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #7FFFD4\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setFont(font);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(36);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #20B2AA;\n"
"	border: 1px;\n"
"	padding: 5px;	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #008080;\n"
"	border: 1px;\n"
"	padding: 5px;\n"
"	\n"
"}"));

        gridLayout->addWidget(Equals, 1, 4, 4, 1);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 309, 20));
        Calculator->setMenuBar(menubar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
