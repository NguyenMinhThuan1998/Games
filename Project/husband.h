#ifndef HUSBAND_H
#define HUSBAND_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Husband: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Husband(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // HUSBAND_H
