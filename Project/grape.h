#ifndef GRAPE_H
#define GRAPE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Grape: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Grape(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // GRAPE_H
