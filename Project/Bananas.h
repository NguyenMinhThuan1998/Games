#ifndef BANANAS_H
#define BANANAS_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Bananas: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bananas(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // BANANAS_H
