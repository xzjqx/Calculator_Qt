#include "Calculator.h"
#include <QStack>
#include <QDebug>
#include <QException>

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

QString expr, val, val_tmp;
double value;
bool isValue, isExcept, isSingle;
QStack<double> operandStack;
QStack<QString> operatorStack;

void Calculator::init() {
	expr = ""; val = "0"; val_tmp = "";
	value = 0;
	isValue = true; isExcept = false; isSingle = false;
	while (!operandStack.isEmpty()) operandStack.pop();
	while (!operatorStack.isEmpty()) operatorStack.pop();
	operatorStack.push("(");
	ui.result->setAlignment(Qt::AlignRight);
	ui.expression->setAlignment(Qt::AlignRight);
	ui.expression->setText(expr);
	ui.result->setText(val);
}

void Calculator::getValue() {
	if (isExcept == true) clear();
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

double Calculator::processAnOperator(QStack<double> &operandStack, QStack<QString> &operatorStack) {
	QString op = operatorStack.pop();
	double num;
	double a = operandStack.pop();
	double b = operandStack.pop();
	qDebug() << "a" << a << "b" << b;
	if(op == "+")
		num = a + b;
	else if(op == "-")
		num = b - a;
	else if(op == "x")
		num = a * b;
	else {
		try {
			a = isZero(a);
			num = b / a;
		}
		catch (double) {
			clear();
			isExcept = true;
			ui.result->setText("Invalid input");
		}
	}
	operandStack.push(num);
	return num;
}

void Calculator::getExpr() {
	if (isExcept == true) return;
	QPushButton* btn = qobject_cast<QPushButton*>(sender());
	QString text = btn->text();
	if (isValue == true) {
		value = val.toDouble();
		operandStack.push(value);
	}
	if (text.length() == 1) {
		if (isSingle == true) {
			expr = expr + val_tmp + text;
			val_tmp = "";
		}
		else if (isValue == false || text == "(") {
			expr = expr + text;
		}
		else
			expr = expr + val + text;

		if (text == "(") {
			if (isValue == false) {
				value = 0;
				val = "0";
			}
			isValue = true;
			operatorStack.push(text);
		}
		else if (text == ")") {
			while (operatorStack.top() != "(") {
				value = processAnOperator(operandStack, operatorStack);
			}
			operatorStack.pop();
			isValue = false;
			if (isExcept == false)
				ui.result->setText(QString::number(value));
		}
		else if (text == "+" || text == '-') {
			while (operatorStack.top() != '(') {
				value = processAnOperator(operandStack, operatorStack);
			}
			operatorStack.push(text);
			isValue = false;
			if (isExcept == false)
				ui.result->setText(QString::number(value));
		}
		else if (text == "x" || text == "/") {
			QString op_t = operatorStack.top();
			while (op_t != "(" && op_t != "+" && op_t != "-") {
				value = processAnOperator(operandStack, operatorStack);
				op_t = operatorStack.top();
			}
			operatorStack.push(text);
			isValue = false;
		}
		ui.expression->setText(expr);
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
		operandStack.pop();
		operandStack.push(value);
		if (isExcept == false)
			ui.result->setText(QString::number(value));
	}
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
		clear();
}

void Calculator::equal() {
	if (expr == "" || isExcept == true) return;
	if (isValue == true) {
		value = val.toDouble();
		operandStack.push(value);
	}
	while (operatorStack.top() != '(') {
		value = processAnOperator(operandStack, operatorStack);
	}
	expr = "";
	isValue = false;
	val = QString::number(value);
	ui.expression->setText(expr);
	if (isExcept == false)
		ui.result->setText(val);
}