#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QLine>
#include <QComboBox>
#include <QListView>
#include <QDateTime>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);

    void peopleEnter(QString peopleName);
    void peopleLeave(QString peopleName);
    QString getCurrentTime(void);
    ~Widget();

private:
    QGridLayout *       winLayout;

    QLabel      *       jiedianLabel;
    QLabel      *       xinxiLabel;

    QLabel      *       nodeOneLabel;
    QLabel      *       nodeTwoLabel;
    QLabel      *       nodeThreeLabel;
    QLabel      *       nodeFourLabel;

   /* QTextEdit   *       infmOneTextEdit;
    QTextEdit   *       infmTwoTextEdit;
    QTextEdit   *       infmThreeTextEdit;
    QTextEdit   *       infmFourTextEdit;*/

    QComboBox   *       infmOneComboBox;
    QComboBox   *       infmTwoComboBox;
    QComboBox   *       infmThreeComboBox;
    QComboBox   *       infmFourComboBox;


   // QHorizontalLine     *   horizontalLine;

    QLabel      *       peopleInLabel;
    QLabel      *       peopleOutLabel;

    QTextEdit   *       peopleInTextEdit;
    QTextEdit   *       peopleOutTextEdit;
    /*QListView   *       peopleInListView;
    QListView   *       peopleOutListView;*/

    int               number;
//    QDateTime   currentTime;

};

#endif // WIDGET_H
