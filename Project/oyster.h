#ifndef OYSTER_H
#define OYSTER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Oyster: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Oyster(QGraphicsItem * parent=0);
public slots:
    void move();
    void dontmove();
    ;

};
#endif // OYSTER_H
