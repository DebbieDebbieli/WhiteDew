#ifndef WHITEDEW_H
#define WHITEDEW_H

#include <QtWidgets/QMainWindow>
#include "ui_WhiteDew.h"

class CWhiteDew : public QMainWindow
{
	Q_OBJECT

public:
	CWhiteDew(QWidget *parent = 0);
	~CWhiteDew();

protected:
	void initMenuBar();
	void initToolBar();
	
private:
	Ui::CWhiteDewClass ui;
};

#endif // WHITEDEW_H
