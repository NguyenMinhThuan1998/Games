#include "Pineap.h"
#include <QTimer>
#include "Bowl.h"
#include <QGraphicsScene>
Pineap::Pineap(QGraphicsItem *parent)
{
    // draw graphics
    setPixmap(QPixmap(":/Images/pineapple.png").scaled(150,150));
    setPos(810,5);
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Pineap::move()
{
    setPos(x(),y()+3);
    if(pos().y()>580) {
         setPos(x(),5);



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
