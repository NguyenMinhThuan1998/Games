#ifndef LAMB_H
#define LAMB_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Lamb: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Lamb(QGraphicsItem * parent=0);
public slots:
    void move();
    void dontmove();

};
#endif // LAMB_H
