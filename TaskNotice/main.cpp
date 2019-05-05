#include "TaskNotice.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TaskNotice w;
	w.show();
	return a.exec();
}
