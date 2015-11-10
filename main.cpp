#include "widget.h"
#include <QApplication>
#include "registerUser.h"
#include "lookforUser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.peopleEnter("zhangSan(S0001)");
    w.peopleEnter("LiSi(S0002)");


    /*for(int i = 0;i < 100000000;i++)
    {
        ;
    }
    w.peopleLeave("zhangSan(S0001)");
    w.show();
    */
    RegisterUser r;
    r.show();

    /*LookforUser l;
    l.show();*/

    return a.exec();
}
