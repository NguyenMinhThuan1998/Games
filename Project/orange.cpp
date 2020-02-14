#include "Orange.h"
#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
#include "Game.h"
extern Game*game;
Orange::Orange(QGraphicsItem *parent)
{
    // draw graphics
    setPixmap(QPixmap(":/Images/orange.png").scaled(150,150));
    setPos(650,10);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}


void Orange::move()
{
    setPos(x(),y()+2);
    if(pos().y()>580) {
         setPos(x(),10);



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
