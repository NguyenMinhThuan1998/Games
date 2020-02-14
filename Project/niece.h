#ifndef NIECE_H
#define NIECE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Niece: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Niece(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // NIECE_H
