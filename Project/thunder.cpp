#include "Thunder.h"
#include <QTimer>
#include "Son.h"
#include "Niece.h"
#include "Uncle.h"
#include "Aunt.h"
#include "Husband.h"
#include "Wife.h"
#include <QGraphicsScene>
#include "Game.h"


extern Game*game;

Thunder::Thunder(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/Images/thunder.png").scaled(300,300));
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Thunder::move(){
    setPos(x()+20,y()+5);

   QList<QGraphicsItem *> colliding_items = collidingItems();

       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(Son)){
               game->score->increase();
                game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }
           else if (typeid(*(colliding_items[i])) == typeid(Niece)){
               game->score->increase1();
                game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }
           else if (typeid(*(colliding_items[i])) == typeid(Uncle)){
               game->score->increase2();
               game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }
           else if (typeid(*(colliding_items[i])) == typeid(Aunt)){
               game->score->increase3();
                game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }
           else if (typeid(*(colliding_items[i])) == typeid(Husband)){
               game->score->increase4();
                game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }
           else if (typeid(*(colliding_items[i])) == typeid(Wife)){
               game->score->increase5();
                game->number2->increase();
               scene()->removeItem(colliding_items[i]);
               scene()->removeItem(this);
               delete colliding_items[i];
               delete this;
               return;


           }



       }
}

