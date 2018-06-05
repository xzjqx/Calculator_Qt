#include "Calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Calculator w;
	w.init();
	w.show();
	return a.exec();
}
