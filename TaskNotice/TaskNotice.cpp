#include "TaskNotice.h"

TaskNotice::TaskNotice(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowState(Qt::WindowMaximized);		// ���ڳ�ʼ���
}
