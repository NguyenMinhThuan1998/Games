#include "Beeftext.h"
#include <QFont>

Beeftext::Beeftext (QGraphicsItem *parent): QGraphicsTextItem(parent){

    // draw the text
    setPlainText(QString("BEEF"));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times",30));
    setPos(130,80);
}
