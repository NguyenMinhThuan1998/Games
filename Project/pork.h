#ifndef PORK_H
#define PORK_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Pork: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Pork(QGraphicsItem * parent=0);
public slots:
    void move();
    void dontmove();

};
#endif // PORK_H
