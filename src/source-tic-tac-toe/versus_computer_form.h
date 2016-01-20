#ifndef VERSUS_COMPUTER_FORM_H
#define VERSUS_COMPUTER_FORM_H

#include <QWidget>
#include <QMessageBox>
#define INF (1<<9);			// for calculating sum

namespace Ui {
class versus_computer_form;
}

//Data type declarations
struct Board_config {
    int cell[9], move;		// cel[i] is 'X' for computer and 'O' for player
};

struct Decision {
    int val, rating;		// val represents min-max value and rating is the sum of leaves
};

typedef struct Board_config BOARD;
typedef struct Decision DECISION;

class versus_computer_form : public QWidget
{
    Q_OBJECT

public:
    explicit versus_computer_form(QWidget *parent = 0);
    ~versus_computer_form();

    //Data members
    BOARD main_board;
    QPixmap *pix_o, *pix_x;
    QIcon *icon_o, *icon_x;
    bool notclicked[3][3];
    QMessageBox msgbox;


    //Member functions
    int check_winner(BOARD bord);
    DECISION minmax(BOARD brd, bool maxPlayer);
    void makeNextMove();
    void firstmove();
    void declare_winner();
    void declare_draw();



private slots:
    void on_pb00_clicked();

    void on_pb01_clicked();

    void on_pb02_clicked();

    void on_pb10_clicked();

    void on_pb11_clicked();

    void on_pb12_clicked();

    void on_pb20_clicked();

    void on_pb21_clicked();

    void on_pb22_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::versus_computer_form *ui;
};

#endif // VERSUS_COMPUTER_FORM_H
