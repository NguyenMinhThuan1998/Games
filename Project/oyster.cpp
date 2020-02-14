#include "Oyster.h"
#include "Doraemon.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Game.h"
extern Game*game;


Oyster::Oyster(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/oyster.png").scaled(100,100));
    setPos(-150,450);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);


}

void Oyster::move(){
    setPos(x()+3.5,y());

    if(pos().x()>800) {
         game->number->increase();
        QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(dontmove()));

        timer->start(50);



    }


    QList<QGraphicsItem *> colliding_items = collidingItems();

       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(Doraemon)){

               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }


       }

}
void Oyster::dontmove()
{
    setPos(560,60);

}



