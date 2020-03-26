#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <iostream>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = Q_NULLPTR);

public slots:
	void OnPushbuttonClick();
	void OnPushbuttonClick1();

private:
	Ui::MainWindowClass ui;
};
