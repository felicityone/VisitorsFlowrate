
/*This is a userregister gui */

#include "registerUser.h"

RegisterUser::RegisterUser()
{

    registerUserFrame   =   new    QFrame();

    registerUserGridLayout  =   new    QGridLayout();

    cardIDLabel         =   new    QLabel("cardID:");
    userNameLabel       =   new    QLabel("userName:");
    userAgeLabel        =   new    QLabel("userAge:");
    positionLabel       =   new    QLabel("position:");

    cardIDLineEdit      =   new    QLineEdit();
    userNameLineEdit    =   new    QLineEdit();
    userAgeLineEdit     =   new    QLineEdit();
    positionLineEdit    =   new    QLineEdit();

    surePushButton      =   new    QPushButton("OK");

    registerUserGridLayout      ->addWidget(cardIDLabel,1,0,1,1,0);
    registerUserGridLayout      ->addWidget(userNameLabel,2,0,1,1,0);
    registerUserGridLayout      ->addWidget(userAgeLabel,3,0,1,1,0);
    registerUserGridLayout      ->addWidget(positionLabel,4,0,1,1,0);

    registerUserGridLayout      ->addWidget(cardIDLineEdit,1,2,1,3,0);
    registerUserGridLayout      ->addWidget(userNameLineEdit,2,2,1,3,0);
    registerUserGridLayout      ->addWidget(userAgeLineEdit,3,2,1,3,0);
    registerUserGridLayout      ->addWidget(positionLineEdit,4,2,1,3,0);

    registerUserGridLayout      ->addWidget(surePushButton,5,4,1,1,0);

    //registerUserFrame
    setLayout(registerUserGridLayout);

    setWindowTitle("User Register");
    setFixedSize(450,500);
}

RegisterUser::~RegisterUser()
{

}
