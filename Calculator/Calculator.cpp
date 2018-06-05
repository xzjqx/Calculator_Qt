#include "Calculator.h"
#include <QStack>
#include <QDebug>
#include <QException>

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}



QString expr, val, op, val_tmp;
double value, num;
bool isValue, isExcept, isSingle;
QStack<double> numStack;
QStack<QString> opStack;

void Calculator::init() {
	expr = ""; val = "0"; op = "+"; val_tmp = "";
	value = 0; num = 0;
	isValue = true; isExcept = false; isSingle = false;
	while (!numStack.isEmpty()) numStack.pop();
	while (!opStack.isEmpty()) opStack.pop();
	ui.result->setAlignment(Qt::AlignRight);
	ui.expression->setAlignment(Qt::AlignRight);
	ui.expression->setText(expr);
	ui.result->setText(val);
}

void Calculator::getValue() {
	if (isExcept == true) init();
	if (isValue == false || val == "0" || isSingle == true)
		val = "";
	if (isSingle == true) {
		val_tmp = "";
		ui.expression->setText(expr);
	}
	isValue = true; isSingle = false;
	QPushButton* btn = qobject_cast<QPushButton*>(sender());
	val = val + btn->text();
	ui.result->setText(val);
}

double isZero(double v) {
	if (v == 0)
		throw v;
	return v;
}

double isNeg(double v) {
	if (v < 0)
		throw v;
	return v;
}

void isStackEmpty() {
	if (opStack.isEmpty() || numStack.isEmpty())
		throw 1;
}

void Calculator::getExpr() {
	if (isExcept == true) return;
	QPushButton* btn = qobject_cast<QPushButton*>(sender());
	QString text = btn->text();
	if (isValue == true) {
		value = val.toDouble();
	}
	if (text.length() == 1) {
		if (isSingle == true) {
			expr = expr + val_tmp;
			val_tmp = "";
		}
		if (text == "(") {
			numStack.push(num);
			opStack.push(op);
			num = 0;
			op = "+";
			if (isValue == false) {
				value = 0;
				val = "0";
			}
			expr = expr + "(";
			ui.expression->setText(expr);
		}
		else {
			if (op == "+") {
				value = num + value;
			}
			else if (op == "-") {
				value = num - value;
			}
			else if (op == "x") {
				value = num * value;
			}
			else if (op == "/") {
				try {
					value = isZero(value);
					value = num / value;
				}
				catch (double) {
					init();
					isExcept = true;
					ui.result->setText("Cannot Divide by zero");
				}
			}
			if (text == ")") {
				try {
					isStackEmpty();
					op = opStack.pop();
					num = numStack.pop();
					if (isValue == true)
						expr = expr + val + text;
					else
						expr = expr + text;
				}
				catch (int) {
					init();
					isExcept = true;
					ui.result->setText("\")\" cannot be alone");
				}
			}
			else {
				op = text;
				num = value;
				if (isValue == false)
					expr = expr + text;
				else if (isExcept == false)
					expr = expr + val + text;
			}
			
			ui.expression->setText(expr);
			isValue = false;
		}
		isSingle = false;
	}
	else {
		if (isSingle == false) val_tmp = val;
		if (text == "sqrt") {
			try {
				value = isNeg(value);
				value = sqrt(value);
				val_tmp = "sqrt(" + val_tmp + ")";
			}
			catch (double) {
				init();
				isExcept = true;
				ui.result->setText("Invalid input");
			}
		}
		else if (text == "square") {
			value = value * value;
			val_tmp = "sqr(" + val_tmp + ")";
		}
		else if (text == "+-") {
			value = -value;
			val_tmp = "negate(" + val_tmp + ")";
		}
		else if (text == "1/x") {
			value = 1 / value;
			val_tmp = "1/(" + val_tmp + ")";
		}
		if (isExcept == false)
			ui.expression->setText(expr+val_tmp);
		else 
			ui.expression->setText("");
		isValue = false;
		isSingle = true;
	}
	if(isExcept == false)
		ui.result->setText(QString::number(value));
}

void Calculator::clear() {
	init();
}

void Calculator::del() {
	int len = val.length();
	if (isValue == true) {
		val = val.left(len - 1);
		ui.result->setText(val);
	}
	if (isExcept == true)
		init();
}

void Calculator::equal() {
	if (expr == "" || isExcept == true) return;
	if (isValue == true)
		value = val.toDouble();
	if (op == "+") {
		value = num + value;
	}
	else if (op == "-") {
		value = num - value;
	}
	else if (op == "x") {
		value = num * value;
	}
	else if (op == "/") {
		try {
			value = isZero(value);
			value = num / value;
		}
		catch (double) {
			init();
			isExcept = true;
			ui.result->setText("Cannot Divide by zero");
		}
	}
	expr = "";
	num = 0;
	op = "+";
	isValue = false;
	val = QString::number(value);
	ui.expression->setText(expr);
	if (isExcept == false)
		ui.result->setText(val);
}