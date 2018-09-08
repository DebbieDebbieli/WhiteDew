/********************************************************************************
** Form generated from reading UI file 'WhiteDew.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHITEDEW_H
#define UI_WHITEDEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWhiteDewClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CWhiteDewClass)
    {
        if (CWhiteDewClass->objectName().isEmpty())
            CWhiteDewClass->setObjectName(QStringLiteral("CWhiteDewClass"));
        CWhiteDewClass->resize(600, 400);
        menuBar = new QMenuBar(CWhiteDewClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CWhiteDewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CWhiteDewClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CWhiteDewClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CWhiteDewClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CWhiteDewClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CWhiteDewClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CWhiteDewClass->setStatusBar(statusBar);

        retranslateUi(CWhiteDewClass);

        QMetaObject::connectSlotsByName(CWhiteDewClass);
    } // setupUi

    void retranslateUi(QMainWindow *CWhiteDewClass)
    {
        CWhiteDewClass->setWindowTitle(QApplication::translate("CWhiteDewClass", "CWhiteDew", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CWhiteDewClass: public Ui_CWhiteDewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHITEDEW_H
