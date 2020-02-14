#ifndef AUNT_H
#define AUNT_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Aunt: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Aunt(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // AUNT_H
