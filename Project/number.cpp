#include "Number.h"
#include <QFont>
#include "Game.h"
extern Game*game;
Number::Number(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    number = 0;

    // draw the text
    setPlainText( QString::number(number));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",1));
    setPos(560,60);
}

void Number::increase(){
    number++;
    setPlainText(QString::number(number));
    if (number == 5){
      game->nobita->change();
    }
}

int Number::getNumber(){
    return number;
}
