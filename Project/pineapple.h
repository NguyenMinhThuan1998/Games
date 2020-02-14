#ifndef PINEAPPLE_H
#define PINEAPPLE_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Pineapple: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Pineapple(QGraphicsItem * parent=0);
public slots:
    void move();
};
#endif // PINEAPPLE_H
