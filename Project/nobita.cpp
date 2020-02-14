#include "Nobita.h"
#include <QTimer>
#include <QGraphicsScene>



Nobita::Nobita(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/nobita3.png").scaled(200,200));
    setPos(10,500);

}

void Nobita::change()
{
      setPixmap(QPixmap(":/Images/nobita1.png").scaled(100,100));
}
