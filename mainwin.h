#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace myUI{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

    public:
      explicit MainWindow(QWidget *parent = 0);
     ~MainWindow();
    private:
      myUI::MainWindow *ui;
};

#endif
