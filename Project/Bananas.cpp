#include "Bananas.h"
#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
#include "Game.h"
extern Game *game;


Bananas::Bananas(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/banana.png").scaled(150,150));
    setPos(20,30);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Bananas::move(){
    setPos(x(),y()+1.5);
    if(pos().y()>580) {
         setPos(x(),30);



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

