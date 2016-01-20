#include "menuform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuForm menu;
    menu.show();

    return a.exec();
}
