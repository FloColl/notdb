#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <QWidget>
#include <vector>



class QPushButton;
class QVBoxLayout;
struct dataset;


class mainframe : public QWidget
{
        Q_OBJECT;

public:
    explicit mainframe(QWidget *parent = 0);

public slots:
    void clickSet(QPushButton *set);
    void openSet();
signals:
    void setClicked(int id);

private:
    std::vector<dataset> dsets;
    QPushButton *m_button;
    void getSets();
};


struct dataset{
    int ID;
    std::string ident;
};



#endif // MAINFRAME_H
