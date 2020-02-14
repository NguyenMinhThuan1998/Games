#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
#include "Avocado.h"
#include "Game.h"
extern Game *game;

Avocado::Avocado(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/avocado.png").scaled(150,150));
    setPos(320,5);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Avocado::move(){
    setPos(x(),y()+3);
    if(pos().y()>580) {
         setPos(x(),5);



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

