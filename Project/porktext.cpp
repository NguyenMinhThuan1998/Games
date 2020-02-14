#include "Porktext.h"
#include <QFont>

Porktext::Porktext (QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("PORK"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(10,80);
}
