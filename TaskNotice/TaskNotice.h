#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskNotice.h"

class TaskNotice : public QMainWindow
{
	Q_OBJECT

public:
	TaskNotice(QWidget *parent = Q_NULLPTR);

private:
	Ui::TaskNoticeClass ui;
};
