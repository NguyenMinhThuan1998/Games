#include "Jaian.h"
#include <QTimer>
#include <QGraphicsScene>



Jaian::Jaian(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/jaian.gif").scaled(150,150));
    setPos(700,10);

}

