#ifndef LOOKFORUSER_H
#define LOOKFORUSER_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QListView>
#include <QDateEdit>
#include <QTimeEdit>

//#include <QtSql/QSQLiteDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/qsql.h>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

class LookforUser: public QWidget
{
    Q_OBJECT

public:
    LookforUser();
    ~LookforUser();


private:

    QGridLayout *   lookforLayout;

    QLabel      *   inputCardIDLabel;
    QLabel      *   timecheckLabel;

    QLabel      *   fromtimeLabel;
    QLabel      *   totimeLabel;

    QLabel      *   checkResultLabel;
    QLineEdit   *   inputCardIDLineEdit;

    QDateEdit   *   fromDateEdit;
    QDateEdit   *   toDateEdit;
    QTimeEdit   *   fromTimeEdit;
    QTimeEdit   *   toTimeEdit;


    QPushButton *   inputCardIDOK;
    QPushButton *   timeOk;

    QListView   *   lookforListView;

};

#endif // LOOKFORUSER_H
