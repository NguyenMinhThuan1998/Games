#include "Bowl.h"
#include <QKeyEvent>
Bowl::Bowl(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/Images/bowl.png").scaled(200,100));
    setPos(500,600);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
}

void Bowl::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
            setPos(x()-15,y());
            if(pos().x()<20){
                setPos(20,y());
            }
     }
     else if (event->key() == Qt::Key_Right){
            setPos(x()+15,y());
            if(pos().x()>840){
                setPos(840,y());
            }
     }

}

void Bowl::change()
{
    setPixmap(QPixmap(":/Images/money.png").scaled(500,500));
    setPos(500,200);
}


