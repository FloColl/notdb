#include <QtWidgets>
#include <QMainWindow>


mainframe::mainframe(QWidget *parent) : QWidget(parent){
    setFixedSize(1000, 50);
};

void mainframe::clickSet(QPushButton *set)
{
    openSet(*set);
    emit mainframe::setClicked(set->ID);
};

void mainframe::getSets()
{

}













