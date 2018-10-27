#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <vector>
#include <QString>

std::vector<QString> sets;

class dbManager
{
public:
    dbManager();
    void getSets();
    void addSet(QString *name);
    void delSet(Qstring *name);

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
