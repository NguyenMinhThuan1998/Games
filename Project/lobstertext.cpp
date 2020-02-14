#include "Lobstertext.h"
#include <QFont>

Lobstertext::Lobstertext (QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("LOBSTER"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(370,80);
}




