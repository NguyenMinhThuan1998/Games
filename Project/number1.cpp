#include "Number1.h"
#include <QFont>
#include "Game.h"
extern Game*game;
Number1::Number1(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    number1 = 0;

    // draw the text
    setPlainText( QString::number(number1));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",1));
    setPos(560,60);
}

void Number1::increase(){
    number1 ++;
    setPlainText(QString::number(number1));
    if (number1 == 6){
      game->bowl->change();
    }
}

int Number1::getNumber1(){
    return number1;
}
