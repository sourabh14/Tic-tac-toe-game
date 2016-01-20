#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QMainWindow>
#include <cstring>

//Constructor
GameWindow::GameWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::GameWindow) {
    ui->setupUi(this);

    //images
    pix_x = new QPixmap(":/Game-resources/Image-files/x-image.jpg");
    icon_x = new QIcon(*pix_x);         //X for player A
    pix_o = new QPixmap(":/Game-resources/Image-files/o-image.jpg");
    icon_o = new QIcon(*pix_o);         //O for player B
    QPixmap pix_l(":/Game-resources/Image-files/tic-tac-toe.jpg");
    ui->label->setPixmap(pix_l);
    msgbox.setStyleSheet("border-image : none");

    //variables
    int k=0;
    for (int i=0;i<3;i++) {
       memset(notclicked[i],1,sizeof(notclicked[i]));
       for (int j=0; j<3; j++) player[i][j] = k++;
    }

    move = 0;               //maximum moves are 9

    //initial player is A
    current_player = true;  //true for A and false for B
    ui->label_7->setText("Player A's turn");
}

GameWindow::~GameWindow() {
    delete ui;
}



//Display Functions----

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


//Check function

void GameWindow:: check_winner() {
    //check if a player has won the match
    int i;
    char a, b, c;

    //horizontal
    for (i=0; i<3; i++) {
        a = player[i][0];
        b = player[i][1];
        c = player[i][2];
        if ((a == b) &&  (b == c)) declare_winner(current_player);
    }

    //vertical
    for (i=0; i<3; i++) {
        a = player[0][i];
        b = player[1][i];
        c = player[2][i];
        if ((a == b)  &&  (b == c)) declare_winner(current_player);
    }

    //diagonal
    a = player[0][0];
    b = player[1][1];
    c = player[2][2];
    if ((a == b)  &&  (b == c)) declare_winner(current_player);

    a = player[0][2];
    b = player[1][1];
    c = player[2][0];
    if ((a == b)  &&  (b == c)) declare_winner(current_player);

    current_player = !current_player;
    if(current_player)  ui->label_7->setText("Player A's turn");
    else ui->label_7->setText("Player B's turn");

    if ((move++) == 8) {  display_draw(); }

}

//Push buttons

//                --CORNER CELLS--

void GameWindow::on_pb00_pressed() {
    if (notclicked[0][0]) {
        notclicked[0][0] = false;

        //set icon
        if (current_player) {
            ui->pb00->setIcon(*icon_x); ui->pb00->setIconSize(QSize(81,81));
            player[0][0] = 'A';
        }
        else {
            ui->pb00->setIcon(*icon_o); ui->pb00->setIconSize(QSize(81,81));
            player[0][0] = 'B';
        }

        check_winner();
    }
}

void GameWindow::on_pb22_pressed() {
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

        check_winner();
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

        check_winner();
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

        check_winner();
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

       check_winner();
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

        check_winner();
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

        check_winner();
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

        check_winner();
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

        check_winner();
    }
}
