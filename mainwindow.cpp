#include <QtGui>
#include "mainwindow.h"
#include "tbook.h"
#include <string>

TBook book("book_1", "author_1", 999);

MainWindow::MainWindow() {
	setWindowTitle(tr("TBook"));
	setFixedSize(380, 150);
	
	nameLabel = new QLabel(this);
	nameLabel->setGeometry(20, 5, 300, 20);
	nameLabel->setFont(QFont("Times", 18, QFont::Normal));
	nameLabel->setText("Name = " + book.name);
	
	authorLabel = new QLabel(this);
	authorLabel->setGeometry(20, 40, 300, 20);
	authorLabel->setFont(QFont("Times", 18, QFont::Normal));
	authorLabel->setText("Author = " + book.author);
	
	countLabel = new QLabel(this);
	countLabel->setGeometry(20, 75, 300, 20);
	countLabel->setFont(QFont("Times", 18, QFont::Normal));
	QString count;
	count.setNum(book.count);
	countLabel->setText("Count = " + count);
	
}
