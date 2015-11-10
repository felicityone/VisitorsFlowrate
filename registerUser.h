#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QWidget>
#include <QFrame>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class RegisterUser  : public QWidget

{
   Q_OBJECT

public:
    RegisterUser();
    ~RegisterUser();

private:

    QFrame      *       registerUserFrame;

    QGridLayout *       registerUserGridLayout;

    QLabel      *       cardIDLabel;
    QLabel      *       userNameLabel;
    QLabel      *       userAgeLabel;
    QLabel      *       positionLabel;

    QLineEdit   *       cardIDLineEdit;
    QLineEdit   *       userNameLineEdit;
    QLineEdit   *       userAgeLineEdit;
    QLineEdit   *       positionLineEdit;

    QPushButton *       surePushButton;

    /*dataBase add registerUser*/


};


#endif // REGISTERUSER_H
