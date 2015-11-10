#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Visitor Flowrate");
    //setWindowIcon(QApplication::windowIcon());
    setFixedSize(450,500);

    number       =   0;

    //new a gridLayout to contain component
    winLayout       =       new QGridLayout();

    //component
    jiedianLabel    =       new QLabel("Node");
    jiedianLabel    ->      setFont(QFont("Timers",10,QFont::Light));

    xinxiLabel      =       new QLabel("Information");
    xinxiLabel      ->      setFont(QFont("Timers",10,QFont::Light));

    nodeOneLabel    =       new QLabel("Node_1:");
    nodeOneLabel    ->      setFont(QFont("Timers",10,QFont::Light));

    nodeTwoLabel    =       new QLabel("Node_2:");
    nodeTwoLabel    ->      setFont(QFont("Timers",10,QFont::Light));

    nodeThreeLabel  =       new QLabel("Node_3:");
    nodeThreeLabel    ->      setFont(QFont("Timers",10,QFont::Light));

    nodeFourLabel   =       new QLabel("Node_4:");
    nodeFourLabel    ->      setFont(QFont("Timers",10,QFont::Light));

   /* infmOneTextEdit =       new QTextEdit();
    infmOneTextEdit ->      setReadOnly(true);

    infmTwoTextEdit =       new QTextEdit();
    infmTwoTextEdit ->      setReadOnly(true);

    infmThreeTextEdit =     new QTextEdit();
    infmThreeTextEdit ->      setReadOnly(true);

    infmFourTextEdit =      new QTextEdit();
    infmFourTextEdit ->      setReadOnly(true);
    */
    infmOneComboBox   =     new QComboBox();
    infmOneComboBox     ->  setMaxCount(10);
    infmTwoComboBox   =     new QComboBox();
    infmTwoComboBox     ->  setMaxCount(10);
    infmThreeComboBox   =     new QComboBox();
    infmThreeComboBox     ->  setMaxCount(10);
    infmFourComboBox   =     new QComboBox();
    infmFourComboBox     ->  setMaxCount(10);

    peopleInLabel   =       new QLabel("People Entered:");
    peopleOutLabel  =       new QLabel("People Left:");

    peopleInTextEdit    =   new QTextEdit();
    peopleInTextEdit    ->  setReadOnly(true);

    peopleOutTextEdit   =   new QTextEdit();
    peopleOutTextEdit   ->  setReadOnly(true);

    /*peopleInListView    =   new QListView();
    peopleOutListView    =   new QListView();
    */

    //add component to layout
    winLayout       ->      addWidget(jiedianLabel,0,0,1,2,0);
    winLayout       ->      addWidget(xinxiLabel,0,3,1,2,0);

    winLayout       ->      addWidget(nodeOneLabel,1,0,1,1,0);
    winLayout       ->      addWidget(nodeTwoLabel,2,0,1,1,0);
    winLayout       ->      addWidget(nodeThreeLabel,3,0,1,1,0);
    winLayout       ->      addWidget(nodeFourLabel,4,0,1,1,0);

   /* winLayout       ->      addWidget(infmOneTextEdit,1,2,1,4,0);
    winLayout       ->      addWidget(infmTwoTextEdit,2,2,1,4,0);
    winLayout       ->      addWidget(infmThreeTextEdit,3,2,1,4,0);
    winLayout       ->      addWidget(infmFourTextEdit,4,2,1,4,0);
    */
    winLayout       ->      addWidget(infmOneComboBox,1,2,1,2,0);
    winLayout       ->      addWidget(infmTwoComboBox,2,2,1,2,0);
    winLayout       ->      addWidget(infmThreeComboBox,3,2,1,2,0);
    winLayout       ->      addWidget(infmFourComboBox,4,2,1,2,0);



    winLayout       ->      addWidget(peopleInLabel,6,0,1,1,0);
    winLayout       ->      addWidget(peopleOutLabel,6,3,1,1,0);
    /*winLayout       ->      addWidget(peopleInTextEdit,7,0,4,3,0);
    winLayout       ->      addWidget(peopleOutTextEdit,7,3,4,3,0);*/
    winLayout       ->      addWidget(peopleInTextEdit,7,0,4,3,0);
    winLayout       ->      addWidget(peopleOutTextEdit,7,3,4,3,0);



    setLayout(winLayout);
}


void Widget::peopleEnter(QString peopleName)
{
    QString     numberStr       ;
    numberStr.setNum(number);
    QString     whoSwipeCard    = peopleName +" 20:32:27 ";//  +"S00" + numberStr;
    number  ++;
    infmOneComboBox     ->  addItem(whoSwipeCard,Qt::DisplayRole);

    QString     whoEntered  =   peopleName + " 20:39:40";//getCurrentTime()
    peopleInTextEdit    ->  append(whoEntered);

}

void Widget::peopleLeave(QString peopleName)
{
    QString     numberStr    ;
    numberStr.setNum(number);
    QString     whoLeft =   peopleName + " 21:30:35";//  + "S00" + numberStr;//getCurrentTime()
    infmOneComboBox     ->  addItem(whoLeft,Qt::DisplayRole);
    peopleOutTextEdit    ->  append(whoLeft);

}
QString Widget::getCurrentTime(void)
{
    QDateTime   currentTime  =   QDateTime::currentDateTime ();
    QString timeStr =   currentTime.toString("hh:mm:ss");
    return(timeStr);
}


Widget::~Widget()
{

}
