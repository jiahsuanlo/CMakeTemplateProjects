#include "mainwindow.h"
MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton, SIGNAL(clicked()),
		this, SLOT(OnPushbuttonClick()));
	connect(ui.pushButton1, SIGNAL(clicked()),
		this, SLOT(OnPushbuttonClick1()));	
}

void MainWindow::OnPushbuttonClick()
{
	std::cout << "Test\n";
	
}

void MainWindow::OnPushbuttonClick1()
{
	std::cout << "Test Button1!\n";
}
