#ifndef UNCLE_H
#define UNCLE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Uncle: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Uncle(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // UNCLE_H
