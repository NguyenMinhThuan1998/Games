#ifndef THUNDER_H
#define THUNDER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Thunder: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Thunder(QGraphicsItem * parent=0);
public slots:
    void move();




};
#endif // THUNDER_H
