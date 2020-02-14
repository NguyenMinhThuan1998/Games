#include "Lambtext.h"
#include <QFont>

Lambtext::Lambtext (QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("LAMB"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(250,80);
}
