#ifndef BEEF_H
#define BEEF_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Beef: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Beef(QGraphicsItem * parent=0);
public slots:
    void move();
    void dontmove();

};
#endif // BEEF_H
