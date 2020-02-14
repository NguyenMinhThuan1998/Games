#ifndef WIFE_H
#define WIFE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Wife: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Wife(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // WIFE_H
