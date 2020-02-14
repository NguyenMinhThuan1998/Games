#include "Oystertext.h"
#include <QFont>

Oystertext::Oystertext (QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("OYSTER"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(560,80);
}
