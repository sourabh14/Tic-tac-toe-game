#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <ui_gamewindow.h>
#include <QMessageBox>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();
    void declare_winner(bool);
    void display_draw();
    QPixmap *pix_o, *pix_x;
    QIcon *icon_o, *icon_x;
    bool h[3][2], v[3][2], d[2][2], notclicked[3][3], current_player;
    int move;
    char player[3][3];
    QMessageBox msgbox;

    /*    d0  v0  v1  v2  d1
     *       \|   |   |/
     * h0    --- --- ---
     *        | \ | / |
     * h1    --- --- ---
     *        | / | \ |
     * h2    --- --- ---
     *       /|   |   |\
     */

private slots:
    void on_pb00_pressed();

    void on_pb01_pressed();

    void on_pb02_pressed();

    void on_pb10_pressed();

    void on_pb11_pressed();

    void on_pb12_pressed();

    void on_pb20_pressed();

    void on_pb21_pressed();

    void on_pb22_pressed();


private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
