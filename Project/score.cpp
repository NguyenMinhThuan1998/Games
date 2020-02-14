#include "Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("Destroyed:"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(300,1);
}

void Score::increase(){

    setPlainText(QString("Destroy:Son"));
}
void Score::increase1(){

    setPlainText(QString("Destroy:Niece"));
}

void Score::increase2(){

    setPlainText(QString("Destroy:Uncle"));
}

void Score::increase3(){

    setPlainText(QString("Destroy:Aunt"));
}

void Score::increase4(){

    setPlainText(QString("Destroy:Husband"));
}
void Score::increase5(){

    setPlainText(QString("Destroy:Wife"));
}

void Score::hide()
{
    setPlainText(QString(""));
}

