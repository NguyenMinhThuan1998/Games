#ifndef JAIAN_H
#define JAIAN_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Jaian: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Jaian(QGraphicsItem * parent=0);


};

#endif // JAIAN_H
