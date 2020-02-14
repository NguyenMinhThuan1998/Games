#include "Number2.h"
#include <QFont>
#include "Game.h"
extern Game*game;
Number2::Number2(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    number2 = 0;

    // draw the text
    setPlainText( QString::number(number2));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",1));
    setPos(560,60);
}

void Number2::increase(){
    number2++;
    setPlainText(QString::number(number2));
    if (number2 == 6){
      game->changefa1();
      game->score->hide();
    }
}

int Number2::getNumber2(){
    return number2;
}
