/********************************************************************************
** Form generated from reading UI file 'versus_computer_form.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSUS_COMPUTER_FORM_H
#define UI_VERSUS_COMPUTER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_versus_computer_form
{
public:
    QLabel *label_2;
    QPushButton *pb11;
    QPushButton *pb20;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_4;
    QPushButton *pb12;
    QPushButton *pb01;
    QPushButton *pb10;
    QPushButton *pb22;
    QPushButton *pb21;
    QLabel *label_5;
    QPushButton *pb02;
    QPushButton *pb00;
    QLabel *label_3;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *versus_computer_form)
    {
        if (versus_computer_form->objectName().isEmpty())
            versus_computer_form->setObjectName(QStringLiteral("versus_computer_form"));
        versus_computer_form->resize(633, 582);
        versus_computer_form->setStyleSheet(QStringLiteral("border-image: url(:/Game-resources/Image-files/widget.jpg);"));
        label_2 = new QLabel(versus_computer_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 291, 61));
        QFont font;
        font.setFamily(QStringLiteral("Zekton"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("border-image : none;"));
        pb11 = new QPushButton(versus_computer_form);
        pb11->setObjectName(QStringLiteral("pb11"));
        pb11->setGeometry(QRect(270, 280, 71, 81));
        pb11->setStyleSheet(QStringLiteral("border-image : none;"));
        pb20 = new QPushButton(versus_computer_form);
        pb20->setObjectName(QStringLiteral("pb20"));
        pb20->setGeometry(QRect(170, 380, 71, 81));
        pb20->setStyleSheet(QStringLiteral("border-image : none;"));
        label = new QLabel(versus_computer_form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 170, 301, 301));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Game-resources/Image-files/tic-tac-toe.jpg);"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../git/tic-tac-toe/Tic-tac-toe/image-files/tic-tac-toe.jpg")));
        label_6 = new QLabel(versus_computer_form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 90, 121, 41));
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
        label_4 = new QLabel(versus_computer_form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 520, 151, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("border-image : none"));
        pb12 = new QPushButton(versus_computer_form);
        pb12->setObjectName(QStringLiteral("pb12"));
        pb12->setGeometry(QRect(370, 280, 71, 81));
        pb12->setStyleSheet(QStringLiteral("border-image : none;"));
        pb01 = new QPushButton(versus_computer_form);
        pb01->setObjectName(QStringLiteral("pb01"));
        pb01->setGeometry(QRect(270, 180, 71, 81));
        pb01->setStyleSheet(QStringLiteral("border-image : none;"));
        pb10 = new QPushButton(versus_computer_form);
        pb10->setObjectName(QStringLiteral("pb10"));
        pb10->setGeometry(QRect(170, 280, 71, 81));
        pb10->setStyleSheet(QStringLiteral("border-image : none;"));
        pb22 = new QPushButton(versus_computer_form);
        pb22->setObjectName(QStringLiteral("pb22"));
        pb22->setGeometry(QRect(370, 380, 71, 81));
        pb22->setStyleSheet(QStringLiteral("border-image : none;"));
        pb21 = new QPushButton(versus_computer_form);
        pb21->setObjectName(QStringLiteral("pb21"));
        pb21->setGeometry(QRect(270, 380, 71, 81));
        pb21->setStyleSheet(QStringLiteral("border-image : none;"));
        label_5 = new QLabel(versus_computer_form);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 90, 141, 41));
        label_5->setFont(font1);
        label_5->setMouseTracking(false);
        label_5->setStyleSheet(QLatin1String("color : rgb(21, 5, 255);\n"
"background-color : none;\n"
"border-image : none"));
        label_5->setTextFormat(Qt::AutoText);
        pb02 = new QPushButton(versus_computer_form);
        pb02->setObjectName(QStringLiteral("pb02"));
        pb02->setGeometry(QRect(370, 180, 71, 81));
        pb02->setStyleSheet(QStringLiteral("border-image : none;"));
        pb00 = new QPushButton(versus_computer_form);
        pb00->setObjectName(QStringLiteral("pb00"));
        pb00->setGeometry(QRect(170, 180, 71, 81));
        pb00->setStyleSheet(QStringLiteral("border-image : none;"));
        label_3 = new QLabel(versus_computer_form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 500, 101, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("border-image : none"));
        commandLinkButton = new QCommandLinkButton(versus_computer_form);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(20, 500, 187, 41));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        commandLinkButton->setFont(font3);
        commandLinkButton->setStyleSheet(QStringLiteral("border-image : none;"));
        label_2->raise();
        label->raise();
        label_6->raise();
        label_4->raise();
        pb12->raise();
        pb01->raise();
        pb10->raise();
        pb22->raise();
        pb21->raise();
        label_5->raise();
        pb02->raise();
        pb00->raise();
        label_3->raise();
        pb11->raise();
        pb20->raise();
        commandLinkButton->raise();

        retranslateUi(versus_computer_form);

        QMetaObject::connectSlotsByName(versus_computer_form);
    } // setupUi

    void retranslateUi(QWidget *versus_computer_form)
    {
        versus_computer_form->setWindowTitle(QApplication::translate("versus_computer_form", "Form", 0));
        label_2->setText(QApplication::translate("versus_computer_form", "Tic-Tac-Toe", 0));
        pb11->setText(QString());
        pb20->setText(QString());
        label->setText(QString());
        label_6->setText(QApplication::translate("versus_computer_form", "Player", 0));
        label_4->setText(QApplication::translate("versus_computer_form", "Sourabh Shrivastava", 0));
        pb12->setText(QString());
        pb01->setText(QString());
        pb10->setText(QString());
        pb22->setText(QString());
        pb21->setText(QString());
        label_5->setText(QApplication::translate("versus_computer_form", "Computer", 0));
        pb02->setText(QString());
        pb00->setText(QString());
        label_3->setText(QApplication::translate("versus_computer_form", "Developed By:", 0));
        commandLinkButton->setText(QApplication::translate("versus_computer_form", "Quit game", 0));
    } // retranslateUi

};

namespace Ui {
    class versus_computer_form: public Ui_versus_computer_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSUS_COMPUTER_FORM_H
