#ifndef APPLE_H
#define APPLE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Apple: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Apple(QGraphicsItem * parent=0);
public slots:
    void move();

};

#endif // APPLE_H
