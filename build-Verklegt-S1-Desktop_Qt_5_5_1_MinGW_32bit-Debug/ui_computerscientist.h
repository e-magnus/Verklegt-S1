/********************************************************************************
** Form generated from reading UI file 'computerscientist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERSCIENTIST_H
#define UI_COMPUTERSCIENTIST_H

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

class Ui_ComputerScientist
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ComputerScientist)
    {
        if (ComputerScientist->objectName().isEmpty())
            ComputerScientist->setObjectName(QStringLiteral("ComputerScientist"));
        ComputerScientist->resize(400, 300);
        menuBar = new QMenuBar(ComputerScientist);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ComputerScientist->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ComputerScientist);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ComputerScientist->addToolBar(mainToolBar);
        centralWidget = new QWidget(ComputerScientist);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ComputerScientist->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ComputerScientist);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ComputerScientist->setStatusBar(statusBar);

        retranslateUi(ComputerScientist);

        QMetaObject::connectSlotsByName(ComputerScientist);
    } // setupUi

    void retranslateUi(QMainWindow *ComputerScientist)
    {
        ComputerScientist->setWindowTitle(QApplication::translate("ComputerScientist", "ComputerScientist", 0));
    } // retranslateUi

};

namespace Ui {
    class ComputerScientist: public Ui_ComputerScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERSCIENTIST_H
