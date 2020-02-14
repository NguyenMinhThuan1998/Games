#ifndef AVOCADO_H
#define AVOCADO_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>

class Avocado: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Avocado(QGraphicsItem * parent=0);
public slots:
    void move();

};
#endif // AVOCADO_H
