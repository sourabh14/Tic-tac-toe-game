#include "menuform.h"
#include "ui_menuform.h"

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);
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
