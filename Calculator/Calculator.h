#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"

class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget *parent = Q_NULLPTR);
	void init();

private:
	Ui::CalculatorClass ui;

private slots:
	void getValue();
	void getExpr();
	void clear();
	void del();
	void equal();
};
