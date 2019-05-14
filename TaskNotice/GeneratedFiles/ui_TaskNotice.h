/********************************************************************************
** Form generated from reading UI file 'TaskNotice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKNOTICE_H
#define UI_TASKNOTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskNoticeClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskNoticeClass)
    {
        if (TaskNoticeClass->objectName().isEmpty())
            TaskNoticeClass->setObjectName(QStringLiteral("TaskNoticeClass"));
        TaskNoticeClass->resize(1666, 1064);
        QIcon icon;
        icon.addFile(QStringLiteral(":/TaskNotice/res/alarm.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskNoticeClass->setWindowIcon(icon);
        centralWidget = new QWidget(TaskNoticeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TaskNoticeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskNoticeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1666, 37));
        TaskNoticeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskNoticeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TaskNoticeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TaskNoticeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TaskNoticeClass->setStatusBar(statusBar);

        retranslateUi(TaskNoticeClass);

        QMetaObject::connectSlotsByName(TaskNoticeClass);
    } // setupUi

    void retranslateUi(QMainWindow *TaskNoticeClass)
    {
        TaskNoticeClass->setWindowTitle(QApplication::translate("TaskNoticeClass", "TaskNotice", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskNoticeClass: public Ui_TaskNoticeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKNOTICE_H
