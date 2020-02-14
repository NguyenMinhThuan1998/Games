#ifndef ORANGE_H
#define ORANGE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Orange: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Orange(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // ORANGE_H
