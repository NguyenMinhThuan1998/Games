#ifndef SON_H
#define SON_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Son: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Son(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // SON_H
