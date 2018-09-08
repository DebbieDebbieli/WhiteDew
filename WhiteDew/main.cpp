#include "stdafx.h"
#include "WhiteDew.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CWhiteDew w;
	w.setWindowTitle("WhiteDew");
	w.show();
	return a.exec();
}
