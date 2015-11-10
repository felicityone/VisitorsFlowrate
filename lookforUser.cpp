

#include "lookforUser.h"

LookforUser::LookforUser()
{
    lookforLayout       =   new     QGridLayout();

    inputCardIDLabel    =   new     QLabel("Input CardID:");
    timecheckLabel      =   new     QLabel("Check By Time:");

    fromtimeLabel       =   new     QLabel("From:");
    totimeLabel         =   new     QLabel("To:");

    inputCardIDLineEdit =   new     QLineEdit();

    fromDateEdit        =   new QDateEdit(QDate::currentDate());
    fromDateEdit        ->  setCalendarPopup(true);
    fromTimeEdit        =   new QTimeEdit(QTime::currentTime());
    fromTimeEdit        ->  setDisplayFormat("hh:mm:ss A"  );

    toDateEdit          =   new QDateEdit(QDate::currentDate());
    toDateEdit          ->  setCalendarPopup(true);
    toTimeEdit        =   new QTimeEdit(QTime::currentTime());
    toTimeEdit        ->  setDisplayFormat("hh:mm:ss A"  );

    inputCardIDOK       =   new     QPushButton("OK");
    timeOk              =   new     QPushButton("OK");

    checkResultLabel    =   new     QLabel("Check Result:");
    lookforListView     =   new     QListView();

    lookforLayout       ->addWidget(inputCardIDLabel,0,0,1,2,0);
    lookforLayout       ->addWidget(inputCardIDLineEdit,0,2,1,6,0);
    lookforLayout       ->addWidget(inputCardIDOK,1,7,1,1,0);

    lookforLayout       ->addWidget(timecheckLabel,2,0,1,3,0);
    lookforLayout       ->addWidget(fromtimeLabel,3,0,1,1,0);
    lookforLayout       ->addWidget(totimeLabel,4,0,1,1,0);

    lookforLayout       ->addWidget(fromDateEdit,3,1,1,3,0);
    lookforLayout       ->addWidget(fromTimeEdit,3,5,1,3,0);
    lookforLayout       ->addWidget(toDateEdit  ,4,1,1,3,0);
    lookforLayout       ->addWidget(toTimeEdit  ,4,5,1,3,0);

    lookforLayout       ->addWidget(timeOk,5,7,1,1,0);

    lookforLayout       ->addWidget(checkResultLabel,6,0,1,2,0);
    lookforLayout       ->addWidget(lookforListView,7,0,5,8,0);

    setWindowTitle("LookFor User");
    setFixedSize(450,550);

    setLayout(lookforLayout);
}

LookforUser::~LookforUser()
{

}
