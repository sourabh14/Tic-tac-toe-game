/********************************************************************************
** Form generated from reading UI file 'menuform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUFORM_H
#define UI_MENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuForm
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;
    QLabel *label_5;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(641, 571);
        MenuForm->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(MenuForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 510, 101, 21));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("border-image : none"));
        label_2 = new QLabel(MenuForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 20, 291, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Zekton"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("border-image : none;"));
        label_4 = new QLabel(MenuForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 530, 151, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("border-image : none"));
        commandLinkButton_2 = new QCommandLinkButton(MenuForm);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(40, 500, 141, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Mono"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        commandLinkButton_2->setFont(font2);
        commandLinkButton_2->setStyleSheet(QStringLiteral("border-image:none"));
        commandLinkButton_3 = new QCommandLinkButton(MenuForm);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(210, 320, 241, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu Mono"));
        font3.setPointSize(20);
        commandLinkButton_3->setFont(font3);
        commandLinkButton_3->setStyleSheet(QStringLiteral("border-image : none;"));
        commandLinkButton = new QCommandLinkButton(MenuForm);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(200, 160, 271, 51));
        commandLinkButton->setFont(font3);
        commandLinkButton->setStyleSheet(QStringLiteral("border-image : none;"));
        commandLinkButton_4 = new QCommandLinkButton(MenuForm);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(120, 230, 191, 41));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        commandLinkButton_4->setFont(font4);
        commandLinkButton_4->setStyleSheet(QStringLiteral("border-image : none;"));
        commandLinkButton_5 = new QCommandLinkButton(MenuForm);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(380, 230, 187, 41));
        commandLinkButton_5->setFont(font4);
        commandLinkButton_5->setStyleSheet(QStringLiteral("border-image : none;"));
        label_5 = new QLabel(MenuForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 110, 281, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("border-image : none"));

        retranslateUi(MenuForm);

        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "Form", 0));
        label_3->setText(QApplication::translate("MenuForm", "Developed By:", 0));
        label_2->setText(QApplication::translate("MenuForm", "Tic-Tac-Toe", 0));
        label_4->setText(QApplication::translate("MenuForm", "Sourabh Shrivastava", 0));
        commandLinkButton_2->setText(QApplication::translate("MenuForm", "Quit Game", 0));
        commandLinkButton_3->setText(QApplication::translate("MenuForm", "Two player game", 0));
        commandLinkButton->setText(QApplication::translate("MenuForm", "Play V/S Computer", 0));
        commandLinkButton_4->setText(QApplication::translate("MenuForm", "Computer plays first", 0));
        commandLinkButton_5->setText(QApplication::translate("MenuForm", "Player plays first", 0));
        label_5->setText(QApplication::translate("MenuForm", "This is an unbeatable tic-tac-toe game", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUFORM_H
