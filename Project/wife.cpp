#include "Wife.h"
#include "Thor.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Game.h"
extern Game*game;


Wife::Wife(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/wife.png").scaled(100,200));
    setPos(800,50);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Wife::move(){
    setPos(x()-1,y());

    QList<QGraphicsItem *> colliding_items = collidingItems();

       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(Thor)){

               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }


       }
}

