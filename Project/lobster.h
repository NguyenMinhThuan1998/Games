#ifndef LOBSTER_H
#define LOBSTER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Lobster: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Lobster(QGraphicsItem * parent=0);
public slots:
    void move();
    void dontmove();

};
#endif // LOBSTER_H
