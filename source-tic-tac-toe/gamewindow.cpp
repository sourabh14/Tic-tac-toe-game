#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QMainWindow>
#include <cstring>

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);


    pix_x = new QPixmap(":/Game-resources/Image-files/x-image.jpg");
    icon_x = new QIcon(*pix_x);         //X for player A
    pix_o = new QPixmap(":/Game-resources/Image-files/o-image.jpg");
    icon_o = new QIcon(*pix_o);         //O for player B
    QPixmap pix_l(":/Game-resources/Image-files/tic-tac-toe.jpg");
    ui->label->setPixmap(pix_l);
    msgbox.setStyleSheet("border-image : none");

    for (int i=0;i<3;i++) {
       memset(h[i],0,sizeof(h[i]));
       memset(v[i],0,sizeof(v[i]));
       memset(notclicked[i],1,sizeof(notclicked[i]));
       memset(player[i],0,sizeof(player[i]));
    }
    memset(d[0],0,sizeof(d[0]));
    memset(d[1],0,sizeof(d[1]));

    move = 0;
    current_player = true;  //true for A and false for B
    ui->label_7->setText("Player A's turn");

}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::declare_winner(bool winner) {
    if (winner) {
        msgbox.setText("Congratulations!!\nPlayer A Wins\nQuit Game");
    }
    else {
       msgbox.setText("Congratulations!!\nPlayer B Wins\nQuit Game");
    }
    msgbox.exec();
    qApp->quit();

}

void GameWindow::display_draw() {
    msgbox.setText("Game Drawn\nQuit Game");
    msgbox.exec();
    qApp->quit();
}


//                --CORNER CELLS--

void GameWindow::on_pb00_pressed() {
    if (notclicked[0][0]) {
        notclicked[0][0] = false;
        if (current_player) {
            ui->pb00->setIcon(*icon_x); ui->pb00->setIconSize(QSize(81,81));
            player[0][0] = 'A';
        }
        else {
            ui->pb00->setIcon(*icon_o); ui->pb00->setIconSize(QSize(81,81));
            player[0][0] = 'B';
        }

        if (player[0][0] == player[0][1]) {
            h[0][0] = true; if (h[0][1] == true) declare_winner(current_player);
        }
        if (player[0][0] == player[1][1]) {
            d[0][0] = true; if (d[0][1] == true) declare_winner(current_player);
        }
        if (player[0][0] == player[1][0]) {
            v[0][0] = true; if (v[0][1] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");

        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb22_pressed()
{
    if (notclicked[2][2]) {
        notclicked[2][2] = false;
        if (current_player) {
            ui->pb22->setIcon(*icon_x); ui->pb22->setIconSize(QSize(81,81));
            player[2][2] = 'A';
        }
        else {
            ui->pb22->setIcon(*icon_o); ui->pb22->setIconSize(QSize(81,81));
            player[2][2] = 'B';
        }

        if (player[2][2] == player[2][1]) {
            h[2][1] = true; if (h[2][0] == true) declare_winner(current_player);
        }
        if (player[2][2] == player[1][1]) {
            d[0][1] = true; if (d[0][0] == true) declare_winner(current_player);
        }
        if (player[2][2] == player[1][2]) {
            v[2][1] = true; if (v[2][0] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb02_pressed()
{
    if (notclicked[0][2]) {
        notclicked[0][2] = false;
        if (current_player) {
            ui->pb02->setIcon(*icon_x); ui->pb02->setIconSize(QSize(81,81));
            player[0][2] = 'A';
        }
        else {
            ui->pb02->setIcon(*icon_o); ui->pb02->setIconSize(QSize(81,81));
            player[0][2] = 'B';
        }

        if (player[0][2] == player[0][1]) {
            h[0][1] = true; if (h[0][0] == true) declare_winner(current_player);
        }
        if (player[0][2] == player[1][1]) {
            d[1][0] = true; if (d[1][1] == true) declare_winner(current_player);
        }
        if (player[0][2] == player[1][2]) {
            v[2][0] = true; if (v[2][1] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb20_pressed()
{
    if (notclicked[2][0]) {
        notclicked[2][0] = false;
        if (current_player) {
            ui->pb20->setIcon(*icon_x); ui->pb20->setIconSize(QSize(81,81));
            player[2][0] = 'A';
        }
        else {
            ui->pb20->setIcon(*icon_o); ui->pb20->setIconSize(QSize(81,81));
            player[2][0] = 'B';
        }

        if (player[2][0] == player[2][1]) {
            h[2][0] = true; if (h[2][1] == true) declare_winner(current_player);
        }
        if (player[2][0] == player[1][1]) {
            d[1][1] = true; if (d[1][0] == true) declare_winner(current_player);
        }
        if (player[2][0] == player[1][0]) {
            v[0][1] = true; if (v[0][0] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}


//                  --EDGE CELLS--

void GameWindow::on_pb01_pressed()
{
    if (notclicked[0][1]) {
        notclicked[0][1] = false;
        if (current_player) {
            ui->pb01->setIcon(*icon_x); ui->pb01->setIconSize(QSize(81,81));
            player[0][1] = 'A';
        }
        else {
            ui->pb01->setIcon(*icon_o); ui->pb01->setIconSize(QSize(81,81));
            player[0][1] = 'B';
        }

        if (player[0][1] == player[0][0]) {
            h[0][0] = true; if (h[0][1] == true) declare_winner(current_player);
        }
        if (player[0][1] == player[0][2]) {
            h[0][1] = true; if (h[0][0] == true) declare_winner(current_player);
        }
        if (player[0][1] == player[1][1]) {
            v[1][0] = true; if (v[1][1] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb10_pressed()
{
    if (notclicked[1][0]) {
        notclicked[1][0] = false;
        if (current_player) {
            ui->pb10->setIcon(*icon_x); ui->pb10->setIconSize(QSize(81,81));
            player[1][0] = 'A';
        }
        else {
            ui->pb10->setIcon(*icon_o); ui->pb10->setIconSize(QSize(81,81));
            player[1][0] = 'B';
        }

        if (player[1][0] == player[0][0]) {
            v[0][0] = true; if (v[0][1] == true) declare_winner(current_player);
        }
        if (player[1][0] == player[2][0]) {
            v[0][1] = true; if (v[0][0] == true) declare_winner(current_player);
        }
        if (player[1][0] == player[1][1]) {
            h[1][0] = true; if (h[1][1] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb12_pressed()
{
    if (notclicked[1][2]) {
        notclicked[1][2] = false;
        if (current_player) {
            ui->pb12->setIcon(*icon_x); ui->pb12->setIconSize(QSize(81,81));
            player[1][2] = 'A';
        }
        else {
            ui->pb12->setIcon(*icon_o); ui->pb12->setIconSize(QSize(81,81));
            player[1][2] = 'B';
        }

        if (player[1][2] == player[0][2]) {
            v[2][0] = true; if (v[2][1] == true) declare_winner(current_player);
        }
        if (player[1][2] == player[2][2]) {
            v[2][1] = true; if (v[2][0] == true) declare_winner(current_player);
        }
        if (player[1][2] == player[1][1]) {
            h[1][1] = true; if (h[1][0] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");

        if ((move++) == 8) {  display_draw(); }
    }
}

void GameWindow::on_pb21_pressed()
{
    if (notclicked[2][1]) {
        notclicked[2][1] = false;
        if (current_player) {
            ui->pb21->setIcon(*icon_x); ui->pb21->setIconSize(QSize(81,81));
            player[2][1] = 'A';
        }
        else {
            ui->pb21->setIcon(*icon_o); ui->pb21->setIconSize(QSize(81,81));
            player[2][1] = 'B';
        }

        if (player[2][1] == player[2][0]) {
            h[2][0] = true; if (h[2][1] == true) declare_winner(current_player);
        }
        if (player[2][1] == player[2][2]) {
            h[2][1] = true; if (h[2][0] == true) declare_winner(current_player);
        }
        if (player[2][1] == player[1][1]) {
            v[1][1] = true; if (v[1][0] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}

//                  --CENTRAL CELL--

void GameWindow::on_pb11_pressed()
{
    if (notclicked[1][1]) {
        notclicked[1][1] = false;
        if (current_player) {
            ui->pb11->setIcon(*icon_x); ui->pb11->setIconSize(QSize(81,81));
            player[1][1] = 'A';
        }
        else {
            ui->pb11->setIcon(*icon_o); ui->pb11->setIconSize(QSize(81,81));
            player[1][1] = 'B';
        }

        if (player[1][1] == player[0][0]) {
            d[0][0] = true; if (d[0][1] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[0][1]) {
            v[1][0] = true; if (v[1][1] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[0][2]) {
            d[1][0] = true; if (d[1][1] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[1][0]) {
            h[1][0] = true; if (h[1][1] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[1][2]) {
            h[1][1] = true; if (h[1][0] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[2][0]) {
            d[1][1] = true; if (d[1][0] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[2][1]) {
            v[1][1] = true; if (v[1][0] == true) declare_winner(current_player);
        }
        if (player[1][1] == player[2][2]) {
             d[0][1] = true; if (d[0][0] == true) declare_winner(current_player);
        }

        current_player = !current_player;
        if(current_player)  ui->label_7->setText("Player A's turn");
        else ui->label_7->setText("Player B's turn");
        if ((move++) == 8) {  display_draw(); }
    }
}
