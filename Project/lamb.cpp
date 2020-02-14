#include "Lamb.h"
#include "Doraemon.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Game.h"
extern Game*game;



Lamb::Lamb(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/lamb.png").scaled(150,150));
    setPos(-150,250);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);


}

void Lamb::move(){
    setPos(x()+2,y());

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
void Lamb::dontmove()
{
    setPos(260,30);

}

