#include <QApplication>
#include "mainframe.h"
/*
#include <QtSql/QSql>
*/





int main(int argc, char **argv)
{
    QApplication mm (argc, argv);
    mainframe menu;
    menu.show();

    return mm.exec();
}
