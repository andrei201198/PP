#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow() {
	setWindowTitle(tr("My Qt Window"));
	setFixedSize(900, 500);
	textLabel = new QLabel(this);
	textLabel->setGeometry(20, 5, 850, 120);
	textLabel->setFont(QFont("Courier", 72, QFont::Bold));
	textLabel->setText("My test <i>HTML</i>");
}
