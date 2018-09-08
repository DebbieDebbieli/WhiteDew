#include "stdafx.h"
#include "WhiteDew.h"

CWhiteDew::CWhiteDew(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initMenuBar();
}

CWhiteDew::~CWhiteDew()
{

}

void CWhiteDew::initMenuBar()
{
	QMenuBar* pMenuBar = ui.menuBar;
	pMenuBar->addMenu(tr("File"));
	
	pMenuBar->addMenu(tr("View"));

	pMenuBar->addMenu(tr("Create"));
}

void CWhiteDew::initToolBar()
{
	QToolBar* pToolBar = ui.mainToolBar;
}
