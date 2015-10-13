/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_7;
    QLabel *label;
    QPushButton *pb02;
    QPushButton *pb11;
    QPushButton *pb20;
    QLabel *label_6;
    QPushButton *pb01;
    QPushButton *pb22;
    QLabel *label_4;
    QPushButton *pb00;
    QPushButton *pb21;
    QPushButton *pb12;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pb10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(660, 580);
        GameWindow->setStyleSheet(QStringLiteral("border-image : none;"));
        centralWidget = new QWidget(GameWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 110, 171, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("border-image : none;\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 140, 301, 301));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Game-resources/Image-files/tic-tac-toe.jpg);"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../git/tic-tac-toe/Tic-tac-toe/image-files/tic-tac-toe.jpg")));
        pb02 = new QPushButton(centralWidget);
        pb02->setObjectName(QStringLiteral("pb02"));
        pb02->setGeometry(QRect(390, 150, 71, 81));
        pb02->setStyleSheet(QStringLiteral("border-image : none;"));
        pb11 = new QPushButton(centralWidget);
        pb11->setObjectName(QStringLiteral("pb11"));
        pb11->setGeometry(QRect(290, 250, 71, 81));
        pb11->setStyleSheet(QStringLiteral("border-image : none;"));
        pb20 = new QPushButton(centralWidget);
        pb20->setObjectName(QStringLiteral("pb20"));
        pb20->setGeometry(QRect(190, 350, 71, 81));
        pb20->setStyleSheet(QStringLiteral("border-image : none;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 50, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Zekton"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("color : rgb(16, 162, 6);\n"
"border-image : none;"));
        label_6->setTextFormat(Qt::AutoText);
        pb01 = new QPushButton(centralWidget);
        pb01->setObjectName(QStringLiteral("pb01"));
        pb01->setGeometry(QRect(290, 150, 71, 81));
        pb01->setStyleSheet(QStringLiteral("border-image : none;"));
        pb22 = new QPushButton(centralWidget);
        pb22->setObjectName(QStringLiteral("pb22"));
        pb22->setGeometry(QRect(390, 350, 71, 81));
        pb22->setStyleSheet(QStringLiteral("border-image : none;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 490, 151, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("border-image : none"));
        pb00 = new QPushButton(centralWidget);
        pb00->setObjectName(QStringLiteral("pb00"));
        pb00->setGeometry(QRect(190, 150, 71, 81));
        pb00->setStyleSheet(QStringLiteral("border-image : none;"));
        pb21 = new QPushButton(centralWidget);
        pb21->setObjectName(QStringLiteral("pb21"));
        pb21->setGeometry(QRect(290, 350, 71, 81));
        pb21->setStyleSheet(QStringLiteral("border-image : none;"));
        pb12 = new QPushButton(centralWidget);
        pb12->setObjectName(QStringLiteral("pb12"));
        pb12->setGeometry(QRect(390, 250, 71, 81));
        pb12->setStyleSheet(QStringLiteral("border-image : none;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 0, 291, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Zekton"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("border-image : none;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(490, 470, 101, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("border-image : none"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 50, 121, 41));
        label_5->setFont(font1);
        label_5->setMouseTracking(false);
        label_5->setStyleSheet(QLatin1String("color : rgb(21, 5, 255);\n"
"background-color : none;\n"
"border-image : none"));
        label_5->setTextFormat(Qt::AutoText);
        pb10 = new QPushButton(centralWidget);
        pb10->setObjectName(QStringLiteral("pb10"));
        pb10->setGeometry(QRect(190, 250, 71, 81));
        pb10->setStyleSheet(QStringLiteral("border-image : none;"));
        GameWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 25));
        GameWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameWindow->setStatusBar(statusBar);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "GameWindow", 0));
        label_7->setText(QApplication::translate("GameWindow", "Player A's turn", 0));
        label->setText(QString());
        pb02->setText(QString());
        pb11->setText(QString());
        pb20->setText(QString());
        label_6->setText(QApplication::translate("GameWindow", "Player B", 0));
        pb01->setText(QString());
        pb22->setText(QString());
        label_4->setText(QApplication::translate("GameWindow", "Sourabh Shrivastava", 0));
        pb00->setText(QString());
        pb21->setText(QString());
        pb12->setText(QString());
        label_2->setText(QApplication::translate("GameWindow", "Tic-Tac-Toe", 0));
        label_3->setText(QApplication::translate("GameWindow", "Developed By:", 0));
        label_5->setText(QApplication::translate("GameWindow", "Player A", 0));
        pb10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
