#include "Thor.h"
#include"Thunder.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>

Thor::Thor(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/Images/thor2.png").scaled(200,200));
    setPos(0,500);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
}

void Thor::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Up){
            setPixmap(QPixmap(":/Images/thor1.png").scaled(200,200));

            setPos(x(),y()-10);
            if(pos().y()<50){
                setPos(x(),50);
            }
     }

     else if (event->key() == Qt::Key_Down){
            setPixmap(QPixmap(":/Images/thor2.png").scaled(200,200));
            setPos(x(),y()+10);
            if(pos().y()>500){
                setPos(x(),500);
            }
     }

    else if (event->key() == Qt::Key_Space){
         setPixmap(QPixmap(":/Images/thor.png").scaled(200,200));
           // create a bullet
           Thunder * t = new Thunder();
           t->setPos(x()-80,y()-110);
           scene()->addItem(t);
    }
}



