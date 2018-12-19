#ifndef TBOOK_H
#define TBOOK_H
#include <QString>
class TBook
{
	public:
		QString name;
		QString author;
		int count;
		TBook(QString _name, QString _author, int _count);
};
#endif
