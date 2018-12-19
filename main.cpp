#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();
	mainWin.show();

	MainWindow w;
	w.show();
	return app.exec();
}
