#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow() {
	setWindowTitle(tr("Zadanie 2"));
	setFixedSize(320, 200);
	
	int redColor = 255;
	QString strRedColor;
	strRedColor.setNum(redColor);
	
	int greenColor = 120;
	QString strGreenColor;
	strGreenColor.setNum(greenColor);
	
	textLabel1 = new QLabel(this);
	textLabel1->setGeometry(20, 5, 300, 120);
	textLabel1->setFont(QFont("Courier", 20, QFont::Normal));
	textLabel1->setText("Red Color = " + strRedColor);
	
	textLabel2 = new QLabel(this);
	textLabel2->setGeometry(20, 5, 300, 200);
	textLabel2->setFont(QFont("Courier", 20, QFont::Normal));
	textLabel2->setText("Green Color = " + strGreenColor);
}
