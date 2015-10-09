#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include "gamewindow.h"

namespace Ui {
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = 0);
    ~MenuForm();

private slots:
    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::MenuForm *ui;
    GameWindow two_player_game;
};

#endif // MENUFORM_H
