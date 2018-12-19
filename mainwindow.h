#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE
class MainWindow : public QMainWindow {
	Q_OBJECT
	public:
		MainWindow();
	private:
		QLabel *textLabel1, *textLabel2;
};
#endif
