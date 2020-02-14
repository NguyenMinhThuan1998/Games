#include "Cam.h"
#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
#include "Game.h"

extern Game*game;
Cam::Cam(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/grape.png").scaled(150,150));
    setPos(710,30);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Cam::move(){
    setPos(x(),y()+2.5);
    if(pos().y()>580) {
         setPos(x(),30);



    }
    QList<QGraphicsItem *> colliding_items = collidingItems();

       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(Bowl)){

               scene()->removeItem(this);
               delete this;
               return;


           }


       }
}

