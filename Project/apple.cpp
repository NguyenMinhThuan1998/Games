#include "Apple.h"
#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
#include "Game.h"
extern Game *game;


Apple::Apple(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/apple.png").scaled(150,150));
    setPos(170,20);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Apple::move(){
    setPos(x(),y()+2);
    if(pos().y()>580) {
         setPos(x(),20);



    }
    QList<QGraphicsItem *> colliding_items = collidingItems();

       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(Bowl)){
               game->number1->increase();
               scene()->removeItem(this);
               delete this;
               return;


           }


       }
}

