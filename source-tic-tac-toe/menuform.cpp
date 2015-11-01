#include "menuform.h"
#include "ui_menuform.h"
#include <QMainWindow>

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);
    ui->commandLinkButton_4->hide();
    ui->commandLinkButton_5->hide();

    //for background
   // setStyleSheet("MenuForm {background-image: url(:/Game-resources/Image-files/widget-new.png);}");

}

MenuForm::~MenuForm()
{
    delete ui;
}

void MenuForm::on_commandLinkButton_3_clicked()
{
    two_player_game.show();
    this->hide();
}

void MenuForm::on_commandLinkButton_2_clicked()
{
    qApp->quit();
}

void MenuForm::on_commandLinkButton_clicked()
{
    ui->commandLinkButton_4->show();
    ui->commandLinkButton_5->show();
}

void MenuForm::on_commandLinkButton_4_clicked()     //Computer plays first
{
    vs_comp.show();
    vs_comp.firstmove();
    this->hide();
}

void MenuForm::on_commandLinkButton_5_clicked()     //Player plays first
{
    vs_comp.show();
    this->hide();
}
