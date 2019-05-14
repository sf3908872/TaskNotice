#include "TaskNotice.h"

TaskNotice::TaskNotice(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowState(Qt::WindowMaximized);		// 窗口初始最大化
}
