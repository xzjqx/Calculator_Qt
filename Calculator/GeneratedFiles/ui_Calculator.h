/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *num_5;
    QPushButton *reciprocal;
    QPushButton *mult;
    QPushButton *num_8;
    QPushButton *div;
    QPushButton *equal;
    QPushButton *leftParenthesis;
    QPushButton *clear;
    QPushButton *dot;
    QPushButton *square;
    QPushButton *num_0;
    QPushButton *rightParenthesis;
    QPushButton *num_6;
    QPushButton *sub;
    QPushButton *power;
    QPushButton *num_2;
    QPushButton *add;
    QPushButton *num_1;
    QPushButton *num_4;
    QLabel *expression;
    QPushButton *delete_2;
    QPushButton *num_3;
    QPushButton *num_9;
    QPushButton *minus;
    QPushButton *num_7;
    QLabel *result;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(440, 560);
        CalculatorClass->setMinimumSize(QSize(440, 560));
        CalculatorClass->setMaximumSize(QSize(440, 560));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(483, 604));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 442, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        num_5 = new QPushButton(gridLayoutWidget);
        num_5->setObjectName(QStringLiteral("num_5"));
        num_5->setMinimumSize(QSize(110, 70));
        num_5->setMaximumSize(QSize(110, 70));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(16);
        num_5->setFont(font);
        num_5->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_5, 5, 1, 1, 1);

        reciprocal = new QPushButton(gridLayoutWidget);
        reciprocal->setObjectName(QStringLiteral("reciprocal"));
        reciprocal->setMinimumSize(QSize(110, 70));
        reciprocal->setMaximumSize(QSize(110, 70));
        reciprocal->setFont(font);

        gridLayout->addWidget(reciprocal, 2, 3, 1, 1);

        mult = new QPushButton(gridLayoutWidget);
        mult->setObjectName(QStringLiteral("mult"));
        mult->setMinimumSize(QSize(110, 70));
        mult->setMaximumSize(QSize(110, 70));
        mult->setFont(font);

        gridLayout->addWidget(mult, 4, 3, 1, 1);

        num_8 = new QPushButton(gridLayoutWidget);
        num_8->setObjectName(QStringLiteral("num_8"));
        num_8->setMinimumSize(QSize(110, 70));
        num_8->setMaximumSize(QSize(110, 70));
        num_8->setFont(font);
        num_8->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_8, 4, 1, 1, 1);

        div = new QPushButton(gridLayoutWidget);
        div->setObjectName(QStringLiteral("div"));
        div->setMinimumSize(QSize(110, 70));
        div->setMaximumSize(QSize(110, 70));
        div->setFont(font);

        gridLayout->addWidget(div, 3, 3, 1, 1);

        equal = new QPushButton(gridLayoutWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setMinimumSize(QSize(110, 70));
        equal->setMaximumSize(QSize(110, 70));
        equal->setFont(font);

        gridLayout->addWidget(equal, 8, 3, 1, 1);

        leftParenthesis = new QPushButton(gridLayoutWidget);
        leftParenthesis->setObjectName(QStringLiteral("leftParenthesis"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftParenthesis->sizePolicy().hasHeightForWidth());
        leftParenthesis->setSizePolicy(sizePolicy);
        leftParenthesis->setMinimumSize(QSize(110, 70));
        leftParenthesis->setMaximumSize(QSize(110, 70));
        leftParenthesis->setFont(font);

        gridLayout->addWidget(leftParenthesis, 2, 0, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setMinimumSize(QSize(110, 70));
        clear->setMaximumSize(QSize(110, 70));
        clear->setFont(font);

        gridLayout->addWidget(clear, 3, 1, 1, 1);

        dot = new QPushButton(gridLayoutWidget);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setMinimumSize(QSize(110, 70));
        dot->setMaximumSize(QSize(110, 70));
        dot->setFont(font);

        gridLayout->addWidget(dot, 8, 2, 1, 1);

        square = new QPushButton(gridLayoutWidget);
        square->setObjectName(QStringLiteral("square"));
        square->setMinimumSize(QSize(110, 70));
        square->setMaximumSize(QSize(110, 70));
        square->setFont(font);

        gridLayout->addWidget(square, 2, 1, 1, 1);

        num_0 = new QPushButton(gridLayoutWidget);
        num_0->setObjectName(QStringLiteral("num_0"));
        num_0->setMinimumSize(QSize(110, 70));
        num_0->setMaximumSize(QSize(110, 70));
        num_0->setFont(font);
        num_0->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_0, 8, 1, 1, 1);

        rightParenthesis = new QPushButton(gridLayoutWidget);
        rightParenthesis->setObjectName(QStringLiteral("rightParenthesis"));
        sizePolicy.setHeightForWidth(rightParenthesis->sizePolicy().hasHeightForWidth());
        rightParenthesis->setSizePolicy(sizePolicy);
        rightParenthesis->setMinimumSize(QSize(110, 70));
        rightParenthesis->setMaximumSize(QSize(110, 70));
        rightParenthesis->setFont(font);

        gridLayout->addWidget(rightParenthesis, 3, 0, 1, 1);

        num_6 = new QPushButton(gridLayoutWidget);
        num_6->setObjectName(QStringLiteral("num_6"));
        num_6->setMinimumSize(QSize(110, 70));
        num_6->setMaximumSize(QSize(110, 70));
        num_6->setFont(font);
        num_6->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_6, 5, 2, 1, 1);

        sub = new QPushButton(gridLayoutWidget);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setMinimumSize(QSize(110, 70));
        sub->setMaximumSize(QSize(110, 70));
        sub->setFont(font);

        gridLayout->addWidget(sub, 5, 3, 1, 1);

        power = new QPushButton(gridLayoutWidget);
        power->setObjectName(QStringLiteral("power"));
        power->setMinimumSize(QSize(110, 70));
        power->setMaximumSize(QSize(110, 70));
        power->setFont(font);

        gridLayout->addWidget(power, 2, 2, 1, 1);

        num_2 = new QPushButton(gridLayoutWidget);
        num_2->setObjectName(QStringLiteral("num_2"));
        num_2->setMinimumSize(QSize(110, 70));
        num_2->setMaximumSize(QSize(110, 70));
        num_2->setFont(font);
        num_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_2, 6, 1, 1, 1);

        add = new QPushButton(gridLayoutWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setMinimumSize(QSize(110, 70));
        add->setMaximumSize(QSize(110, 70));
        add->setFont(font);

        gridLayout->addWidget(add, 6, 3, 1, 1);

        num_1 = new QPushButton(gridLayoutWidget);
        num_1->setObjectName(QStringLiteral("num_1"));
        num_1->setMinimumSize(QSize(110, 70));
        num_1->setMaximumSize(QSize(110, 70));
        num_1->setFont(font);
        num_1->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_1, 6, 0, 1, 1);

        num_4 = new QPushButton(gridLayoutWidget);
        num_4->setObjectName(QStringLiteral("num_4"));
        num_4->setEnabled(true);
        sizePolicy.setHeightForWidth(num_4->sizePolicy().hasHeightForWidth());
        num_4->setSizePolicy(sizePolicy);
        num_4->setMinimumSize(QSize(110, 70));
        num_4->setMaximumSize(QSize(110, 70));
        num_4->setFont(font);
        num_4->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_4, 5, 0, 1, 1);

        expression = new QLabel(gridLayoutWidget);
        expression->setObjectName(QStringLiteral("expression"));
        expression->setMinimumSize(QSize(0, 30));
        expression->setMaximumSize(QSize(430, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(10);
        expression->setFont(font1);

        gridLayout->addWidget(expression, 0, 0, 1, 4);

        delete_2 = new QPushButton(gridLayoutWidget);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setMinimumSize(QSize(110, 70));
        delete_2->setMaximumSize(QSize(110, 70));
        delete_2->setFont(font);

        gridLayout->addWidget(delete_2, 3, 2, 1, 1);

        num_3 = new QPushButton(gridLayoutWidget);
        num_3->setObjectName(QStringLiteral("num_3"));
        num_3->setMinimumSize(QSize(110, 70));
        num_3->setMaximumSize(QSize(110, 70));
        num_3->setFont(font);
        num_3->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_3, 6, 2, 1, 1);

        num_9 = new QPushButton(gridLayoutWidget);
        num_9->setObjectName(QStringLiteral("num_9"));
        num_9->setMinimumSize(QSize(110, 70));
        num_9->setMaximumSize(QSize(110, 70));
        num_9->setFont(font);
        num_9->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_9, 4, 2, 1, 1);

        minus = new QPushButton(gridLayoutWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setMinimumSize(QSize(110, 70));
        minus->setMaximumSize(QSize(110, 70));
        minus->setFont(font);

        gridLayout->addWidget(minus, 8, 0, 1, 1);

        num_7 = new QPushButton(gridLayoutWidget);
        num_7->setObjectName(QStringLiteral("num_7"));
        sizePolicy.setHeightForWidth(num_7->sizePolicy().hasHeightForWidth());
        num_7->setSizePolicy(sizePolicy);
        num_7->setMinimumSize(QSize(110, 70));
        num_7->setMaximumSize(QSize(110, 70));
        num_7->setFont(font);
        num_7->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num_7, 4, 0, 1, 1);

        result = new QLabel(gridLayoutWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setMinimumSize(QSize(0, 80));
        result->setMaximumSize(QSize(430, 80));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei"));
        font2.setPointSize(28);
        result->setFont(font2);
        result->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(result, 1, 0, 1, 4);

        CalculatorClass->setCentralWidget(centralWidget);

        retranslateUi(CalculatorClass);
        QObject::connect(num_7, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_8, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_9, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_4, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_5, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_6, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_1, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_2, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_3, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(num_0, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(minus, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(dot, SIGNAL(clicked()), CalculatorClass, SLOT(getValue()));
        QObject::connect(square, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(power, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(reciprocal, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(div, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(mult, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(sub, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(add, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(clear, SIGNAL(clicked()), CalculatorClass, SLOT(clear()));
        QObject::connect(delete_2, SIGNAL(clicked()), CalculatorClass, SLOT(del()));
        QObject::connect(equal, SIGNAL(clicked()), CalculatorClass, SLOT(equal()));
        QObject::connect(leftParenthesis, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));
        QObject::connect(rightParenthesis, SIGNAL(clicked()), CalculatorClass, SLOT(getExpr()));

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", Q_NULLPTR));
        num_5->setText(QApplication::translate("CalculatorClass", "5", Q_NULLPTR));
        reciprocal->setText(QApplication::translate("CalculatorClass", "1/x", Q_NULLPTR));
        mult->setText(QApplication::translate("CalculatorClass", "x", Q_NULLPTR));
        num_8->setText(QApplication::translate("CalculatorClass", "8", Q_NULLPTR));
        div->setText(QApplication::translate("CalculatorClass", "/", Q_NULLPTR));
        equal->setText(QApplication::translate("CalculatorClass", "=", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        leftParenthesis->setWhatsThis(QApplication::translate("CalculatorClass", "<html><head/><body><p>(</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        leftParenthesis->setText(QApplication::translate("CalculatorClass", "(", Q_NULLPTR));
        clear->setText(QApplication::translate("CalculatorClass", "C", Q_NULLPTR));
        dot->setText(QApplication::translate("CalculatorClass", ".", Q_NULLPTR));
        square->setText(QApplication::translate("CalculatorClass", "sqrt", Q_NULLPTR));
        num_0->setText(QApplication::translate("CalculatorClass", "0", Q_NULLPTR));
        rightParenthesis->setText(QApplication::translate("CalculatorClass", ")", Q_NULLPTR));
        num_6->setText(QApplication::translate("CalculatorClass", "6", Q_NULLPTR));
        sub->setText(QApplication::translate("CalculatorClass", "+", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        power->setWhatsThis(QApplication::translate("CalculatorClass", "<html><head/><body><p><span style=\" font-size:14pt;\">x</span><span style=\" font-size:14pt; vertical-align:super;\">2</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        power->setText(QApplication::translate("CalculatorClass", "square", Q_NULLPTR));
        num_2->setText(QApplication::translate("CalculatorClass", "2", Q_NULLPTR));
        add->setText(QApplication::translate("CalculatorClass", "-", Q_NULLPTR));
        num_1->setText(QApplication::translate("CalculatorClass", "1", Q_NULLPTR));
        num_4->setText(QApplication::translate("CalculatorClass", "4", Q_NULLPTR));
        expression->setText(QApplication::translate("CalculatorClass", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        delete_2->setText(QApplication::translate("CalculatorClass", "<-", Q_NULLPTR));
        num_3->setText(QApplication::translate("CalculatorClass", "3", Q_NULLPTR));
        num_9->setText(QApplication::translate("CalculatorClass", "9", Q_NULLPTR));
        minus->setText(QApplication::translate("CalculatorClass", "+-", Q_NULLPTR));
        num_7->setText(QApplication::translate("CalculatorClass", "7", Q_NULLPTR));
        result->setText(QApplication::translate("CalculatorClass", "<html><head/><body><p align=\"right\"><span style=\" font-size:28pt;\">0</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
