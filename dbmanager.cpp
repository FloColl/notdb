#include "dbmanager.h"
#include <QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>


dbManager::dbManager()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("notinator.db");
    if(!m_db.open())
    {
        qDebug() << "ERROR, CONNECTION";
    }
    else
    {
        qDebug() << "DB CONNECTED";
    }
};

void getSets()
{
    QSqlQuery query;
    query.prepare("SELECT (name) FROM (jahrgang)");
    int idName = query.record().indexOf("name");
    while(query.next())
    {
        sets.push_back(query.value(idName).toString());
    }
};

void addSet(QString *name)
{
    QSqlQuery query;
    query.prepare("INSERT INTO jahrgang (name) VALUES (:name)");
    query.bindValue(":name", *name);
    if(query.exec())
    {
        qDebug() << "Added";
    }
    else
    {
        qDebug() << "Add failed";
    }
};

void delSet(QString *name)
{
    QSqlQuery query;
    query.prepare("DELETE FROM jahrgang WHERE (name) == (:name)");
    query.bindValue(":name", *name);
}
