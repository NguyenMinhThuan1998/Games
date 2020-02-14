#include "Doraemon.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include "Pork.h"
#include "Beef.h"
#include "Lamb.h"
#include "Oyster.h"
#include "Game.h"
#include "Lobster.h"
extern Game*game;

Doraemon::Doraemon(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/Images/doraemon1.png").scaled(150,150));
    setPos(800,100);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(80);

}

void Doraemon::keyPressEvent(QKeyEvent *event)
{
     if (event->key() == Qt::Key_Space){

        setPos(x(),y()-10);
        if(pos().y()<70) {
               setPos(x(),70);

       }

     }


}
void Doraemon::move(){

        setPos(x(),y()+10);
        if(pos().y()>400) {
               setPos(x(),400);

       }
        QList<QGraphicsItem *> colliding_items = collidingItems();

           for (int i = 0, n = colliding_items.size(); i < n; ++i){
               if (typeid(*(colliding_items[i])) == typeid(Pork) ||typeid(*(colliding_items[i])) == typeid(Beef) ||typeid(*(colliding_items[i])) == typeid(Lamb) ||typeid(*(colliding_items[i])) == typeid(Oyster) ){
                   scene()->removeItem(colliding_items[i]);
                   scene()->removeItem(this);
                   delete colliding_items[i];
                   delete this;
                   return;



               }


           }


}





