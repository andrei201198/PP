#include <QtGui>
#include "mainwindow.h"
#include "troad.h"

MainWindow::MainWindow() {
	setWindowTitle(tr("TRoad"));
	setFixedSize(320, 200);
	
	TRoad road;
	road.length = 300;
	road.width = 3;
	
	QString roadLength;
	roadLength.setNum(road.length);
	
	QString roadWidth;
	roadWidth.setNum(road.width);
	
	lengthLabel = new QLabel(this);
	lengthLabel->setGeometry(20, 5, 300, 120);
	lengthLabel->setFont(QFont("Courier", 20, QFont::Normal));
	lengthLabel->setText("Road Length = " + roadLength);
	
	widthLabel = new QLabel(this);
	widthLabel->setGeometry(20, 5, 300, 200);
	widthLabel->setFont(QFont("Courier", 20, QFont::Normal));
	widthLabel->setText("Road Width = " + roadWidth);
}
