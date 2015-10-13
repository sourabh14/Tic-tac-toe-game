#include "versus_computer_form.h"
#include "ui_versus_computer_form.h"

versus_computer_form::versus_computer_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::versus_computer_form)
{
    ui->setupUi(this);

    //Initializations
    for (int i=0; i<9; ++i) {
        main_board.cell[i] = 0;
    }

    for (int i=0;i<3;i++) {
       memset(notclicked[i], 1 ,sizeof(notclicked[i]));
    }


    //images
    pix_x = new QPixmap(":/Game-resources/Image-files/x-image.jpg");
    icon_x = new QIcon(*pix_x);         //X for computer
    pix_o = new QPixmap(":/Game-resources/Image-files/o-image.jpg");
    icon_o = new QIcon(*pix_o);         //O for opponent player


    main_board.move = 0;               //maximum moves are 9
}

versus_computer_form::~versus_computer_form()
{
    delete ui;
}


//                      Function definitions
int versus_computer_form:: check_winner(BOARD bord) {
    /* return values :
     * win : 1
     * lose : -1
     * draw : 0
     * continue : 2
     */

    register int i;
    register char a, b, c;

    //horizontal
    for (i=0; i<3; ++i) {
        a = bord.cell[i*3 + 0]; 	b = bord.cell[i*3 + 1]; 	c = bord.cell[i*3 + 2];
        if ((a == b) &&  (b == c)) {
            if (a == 'X') return 1;				// computer wins
            else if (a == 'O') return -1;		// computer loses
        }
    }

    //vertical
    for (i=0; i<3; ++i) {
        a = bord.cell[i];  b = bord.cell[i+3]; c = bord.cell[i+6];
        if ((a == b)  &&  (b == c)) {
            if (a == 'X') return 1;				// computer wins
            else if (a == 'O') return -1;		// computer loses
        }
    }

    //diagonal
    a = bord.cell[0]; b = bord.cell[4]; c = bord.cell[8];
    if ((a == b)  &&  (b == c)) {
        if (a == 'X') return 1;				// computer wins
        else if (a == 'O') return -1;		// computer loses
    }

    a = bord.cell[2]; b = bord.cell[4]; c = bord.cell[6];
    if ((a == b)  &&  (b == c)) {
        if (a == 'X') return 1;				// computer wins
        else if (a == 'O') return -1;		// computer loses
    }

    if (bord.move == 9) return 0;				// Draw
    else return 2;								// Continue game
}

DECISION versus_computer_form:: minmax(BOARD brd, bool maxPlayer) {
    int bestval, status, i, rat;
    DECISION dec, t;

    status = check_winner(brd);

    if (status == 2) {						// Continue game
        brd.move++;
        rat = 0;

        if (maxPlayer) {					// if maximizing player
            bestval = -INF;
            for (i=0; i<9; ++i) {
                if (brd.cell[i] == 0) {		// For each unmarked cell
                    brd.cell[i] = 'X';
                    t = minmax(brd, false);
                    brd.cell[i] = 0;
                    rat += t.rating;
                    if (bestval < t.val) bestval = t.val;
                }
            }
        }


        else {								// if minimizing player
            bestval = INF;
            for (i=0; i<9; ++i) {
                if (brd.cell[i] == 0) {		// For each unmarked cell
                    brd.cell[i] = 'O';
                    t = minmax(brd, true);
                    brd.cell[i] = 0;
                    rat += t.rating;
                    if (bestval > t.val) bestval = t.val;
                }
            }
        }

        dec.val = bestval;
        dec.rating = rat;
    }

    else {									// if draw or win by any player
        dec.val = status;					// return heuristic value
        dec.rating = status;
    }

    return dec;
}

void versus_computer_form:: makeNextMove() {
    if (main_board.move == 9) {
        declare_draw();
    }


    DECISION d;
    int bestval, bestrat, bestmove, i;
    main_board.move++;								// Increment board move

    bestval = -INF;
    for (i=0; i<9; ++i) {
        if (main_board.cell[i] == 0) {				// For each unmarked cell
            main_board.cell[i] = 'X';

            d = minmax(main_board, false);

            main_board.cell[i] = 0;

            if ((d.val == 1) && (d.rating == 1)) {			// computer wins in next move
                bestmove = i;
                break;
            }
            else if (bestval < d.val) {
                bestval = d.val;
                bestrat = d.rating;
                bestmove = i;
            }
            else if (bestval == d.val) {
                if (bestrat < d.rating) {
                    bestrat = d.rating;
                    bestmove = i;
                }
            }
        }
    }



    int m, n;
    m = bestmove / 3;
    n = bestmove % 3;

    main_board.cell[bestmove] = 'X';
    notclicked[m][n] = false;

    switch (bestmove) {
        case 0: ui->pb00->setIcon(*icon_x); ui->pb00->setIconSize(QSize(81,81));
            break;
        case 1: ui->pb01->setIcon(*icon_x); ui->pb01->setIconSize(QSize(81,81));
            break;
        case 2: ui->pb02->setIcon(*icon_x); ui->pb02->setIconSize(QSize(81,81));
            break;
        case 3: ui->pb10->setIcon(*icon_x); ui->pb10->setIconSize(QSize(81,81));
            break;
        case 4: ui->pb11->setIcon(*icon_x); ui->pb11->setIconSize(QSize(81,81));
            break;
        case 5: ui->pb12->setIcon(*icon_x); ui->pb12->setIconSize(QSize(81,81));
            break;
        case 6: ui->pb20->setIcon(*icon_x); ui->pb20->setIconSize(QSize(81,81));
            break;
        case 7: ui->pb21->setIcon(*icon_x); ui->pb21->setIconSize(QSize(81,81));
            break;
        case 8: ui->pb22->setIcon(*icon_x); ui->pb22->setIconSize(QSize(81,81));
            break;
    }

    if ((d.val == 1) && (d.rating == 1)) {			// computer wins in next move
        declare_winner();
        qApp->quit();
    }

    if (main_board.move == 9) {
        declare_draw();
    }
}

void versus_computer_form:: firstmove() {
    //first move made by computer
    main_board.move = 1;
    main_board.cell[0] = 'X';
    notclicked[0][0] = false;
    //set icon X
    //make first move at (0, 0)
    ui->pb00->setIcon(*icon_x);
    ui->pb00->setIconSize(QSize(81,81));

}



void versus_computer_form:: declare_winner() {
    msgbox.setText("COMPUTER WINS!!\n\nBetter luck next time\n\n");
    msgbox.exec();
    qApp->quit();
}


void versus_computer_form:: declare_draw() {
    msgbox.setText("GAME DRAWN \n\n Well played");
    msgbox.exec();
    qApp->quit();
}








//      Push buttons

void versus_computer_form::on_pb00_clicked()
{
    if (notclicked[0][0]) {
        notclicked[0][0] = false;
        main_board.move++;
        //set icon of O
        ui->pb00->setIcon(*icon_o); ui->pb00->setIconSize(QSize(81,81));
        main_board.cell[0] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb01_clicked()
{
    if (notclicked[0][1]) {
        notclicked[0][1] = false;
        main_board.move++;
        //set icon of O
        ui->pb01->setIcon(*icon_o); ui->pb01->setIconSize(QSize(81,81));
        main_board.cell[1] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb02_clicked()
{
    if (notclicked[0][2]) {
        notclicked[0][2] = false;
        main_board.move++;
        //set icon of O
        ui->pb02->setIcon(*icon_o); ui->pb02->setIconSize(QSize(81,81));
        main_board.cell[2] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb10_clicked()
{
    if (notclicked[1][0]) {
        notclicked[1][0] = false;
        main_board.move++;
        //set icon of O
        ui->pb10->setIcon(*icon_o); ui->pb10->setIconSize(QSize(81,81));
        main_board.cell[3] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb11_clicked()
{
    if (notclicked[1][1]) {
        notclicked[1][1] = false;
        main_board.move++;
        //set icon of O
        ui->pb11->setIcon(*icon_o); ui->pb11->setIconSize(QSize(81,81));
        main_board.cell[4] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb12_clicked()
{
    if (notclicked[1][2]) {
        notclicked[1][2] = false;
        main_board.move++;
        //set icon of O
        ui->pb12->setIcon(*icon_o); ui->pb12->setIconSize(QSize(81,81));
        main_board.cell[5] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb20_clicked()
{
    if (notclicked[2][0]) {
        notclicked[2][0] = false;
        main_board.move++;
        //set icon of O
        ui->pb20->setIcon(*icon_o); ui->pb20->setIconSize(QSize(81,81));
        main_board.cell[6] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb21_clicked()
{
    if (notclicked[2][1]) {
        notclicked[2][1] = false;
        main_board.move++;
        //set icon of O
        ui->pb21->setIcon(*icon_o); ui->pb21->setIconSize(QSize(81,81));
        main_board.cell[7] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}

void versus_computer_form::on_pb22_clicked()
{
    if (notclicked[2][2]) {
        notclicked[2][2] = false;
        main_board.move++;
        //set icon of O
        ui->pb22->setIcon(*icon_o); ui->pb22->setIconSize(QSize(81,81));
        main_board.cell[8] = 'O';

        //Give delay
        //sleep(1);
        makeNextMove();
    }
}



//              Exit button
void versus_computer_form::on_commandLinkButton_clicked()
{
    qApp->quit();
}
