#ifndef PINEAP_H
#define PINEAP_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Pineap: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Pineap(QGraphicsItem * parent=0);
public slots:
    void move();
#endif // PINEAP_H
