#include <QtGui>
#include "mainwindow.h"
#include "tcar.h"

MainWindow::MainWindow() {
	setWindowTitle(tr("TCAR"));
	setFixedSize(320, 300);
	
	TCar car(100, 200);
	
	QString x;
	x.setNum(car.x);
	
	QString p;
	p.setNum(car.p);
	
	QString v;
	v.setNum(car.v);
	
	xCarLabel = new QLabel(this);
	xCarLabel->setGeometry(20, 5, 300, 120);
	xCarLabel->setFont(QFont("Courier", 20, QFont::Normal));
	xCarLabel->setText("Car x = " + x);
	
	pCarLabel = new QLabel(this);
	pCarLabel->setGeometry(20, 40, 300, 120);
	pCarLabel->setFont(QFont("Courier", 20, QFont::Normal));
	pCarLabel->setText("Car p = " + p);
	
	vCarLabel = new QLabel(this);
	vCarLabel->setGeometry(20, 75, 300, 120);
	vCarLabel->setFont(QFont("Courier", 20, QFont::Normal));
	vCarLabel->setText("Car v = " + v);
}
